#include<stdio.h>
#include<math.h>
int main(){

float a, b, result ;
char operator; 

     printf("enter operator (+, -, *, /, %% ) : \n");
     scanf("%c", &operator);

     printf("enter value of a : \n");
     scanf("%f", &a);
     
     printf("enter value of b : \n");
     scanf("%f", &b);

     switch(operator){
     case '+':
     printf("the value of %f + %f = %f", a, b, a+b);
     break ;

     case'-':
     printf(" the value of %f - %f = %f", a, b, a-b);
     break ;
     
     case'*':
     printf("the value of %f * %f = %f" , a, b, a*b);
     break ;
     
     case'/':
     if (b != 0)
     { printf("the value of %f / %f = %f" , a ,b ,a/b); }
     
     else {printf("error ! can't devide by zero");}
     break ;

     case'%':{
        int x = (int)a;
        int y = (int)b;
     if(y!=0){printf("the remainder is %d",x%y);}
     else {printf("error! can't devide by zero");}
     break ; }
    }
    return 0;
}
