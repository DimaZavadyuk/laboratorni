#include <stdio.h>
#include <math.h> 
#include <locale.h>
int main(){
      setlocale (LC_CTYPE,"ua");
      int a, b, sum, remainder, quotient;//оголешення змінних
      
      printf("Введіть ціле число a: ");
      scanf("%d", &a);
      
      printf("Введіть ціле число b: ");
      scanf("%d", &b);
      
      //обчислення
      sum = a + b;
      remainder = a % b;
      quotient = a / b;
      
      //виведення результатів
      printf("Сума заданих чисел: %d\n", sum);
      printf("Залишок від ділення другого числа на перше: %d\n", remainder);
      printf("Ціла частина від ділення першого числа на друге: %d\n", quotient);
      
      return 0;
}