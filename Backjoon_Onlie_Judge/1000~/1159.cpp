#include <iostream>
#include <cstring>

using namespace std;

int main () {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin >> n;
    int arr[26] = {0, };
    char buf[31];
    while(n-- > 0) {
        cin >> buf;
        arr[buf[0]-'a']++;
    }
    bool flag = false;
    for(int i = 0; i < 26; i++) {
        if(arr[i] >= 5) {
            flag = true;
            cout << (char)(i+'a');
        }
    }
    if(!flag) cout << "PREDAJA\n";
    else  cout << '\n';

    return 0;
}