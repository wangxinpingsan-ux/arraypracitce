#include <stdio.h>
#include <stdbool.h>




int main (void){

    float average = 0;
    int b =0 , total =0;
    int number[10]={0};
    
    printf("enter number (-1 to end ):");

    while(b<10){
      int a=0;
        scanf("%d",& a);
          if(a==-1){
            break;
          }

    number[b]=a;
    
    b++;

    }

    for(int i=0 ; i<b ; i++)
    {
    total=total+number[i];
   
    }
    average=total*1.0/b;


    printf("total= %d    \naverage=%.2f",total,average);
    

    return 0 ;
}