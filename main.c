#include <stdio.h>
void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
  int a;
  int b;
  
  a = 9;
  b = 5;
  ft_ultimate_div_mod(&a, &b);
  printf("a=%d\nb=%d\n", a, b);
  return(0);
}
