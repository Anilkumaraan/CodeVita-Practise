#include<stdio.h>
#include<stdlib.h>
int* count_frequency(unsigned long long l)
{
	int i;
	int *a=(int*)malloc(44);
	for(i=0;i<11;i++)
		a[i]=0;
	while(l>0)		
	{
		a[l%10]++;	
		l/=10;
		a[10]++;	
	}	
	return a;
}
void print(int* arr,unsigned long long l)
{
	int i,count=0;
	for(i=0;i<10;i++)
	if(arr[i]!=0)
	{
	printf("\nNo. Of %d's in %llu is %d",i,l,arr[i]);
	count++;
	}
printf("\nCount of No. of Digits in %llu is %d",l,arr[i]);
printf("\nNo. of Digits Used in %llu is %d\n",l,count);
}
char* check_equals(unsigned long long l1,unsigned long long l2)
{
	int *a=count_frequency(l1);
	int *b=count_frequency(l2);
	printf("\n\nNumber Summary of %llu\n",l1);
	print(a,l1);
	printf("\n\nNumber Summary of %llu\n",l2);
	print(b,l2);
	int i;
	for(i=0;i<10;i++)
		if(a[i]!=b[i])	
			return "Not Equals";
	return "Equals";
}
int main()
{
	unsigned long long l1,l2;
	printf("Enter the First Long Integer: ");
	scanf("%llu",&l1);
	printf("Enter the Second Long Integer: ");
	scanf("%llu",&l2);
	printf("\n%s\n",check_equals(l1,l2));
	getch();
	return 0;
}