#include <Stdio.h>

int main(){
    float fahrenheit, celcius;
    printf("Enter the temperature in Celcius");
    scanf("%f", &celcius);
    fahrenheit = ((9*celcius)/5)+32;
    printf("The Conversion for the given temperature from %f celcius to fahrenheit is : %f ", celcius,fahrenheit);
    return 0;
}