#include <stdio.h>
#include <math.h>
#include <locale.h>
int main(){
    setlocale(LC_CTYPE,"ua");
const float a=-5, b=1, c=8;//оголошення змінних

float y=((a-b)/(2*b+c))-((1)/(a));//обчислення

printf("Обчислення = %.2f \n", y);//виведення результатів
return 0;
}