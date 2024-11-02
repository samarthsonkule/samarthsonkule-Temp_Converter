#include<stdio.h>
int main() {
    float celsius, kelvin, fahrenhiet;
    int choice;
    printf("Choose the umit ypu want to convert :\n");
    printf("1.kelvin\n");
    printf("2.celsius\n");
    printf("3.fahrenhiet\n");
    scanf("%d" ,&choice);
    switch(choice)
    {
        case 1:
        printf("enter temperature in kelvin:");
        scanf("%f" , &kelvin);
        celsius=(kelvin-273.15);
        fahrenhiet=1.8*(kelvin-273.15)+32.0;
        printf("Temperature in celsius:%f \n",celsius);
        printf("Temperature in fahrenhite:%f \n",fahrenhiet);

        case 2:
        printf("enter temperature in celsius:");
        scanf("%f" , &celsius);
        kelvin=(celsius+273.15);
        fahrenhiet=(celsius*1.8)+32.0;
        printf("Temperature in kelvin:%f \n",kelvin);
        printf("Temperature in fahrenhite:%f \n",fahrenhiet);

        case 3:
        printf("enter temperature in fahrenhiet:");
        scanf("%f" , &fahrenhiet);
        kelvin=(fahrenhiet-32.0)*5/9 + 273.15;
        celsius=(fahrenhiet - 32.0)*5/9;
        printf("Temperature in celsius:%f \n",celsius);
        printf("Temperature in fahrenhite:%f \n",fahrenhiet);

        default :
        printf("enter a valide no :");
    }

    printf("\n\n");
    return 0;

    

}