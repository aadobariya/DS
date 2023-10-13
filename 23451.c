#include <stdio.h>
int main()
{
    int m,x;

    printf("Enter value of m :");
    scanf("%d", &m);

    int a[m];

    for (int i = 0; i < m; i++)
    {
        printf("Enter value of a[%d]", i);
        scanf("%d", &a[i]);
    }

    int rev;
    rev = a[0];
    a[0] = a[1];
    a[1] = a[2];
    a[2] = a[3];
    a[3] = a[4];
    a[4] = rev;

    printf("%d\t%d\t%d\t%d\t%d\n",a[0],a[1],a[2],a[3],a[4]);
}