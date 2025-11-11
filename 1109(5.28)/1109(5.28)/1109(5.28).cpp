#include <stdio.h>
#include <ctype.h>

char toggle_case(char ch) {
    if (ch >= 'a' && ch <= 'z')       
        return ch - 'a' + 'A';
    else if (ch >= 'A' && ch <= 'Z')  
        return ch - 'A' + 'a';
    else
        return ch;                    
}

int main(void) {
    char c;
    printf("Enter a character: ");
    if (scanf_s(" %c", &c) == 1) {
        printf("Result: %c\n", toggle_case(c));
    }
    return 0;
}
