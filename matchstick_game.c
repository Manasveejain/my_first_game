#include<stdio.h>
#include<stdlib.h>


 int main()
{   int n,j,c=0;
    
  // Rules:
  printf("Rules:\n");
  printf("1.There are 21 matchstick and you can pick any  number of matchstick between 1 and 4 \n");
  printf("2.The person to pick the last stick loses.\n\n");
    
  tryagain:
  ;// empty statement
  int i=21;
    
  while(i>1)
  { 
    printf("Pick number of matchstick 1,2,3 or 4:");
    scanf("%d",&n);
    c++; 
    i-=n;
    j=i%4;  // remainder
   if(n>4)
   {
    printf("INVALID INPUT\nEnd \n");
    exit (0);
   } 
    
    else
   { 
     if (i<=5&&i>1)
     {
     printf("I pick %d matchsticks\n",i-1);        
     i-=i-1;
     }
  
     else if(i<=6&&i>5)
     {
     printf("I pick %d matchsticks\n",j-1);
     i-=j-1;    
     }

     else if (i<11&&i>6)
     {
     printf("I pick %d matchsticks\n",i-6);
     i-=i-6;
     }

     else
     {
      if(j!=0)
     {
       printf("I pick %d matchsticks\n",j);
       i-=j;
      }

     else
     {
       printf("I pick 4 matchsticks\n");
       i-=4;
      }
    
    }
   c++;
  } 
  }
 if(i==1&&c%2==0)
 printf("you lost\n");
 else 
 printf("You won\n");
  
  //Restarting
  int p;
  printf("Press 1 to play again");
  scanf("%d",&p);
  if (p==1)
  goto tryagain;
  
  
 
  return 0;

}
