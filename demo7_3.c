#include<stdio.h>
struct student
{
	int roll_no;
	char name[20];
	int m[6];
	struct date
	{	
		int day;
		int month;
		int year;
	}d;
	float avg;
};
float compute_avg(struct student);
int main()
{
	struct student s;
	int i;
	printf("\nEnter the student details:");
	printf("Roll num:");
	scanf("%d",&s.roll_no);
	printf("\nName:");
	scanf("%s",s.name);
	printf("\Enter the date of birth:");
	scanf("%d%d%d",&s.d.day,&s.d.month,&s.d.year);
	printf("\nMarks:");
	for(i=0;i<6;i++)
	{
		scanf("%d",&s.m[i]);
	}
s.avg=compute_avg(s);
printf("\nAverage is %f",s.avg);
return 0;
}

float compute_avg(struct student s)
{
	int i,sum=0;
	float avg;
	for(i=0;i<6;i++)
	{
		sum = sum + s.m[i];
	}
	avg=sum/6;
	printf("\nThe details of the student are:");
	printf("\nRoll num : %d",s.roll_no);
	printf("\nName : %s",s.name);
	printf("\nDOB is %d:%d:%d",s.d.day,s.d.month,s.d.year);
	for(i=0;i<6;i++)
	{
		printf("\nM[%d] is %d",i+1,s.m[i]);
	}
return avg;
}
