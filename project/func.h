int timer(int);
int retrandom(int,int,int*,int);
int answercheck(int,int);
int welcome(char []);
struct question{
	int qno;
	char qstring[200];
	char qchoice[4][75];
	int qans;
};
struct playerlb{
	char name[50];
	int score;
};