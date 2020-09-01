//Author: John Scott jjs6893@psu.edu
//Collaborator: Jason Swope jbs6237@psu.edu
//Collaborator: Jacob Dally jed5801@psu.edu
//Collaborator: Chinmay Vibhute ckv5108@psu.edu
#include <stdio.h>
#include <readline/readline.h>
#include <stdlib.h>

double celsius;
double fahrenheit;

int main(void) {
  celsius = atof(readline("Enter temperature in celsius: "));
  fahrenheit = (celsius * 1.8) + 32;
  printf("%f° in celsius is equivalent to %f° Fahrenheit.\n", celsius, fahrenheit);
  return 0;
}