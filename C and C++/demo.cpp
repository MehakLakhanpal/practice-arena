#include <stdio.h>

int pow_n(int n, int times)
{
  int ans = 1;
  while (times--)
  {
    ans *= n;
  }
  return ans;
}

int finding_product(int *set, int set_size, int p)
{
  int pow_set_size = pow_n(2, set_size);
  int counter, j;
  int subset = 0;

  for(counter = 0; counter < pow_set_size; counter++)
  {
     int pro = 1;
    for(j = 0; j < set_size; j++)
    {
      if(counter & (1<<j))
      {
        pro *= set[j];
      }
    }
    if (pro % p == 0)
    {
      subset++;
    }
  }
  return subset;
}

int main()
{
  int n, p, q,i=0;
  scanf("%d,%d,%d", &n, &p, &q);
  int set[n];
  for (i = 0; i < n; i++)
    scanf("%d,", &set[i]);
  int ans = finding_product(set, n, p*q);
  printf("%d", ans);
  return 0;
}
