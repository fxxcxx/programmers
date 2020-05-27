#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    answer.push_back(arr[0]); //arr 첫번째 원소 추가
    
    for(int i=1; i<arr.size(); i++){ //사이즈 조건 <= 가 아닌 <
        if(arr[i]!=arr[i-1])
            answer.push_back(arr[i]); //push_back 함수를 몰라서 answer에 값을 못넣었다. vector 멤버함수 조심
    }
    return answer;
}
