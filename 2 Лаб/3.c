#include <stdio.h>
#include <math.h>
#include <locale.h>
int main() {
    setlocale(LC_CTYPE,"ua");
    
float a, b, c;//оголешення змінних
printf("Ввести значення a: ");
scanf("%f", &a);
printf("Ввести значення b: ");
scanf("%f", &b);//введення змінних

c=((2*a-b)*(2*b+a))/(sqrt(a-2*b)+2*b);//обчислення
if (c>0) {
   printf("Значення функції:%.2f \n ", c);//виведення результатів
    } else {
   printf("Немає розв'зку :_) ");
 }
return 0;
}