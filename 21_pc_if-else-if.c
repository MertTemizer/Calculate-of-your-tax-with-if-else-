#include <stdio.h>

int main()
{
    int salary;
    float tax;
    
    printf("Enter the salary: ");
    scanf("%d", &salary);
    
    if(salary < 50000)
        tax = 0;
    else if((salary >= 50000) && (salary < 100000))
        tax = salary * 0.05;
    else
        tax = salary * 0.20;
    
    printf("The tax to be paid is: %f", tax);
    
    return 0;
}
