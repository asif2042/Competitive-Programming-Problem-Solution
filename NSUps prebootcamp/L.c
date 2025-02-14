#include<stdio.h>
int main(void)
{
    int n =0, even = 0, odd =0, ev_ind =0, od_ind = 0;
    scanf("%d", &n);
    if(n <= 100 && n >= 3)
    {
    int arr[n], i =0;
   do
    {
        scanf("%d", &arr[i]);
        if(arr[i] % 2 == 0)
        {
            even++;
            ev_ind = i;
        }
        else 
        {
            odd++;
            od_ind = i;


            
        }
        i++;
    }while( i < n && arr[i-1] <= 100);

    if(even == 1)
    printf("%d\n", ev_ind +1);
    else if(odd == 1)
    printf("%d\n", od_ind +1);


    
    
    }
    return 0;

}