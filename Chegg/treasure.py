import numpy as np


#matrix for comparing treasure with block in map 
def compare(mat1,mat2,a,b,m):
	for i in range(m):
		for j in range(m):
			if not mat1[i][j]==mat2[i+a][j+b]:
				return False
	return True
    
#provie input file name here
#Format
'''
m=size of treasure
n=size of map
m lines, each of size m, indicating shape of treasure
n lines, each of size n, indicating shape of map
'''    
fp=open("input.txt","r")
m=int(fp.readline())
n=int(fp.readline())
tr=[]
for i in range(m):
	temp=fp.readline()
	temp=temp.split()
	tr.append(temp)
tr=np.ravel(tr)
tr=np.reshape(tr,(m,m))
tr=tr.astype(int)
mp=[]
for i in range(n):
        temp=fp.readline()
        temp=temp.split()
        mp.append(temp)
mp=np.ravel(mp)
mp=np.reshape(mp,(n,n))
mp=mp.astype(int)

tr90=np.zeros((m,m))
tr180=np.zeros((m,m))
tr270=np.zeros((m,m))
tr90=tr90.astype(int)
tr180=tr180.astype(int)
tr270=tr270.astype(int)

#rotate tra through 90 degrees
for i in range(m):
	for j in range(m):
		tr90[i][j]=tr[m-j-1][i]
        
#rotate tra through 180 degrees
for i in range(m):
        for j in range(m):
                tr180[i][j]=tr90[m-j-1][i]
                
#rotate tra through 270 degrees
for i in range(m):
        for j in range(m):
                tr270[i][j]=tr180[m-j-1][i]


#compate each treasure with each possible block in map
for i in range(n-m+1):
	for j in range(n-m+1):
		if compare(tr,mp,i,j,m) or compare(tr90,mp,i,j,m) or compare(tr180,mp,i,j,m) or compare(tr270,mp,i,j,m):
			print(j,i)
			exit()
