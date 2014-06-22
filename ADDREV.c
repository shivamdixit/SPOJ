#include <stdio.h>

int main(int argc, char const *argv[])
{
    int tc, num1, num2, rev1, rev2, ans, result;
    scanf("%d", &tc);

    while (tc--) {

        rev1 = rev2 = result = 0;
        scanf("%d %d", &num1, &num2);

        while (num1) {
            rev1 = ((rev1 * 10) + (num1 % 10));
            num1 /= 10;
        }

        while (num2) {
            rev2 = ((rev2 * 10) + (num2 % 10));
            num2 /= 10;
        }

        ans = rev1 + rev2;

        while (ans) {
            result = ((result * 10) + (ans % 10));
            ans /= 10;
        }

        printf("%d\n", result);
    }

    return 0;
}