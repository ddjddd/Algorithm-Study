#include <cstdio>
#include <vector>

using namespace std;

int main(){
	int m,n;
	vector<int> v;
	
	scanf("%d%d",&m,&n);
	printf("<");
	for(int i=1;i<=m;i++)
    	v.push_back(i);
    
    int x;
	while(v.size()>1){
		x+=n-1;
		x%=v.size();
		printf("%d, ",v[x]);
		v.erase(v.begin()+x);
	}
	
	x+=n-1;
    x%=v.size();
	printf("%d>\n",v[x]);
	return 0;
}
