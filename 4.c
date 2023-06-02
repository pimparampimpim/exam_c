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
    return int_arr;
}

int main(){
  char *temp = "12345";
  changeDigits(temp);
}