#include <iostream>

using namespace std;

int main () {
     	int num; cin >> num;
        for(int i = 1; i <= num; i++) {
            int a = i/100, b = (i%100)/10, c = i%10;
        	if(a) a = a%3==0?1:0;
            if(b) b = b%3==0?1:0;
            if(c) c = c%3==0?1:0;
            int count = a+b+c;
            if(count) for(int k = 0; k < count; k++) printf("-");
            else printf("%d", i);
            printf(" ");
        }
    return 0;
}
