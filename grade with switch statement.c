// switch with grade

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
	
	switch (averageScore){
		case 70 ... 100:
			printf("Grade is A");
			break;
			
		case 60 ... 69:
			printf("Grade is B");
			break;
		case 50 ... 59:
			printf("Grade is C");
			break;
		
		case 45 ... 49:
			printf("Grade is D");
			break;
		
		case 40 ... 44:
			printf("Grade is E");
			break;
		
		default:
			printf("Grade is F");
			
		
	}
	

	
	return 0;
	
}