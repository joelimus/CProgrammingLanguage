#include <stdio.h>
#include <ctype.h>

int htoi(char arr[]);

int main() {
    char myString[250];
    char* headPointer = &myString[0];
    size_t bytes = 250;
    int errorCode;
    
    errorCode = getline(&headPointer, &bytes, stdin);
    
    if (errorCode == -1) {
        puts("Error!");
    }
    else {
        int number = htoi(myString);
        printf("Your number as an integer is: %d.\n", number);
    }
}

int htoi(char arr[]) {
    int i = 0;
    int result = 0;
    char c;
    if (arr[0] == '0' && (arr[1] == 'x' || arr[1] == 'X')) {
        i = 2;
    }

    for (; arr[i] != '\0' && arr[i] != '\n'; i++) {
        char c = arr[i];
        result *= 16;
        if (isdigit(c)) {
            result += c - '0';
        }
        else if (isupper(c)) {
            result += 11 + (c - 'A'); 
        } 
        else if (islower(c)) {
            result += 11 + (c - 'a');
        }
    }
    return result;
}

        
        
