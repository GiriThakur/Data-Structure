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
	struct student s[5];
	int i,j;
	for(j=0;j<5;j++)
	{
	printf("\nEnter the student %d details:",j+1);
	printf("Roll num:");
	scanf("%d",&s[j].roll_no);
	printf("\nName:");
	scanf("%s",s[j].name);
	printf("\nMarks:");
	for(i=0;i<6;i++)
	{
		scanf("%d",&s[j].m[i]);
	}
s[j].avg=compute_avg(s[j].m);
}
for(j=0;j<5;j++)
{
	printf("\nThe size of each structure is %ld",sizeof(s[j]));
printf("\nThe details of the student %d are:",j+1);
	printf("\nRoll num : %d",s[j].roll_no);
	printf("\nName : %s",s[j].name);
	for(i=0;i<6;i++)
	{
		printf("\nM[%d] is %d",i+1,s[j].m[i]);
	}
printf("\nAverage is %f",s[j].avg);
}
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
