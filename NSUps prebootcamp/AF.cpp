#include<iostream>
int main(void)
{
    int A = 0, b = 0, gcd = 0, lcm = 0, T = 0 , n1 , n2, rem =0;
    std::cin>>T;
    for(int i = 0; i < T; i ++)
    {
        std::cin>>A>>b;
        n1 = A;
        n2 = b;
       /* for(int count = 1; count <= A; count++)
        {
            if(A % count == 0 && b % count == 0 )
            gcd = count;
        }
        */
while(n2 != 0)
{
    rem = n1%n2;
    n1 = n2;
    n2 = rem;


}
gcd = n1;
        lcm = (A*b)/gcd;
        std::cout<<gcd<<' '<<lcm<<std::endl;
    }
    return 0;

}