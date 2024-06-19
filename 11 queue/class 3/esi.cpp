#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool matchAStar(char *str) {
    while (*str == 'a') {
        str++;
    }
    return (*str == '\0');
}

bool matchBStar(char *str) {
    while (*str == 'b') {
        str++;
    }
    return (*str == '\0');
}

bool matchAdd(char *str) {
    int len = strlen(str);
    if (len < 3)
        return false;
    for (int i = 0; i < len - 2; i++) {
        if (str[i] == 'a' && str[i + 1] == 'd' && str[i + 2] == 'd') {
            return true;
        }
    }
    return false;
}

bool matchAStarB(char *str) {
    bool foundA = false;
    while (*str != '\0') {
        if (*str == 'a') {
            foundA = true;
        } else if (*str == 'b' && foundA) {
            str++;
            while (*str == 'b') {
                str++;
            }
            return (*str == '\0');
        } else {
            return false;
        }
        str++;
    }
    return false;
}

bool matchBStarA(char *str) {
    bool foundB = false;
    while (*str != '\0') {
        if (*str == 'b') {
            foundB = true;
        } else if (*str == 'a' && foundB) {
            str++;
            while (*str == 'a') {
                str++;
            }
            return (*str == '\0');
        } else {
            return false;
        }
        str++;
    }
    return false;
}

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%s", input);
    int x = 0;

    if (matchAStar(input)) {
        printf("Matches 'a*'\n");
        x = 1;
    }

    if (matchBStar(input)) {
        printf("Matches 'b*'\n");
        x = 1;
    }
    if (matchAdd(input)) {
        printf("Matches 'add'\n");
        x = 1;
    }
    if (matchAStarB(input)) {
        printf("Matches 'a*b'\n");
        x = 1;
    }
    if (matchBStarA(input)) {
        printf("Matches 'b*a'\n");
        x = 1;
    }
    if (x == 0) {
        printf("Doesn't match any string.");
    }
    return 0;
}