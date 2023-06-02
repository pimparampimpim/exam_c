#include <stdio.h>

int main () {
    int stop;
    int stop1;
    int n=0;
    scanf("%d", &stop);
    do {//делаем пока
        scanf("%d", &stop1);//вводим числа
        if (stop*2==stop1) {
        n+=1;//счетчик   
        }
        stop=stop1;
    } while (stop1!=0);//а вот и наше условие ввода если переменная СТОП будет равна нулю =>стоп
    printf("%d", n);//даем миру узреть наш ответ
    return 0;
}