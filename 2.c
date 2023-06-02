#include <stdio.h>

int sumFoo(int n) {
    int sum=0;
    for (int i=0; i<=n; i++) {
        sum+=i*i*i*i;//ищем сумму степеней
    }
    return sum;
}

int main() {//проверяем
    int n;
    scanf("%d", &n);
    int otvet= sumFoo(n);
    printf("%d", otvet);
    return 0;
}