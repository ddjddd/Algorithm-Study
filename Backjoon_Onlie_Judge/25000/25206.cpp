#include <iostream>

using namespace std;

double getScore(string s) {
    double ret = 0.0f;
    switch (s[0]) {
    case 'A':
        ret = 4.0f;
        break;
    case 'B':
        ret = 3.0f;
        break;
    case 'C':
        ret = 2.0f;
        break;
    case 'D':
        ret = 1.0f;
        break;
    default:
        ret = 0.0f;
        break;
    }

    if (ret > 0.0f) {
        if (s[1] == '+')
            ret += 0.5f;
    }

    return ret;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed;
    cout.precision(6);

    string s;
    double sub;
    string score;

    double sum = 0.0f;
    double len = 0;

    for (int i = 0; i < 20; i++) {
        cin >> s >> sub >> score;

        if (score[0] != 'P') {
            sum += sub * getScore(score);
            len += sub;
        }
    }

    cout << sum / len << endl;
    return 0;
}