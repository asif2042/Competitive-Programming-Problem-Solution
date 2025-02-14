#include<stdio.h>
int main(void)
{
    int h1 = 0, m1 = 0, h2 = 0, m2 = 0, z= 0;
    char ch = ' ';
    scanf("%d %c %d", &h1, &ch, &m1);
    scanf("%d %c %d", &h2, &ch, &m2);

    int h3 = 0 , m3 = 0;
    int t1 , t2, t;
    t1 = h1 * 60 + m1;
    t2 = h2 *  60 + m2;
    t = t2 - t1;
    t = t /2 + t1;
    h3 = t / 60;
    m3 = t % 60;




   if(h3 >= 10 && m3 >= 10)
    printf("%d%c%d\n",h3, ch, m3);
    else if(h3> 9 && m3 < 10)
    printf("%d%c%d%d\n",h3, ch, z, m3);
    else if(h3 < 10 && m3 > 9)
    printf("%d%d%c%d\n",z,h3, ch, m3);
    else if(h3 < 10 && m3 < 10)
    printf("%d%d%c%d%d\n",z, h3, ch,z, m3);
    return 0;

}
