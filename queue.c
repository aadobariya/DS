#include<stdio.h>
#define n 5 
int a[n];
int f=-1,r=-1;
int insertEnd (int val)
{
    if (r>=n-1){
        printf("Queue is full.\n");
    }
    else if (r<0){
        f=r=0;
        a[r]=val;
    }
    else{
        r++;
        a[r]=val;
    }
}
int deletefirst()
{
    if (f>=n-1){
        printf("Queue is empty.\n");
    }
    else if (f==r){
        f=r=-1;
    }
    else{
        f++;
    }
}
int display(){
    for(int i=f ; i<=r ; i++){
        printf("%d",a[i]);
    }
} 
int main(){
    insertEnd(10);
    insertEnd(20);
    insertEnd(30);
    insertEnd(40);
    insertEnd(50);
    insertEnd(60);

   
   deletefirst();
   deletefirst();
    display();

}


