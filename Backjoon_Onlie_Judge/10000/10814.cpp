#include <algorithm>
#include <cstdio>
#include <iostream>
#include <string>
#include <utility>
#include <vector>

using namespace std;

struct person {
    int age;
    int num;
    char name[201];
};

bool comp(const person &x, const person &y) {
    if (x.age == y.age) {
        return x.num < y.num;
    }
    return x.age < y.age;
}

int main() {
    int num;
    scanf("%d", &num);

    vector<person> v;
    for (int i = 0; i < num; i++) {
        person t;
        scanf("%d %s", &t.age, t.name);
        t.num = i;
        v.push_back(t);
    }

    sort(v.begin(), v.end(), comp);
    vector<person>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++) {
        person t = *iter;
        printf("%d %s\n", t.age, t.name);
    }
    return 0;
}
