#include<stdio.h>
#define n 5 
int a[n],top = -1;
int display(){
    if(top < 0)
    {
        printf("Array is Empty...");
    }
    for(int i =0 ; i <= top ; i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
}
int insertEnd(int val)
{
    if(top >= n-1){
        printf("Stack is Overflow...\n");
    }
    else{
        
        top++;
        a[top] =    val  ;
      
    }
    
}

int delete()
{
    if(top < 0 ){
        printf("Array is Empty...");
    }
    else{
        --top;
        a[top] ;
    }
}
int main()
{
    insertEnd( 10 );
    insertEnd( 20 );
    insertEnd( 30 );
    insertEnd( 40 );
    insertEnd( 50 );
    delete();
    delete();
    delete();
    delete();
    delete();    
    display();

}