#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int * changeDigits(char *lines) {
    int *int_arr;
    int i, offset, index;

    int_arr = malloc(sizeof(int) * (strlen(lines) / 2));
    index = 0;
    while(sscanf(lines, "%d%n", &i, &offset) == 1) {
        lines += offset;
        int_arr[index++] = i+1;
    }
    for(int i = 0; i < 5; i++){
        printf("%d ", *(int_arr + i));
    }
}

int main(){
  char *temp = "1 2 3 4 5";
  changeDigits(temp);
}
