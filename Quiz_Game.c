#include<stdio.h>

int main(){

    int score = 0;
    int ans;

    printf("Question 1: Capital of India?\n");
    printf("1.Delhi 2.Mumbai 3.Chennai\n");

    scanf("%d",&ans);

    if(ans==1)
        score++;

    printf("Question 2: 5 + 5 = ?\n");
    printf("1.8 2.10 3.12\n");

    scanf("%d",&ans);

    if(ans==2)
        score++;

    printf("Your Score: %d\n",score);

    return 0;
}