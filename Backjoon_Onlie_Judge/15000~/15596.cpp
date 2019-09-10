#include <vector>
long long sum(std::vector<int> &a) {
	long long ans = 0;
	std::vector<int>::iterator it;
	for (it = a.begin(); it != a.end(); ++it) {
		ans += *it;
	}
	return ans;
}
