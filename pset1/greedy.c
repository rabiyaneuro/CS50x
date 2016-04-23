#include <cs50.h>
#include <stdio.h>
#include <math.h>



float c;
int x;
int y;
int z;
int a;
int main(void)

{
    printf("How much change?\n");
    c=GetFloat();
    
  
    while (c<0) 

    {
        printf("Give me a positive amount\n");
        c = GetFloat();
    }
    
    
    int d= round (c*100);
   
    int x= 0;
    int y= 0;
    int z= 0;
    int a= 0;

       
    while (d-25>=0)  
       
    {
        d=d-25;
        x=x+1;
    }
       
     while (d-10>=0)  
       
    {
       d=d-10;
       y=y+1;
    }
       
      while (d-5>=0)  
       
     {
       d=d-5;
       z=z+1;
     }
       
      while (d-1>=0)  
       
     {
       d=d-1;
       a=a+1;
     }
       
       
        printf("%d\n",x+y+z+a);
        
 }

