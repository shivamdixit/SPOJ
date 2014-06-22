#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
	char arr[250], res[250][250];
	int i, count, numOfCol, j, k, flag, len, l;

	while(1)
	{
		j=k=flag=0;

		scanf("%d", &numOfCol);

		if (numOfCol == 0) {
			break;
		}

		scanf("%s", arr);
		len = strlen(arr);

		for (i=0; arr[i] != '\0'; i++) {

			res[j][k] = arr[i];

			if (!flag) {
				k++;
			} else {
				k--;
			}

			if ((k == numOfCol) || k == -1) {
				j++;
				if (!flag) {
				    k--;
				} else {
				    k++;
				}

				flag = !flag;
			}
		}

		k=0;
		l=0;

		for (i=0; i<numOfCol; i++)
		{
		    for (k=0; k<j; k++)
			printf("%c", res[k][i]);
		}
		printf("\n");
	}
	return 0;
}
