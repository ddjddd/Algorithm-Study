#include <iostream>
#include <string>

using namespace std;

int main () {
	string str1, str2;
	cin >> str1 >> str2;
	str1 = "0" + str1;
	str2 = "0" + str2;		// padding
	
	int len1, len2;
	len1 = str1.length();
	len2 = str2.length();
	
	int** mat = new int*[len1];
	for(int i = 0; i < len1; i++) {
		mat[i] = new int[len2]();
	}
	
	for(int i = 1; i < len1; i++) {
		for(int j = 1; j < len2; j++) {
			// dp[i][j] = max({ dp[i][j - 1], dp[i - 1][j], dp[i - 1][j - 1] + (s1[i] == s2[j]) });
			
			if(str2[j] == str1[i]) {
				mat[i][j] = mat[i-1][j-1] + 1;
			}
			else {
				mat[i][j] = max(mat[i][j-1], mat[i-1][j]);
			}
		}
	}
	cout << mat[len1-1][len2-1] << '\n';
	
	return 0;
}
