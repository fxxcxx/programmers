#include <string>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer=arr;

    sort(arr.begin(),arr.end());

    for(int i=0;i<answer.size();i++){
        if(answer[i]==arr[0]){
            answer.erase(answer.begin()+i);
            break;
        }   
    }

    if(answer.empty())
        answer.push_back(-1);

    return answer;
}
