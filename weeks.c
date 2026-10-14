#include<stdio.h>
int main()
{ int dno;

printf("\n enter dno:");
scanf("%d",&dno);
switch (dno)
{ case 1: 
    printf("\nmon");
    break;    case 2 :
    printf("\ntue");
   break; 
    case 3 :
    printf("\nwed");
break; 
    case 4 :
    printf("\nthur");
   break;  
    case 5 :
    printf("\n fri");
   break; 
    case 6 :
    printf("\n sat");
break; 
   case 7 :
   printf("\n sun");
break; 
   default:
   printf("\n wrong day no");
}}
    