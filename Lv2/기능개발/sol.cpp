#include <string>
#include <vector>
#include <queue>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    queue<int> q;
    
    for(int i=0; i<progresses.size(); i++){
        int day = 0;
        while(progresses[i]<100){
            progresses[i] += speeds[i];
            day++;
        }
        q.push(day);
    }
    //day 구현을 쉽게 하기
   
    int done=1;
     int cur = q.front();
    q.pop();
    
    while(!q.empty()){
        
    if(cur >= q.front()){
     q.pop();   
    done ++;
    }
        
        else{
            answer.push_back(done);
            done = 1;
            cur = q.front();
            q.pop();
        }
    } //괄호조심
        answer.push_back(done);
    return answer;
}
