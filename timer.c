#include<stdio.h>
int main()
{
    int s=0,i=0;
    printf("enter the stop time");
    scanf("%d",&s);
    for(i=s;i>=0;i--)
    {
        printf("%d",i);
           sleep(1);
           system("cls");
    }
    return 0;
}
