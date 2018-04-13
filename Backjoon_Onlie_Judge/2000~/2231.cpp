#include <iostream>

using namespace std;

int digitSum(int input) {
	int digitSum = 0, temp = input;
	while (input != 0) {
		digitSum += input%10;
		input/=10;
	}
	return digitSum;
}

int findGenerator(int input) {
	return input + digitSum(input);
}

int main () {
	int input;
	bool isFound = false;
	scanf("%d", &input);
	
	for(int i = 1; i < input; i++) {
		int tmp = findGenerator(i);
		if(tmp == input) {
			printf("%d\n", i);
			isFound = true;
			return 0;	
		}
	}
	if(isFound == false) printf("0\n");
	return 0;
}
