#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
 * Function to create a space at specified
 * index
 */
void createSpace(char * string, int index)
{
    int len = strlen(string);

    string[len+1] = '\0';

    for (len; len >= index; len--) {
        string[len] = string[len-1];
    }
}

void deleteSpace(char * string, int index)
{
    int i;

    for (i = index; string[i] != '\0'; i++) {
        string[i] = string[i+1];
    }
}

int convertToCPP(char * string)
{
    int i, j;

    for (i = 0; string[i] != '\0'; i++) {

        // If an uppercase char is encountered
        if (isupper(string[i])) {

            // First char will never be uppercase
            if (i == 0) {
                return 0;
            }

            createSpace(string, i);
            string[i+1] = tolower(string[i+1]);
            string[i] = '_';
        }
    }

    return 1;
}

int convertToJava(char * string)
{
    int i, count = 0;
    char result[200];

    for (i = 0; string[i] != '\0'; i++) {

        // Uppercase characters are not allowed
        if (isupper(string[i])) {
            return 0;
        }

        // Underscores at first and last pos not allowed
        if (string[i] == '_') {

            if (i == 0 || string[i+1] == '\0' || string[i+1] == '_' || isupper(string[i+1])) {
                return 0;
            }

            deleteSpace(string, i);
            string[i] = toupper(string[i]);
        }
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    char string[200];

    while (scanf("%s", string) != EOF) {

        if (strchr(string, '_') != NULL) {
            // It is CPP identifier
            if (convertToJava(string)) {
                printf("%s\n", string);
            } else {
                printf("Error!\n");
            }

        } else {
            // It is Java identifier
            if (convertToCPP(string)) {
                printf("%s\n", string);
            } else {
                printf("Error!\n");
            }
        }
    }

    return 0;
}