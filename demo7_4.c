#include<stdio.h>
struct student
{
	int roll_no;
	char name[20];
	int m[6];
	float avg;
};
float compute_avg(int[]);
int main()
{
	struct student s;
	int i;
	printf("\nEnter the student details:");
	printf("Roll num:");
	scanf("%d",&s.roll_no);
	printf("\nName:");
	scanf("%s",s.name);
	printf("\nMarks:");
	for(i=0;i<6;i++)
	{
		scanf("%d",&s.m[i]);
	}
s.avg=compute_avg(s.m);
printf("\nThe details of the student are:");
	printf("\nRoll num : %d",s.roll_no);
	printf("\nName : %s",s.name);
	for(i=0;i<6;i++)
	{
		printf("\nM[%d] is %d",i+1,s.m[i]);
	}
printf("\nAverage is %f",s.avg);
return 0;
}

float compute_avg(int m[])
{
	int i,sum=0;
	float avg;
	for(i=0;i<6;i++)
	{
		sum = sum + m[i];
	}
	avg=sum/6;
	
return avg;
}
