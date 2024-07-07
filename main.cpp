#include <iostream>
#include <string>
#include "videoMarket.h"
#include <cstdio>

using namespace std;


int main() {
    Market market("Ariston", "White", 2000, 100.0, 75);

    cout << "Boiler Information:" << endl;
    cout << "Company: " << market.getCompany() << endl;
    cout << "Color: " << market.getColor() << endl;
    cout << "Power: " << market.getPower() << " W" << endl;
    cout << "Volume: " << market.getVolume() << " liters" << endl;
    cout << "Heating Temperature: " << market.getHeatingTemperature() << " °C" << endl;

	system("pause");
    return 0;
} 