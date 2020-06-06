#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int count = -1;
    vector<int> num;
    
    for(int i=0; i<=n; i++){
        num.push_back(i);
    }
    
    for(int i=2; i<=n;i++){
        if (num[i]==0)
            continue;
        for(int j=i+i; j<=n; j+=i ){
            num[j] = 0;
        }
    }
    
    for(int a=1; a<=n; a++){
        if(num[a]!=0) count++;
    }
    return count;
}
