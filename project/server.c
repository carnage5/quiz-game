#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
int retrandom(int l,int u,int r[],int s)
{	
	for(int i =0;i<s;i++)
	{
	 r[i]=(rand()%(u-l+1))+l;
	}
	return 0;

}
int timer(int s)
{
	    
	char pro[50] ="enter your option below ";
	char t[10]="timer";
    int opt=0;

    while(!kbhit()) 

    {   
        printf("      \r%s: %d | %s %c",t,s,pro,31);
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
    if(opt>4)
    {
        printf("not a valid options , pls enter again : ");
        return timer(s);
    }
    return opt;

}

int answercheck(int a,int b)
{	int p=0;
	if(a==0)
				{
					printf("next question !\n");
				}
				else if(a==b)
				{
					printf("right answer ! \nnext question ! \n");
					p+=5;
				}
				else
				{
					printf("wrong answer ! \nnext question ! \n");
				}
				return p;
}
int welcome(char player_name[])
{
	
    char chosen;
    system("cls");
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