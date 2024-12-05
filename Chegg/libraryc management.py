from tabulate import tabulate

#to check what type of activity it is

def getType(log):
    if len(log)==4:
        if log[3]=="RET":
            return 2
        elif log[0]=="PAY":
            return 4
        else:
            return 1
    else:
        if log[2]=="True" or log[2]=="False":
            return 3

#to check whether book is exist in books or student is exist in student list
def doesexist(list, item):
    for i in list:
        if item in i:
            return i
    return False


#read book data
file=open('booklist.txt')
data=file.read()
data=data.split('\n')
books=[]
for i in data:
    i=i.replace(', ','-')
    i=i.replace('#',',')
    #i=eval(i)
    i=i.split(',')
    i[1]=eval(i[1])
    i.append(0)
    i.append(0)
    books.append(i)
file.close()

#read librarylog data
file=open('librarylog.txt')
data=file.read()
data=data.split('\n')
logs=[]
for i in data:
    i=i.replace(', ','-')
    i=i.replace('#',',')
    i=i.split(',')
    if not i[0]=="PAY":
        i[0]=eval(i[0])
    logs.append(i)
file.close()

#list of student
students=[]
preday=0 #for usage calculation
for log in logs:
    if len(log)==1:
        break;
    if log[0]!="PAY" and int(log[0])>preday:
        for i in range(0,len(books)):
            books[i][3]=books[i][3]+books[i][1]*(int(log[0])-preday)        #usage of books in days
        preday=int(log[0])
    typeoflog=getType(log)
    name=log[2]
    book=log[1]
    bookdetails=doesexist(books,book)
    student=flag=doesexist(students, name)
    if typeoflog==1:
        if flag ==  False:
            student=[name,0,log[0]]
            students.append(student)
        else:
            student=flag
        if student[1]>50:
            print("Cannot Borrow Book Due to Fine")
        elif bookdetails==False:
            print("Books Not Available")
        elif bookdetails[1]==0:
            print("Copy of Book Not available")
        else:
            index=books.index(bookdetails)
            books[index][1]=books[index][1]-1
            index=students.index(student)
            students[index][2]=log[0]
    elif typeoflog==2:
        index=books.index(bookdetails)
        books[index][1]=books[index][1]+1 
        #update books udage days
        books[index][4]=books[index][4]+(-student[2]+log[0])
        if bookdetails[2]=="True":              
            if (-student[2]+log[0]) > 7:
                index=students.index(student)
                #update student fine
                students[index][1]=students[index][1]+(-student[2]+log[0]-6)*15
                students[index][2]=0
        else:
            if (-student[2]+log[0]) > 28:
                index=students.index(student)
                #update student fine
                students[index][1]=students[index][1]+(-student[2]+log[0]-27)*5
                students[index][2]=0
    elif typeoflog==3:
        bookdetails=doesexist(books,log[1])
        if not bookdetails==False:
            index=books.index(bookdetails)
            books[index][1]=books[index][1]+1
        else:
            books.append([log[1],1,log[2],log[0],0])
    else:
        index=students.index(student)
        students[index][1]=students[index][1]-int(log[3])
        
    #print(books)
        
        
#books[i][3]=books[i][3]+books[i][1]*(int(log[0])-preday)
print(tabulate(books,headers=['Name of Book','Number of copies','Importance','Days available','Days Used']))
print(tabulate(students,headers=['Name', 'Fine', 'Last issue Date']))
for book in books:
    if not book[4] == 0:
        print(book[0]+"-------------------"+"{:.2f}".format(book[4]*100/(book[3]+book[4]))+"%")
    else:
        print(book[0]+"-------------------0%")