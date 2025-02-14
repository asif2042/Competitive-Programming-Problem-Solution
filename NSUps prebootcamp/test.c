#include<stdio.h> 

int main(void)
{
    int n =0, temp1 =0, count =0;
    scanf("%d", &n);
    if(n > 50 || n < 2)
    return 1;
    int arr[n];
    int i;
    for(i =0 ; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] > n || arr[i] < 1)
        return 1;

    }
    for(i = 0; i < n -1; i++)
    {
        if(arr[i] > arr[i + 1])
        {
            count++;
            
            if(count == 2 && temp1 + i + 1 == n-1)
            {
                count--;
            }
            temp1 =i;

            
        }
    }

    
    if(count <= 1)
    printf("YES\n");
    else 
    printf("NO\n");

    


    return 0;
    
}