#include <stdio.h>
void main()
{
 int dno;
 printf("enter day no:");
 scanf("%d",&dno);
 switch(dno) 
  {
    case 1:
           printf("MONDAY");
           break;
    case 2:
           printf("TUESDAY ");
           break;
    case 3: 
          printf("WEDNESDAY ");
          break;
    case 4:
          printf("TH");
          break;
    case 5:
          printf("FRI");
          break;
    case 6:
          printf("SAT");
          break;
    case 7:
          printf("SUN");
          break;
    default:
           printf("\n wrong day no:");
    }
 } 