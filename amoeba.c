#include <stdio.h>

int main() {
    int colonya;
    int hour;
    
    scanf("%d %d", &colonya, &hour);
    for ( int i = 0; i < hour; i++ ) {
        colonya *= 2;
        printf("%dh => %d amoeba(s)\n", i+1, colonya);
    }
    
    return 0;
}


// Считать с клавиатуры два целых положительных числа - количество одноклеточных организмов в чашке Петри и 
// количество часов - время проведения эксперимента. Каждый час, каждая клетка делится на 2 клетки. 
// Вывести на экран количество клеток в чашке петри на каждый час эксперимента.

// Пример ввода
// 5 2
// Пример вывода
// 1h => 10 amoeba(s)
// 2h => 20 amoeba(s)