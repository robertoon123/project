#include "definitions.h"
void process_character(int c, int *prev_c, int *flag, int *cnt, int *found_a) {
 if (c == ' ' || c == '.' || c == '\n' || c == ',') {
 // найден разделитель
 if (*flag == YES && *found_a == YES) {
 // слово закончилось и в нем есть буква 'a'
 (*cnt)++;
 }
 *flag = NO;
 *found_a = NO; // сбрасываем индикатор для нового слова
 } else {
 // найдена буква
 if (c == 'a') {
 *found_a = YES; // устанавливаем индикатор, если буква 'a'
 }
 *flag = YES;
 }
 *prev_c = c;
}
