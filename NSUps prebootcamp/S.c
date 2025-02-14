#include<stdio.h> 

int main(void)
{
    int n =0, temp =0, count =0;
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
        if(arr[i] > arr[i + 1] && arr[i + 1] > arr[i + 2])
        {
            
            temp = arr[i];
            arr[i] = arr[i +1];
           
            arr[i + 1] = temp;
            count ++;

        }
    }

    
    if(count <= 1)
    printf("YES\n");
    else 
    printf("NO\n");

    


    return 0;
    
}