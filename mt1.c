#include <stdio.h>
#include <stdlib.h>
#include <time>
const int N = 10;
int main()
{
srand = (time(NULL));
int A[N], i, sum;
for (i = 0; i < N; ++i)
{
	A[i] = rand % 100;
	printf("A[%d] = %d\n", i, A[i]);
}
return 0;
}
