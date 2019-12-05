// // • количества  элементов массива, которые превосходят по модулю заданное число А;
// #include <stdio.h>
// #include <math.h>
// #include <stdlib.h>
// #include <time.h>
// const int N = 10;
// int main()
// {
// srand(time(NULL));
// int A[N], i, count = 0, a = -100, b = 100, c = 50;

// for (i = 0; i < N; ++i)
// 	{
// 	A[i] = a + rand() % (b - a);
// 	printf("A[%d] = %d\n", i, A[i]);
//  }
//  for (i = 0; i < N; ++i)
//  {
//  	if (abs (A[i]) > c)
//  	{
//  		++count;
//  	}
// }
// printf("count = %d\n", count);
// return 0;
//  }