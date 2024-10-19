#include <stdio.h>

#include <math.h>

#include <string.h>

#include "calculate.h"



float Calculate(float Numeral, char Operation[10]) { // Увеличили размер массива

  float SecondNumeral;

  

  if (strcmp(Operation, "+") == 0) { // Используем strcmp

    printf("Второе слагаемое: ");

    scanf("%f", &SecondNumeral);

    return (Numeral + SecondNumeral);

  } else if (strcmp(Operation, "-") == 0) {

    printf("Вычитаемое: ");

    scanf("%f", &SecondNumeral);

    return (Numeral - SecondNumeral);

  } else if (strcmp(Operation, "*") == 0) {

    printf("Множитель: ");

    scanf("%f", &SecondNumeral);

    return (Numeral * SecondNumeral);

  } else if (strcmp(Operation, "/") == 0) {

    printf("Делитель: ");

    scanf("%f", &SecondNumeral);

    if (SecondNumeral == 0) {

      printf("Ошибка: деление на ноль! \n");

      return (HUGE_VAL);

    } else {

      return (Numeral / SecondNumeral);

    }

  } else if (strcmp(Operation, "pow") == 0) {

    printf("Степень: ");

    scanf("%f", &SecondNumeral);

    return (pow(Numeral, SecondNumeral));

  } else if (strcmp(Operation, "sqrt") == 0) {

    return (sqrt(Numeral));

  } else if (strcmp(Operation, "sin") == 0) {

    return (sin(Numeral));

  } else if (strcmp(Operation, "cos") == 0) {

    return (cos(Numeral));

  } else if (strcmp(Operation, "tan") == 0) {

    return (tan(Numeral));

  } else {

    printf("Неправильно введено действие \n");

    return (HUGE_VAL);

  }

}




