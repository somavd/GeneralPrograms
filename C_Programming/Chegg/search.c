#include<stdio.h>
#include<time.h>
#define size 100000

void countSort(int arr[])
{
	long long freq[150]={0},i;
	int new[size];
	for(i=0;i<size;i++)
	{
		freq[arr[i]]++;
	}
	for(i=1;i<150;i++)
		freq[i]+=freq[i-1];
	for(i=0;i<size;i++)
		new[--freq[arr[i]]]=arr[i];
	for(i=0;i<size;i++)
	{
//		printf("%d   ",new[i]);
		arr[i]=new[i];
	}
}

int binSearch(int a[],int low, int high)
{
	int mid;
	while(low<=high)
	{
		mid=(low+high)/2;
		if(a[mid]==58)
			return mid;
		else if(58<a[mid])
			high=mid-1;
		else
			low=mid+1;
	}
	return -1;
}

int main()
{
	int i;
	int arr[size];
	clock_t start,end;
	srand(time(NULL));
	start=clock();
	for(i=0;i<size;i++)
		arr[i]=random()%149+1;
	end=clock();
	printf("Time to generate 100000 numbers : %f\n\n",((double) (end - start)) / CLOCKS_PER_SEC);
	start=clock();
	for(i=0;i<size;i++)
	{
		if(arr[i]==58)
		{
			printf("Before Sorting First Position : %d\n",i+1);
			break;
		}
	}
	end=clock();
	printf("and time is %f\n\n",((double) (end - start)) / CLOCKS_PER_SEC);
	int count=0;
	start=clock();
	for(i=0;i<size;i++)
	{
		if(arr[i]==58)
		{
			count++;
		}
	}
	end=clock();
	printf("Before Sorting Number of 58 in Array : %d\n and time is %f\n\n",count,((double) (end - start)) / CLOCKS_PER_SEC);

	start=clock();
	countSort(arr);
	end=clock();

	start=clock();
	int index=binSearch(arr,0,size);
	while(arr[--index]==58);
	end=clock();
	printf("After Sorting First Position : %d\n and time is %f\n\n",index+2,((double) (end - start)) / CLOCKS_PER_SEC);
	int low,high;
	start=clock();
	low=high=binSearch(arr,0,size);
	while(arr[--low]==58);
	while(arr[++high]==58);
	end=clock();
	printf("After Sorting Number of 58 in Array : %d\nand time is %f\n\n",high-low-1,((double) (end - start)) / CLOCKS_PER_SEC);
	return 0;
}
