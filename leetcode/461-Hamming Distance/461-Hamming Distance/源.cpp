/*The Hamming distance between two integers is the number of positions at which the corresponding bits are different.

Given two integers x and y, calculate the Hamming distance.

Note:
0 ¡Ü x, y < 231.

Example :

	Input : x = 1, y = 4

		Output : 2

			 Explanation :
						 1   (0 0 0 1)
						 4   (0 1 0 0)
						 ¡ü   ¡ü

						 The above arrows point to positions where the corresponding bits are different.
*/


#include <cstdio>
#include <iostream>
using namespace std;


int hammingDistance(int x, int y);

int main() {
	freopen("a.txt", "r", stdin);
	int x, y;
	scanf("%d %d", &x, &y);
	int ans = hammingDistance(x, y);
	printf("%d\n", ans);

	return 0;
}


int hammingDistance(int x, int y) {
	int result = 0;
	for (int i = 1; i <= 32; i++) {
		if (x % 2 != y % 2)
			result++;
		x >>= 1;
		y >>=1;
	}
	return result;
}