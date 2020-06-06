#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

bool *arr; //전체로 설정해야 main 오류 안남

void isPrime(int num){
    arr = new bool[num+1];
    arr[0] = false;
    arr[1] = false;
    
        for(int i=2; i<=num; i++)
        arr[i] = true; //빼먹음
    
    for(int i=2; i<=num; i++){
        if (arr[i])//true이면
            for(int j=i+i; j<=num; j+=i)
                arr[j] = false;
    }
}

bool isNum(int i, string num){
    string abc = to_string(i);
    for(int i=0; i<abc.size(); i++){
        int flag = false;
        for(int j=0; j<num.size(); j++){
            if(abc.at(i) == num.at(j)){ //at
                flag = true;
                num.at(j) = ' ';
                break;
                }
        }
         if(!flag) // 한번이라도 일치하는 문자가 없는 경우 false 리턴
            return false;
    }
    return true;
}

int solution(string numbers) {
    int answer = 0;
    
    sort(numbers.begin(), numbers.end(), greater<int>());
    int max = stoi(numbers);
    
    isPrime(max);
    for(int i=0; i<=max; i++ ){
        if(arr[i] && isNum(i,numbers) )
        answer++;
    }
    return answer;
}
