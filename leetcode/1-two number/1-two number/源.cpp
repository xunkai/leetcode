/*Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

Example:

Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return[0, 1].
*/

#include <iostream>
#include <stdio.h>
#include <map>
#include <vector>
using namespace std;
#define N 100000

int number = 0, tar = 0;

vector<int> twoSum(vector<int>& nums, int target);

int main() {
	freopen("a.txt", "r", stdin);
	vector<int> a;
	scanf("%d", &number);
	int temp = 0;
	for (int i = 0; i < number; i++) {
		scanf("%d", &temp);
		a.push_back(temp);
	}
	scanf("%d", &tar);

	vector<int> result;
	result = twoSum(a,tar);
	printf("%d %d\n", result[0], result[1]);

	return 0;
}
/*
int* twoSum(int* nums, int numsSize, int target) {
	int *result = (int*)malloc(sizeof(int) * 2);
	for (int i = 0; i < numsSize; i++) {
		for (int j = i + 1; j < numsSize; j++) {
			if (nums[i] + nums[j] == target) {
				result[0] = i, result[1] = j;
				return result;
			}
		}
	}

	return result;
}*/
vector<int> twoSum(vector<int>& nums, int target) {
	map<int, int> hash;
	vector<int> result;

	for (int i = 0; i < nums.size(); i++) {
		int numToFind = target - nums[i];
		if (hash.find(numToFind) != hash.end()) {
			result.push_back(hash[numToFind] );
			result.push_back(i );

			return result;
		}
		hash[nums[i]] = i;
	}
	return result;

}