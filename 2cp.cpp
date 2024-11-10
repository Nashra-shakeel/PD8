#include <iostream>
using namespace std;
main()
{
    string name,movies[5] = {"Gladiator", "StarWars", "Terminator","TakingLives", "TombRider"};
    int price = 500;
    float d;
    cout << "Enter movie name: ";
    cin >> name;
    if (name== movies[1] || name==movies[3])
    {
        d=price-price*0.05;     
    }
    else 
    {
        d=price-price*0.1;
    }   
    cout << "The price of "<<name<<" is "<<d;
}