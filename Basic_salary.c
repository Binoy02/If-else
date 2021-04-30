#include <stdio.h>
int main()
{
    float Basic_Salary, GROSS_SALARY, DA, HRA;

    printf("Enter basic salary of an employee: ");
    scanf("%f", &Basic_Salary);

    if(Basic_Salary <= 10000)
    {
        DA  = Basic_Salary * 0.8;
        HRA = Basic_Salary * 0.2;
    }
    else if(Basic_Salary <= 20000)
    {
        DA  = Basic_Salary * 0.9;
        HRA = Basic_Salary * 0.25;
    }
    else
    {
        DA  = Basic_Salary * 0.95;
        HRA = Basic_Salary * 0.3;
    }

    GROSS_SALARY = Basic_Salary + HRA + DA;

    printf("GROSS SALARY OF EMPLOYEE = %.2f", GROSS_SALARY);

    return 0;
}
