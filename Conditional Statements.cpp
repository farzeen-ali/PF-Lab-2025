#include<stdio.h>

int main(){
	
	// Conditional Statements
	// if, if else, nested if, if else if ladder
	
//	int marks;
//	printf("Enter Your Marks: \n");
//	scanf("%d", &marks);
//	
//	if(marks >= 50)
//		printf("You are Pass");
//	else
//		printf("You are Fail");
	
	// Nested If
//	int age;
//	printf("Enter Your Age: \n");
//	scanf("%d", &age);
//	
//	if(age >= 18){
//		printf("You can Vote \n");
//		if(age >= 60){
//			printf("You are senior citizen");
//		}else {
//			printf("You are junior citizen");
//		}
//	}
//	else{
//		printf("You can not Vote");
//	}
	
	// If Else if Ladder
//	int marks;
//	printf("Enter Your Marks \n");
//	scanf("%d", &marks);
//	
//	if(marks >= 90){
//		printf("You Got A+");
//	}
//	else if(marks >= 80){
//		printf("You Got A");
//	}
//	else if(marks >= 70){
//		printf("You Got B");
//	}
//	else if(marks >= 60){
//		printf("You Got C");
//	}
//	else if(marks >= 50){
//		printf("You Got D");
//	}
//	else if(marks >= 0 && marks < 50){
//		printf("You Got F");
//	}
//	else {
//		printf("Invalid Marks");
//	}
	
//	
//    char vowel;
//    printf("enter a charcter:\n");
//    scanf("%c", &vowel);
//    
//    if ( vowel== 'a' || vowel== 'e' || vowel=='i' || vowel=='o' || vowel=='u')
//    { 
//    printf("it is a vowel");
//	}
//	else {
//		printf("it is not a vowel");
//	}
	
	// Switch Case
	int day;
	printf("Enter A Day: \n");
	scanf("%d", &day);
	
	switch(day){
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Invalid Day");

	}
	
	return 0;
}
