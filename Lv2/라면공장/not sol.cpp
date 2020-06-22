#include <string>
#include <vector>

using namespace std;

int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
    int answer = 0;
    for(int i=0; i<dates.size();i++){
    stock -= dates[i];
        if(stock<dates[i]){
        stock += supplies[i];
            answer++;
    }
    }
    return answer;
}

//test만 통과하고 다른건 다 틀림..^^
