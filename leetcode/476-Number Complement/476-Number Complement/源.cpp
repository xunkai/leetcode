/*Given a positive integer, output its complement number.The complement strategy is to flip the bits of its binary representation.

Note:

The given integer is guaranteed to fit within the range of a 32 - bit signed integer.
You could assume no leading zero bit in the integer¡¯s binary representation.

Example 1 :

Input : 5
	Output : 2
		 Explanation : The binary representation of 5 is 101 (no leading zero bits),
					   and its complement is 010. So you need to output 2
					   */


#include <iostream>
#include <cstdio>
using namespace std;

unsigned int quickPow(unsigned int x, int n);
unsigned int findComplement(unsigned int num);

int main() {
	freopen("a.txt", "r", stdin);
	unsigned int num;
	scanf("%d", &num);
	printf("%d\n", findComplement(num));
	
	return 0;
}


unsigned int findComplement(unsigned int num) {
	int start = 0;
	int end = 32;
	int mid = (start + end+1) / 2;
	while (start +1< end) {
		if (num < quickPow(2, mid))
			end = mid;
		else
			start = mid;

		mid = (start + end) / 2;
	}

	return quickPow(2,end)-num-1;
}

unsigned int quickPow(unsigned int x, int n) {
	if (n == 0)
		return 1;
	unsigned int result = 1;
	while (n != 0) {
		
		if (n &1 == 1) {
			result *= x;
		}
		x *= x;
		n >>= 1;
	}

	return result;
}