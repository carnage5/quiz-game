#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<windows.h>
#include<conio.h>
#include"func.h"

int main()
{	
	struct question q;
	char name[100];
	int ans,points=0,points2=0,points3=0,r[20],qcount=1;
	welcome(name);
	FILE *f1;
	f1=fopen("quest2.txt","r");
	srand(time(0));
	retrandom(1,25,r,5);
	//round 1
	printf("Round 1\n");
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
				ans=timer(30);
				printf("\n");
				if(ans==0)
					{
						system("cls");
						break;
						
					}
				points+=answercheck(ans,q.qans);
				Sleep(1000);
				system("cls");
			}
		}
		
	}
	fclose(f1); 
	printf("Round 1 score : %d\n",points);
	printf("moving on to Round 2\n");
	Sleep(5000);
	system("cls");

	//round 2
	printf("ROUND 2 \n");
	f1=fopen("quest.txt","r");
	srand(time(0));
	retrandom(1,25,r,10);
	while(!feof(f1))
	{
		fread(&q,sizeof(struct question),1,f1);
		for(int c=0;c<10;c++)
		{
			if(q.qno==r[c])
			{	
				printf("Points: %d \n",points2);
				printf("Q %d. %s \n",qcount,q.qstring);
				qcount++;
				printf("   Options are : \n");
				for(int w=0;w<4;w++)
				{
					printf("%d. %s \n",w+1,q.qchoice[w]) ;
				}
				ans=timer(15);
				printf("\n");
				if(ans==0)
					{
						system("cls");
						break;
					}
				points2+=answercheck(ans,q.qans);
				Sleep(1000);
				system("cls");
			}
		}
		
	}
	fclose(f1);
	printf("Round 2 score : %d\n",points2);
	printf("moving on to Round 3\n");
	Sleep(5000);
	system("cls");
 	//ROUND 3

	printf("ROUND 3 \n");
	f1=fopen("quest2.txt","r");
	srand(time(0));
	retrandom(1,25,r,15);

	while(!feof(f1))
	{
		fread(&q,sizeof(struct question),1,f1);
		for(int c=0;c<15;c++)
		{
			if(q.qno==r[c])
			{	
				printf("Points: %d \n",points3);
				printf("Q %d. %s \n",qcount,q.qstring);
				qcount++;
				printf("   Options are : \n");
				for(int w=0;w<4;w++)
				{
					printf("%d. %s \n",w+1,q.qchoice[w]) ;
				}
				ans=timer(7);
				printf("\n");
				if(ans==0)
					{
						system("cls");
						break;
					}
				points3+=answercheck(ans,q.qans);
				Sleep(1000);
				system("cls");
			}
		}
		
	}
	fclose(f1);
	struct playerlb p;
	int tp = points+points2+points3;
	strcpy(p.name,name);
	p.score=tp;
	FILE *lb=fopen("leaderboard.txt","a");
	fwrite(&p,sizeof(p),1,lb);
	fclose(lb);

	printf("Your points for Round 3  : %d\n",points3);
	Sleep(5000);
	system("cls");

	
	printf("\n\n\n\n\t\t\t\tYour total points : %d\n",tp);
	printf("\n\n\n\n\t\t\t\tThank You for playing %s\n\n\n",name);

	FILE *lb1=fopen("leaderboard.txt","r");
	printf("\nLEADERBOARD \n");
	struct playerlb pa[100],temp;
	int c=0;
	while(!feof(lb1))
	{
			fread(&pa[c],sizeof(pa[c]),1,lb);
			c+=1;

	}
	fclose(lb1);
	c-=1;
	for(int i=0;i<c;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(pa[i].score>pa[j].score)
			{
				temp.score=pa[i].score;
				pa[i].score=pa[j].score;
				pa[j].score=temp.score;
				strcpy(temp.name,pa[i].name);
				strcpy(pa[i].name,pa[j].name);
				strcpy(pa[j].name,temp.name);
			}
		}
	}
	for(int i=0;i<c;i++)
		printf("%s - %d\n",pa[i].name,pa[i].score);
	printf("\n\n");
	
	  
	return 0;

}
