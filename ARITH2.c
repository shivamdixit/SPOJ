#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tc, i, j;
    long long int answer, num, prevNum;
    char arr[1000], temp[50], line[10];

    scanf("%d\n", &tc);

    while (tc--) {

        gets(arr);  // Read the string
        gets(line); // Eat the empty line

        j = answer = num = prevNum = 0;
        for (i = 0; arr[i] != '='; i++) {

            switch (arr[i]) {

                case '+':
                answer =
            }
        }

        puts(arr);
    }

    return 0;
}