#include <stdio.h>

// This is where you add the two functions

// Skapa en funktion för omvandling av fahrenheit till celsius
float fahrenheit_to_celsius(float f)
{
    
    // Omvandla F till C. Celsius = (Fahrenheit - 32) * 5 / 9
    float c = (f - 32.0) * 5.0 / 9.0;
    
    // Skickar tillbaka omvandlingen till Main funktionen
    return c;
}

// Skapa en funktion för omvandling av celsius till fahrenheit
float celsius_to_fahrenheit(float c)
{

    // Omvandla C till F. (Celsius * 9) / 5 + 32
    float f = (c * 9.0) / 5.0 + 32.0;

    // Skicka omvandlignen till Main
    return f;
}

int main()
{
    float temp_f = 100.0;
    float temp_c = 37.0;

    printf("%.1f\n", fahrenheit_to_celsius(temp_f)); // Expected output: 37.8
    printf("%.1f\n", celsius_to_fahrenheit(temp_c)); // Expected output: 98.6

    return 0;
}