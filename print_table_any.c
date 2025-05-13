#include<stdio.h>
int main (){

    int num;
    printf("enter a number");
    scanf("%d",&num);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n",num,i,num * i);
    }
    
    return 0;
}

// enter a number2    this is output code 
// 2 * 1 = 2
// 2 * 2 = 4
// 2 * 3 = 6
// 2 * 4 = 8
// 2 * 5 = 10
// 2 * 6 = 12
// 2 * 7 = 14
// 2 * 8 = 16
// 2 * 9 = 18
// 2 * 10 = 20