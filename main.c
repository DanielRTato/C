#include <stdio.h>

int main() {

    // variables
    int age = 28;
    int year = 2025;
    int quantity = 3;
    printf("You are %d years old\n", age);
    printf("The year is %d\n",year);
    printf("You have order %d items\n", quantity);

    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;
    printf("The temperature is %fºF\n", temperature);
    printf("Your gpa is %.1f\n", gpa); // Si no lo indicas pone 6 decimales
    printf("The price is %.2f €\n", price);

    double pi = 3.14159265358979;
    double e = 2.7182818284590;
    printf("The value of pi is %.15lf\n",pi); // Por defecto solo muestra 6
    printf("The value of e us %.15lf\n",e);

    

    

    return 0;
}