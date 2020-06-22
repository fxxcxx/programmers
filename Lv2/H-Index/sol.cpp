#include <string>
#include <vector>
#include<algorithm>

using namespace std;
int solution(vector<int> citations) {
	int answer = 0;
    int h=0;
    sort(citations.begin(), citations.end());
    
    while(1){
        int hcnt=0;
        for(int i=0; i<citations.size(); i++){
            if(citations[i]>=h){
                hcnt++;
            }
        }
            if(hcnt>=h){
                answer = h;
            }
        if(h==citations.size()){
            break;
        }
        h++;
        }
    return answer;
    }
