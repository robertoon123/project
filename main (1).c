#include <stdio.h>
#include "labs.h"

int main(){
     // Меню выбора
        printf("Введите номер лабораторной:\n");
        printf(" 1 (lab1)");
        printf(" 11 (lab1dop)\n");
        printf(" 2 (lab2)");
        printf(" 21 (lab2dop)\n");
        printf(" 3 (lab3)\n");
        printf(" 4 (lab4)");
        printf(" 41 (lab4dop)\n");
        printf(" 5 (lab5)");
        printf(" 51 (lab5dop)\n");
        printf(" 6 (lab6))");
        printf(" 61 (lab6dop)\n");
        printf(" 7 (lab7)\n");
        printf("Для закрытия проекта нажмите 0\n");
    int variant;
  
    scanf("%d", &variant);

    if (variant == 1) {
        laba1();    
    }
    else if (variant == 11)
    {
        laba11();
    }
    else if (variant == 2)
    {
        laba2();
    }
    else if (variant == 21)
    {
        laba21();
    }
    else if (variant == 3)
    {
        laba3();
    }
    else if (variant == 4)
    {
        laba4();
    }
    else if (variant == 41)
    {
        laba41();
    }
    else if(variant == 5)
    {
        laba5();
    }
    else if (variant == 51)
    {
        laba51();
    }
    else if(variant == 6)
    {
        laba6();
    }
    else if (variant == 61)
    {
        laba61();
    }
    else if(variant == 7)
    {
        laba7();
    }
    else
    {
        printf("Ошибка. Выберите число между 1 и 7, или 0 для закрытия проекта.");
    }
    return 0;
}