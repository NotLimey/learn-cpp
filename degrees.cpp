#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout<<"Hello World \n \n";
    string answer;
    cout << "Type in celcius: ";
    cin >> answer;
    int num = stoi(answer);
    int farenheit = 1.8 * num + 32;
    int kelvin = num + 273.15;
    cout << "That is " << farenheit << " farenheit and " << kelvin << " degrees kelvin";
    return 1;
}
