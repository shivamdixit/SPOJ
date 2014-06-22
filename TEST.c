#include <stdio.h>

int main(int argc, char const *argv[])
{
    long long int number;

    while (1) {
        scanf("%lld", &number);
        if (number == 42) {
            break;
        } else {
            printf("%llu\n", number);
        }
    }

    return 0;
}