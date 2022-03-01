#include<stdio.h>

void DisplaySchedule(char chDiv)
{
		if(chDiv == 'a' || chDiv == 'A')
		{
			printf("Exam of division A is at : 07:00 AM\n");
		}
		else if(chDiv == 'b' || chDiv == 'B')
		{
			printf("Exam of division B is at : 08:30 AM\n");
		}
		else if(chDiv == 'c' || chDiv == 'C')
		{
			printf("Exam of division C is at : 09:20 AM\n");
		}	
		else if(chDiv == 'd' || chDiv == 'D')
		{
			printf("Exam of division D is at : 10:30 AM\n");
		}		
		else
		{
			printf("Please enter valid division i.e from A to D\n");
		}
}
int main()
{
	char cValue = '\0';
	printf("Enter the character\n");
	scanf("%c",&cValue);
	DisplaySchedule(cValue);
	return 0;
}