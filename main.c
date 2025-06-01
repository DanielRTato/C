#include <stdio.h>
#include <stdbool.h>
int main() {

    //int = numeros enteros (4 bytes)
    //float = numeros decimales (4 bytes)
    //double = numeros decimales (8 bytes)
    //char = caracteres (1 byte)
    // char[] = cadenas de texto (array de caracteres, tamaño variable)	
    //bool = booleanos (1 byte) true o false (requiere incluir <stdbool.h>)

    // Variables
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

    char grade = 'A';
    char symbol = '!';
    printf("Your favorite symbol us %c\n",symbol);
    printf("Your grade is %c\n",grade);

    char name [] = "Daniel"; //Array de caracteres para cadenas de texto 
    printf("Hello %s\n",name); // %s es para cadenas de texto
    printf("Hello %s, you are %d years old\n", name, age);

    bool isOnline = 1; // true = 1 false = 0
    bool isStudent = true;
    printf("%d",isOnline);


    

    return 0;
}