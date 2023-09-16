#include <stdio.h>

int main() {
    double baseWagePerHour, extraWagePerHour;
    int hoursWorked;
    
      printf("Enter the base wage per hour: ");
    scanf("%lf", &baseWagePerHour);
    
    printf("Enter the extra wage per hour: ");
    scanf("%lf", &extraWagePerHour);
    
    printf("Enter the number of hours worked: ");
    scanf("%d", &hoursWorked);
    
    double totalWages = 0.0;
    
      if (hoursWorked <= 30) {
        totalWages = hoursWorked * baseWagePerHour;
    } else {
        totalWages = 30 * baseWagePerHour + (hoursWorked - 30) * extraWagePerHour;
    }
    
    printf("Weekly wages: %.2lf\n", totalWages);
    
    return 0;
}

