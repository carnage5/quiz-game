#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
struct question{
	int qno;
	char qstring[200];
	char qchoice[4][75];
	int qans;
};
int timer();
int retrandom(int,int,int*);
int welcome();
int main()
{	
	struct question q;
	int ans,points=0,r[5],qcount=1;
	welcome();
	FILE *f1;
	f1=fopen("quest.txt","r");
	srand(time(0));
	retrandom(1,25,r);
	while(!feof(f1))
	{
		fread(&q,sizeof(struct question),1,f1);
		for(int c=0;c<5;c++)
		{
			if(q.qno==r[c])
			{	
				printf("Points: %d \n",points);
				printf("Q %d. %s \n",qcount,q.qstring);
				qcount++;
				printf("   Options are : \n");
				for(int w=0;w<4;w++)
				{
					printf("%d. %s \n",w+1,q.qchoice[w]) ;
				}
				printf("enter your choice -> \n");
				printf("timer \n");
				ans=timer();
				printf("\n");
				if(ans==0)
				{
					printf("next question !\n");
				}
				else if(ans==q.qans)
				{
					printf("right answer ! \nnext question ! \n");
					points+=5;
				}
				else
				{
					printf("wrong answer ! \nnext question ! \n");
				}
				Sleep(1000);
				system("cls");
				//timer();
				//scanf("%d",ans);
			}
		}
		
	}
	printf("Your total points : %d\n",points);
	printf("Thank You for playing \n");
	fclose(f1);   
	return 0;

}
int retrandom(int l,int u,int r[5])
{	
	for(int i =0;i<5;i++)
	r[i]=(rand()%(u-l+1))+l;
	return 0;

}
int timer()
{
	    int s=30;

    int opt=0;

    while(!kbhit()) 

    {   
        printf("      \r%d ",s);
        Sleep(1000);
        if(s!=0)
            s--;
        else{
            printf("time's up !");
            return 0;
            }
    }
    printf("\n"); 
    scanf("%d", &opt);
    return opt;

}
int welcome()
{
	char player_name[10];
    char chosen;
    printf("\n\n\t\t\t\t%c WELCOME TO THE QUIZ GAME! %c %c\n", 17, 2, 16);
    for (int i=1; i<32; i++){
        if(i<=4)
        printf("\t");
        else if (i<=6)
        {
            printf(" ");
        }
        
        else
        printf("%c", 22);
    }
    printf("\n\n\n\n");
    printf(" \t\tEnter your name: ");
    scanf("%s", player_name);
    printf("\n \t\tHello %s!\n\n \t\tPlease read the instructions below carefully %c", player_name, 25);
    printf("\n \t\t%c Round 1: ", 16);
    printf("\n \t\t\t %c consists of 5 questions", 4 );
    printf("\n \t\t\t %c you are given 30 seconds to attempt each question", 4 );
    printf("\n \t\t\t %c to choose an option press just enter the serial number of the option", 4 );
    printf("\n \t\t\t %c you can attempt a question only once, hence be careful while choosing the right option", 4 );
    printf("\n \t\t\t %c you have no option to revisit or review a question once you have attempted it", 4 );
    printf("\n\n \t\t %c S/s - to start game", 16);
    printf("\n \t\t %c E/e - to exit game", 16);
    printf("\n \t\t %c ",  16);
    fflush(stdin);
    scanf("%c", &chosen);
    if (chosen==83 || chosen==115 ){
        printf("\n\n \t\t ALL THE BEST!! \n\t\t HERE YOU GO %c%c%c", 16,16,16);
        Sleep(1000);
        system("cls");

    }
    if (chosen== 14|| chosen== 101){
        printf(" \n\n \t Exiting the game \n\t%c%c%c\n\t%c%c\n\t%c\n \t HAVE A NICE DAY!! ", 16, 16, 16, 16, 16, 16, 16 );
        exit(0);
    }
    return 0;

}

/*int t3=60,c3;
	time_t start,end;
	while(!feof(f1))
	{
		fread(&q,sizeof(struct question),1,f1);
		start=clock();
		for(int c=0;c<10;c++)
		{
			if(q.qno==r[c])
			{	
				printf("Points: %d \n",points);
				printf("Q %d. %s \n",qcount,q.qstring);
				qcount++;
				printf("   Options are : \n");
				for(int w=0;w<4;w++)
				{
					printf("%d. %s \n",w+1,q.qchoice[w]) ;
				}
				ans=timer(t3);
				printf("%d",t3);
				printf("\n");
				points3+=answercheck(ans,q.qans);
				Sleep(1000);
				system("cls");
			}
			end=clock()-start;
			float f=(float)(end-start)/CLOCKS_PER_SEC;
			t3=(int)(f+0.1);
			printf("rr %d",t3);
			if(t3==0)
				break;
		}
		
	}*/