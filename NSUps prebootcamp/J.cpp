#include<iostream>
#include<iomanip>
int main(void)
{
    int h = 0, m = 0, s = 0, buf = ' ';
    char ch = ' ', str;
    std::cin>>h>>ch>>m>>ch>>s>>str>>buf;
    if(str == 'P')

    {
        if(h == 12)
        std::cout<<std::setw(2)<<std::setfill('0')<<h<<ch<<std::setw(2)<<std::setfill('0')<<m<<ch<<std::setw(2)<<std::setfill('0')<<s<<std::endl;
        else
        std::cout<<std::setw(2)<<std::setfill('0')<<h+12<<ch<<std::setw(2)<<std::setfill('0')<<m<<ch<<std::setw(2)<<std::setfill('0')<<s<<std::endl;
    }
    else if(str == 'A')
    {
        if(h ==12)
        std::cout<<std::setw(2)<<std::setfill('0')<<00<<ch<<std::setw(2)<<std::setfill('0')<<m<<ch<<std::setw(2)<<std::setfill('0')<<s<<std::endl;
        else 
        std::cout<<std::setw(2)<<std::setfill('0')<<h<<ch<<std::setw(2)<<std::setfill('0')<<m<<ch<<std::setw(2)<<std::setfill('0')<<s<<std::endl;
    }
    return 0;

}