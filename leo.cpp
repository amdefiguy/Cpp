#include<stdio.h>
int main(){
char oper;
int a,b;
printf("Enter operator for arithmetic operation: + , - , * , / :\n" );
printf("+ For addition\n - For subtraction\n * For Multiplication\n / For division\n" );
scanf("%c" ,&oper);
printf("\n Enter any 2 number :");
scanf("%d%d" ,&a,&b);
switch (oper){
case '+' :
printf("\n Addition= %d" ,a+b);
break ;
case '-' :
printf("\n Subtraction= %d" ,a-b);
break ;
case '*':
printf("\n Multiplication = %d" ,a*b);
break ;
case '/' :
printf("\n Division= %d" ,a/b);
break ;
default:
printf("\n Invalid operator");
break ;
}
return 0 ;
}
