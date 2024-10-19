#include <stdio.h>

#include <string.h> // Включаем строковые функции

#include "calculate.h"



int main(void) {

  float Numeral;

  char Operation[10]; // Увеличиваем размер массива

  float Result;



  printf("Число: ");

  scanf("%f", &Numeral);



  printf("Операция (+,-,*,/,pow,sqrt,sin,cos,tan): ");

  fgets(Operation, sizeof(Operation), stdin); 



  // Удаляем символ новой строки из Operation

  Operation[strcspn(Operation, "\n")] = 0; 



  Result = Calculate(Numeral, Operation);

  printf("%6.2f\n", Result);



  return 0;

}




