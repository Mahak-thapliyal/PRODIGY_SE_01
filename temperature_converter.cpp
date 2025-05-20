#include<iostream>
#include<iomanip>    //used for setting decimal precision
using namespace std;

void convertfromCelsius(double celsius){
    double fahrenheit = (celsius*9/5)+32;
    double kelvin = celsius+273.15;
    cout<<fixed<<setprecision(2);
    cout<<"Fahrenheit: "<<fahrenheit<<"°F"<<endl;
    cout<<"Kelvin: "<<kelvin<<"°K"<<endl;
}
void convertfromFahrenheit(double fahrenheit){
    double celsius = (fahrenheit-32)*5/9;
    double kelvin = celsius+273.15;
    cout<<fixed<<setprecision(2);
    cout<<"Celsius: "<<celsius<<"°C"<<endl;
    cout<<"Kelvin: "<<kelvin<<"°K"<<endl;
}
void convertfromKelvin(double kelvin){
    double celsius = kelvin-273.15;
    double fahrenheit =(celsius*9/5)+32;
    cout<<fixed<<setprecision(2);
    cout<<"Celsius: "<<celsius<<"°C"<<endl;
    cout<<"Fahrenheit: "<<kelvin<<"°F"<<endl;

}
int main(){
    double temperature;
    char unit;
    cout<<"Enter temperature value: ";
    cin>>temperature;
    cout<<"Enter unit (C for Celsius, F for Fahrenheit, K for Kelvin): ";
    cin>>unit;
    switch(toupper(unit)){
        case 'C':
        convertfromCelsius(temperature);
        break;

        case 'F':
        convertfromFahrenheit(temperature);
        break;

        case 'K':
        convertfromKelvin(temperature);
        break;
        default:
        cout<<"Invalid unit entered!"<<endl;

    }
    return 0;
}

