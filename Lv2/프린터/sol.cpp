#include <string>
#include <vector>
#include <queue>
#include <iostream>
 
using namespace std;
 
 
int solution(vector<int> priorities, int location) {
    int answer = 0;
    priority_queue <int> pq;
    queue<pair<int,int>> q;
    
    for(int i=0; i<priorities.size(); i++){
        pq.push(priorities[i]);
        q.push(make_pair(i,priorities[i]));
    }
    while(!q.empty()){
        int i=q.front().first;
        int j=q.front().second;
        q.pop();
        cout<<i<<j<<endl;
        cout<<pq.top()<<endl;
        
        if(j==pq.top()){
            pq.pop();
            answer+=1;
            
            if(i==location){
                break;
            }
        }
        else{
            q.push(make_pair(i,j)); //배열 값은 전에 그대로 들어감 ex.[0][1]
        }
    }

    return answer;
}
