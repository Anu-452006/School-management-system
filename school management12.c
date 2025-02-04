#include<stdio.h>
struct student{
	char name[100];
	int rollno;
	char sec;
	char branch[10];
	int marks;
};
void main(){
	int i,j,n,count=0;
	printf("Enter number of students :");
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++){
		printf("Insert %d student details\n",i+1);
		printf("Enter name of the student : ");
		scanf("%s",s[i].name);
		printf("Enter rollno of the student : ");
		scanf("%d",&s[i].rollno);
		printf("Enter sec of the student : ");
		scanf(" %c",&s[i].sec);
		printf("Enter branch of the student : ");
		scanf("%s",s[i].branch);
		printf("Enter total marks of the student : ");
		scanf("%d",&s[i].marks);
		count++;
	}
	for(i=0;i<n;i++){
		printf("%d student details are",i+1);
		printf("Name = %s\n",s[i].name);
		printf("Roll no = %d\n",s[i].rollno);
		printf("section = %c\n",s[i].sec);
		printf("branch = %s\n",s[i].branch);
		printf("Marks = %d\n",s[i].marks);
	}
	int roll_no;
	printf("Find student data\n");
	printf("Enter the roll number\n");
	scanf("%d",&roll_no);
	for(i=0;i<n;i++){
		if(roll_no == s[i].rollno){
			printf("Name = %s\n",s[i].name);
			printf("Roll number = %d\n",s[i].rollno);
			printf("Section = %c\n",s[i].sec);
			printf("Branch = %s\n",s[i].branch);
			printf("Marks = %d\n",s[i].marks);
		}
	}
	printf("Number of students = %d\n",count);
	int roll_number;
	printf("The student  to be deleted\n");
	scanf("%d",&roll_number);
	for(i=0;i<count;i++){
		if(roll_number == s[i].rollno){
			for(j=i;j<count-1;j++){
				s[j] = s[j+1];
			}
			count--;
			printf("The %d student has been deleted\n",roll_number);
		}
	}
	printf("To update the student details\n");
	int update;
	int roll_num;
	printf("Enter the roll number\n");
	scanf("%d",&roll_num);
	for(i=0;i<count;i++){
		if(s[i].rollno == roll_num){
			printf("%d student data\n",i+1);
			printf("name = %s\n",s[i].name);
			printf("Roll number = %d\n",s[i].rollno);
			printf("Section = %c\n",s[i].sec);
			printf("Branch = %s",s[i].branch);
			printf("Marks = %d\n",s[i].marks);
			printf("Which are the details tobe updated\n");
			scanf("%d",&update);
			switch(update){
				case 1 : {
					printf("Enter name : ");
					scanf("%s",s[i].name);
					printf("updated name is : %s\n",s[i].name);
					break;
				}
				case 2 : {
					printf("Enter Roll number : ");
					scanf("%d",&s[i].rollno);
					printf("updated roll number is : %d\n",s[i].rollno);
					break;
				}
				case 3 : {
					printf("Enter section : ");
					scanf("%c",&s[i].sec);
					printf("updated section is : %c\n",s[i].sec);
					break;
				}
				case 4 : {
					printf("Enter branch : ");
					scanf("%s",s[i].branch);
					printf("updated branch is : %s\n",s[i].branch);
					break;
				}
				case 5 : {
					printf("Enter marks : ");
					scanf("%d",&s[i].marks);
					printf("updated marks is : %d\n",s[i].marks);
					break;
				}
			}
			printf("name = %s\n",s[i].name);
			printf("Roll number = %d\n",s[i].rollno);
			printf("Section = %c\n",s[i].sec);
			printf("Branch = %s",s[i].branch);
			printf("Marks = %d\n",s[i].marks);
		}
	}
}
