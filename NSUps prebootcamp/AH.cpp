#include<iostream>
int main(void)
{
    int t = 0;
    char ch = ' ';
    std::cin>>t;
    for(int i = 0; i < t; i++)
    {
        std::cin>>ch;
        if(ch == 'B' || ch == 'b')
        std::cout<<"BattleShip"<<std::endl;
        else if(ch == 'C' || ch == 'c')
        std::cout<<"Cruiser"<<std::endl;
        else if(ch == 'D' || ch == 'd')
        std::cout<<"Destroyer"<<std::endl;
        else if(ch == 'F' || ch == 'f')
        std::cout<<"Frigate"<<std::endl;
        
        

    }
    return 0;
}