#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>

void delay(int a);

int main(){
    char name[100];
    int t = 21;
    int c,c1;
    srand(time(0));
    printf("Welcome to Match Stick Game...\n");
    printf("Apna Naam Likho :");
    scanf("%s",&name);
    printf("\n");
    printf("RULES\n");
    printf("Players to choose at least 1 to 5 match stick(s)...\n");
    printf("Player whose at least 1 match stick left is the looser.... \n");
    printf("TOTAL NUMBER OF MATCHSTICKS = 21\n");
    for (int i = 1; i <= t; i++)
        {
            printf("|");
        }
    do
    {
        printf("\n%s  Please choose :",name);
        scanf("%d",&c);
        if (c<1)    
        {
            printf("Please choose between 1 to 5 ! \n");
        }
        else if (c>5)
        {
            printf("Please choose between 1 to 5  ! \n");
        }
        else if ((t-c)==0)
        {
            printf("%s  has Exhausted all the matchsticks",name);
            printf("\nComputer Wins !!!");
            break;
        }
        else if ((t-c)<1)
        {
            printf("Choose Correctly !");
        }
        else
        {
            t-=c;
            printf("TOTAL NUMBER OF MATCH STICKS LEFT = %d\n", t);
            for (int i = 1; i <= t; i++)
            {
            printf("|");
            }

            if (t>6)
            {
                c1 = rand()%5+1;//Generates random number between 1 to 5
            }
            else if (t>=2)
            {
                c1 = t - 1;
            }
            else
            {
                printf("\nCongratulations !!!");
                printf("%s Wins !!!",name);
                break;
            }
            printf("\nComputer Ji:%d",c1);
            t -= c1;
            printf("\nTOTAL NUMBER OF MATCH STICKS LEFT = %d\n", t);
            for (int i = 1; i <= t; i++)
            {
            printf("|");
            }   
            if (t==1)
            {
                printf("COMPUTER WINS !!!");
            }
                
        }

    } while (t != 1);

    delay(40);
    
    return 0;
}

void delay(int a){
    int add;
    int time;
    time = a*10000000000000;
    for (int i = 0; i < time; i++)
    {
        add*=i;
        add++;
        add++;
    }    
}