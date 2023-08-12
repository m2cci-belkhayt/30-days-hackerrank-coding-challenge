#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*
 * The first line contains an integer that you must sum with .
 * The second line contains a double that you must sum with .
 * The third line contains a string that you must concatenate with .
 */
int main()
{
	int i = 4;
	double d = 4.0;
	char s[] = "HackerRank ";
	int l;
	double j;
	char p[500];
	scanf("%d", &l);
	scanf("%lf", &j);
	getchar(); /* the getchar() her will prevent reading the space left by scanf by the fgets*/
	fgets(p, sizeof(p), stdin);
	if (p[strlen(p) - 1] == '\n')
	{
		p[strlen(p) - 1] = '\0';
	}
	printf("%d\n", l+i);
	printf("%.1lf\n", d+j);
	printf("%s\n", p);														        return 0;
}
