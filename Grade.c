#include<stdio.h>
#include<stdlib.h>

int main()
{   
  int a;
  printf("Enter Marks:",a);
  scanf("%d",&a);
  if (a<=100&&a>=85)
  {  
    printf("GradeA");
  }
  
  else if(a<=84 && a>=70)
  {  
    printf("Grade B");
  }
 
  else if(a<=69 && a>=55)
  {
     printf("Grade C");
  }
  
  else if(a<=54 && a>=40)
  {
    printf("Grade D");
  }
  
  else
  {  
    printf("Grade F");
  }
}   
