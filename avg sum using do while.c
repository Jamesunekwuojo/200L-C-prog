#include <stdio.h>
int main(){
	
	int numofstu, stu_score, i, totalScore, Averagescore;
	i=1;
	
	do{
		printf("Enter score for student %d:", i);
		scanf("%d",&stu_score);
		totalScore = totalScore + stu_score;
		i++;
		
//		printf("Total num of studens entered is %d:\n",i);
//	    printf("Totalscore is %d\n", totalScore );
//	    Averagescore = (totalScore/i);
//	    printf("average score is %d", Averagescore );
	}
	while(stu_score!=-1);
	
//	    printf("Enter score for student %d:", i);
//		scanf("%d",&stu_score);
//		totalScore = totalScore + stu_score;
//		i++;
		
		
		printf("Total num of studens entered is %d:\n",i);
	    printf("Totalscore is %d\n", totalScore );
	    Averagescore = (totalScore/i);
	    printf("average score is %d", Averagescore );
		
	return 0;
	
}