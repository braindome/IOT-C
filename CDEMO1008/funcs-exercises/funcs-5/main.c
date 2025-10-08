#include <stdio.h>

float calculateTaxesOnSalary(float salary) {
  if (salary >= 30000) return salary * 0.33;
  else if (salary < 15000) return salary * 0.12;
  else if (salary < 30000) return  salary * 0.28;
  else return 0;
}

int main() {
  float salary, salaryAfterTaxes;
  printf("Enter your salary:\n");
  scanf(" %f", &salary);
  salaryAfterTaxes = calculateTaxesOnSalary(salary);
  printf("Your monthly taxes are %f\n", salaryAfterTaxes);

}