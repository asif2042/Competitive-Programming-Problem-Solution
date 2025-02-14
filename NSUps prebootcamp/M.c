#include<stdio.h>
int main(void)
{
    char ch[20];
    int i = 0;
    while(1)
    {
        i++;
        gets(ch);
        if(ch[0] == 'H')
        printf("Case %d: Hajj-e-Akbar\n", i);
        else if(ch[0] == 'U')
        printf("Case %d: Hajj-e-Asghar\n", i);
        else if(ch[0] == '*')
        break;

        fflush(stdin);

    }
    return 0;
}