#include <stdio.h>
#define MAXLINE 1000


void originalFunction(char arr[], int size);
void noAndOrFunction(char arr[], int size);

int main() {
    char line[MAXLINE];
    originalFunction(line, MAXLINE);
    line[0] = '\0';
    noAndOrFunction(line, MAXLINE);
}

void originalFunction(char arr[], int size) {
    char c;
    int i;
    for (i=0; i<size-1 && (c=getchar()) != '\n' && c != EOF; ++i) {
        arr[i] = c;
    }

    arr[i] = '\0';
    printf("%s \n", arr); 
}

void noAndOrFunction(char arr[], int size) {
    int i = 0;
    char c;
    while (i<size-1) {
        c = getchar();
        if (c == '\n') {
            break;
        }
        if (c == EOF) {
            break;
        }
        arr[i] = c;
        i++;
    }
    arr[i] = '\0';
    printf("%s \n", arr);
}


