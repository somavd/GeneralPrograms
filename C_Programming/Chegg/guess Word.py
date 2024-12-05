import random
list=["banglore","chennai","mumbai","india","america","australia","russia","google","vvpiet","sparx","rahul","facebook","yahoo","intel","oracle","arduino","python","java","compiler","mama","quality","word","Dictionary","Psychology","atmosphere","Roman","Ambrose","Shield","ShaneOmac","dance","processor","chip","modi","austranaut","Mahendra","AmeerKhan","intersteller","bahubali","network","database","engineering","solapur","journal","love","journey","yashwant","story","pneumonia","beautiful","happy"]
list=[x.lower() for x in list]
str=list[random.randint(0,len(list)-1)]
st=str
ov=['a','e','i','o','u']
life=0
for x in str:
    if x not in ov:
        st=st.replace(x,'_')
        life+=1
for i in range(0,len(str)-1):
    c=str[i]
    if (c in str[i+1:len(str)-1]) and  (c not in ov):
        life-=1;
print "LIFE=",life
print st
while(1):
    st=str
    c=raw_input("Enter Character : ")[0]
    for x in str:
       if x==c:
           ov.append(c)
    for x in str:
        if x  not in ov:
            st=st.replace(x,'_')
    if c not in str:
        life-=1
    if str==st and life!=0:
        print "WON and Word was ",str
        break
    elif life<=0:
        print "looser and Word was ",str
        break   
    print "LIFE=",life
    print st
