#include <stdio.h>
#include <stdlib.h>
#ifndef LABS_H
#define LABS_H
#define MAXLINE 1000
#include "definitions.h"

float power(float base, int exponent) {
    float result = 1;

    
    for (int i = 0; i < exponent; ++i) {
        result *= base;
    }

    return result;
}

int laba1(){
 float V;
 float u1; //вытекает
 float u2; // поступает
 int t;
 printf("Через сколько вытечет вода?\n");
 printf("V  = ");
 scanf("%f", &V);
 printf("u1 вытекает = ");
 scanf("%f", &u1);
 printf("u2 поступает = ");
 scanf("%f", &u2);
 t= V/(u1-u2);
 printf("время вытекания = %d\n", t);
 system("pause");
 return 0;
}


int laba11(){
 float V;
 float u1; //вытекает
 float u2; // поступает
 int t;
 int info()
{
 int t= V/(u1-u2);
 return t;
}
printf("Через сколько вытечет вода?\n");
 printf("V = ");
 scanf("%f", &V);
 printf("u1 вытекает = ");
 scanf("%f", &u1);
 printf("u2 поступает = ");
 scanf("%f", &u2);
 info(V,u1,u2);
 printf("время вытекания = %d\n", t);
 system("pause");
 return 0;
}


int laba2() {
float y;
float r;
float t;
float j; 
float l;
float g;
float s; // сумма ряда
float a; // очередной элемент ряда
int n; // число элементов ряда
int i; // номер очередного элемента ряда
printf("n=");
scanf("%d", &n);
r=0;//увеличение дроби
s = 0;
y=0; // увеличение дроби знаменателя
i = 0;
t=1; //остаток из предыдущих вычислений числителя
g = 0; //знаменатель
l = 0; //числитель
j =1; //остаток из предыдущих вычислений знаменателя
while( i < n )
{ 
l=(1+r)*t;
g=(1+y)*j;
a = l / g;
r=r+2;
t=l;
y=y+3;
j=g;
s = s + a;
i = i + 1;
 
} 
// вывод результата
printf("s = %f\n", s);
system("pause");
return 0;
}

int laba21(){
float y;
float r;
float t;
float j; 
float l;
float g;
float s; // сумма ряда
float a; // очередной элемент ряда
int n; // число элементов ряда
int i; // номер очередного элемента ряда
// ввод параметров ряда
printf("n=");
scanf("%d", &n);
// начальное присваивание переменных
r=0;//увеличение дроби
s = 0;
y=0; // увеличение дроби знаменателя
i = 0;
t=1; //остаток из предыдущих вычислений числителя
g = 0; //знаменатель
l = 0; //числитель
j =1; //остаток из предыдущих вычислений знаменателя
// цикл
for(i; i < n;i++ )
{ 
l=(1+r)*t;
g=(1+y)*j;
a = l / g;
r=r+2;
t=l;
y=y+3;
j=g;
s = s + a;
} 
// вывод результата
printf("s = %f\n", s);
system("pause");
return 0;
}

int laba3() {
int c;
int prev_c;
int flag;
int cnt;
int found_a;
cnt = 0;
flag = 0;
found_a = 0;
prev_c = ' ';
printf("Подсчет букв 'а' в слове\n ");
printf("Введите слова=\n");
while ((c = getchar()) != EOF) {
process_character(c, &prev_c, &flag, &cnt, &found_a);
}
// проверка последнего слова
if (flag == 1 && found_a == 1) {
 cnt++;
 }
 printf("число слов с буквой 'a' = %d\n", cnt);
 system("pause");
 return 0;
}
    



int laba4()
{
    char c;
    char prev_c = ' ';
    int first;
    int flag = 0;
    int found = 0;
    int i = 0;
    int pos = 0;
    int start = 0;
void process_line(char buffer[]) {
    do {
        c = buffer[i];
        if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0') {
            if (flag == 1) {
                if (found == 0) {
                    for (int j = start; j < i; j++) {
                        buffer[pos++] = buffer[j];
                    }
                }
            }
            flag = 0;
            buffer[pos++] = c;
        } else {
            if (flag == 0) {
                start = i;
                first = buffer[start];
            }

            if (first == c) {
                found = 1;
            } else {
                found = 0;
            }
            flag = 1;
        }
        prev_c = c;
        i++;
    } while (c != '\0');

    buffer[pos] = '\0';
}

int main(void) {
    char line[MAXLINE];

    fgets(line, MAXLINE, stdin);

    process_line(line);

    puts(line);
    system("pause");
    return 0;
}
}



int laba41()
{
void process_line(char buffer[]) {
    char c;
    char prev_c;
    int first;
    int flag;
    int found;
    int i;
    int pos;
    int start;
    int j;
    int word_length;

    flag = 0;
    found = 0;
    prev_c = ' ';
    start = 0;
    i = 0;
    pos = 0;
    word_length = 0;

    do {
        c = buffer[i];
        if (c == ' ' || c == '.' || c == ',' || c == '\n' || c == '\0') {
            if (flag == 1 && word_length == 3 && found == 1) {
                for (j = start; j < i; j++) {
                    buffer[pos++] = buffer[j];
                }
            }
            flag = 0;
            buffer[pos++] = c;
            word_length = 0;
        } else {
            if (flag == 0) {
                start = i;
                first = buffer[start];
            }

            if (first == c) {
                found = 1;
            } else {
                found = 0;
            }
            flag = 1;
            word_length++;
        }
        prev_c = c;
        i++;
    } while (c != '\0');

    buffer[pos] = '\0';
}

int main(void) {
    char line[MAXLINE];

    fgets(line, MAXLINE, stdin);

    process_line(line);

    puts(line);
system("pause");
    return 0;
}
    
}

