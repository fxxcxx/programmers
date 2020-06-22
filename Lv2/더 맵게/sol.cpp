#include <string>
#include <vector>
#include<queue>

using namespace std;

int solution(vector<int> scoville, int K) {
    int answer = 0;
    priority_queue<int, vector<int>, greater<int>> pq; //우선순위 큐, 오름차순 자동 정렬
    
    for(int i=0; i<scoville.size(); i++){
        pq.push(scoville[i]);
    }
    
    while(pq.top()<K){
        
        if(pq.size()<=1)
        {return -1;}
        
        int i, j=0;
        
        i=pq.top();
        pq.pop();
        j=pq.top();
        pq.pop();
        
        pq.push(i+j*2);
        answer ++;
    }
    
    return answer;
}
