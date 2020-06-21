#include <string>
#include <vector>
#include <queue>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
    int time = 0;
    int sum=0;
    int i=0;
    queue<int> q; //FIFO형
    
    while(1){ //무한루프
        time ++;
        if(q.size()==bridge_length){ //size는 queue의 멤버함수
            sum -= q.front(); //처음 들어온 값을 뺌
            q.pop();
        }
        
        if(weight>=sum+truck_weights[i]){ //최대중량보다 작으면
            if(i==truck_weights.size()-1)
            {
                time += bridge_length;
                break; //무한루프 break
            }
          q.push(truck_weights[i]); //vector 값은 대괄호!!!!!
            sum += truck_weights[i];
            i++;
        }
        else{ //최대중량보다 크면
            q.push(0); //0 푸쉬해서 밀어줌(0은 쓰레기 값)
        }
    }
    return time;
}
