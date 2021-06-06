// C++ program to count number of rectangles
// in a n x m grid
#include <bits/stdc++.h>
using namespace std;

int rectCount(int n, int m)
{
	return (m * n * (n + 1) * (m + 1)) / 4;
}

/* driver code */
int main()
{
	int n = 5, m = 4;
	cout << rectCount(n, m);
	return 0;
}

