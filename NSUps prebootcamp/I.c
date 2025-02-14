#include<stdio.h>
#include<math.h>
int main(void)
{
  int n = 0, count = 0, max = 0;
  scanf("%d", &n);
  if(n <= pow(10, 5) && n >= 1)
  {
  int candles[n];
  int i = 0; 
  do
  {
    scanf("%d", &candles[i]);
    if(max < candles[i])
    {
        max = candles[i];
        count = 1;

    }
    else if( max == candles[i])
    count++;
    i++;
  }while(i < n && candles[i-1] <= pow(10, 7) && candles[i-1] >=1);

  printf("%d\n", count);

  }
  return 0;

}