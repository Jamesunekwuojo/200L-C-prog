// Assume in cmp 211 class with the pop. of 20, write program to 
// input the num of students in the class
// and also input exam scores for all the student, find the total
// and then average

#include <stdio.h>
int main (){
//	int numofstu, stu_score, i, totalScore, Averagescore;
//	i=1;
//	numofstu = 10;
//	
//	while(i<=numofstu){
//		printf("Enter score for student %d:", i);
//		scanf("%d",&stu_score);
//		totalScore = totalScore + stu_score;
//		++i;
//	
//		
//		
//	}
//	totalScore = totalScore + stu_score;
//	Averagescore = (totalScore/numofstu);
//	printf("Average score is %d", Averagescore );
//	printf("Total score is %d",totalScore);
	
	
	int numofstu, stu_score, i, totalScore, Averagescore;
	i=1;
	// Adding a sentimetal value
	while(stu_score!=-1){
		printf("Enter score for student %d:", i);
		scanf("%d",&stu_score);
		totalScore = totalScore + stu_score;
		i++;

	
		
		
	}
	printf("Total num of studens entered is %d:\n",i);
	printf("Totalscore is %d\n", totalScore );
	Averagescore = (totalScore/i);
	printf("average score is %d", Averagescore );
	
	
}