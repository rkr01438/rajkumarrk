#include<stdio.h>
int main()
{
  int N, i, S = 0;
  
  printf("\nPlease Enter any Integer Value\n");
  scanf("%d", &N);
  
  for(i = 1; i <= N; i++)
  {
     S = S + i;
  }
  
  printf("Sum of Natural N= %d", S);
  return 0;
}
