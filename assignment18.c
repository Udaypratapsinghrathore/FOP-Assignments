#include <stdio.h>
#include <string.h>

int main() {
    char str[100], str2[100], rev[100];
    int i, len = 0, flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter another string: ");
    scanf("%s", str2);

    // Length
    len = strlen(str);
    printf("Length of string = %d\n", len);

    // Reverse
    for(i = 0; i < len; i++) {
        rev[i] = str[len - i - 1];
    }
    rev[len] = '\0';
    printf("Reversed string = %s\n", rev);

    // Palindrome check
    for(i = 0; i < len; i++) {
        if(str[i] != rev[i]) {
            flag = 0;
            break;
        }
    }
    if(flag)
        printf("The string is a Palindrome\n");
    else
        printf("The string is NOT a Palindrome\n");

    // Equality check
    if(strcmp(str, str2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");

    // Substring check
    if(strstr(str, str2) != NULL)
        printf("Substring found in main string\n");
    else
        printf("Substring not found\n");

    return 0;
}