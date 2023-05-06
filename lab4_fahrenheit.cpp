#include <iostream>
#include <iomanip>
using namespace std;
  
int main() {
    float fah, cel;
  
    cout << "Enter the temperature ";
    cin >> fah;
    cel = 5 * (fah - 32) / 9;
    cout << fah <<" Fahrenheit is equal to " << cel <<" Celcius";
    return 0;
}
