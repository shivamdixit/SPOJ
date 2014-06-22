#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int tc, i, count;
    unsigned long long int num, answer;

    scanf("%d", &tc);

    while (tc--) {

        answer = 0;
        i = 1;
        scanf("%llu", &num);

        while (1) {
            count = (num/(pow(5, i)));
            answer = (answer + count);

            if (!count) {
                break;
            } else {
                i++;
            }
        }

        printf("%llu\n", answer);
    }

    return 0;
}