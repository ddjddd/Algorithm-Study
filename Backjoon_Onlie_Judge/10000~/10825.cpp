#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstdio>
#include <string>

using namespace std;

struct person {
	string name;
	int a;
	int b;
	int c;	
};

bool comp (const person& x, const person& y) {
	if(x.a == y.a) {
		if(x.b == y.b) {
			if(x.c == y.c) {
				return x.name < y.name;
			}			
			return x.c > y.c;
		}
		return x.b < y.b;
	}
	return x.a > y.a;
}

int main () {
	int num;
	scanf("%d", &num);
	
	vector<person> v;	
	for(int i = 0; i < num; i++) {
		person t;
		char buf[201];
		scanf("%s %d %d %d", buf, &t.a, &t.b, &t.c);
		t.name = buf;
		v.push_back(t);	
	}
	
	sort(v.begin(), v.end(), comp);
	for(int i = 0; i < num; i++) {
		cout << v[i].name << '\n';
	}
	
	return 0;
}
