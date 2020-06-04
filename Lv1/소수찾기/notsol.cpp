#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    long long  answer = 0;
    long long  count = 0;
    
    for(int i=1; i<=n; i++){
    for(int j=1; j<=n; j++)
    {
        if(i%j==0)
            count ++;
    }
        if(count==2)
            answer++;
            count = 0;
    }
    
    return answer;
}
