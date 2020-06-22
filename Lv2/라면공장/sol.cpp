#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int stock, vector<int> dates, vector<int> supplies, int k) {
    int answer = 0;
    priority_queue<int, vector<int>, less<int>> pq;
    int index =0;
    
    for(int i=0; i<k; i++){
        if(dates[index]==i){
            pq.push(supplies[index]); //i가 아니라 index임
            index++;
        }
        if(stock==0){
            stock=pq.top();
            pq.pop();
            answer++;
        }
        stock--;
    }
    
    return answer;
}
