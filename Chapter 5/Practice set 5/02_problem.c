#include <stdio.h>

float c2f(float a){
  float fahrenheit = (a * 9/5) + 32;
  printf("The conve5rted temperature is : %f\n", fahrenheit);
}
int main(){
    float celcius,fahrenheit;
    printf("enter a Number");
    scanf("%d", &celcius);

    fahrenheit = c2f(celcius);
    printf("The temperature in fahrenheit is : %f", fahrenheit);
    return 0;
}