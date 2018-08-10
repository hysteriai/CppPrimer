#include<stdio.h>
int main(){  

    const int a=1;    
    int *b=(int *)&a;  
   
    *b=2;   
   
    printf("a=%d",a);
    printf("b=%d ",*b);
       
    return 0;
}