int laba5(){ 
    {
int N = 10;
 int arr[N];
 int i, min_index, max_index;
 // ввод массива
 printf("Введите %d целых чисел:\n", N);
 for (i = 0; i < N; i++) {
 scanf("%d", &arr[i]);
 }
 // min и max
 min_index = max_index = 0;
 for (i = 1; i < N; i++) {
 if (arr[i] < arr[min_index]) {
 min_index = i;
 }
 if (arr[i] > arr[max_index]) {
 max_index = i;
 }
 }
 // обнуление между элементами
 if (min_index < max_index) {
 for (i = min_index + 1; i < max_index; i++) {
 arr[i] = 0;
 }
 } else {
 for (i = max_index + 1; i < min_index; i++) {
 arr[i] = 0;
 }
 }
 // вывод массива
 printf("Массив после обнуления:\n");
 for (i = 0; i < N; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
 system("pause");
return 0;
}
}

int laba51(){
 {
int N = 10;
 int arr[N];
 int i, min_index, max_index;
 // ввод массива
 printf("Введите %d целых чисел:\n", N);
 for (i = 0; i < N; i++) {
 scanf("%d", &arr[i]);
 }
 // min и max
 min_index = max_index = 0;
 for (i = 1; i < N; i++) {
 if (arr[i] < arr[min_index]) {
 min_index = i;
 }
 if (arr[i] > arr[max_index]) {
 max_index = i;
 }
 }
 // вывод удаляемых чисел
 printf("Удаляемые числа: ");
 if (min_index < max_index) {
 for (i = min_index + 1; i < max_index; i++) {
 printf("%d ", arr[i]);
 }
 } else {
 for (i = max_index + 1; i < min_index; i++) {
 printf("%d ", arr[i]);
 }
 }
 printf("\n");
 // вывод минимума и максимума
 printf("Минимум: %d\n", arr[min_index]);
 printf("Максимум: %d\n", arr[max_index]);
 // обнуление между элементами
 if (min_index < max_index) {
 for (i = min_index + 1; i < max_index; i++) {
 arr[i] = 0;
 }
 } else {
 for (i = max_index + 1; i < min_index; i++) {
 arr[i] = 0;
 }
 }
 // вывод массива
 printf("Массив после обнуления:\n");
 for (i = 0; i < N; i++) {
 printf("%d ", arr[i]);
 }
 printf("\n");
 system("pause");
 return 0;}
}





int laba6(){
int K = 3;
int N = 4;
int x[K][N];
printf("Введите элементы массива %dx%d:\n", K, N);
for (int i = 0; i < K; i++) {
for (int j = 0; j < N; j++) {
scanf("%d", &x[i][j]);
}
}
// Функция для проверки арифметической прогрессии в строке
int prog(int row[],int size) {
int diff = row[1] - row[0]; // разность первых двух элементов
for (int i = 2; i < size; ++i) {
if (row[i] - row[i - 1] != diff) {
return 0;
}
}
return 1;
}
// проверка каждой строки на арифметическую прогрессию
for (int i = 0; i < K; i++) {
if (prog(x[i], N)) {
printf("Строка %d является арифметической прогрессией.\n", i);
} else {
printf("Строка %d не является арифметической прогрессией.\n", i);
}
}
system("pause");
return 0;
}




int laba61(){
int K = 3;
int N = 4;
int x[K][N];

printf("Введите элементы массива %dx%d:\n", K, N);
for (int i = 0; i < K; i++) {
for (int j = 0; j < N; j++) {
scanf("%d", &x[i][j]);
}
}

for (int i = 0; i < K; i++) {
mors(x[i], N);
}

for (int i = 0; i < K; i++) {
if (grob(x[i], N)) {
printf("Строка %d является арифметической прогрессией после сортировки.\n", i);
} else {
printf("Строка %d не является арифметической прогрессией после сортировки.\n", i);
}
}

system("pause");
return 0;
}

void mors(int arr[], int n) {
for (int i = 0; i < n - 1; i++) {
int min_idx = i;
for (int j = i + 1; j < n; j++) {
if (arr[j] < arr[min_idx]) {
min_idx = j;
}
}
int temp = arr[min_idx];
arr[min_idx] = arr[i];
arr[i] = temp;
}
}

int grob(int row[], int size) {
int diff = row[1] - row[0];
for (int i = 2; i < size; ++i) {
if (row[i] - row[i - 1] != diff) {
return 0;
}
}
return 1;
}


int laba7()
 {
     long int sdvig(long int N, int K) {
    for (int i = 0; i < K; i++) {
        N = N << 1;
    }
    return N;
}
    long int N;
    int K;

    printf("Ввести целое число: ");
    scanf("%ld", &N);

    printf("Ввести число разрядов: ");
    scanf("%d", &K);

    long int result = sdvig(N, K);

    printf("Результат: %ld\n", result);

    return 0;
}




#endif /* LABS_H */ 
