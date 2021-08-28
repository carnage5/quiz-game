/*#include<stdio.h>
#include<windows.h>
#include<conio.h>
int selection(int);
int sample1();
int main(){
    sample1();
}
int selection(int ans){
    int s=30;
    int opt=0;
    while(!kbhit()) 
    {   
        //printf("time :");
        printf("      \r%d",s);
        Sleep(1000);
        if(s!=0)
            s--;
        else{
            printf("time's up buddy!");
            return 0;
            }
    }
    printf("\n"); //vb 
    //printf("\nenter ur option: ");
    scanf("%d", &opt);
    
    return opt;
}
int sample1(){
    int r, ans;
    printf("Q) blah blah blah\n1)blah\n2)blah\n3)blah\n4)blah\n");
    ans=4;
    //printf("press \' \' to answer and choose the option or \'  q\' to quit the question and move on\n");
    r=selection(ans);
    if (r==0){
 
        printf("moving on to next question");
    }
    else if (r==ans){
        printf("correct");
    }
    else{
        printf("wrong");
    } 
}*/
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<conio.h>
#include<time.h>
int main(){
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
    //printf("\n \t\t\t %c you can either answer the question while the timer's on or skip the question and move on", 4 );
    printf("\n \t\t\t %c to choose an option press just enter the serial number of the option", 4 );
    //printf("\n \t\t\t %c to skip the question press \' \' and type q", 4 );
    printf("\n \t\t\t %c you can attempt a question only once, hence be careful while choosing the right option", 4 );
    printf("\n \t\t\t %c you have no option to revisit or review a question once you have attempted it", 4 );
    printf("\n\n \t\t %c S - to start game", 16);
    printf("\n \t\t %c E - to exit game", 16);
    printf("\n \t\t %c%c",  16,17);
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