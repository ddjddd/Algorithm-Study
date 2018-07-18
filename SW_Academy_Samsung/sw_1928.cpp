#include <iostream>

using namespace std;

int main () {
    int tC; cin>>tC;
    for(int tc = 1; tc <= tC; tc++) {
        char buf[100001];
        scanf("%s", buf);
        printf("#%d ", tc);
        for(int i = 0; buf[i] != '\0'; i+=4) {
            char t[4] = {buf[i], buf[i+1], buf[i+2], buf[i+3]};
            for(int i =0; i < 4; i++) {
                if(t[i] >= 'A' && t[i] <= 'Z') t[i] -= 'A';
                else if(t[i] >= 'a' && t[i] <= 'z') t[i] -= 'a'-26;
                else if(t[i] >= '0' && t[i] <= '9') t[i] -= '0'-52;
                else if(t[i] == '+') t[i] -= '+' - 62;
                else if(t[i] == '/') t[i] -= '/' - 63;
            }
            char ra = (t[0]<<2) + ((t[1]<<2)>>6);
            char rb = (t[1]<<4) + ((t[2]<<2)>>4);
            char rc = (t[2]<<6) + t[3];
            printf("%c%c%c", ra, rb, rc);
        }
        printf("\n");
    }
    return 0;
}
