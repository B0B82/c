#include <stdio.h>

int main() {
    int hometeam, awayteam;

    scanf("%d %d", &hometeam, &awayteam);

    if ( hometeam > awayteam ) {
        printf("Home team wins\n");
    } else if ( hometeam < awayteam ) {
        printf("Away team wins\n");
    } else {
        printf("Draw\n");
    }

    return 0;
}

// Считать с клавиатуры 2 целых положительных числа, количество забитых голов хозяевами 
// и гостями на футбольном матче. Вывести на экран результат матча «Home team wins», 
// «Away team wins», «Draw».

// Пример ввода
// 7 0
// Пример вывода
// Home team wins