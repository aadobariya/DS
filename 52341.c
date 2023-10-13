#include<stdio.h>

int main()
{
    int n1,n2,n3,n4,n5;

    printf("Enter number : ");
    scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);

    int rev;
    rev = n1;
    n1 = n5;
    n5 = rev;

    printf("\n%d\t%d\t%d\t%d\t%d\n",n1,n2,n3,n4,n5);
}