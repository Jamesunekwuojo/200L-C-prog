
// A C program to check the grade of a student 
// NAME: ABA JAMES UNEKWUOJO 
// CODE: CMP 211
// MATRIC. NO:AUL/CMP/22/090

#include <stdio.h>
int main(){
	printf("<--Program to allocate grade to a student --> \n");
	
	int score1, score2, score3, totalScore, averageScore;
	printf("Enter score for MTH 211: ");
	scanf("%d", &score1);
	
	printf("Enter score for CMP 211: ");
	scanf("%d", &score2);
	
	printf("Enter score for CMP 216: ");
	scanf("%d", &score3);
	
	totalScore = score1 + score2 + score3;
	
	averageScore = totalScore/ 3;
	printf("Average score is %d \n", averageScore );
	
	if (averageScore>=70 && averageScore<=100){
		printf("Grade is A");
	} else if (averageScore>=60 && averageScore<=69){
		printf("Grade is B");
		
	} else if (averageScore>=50 && averageScore<=59){
		printf("Grade is C");
		
	} else if (averageScore>=45 && averageScore<=49){
		printf("Grade is D");
		
	} else if (averageScore>=40 && averageScore<=45){
		printf("Grade is E");
		
	} else {
		printf("Grade is F");
		
	} 
	
	return 0;
	
}