#include "Garage.h"
int main()
{
    Garage garage;
    std::cout << "1,2,3,4\n";
    unsigned int n;
    std::cin >> n;
    while (n != 4)
    {
        if (n == 1)
        {
            Car car;
            std::cin >> car;
            while (car.GetSpeed() > 240 || car.GetSpeed() < 180)
            {
                std::cout << "Bumass" << std::endl;
                unsigned int speed;
                std::cin >> speed;
                car.SetSpeed(speed);
            }
            garage.Add(&car);
        }
        if (n == 2)
        {
            Lorry lorry;
            std::cin >> lorry;
            while (lorry.GetSpeed() > 140 || lorry.GetSpeed() < 80)
            {
                std::cout << "Bumass2" << std::endl;
                unsigned int speed;
                std::cin >> speed;
                lorry.SetSpeed(speed);
            }
            garage.Add(&lorry);
        }
        if (n == 3)
        {
            Minibus minibus;
            std::cin >> minibus;
            while (minibus.GetSpeed() > 160 || minibus.GetSpeed() < 120)
            {
                std::cout << "3Bumass" << std::endl;
                unsigned int speed;
                std::cin >> speed;
                minibus.SetSpeed(speed);
            }
            garage.Add(&minibus);
        }
        std::cout << "1,2,3,4\n";
        std::cin >> n;
    }
    std::cout << "1,2,3 for road, then time, then length\n";
    while(n>=4)std::cin >> n;
    double time, length;
    std::cin >> time >> length;
    if (n == 1)
    {
        garage.CheckHighway(length, time);
    }
    if (n == 2)
    {
        garage.CheckSpeedRoad(length, time);
    }
    if (n == 3)
    {
        garage.CheckThirdClassRoad(length, time);
    }

    return 0;
}
/*
1
180
Tesla
2
100 
Lorryporry     
3             
160              
Miniavtobus                
1                    
240                   
TeslaOP
*/




