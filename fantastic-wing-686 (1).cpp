#include <bits/stdc++.h>


using namespace std;

// Function to convert Celsius to Fahrenheit
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

// Function to convert Celsius to Kelvin
double celsiusToKelvin(double celsius) {
    return celsius + 273.15;
}

// Function to convert Fahrenheit to Celsius
double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

// Function to convert Fahrenheit to Kelvin
double fahrenheitToKelvin(double fahrenheit) {
    return (fahrenheit - 32) * 5/9 + 273.15;
}

// Function to convert Kelvin to Celsius
double kelvinToCelsius(double kelvin) {
    return kelvin - 273.15;
}

// Function to convert Kelvin to Fahrenheit
double kelvinToFahrenheit(double kelvin) {
    return (kelvin - 273.15) * 9/5 + 32;
}

int main() {
    // Declare variables
    double temperature;
    string unit;
    
    cout << "Temperature Converter" << endl;
    cout << "Enter temperature value: "<<endl;
    cin >> temperature;

    cout << "Enter unit of the temperature (Celsius, Fahrenheit, Kelvin): "<<endl;
    cin >> unit;

    // Convert and display the result based on the unit
    if (unit == "Celsius" || unit == "celsius" || unit == "c" || unit == "C") {
        double fahrenheit = celsiusToFahrenheit(temperature);
        double kelvin = celsiusToKelvin(temperature);
        
        cout << fixed << setprecision(2);
        cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << endl;
        cout << "Temperature in Kelvin: " << kelvin << " K" << endl;
    }
    else if (unit == "Fahrenheit" || unit == "fahrenheit" || unit == "f" || unit == "F") {
        double celsius = fahrenheitToCelsius(temperature);
        double kelvin = fahrenheitToKelvin(temperature);
        
        cout << fixed << setprecision(2);
        cout << "Temperature in Celsius: " << celsius << " °C" << endl;
        cout << "Temperature in Kelvin: " << kelvin << " K" << endl;
    }
    else if (unit == "Kelvin" || unit == "kelvin") {
        double celsius = kelvinToCelsius(temperature);
        double fahrenheit = kelvinToFahrenheit(temperature);
        
        cout << fixed << setprecision(2);
        cout << "Temperature in Celsius: " << celsius << " °C" << endl;
        cout << "Temperature in Fahrenheit: " << fahrenheit << " °F" << endl;
    }
    else {
        cout << "Invalid unit entered. Please enter either Celsius, Fahrenheit, or Kelvin." << endl;
    }

    return 0;
}
