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
        if (arr[i])
            for(int j=i+i; j<=num; j+=i)
                arr[j] = false;
    }
}

bool isNum(int i, string num){
    string abc = to_string(i); //어차피 두개는 string, 문자열로 비교할것임
    for(int i=0; i<abc.size(); i++){
        int flag = false;
        for(int j=0; j<num.size(); j++){
            if(abc.at(i) == num.at(j)){ //at 넣는거 까먹지 말고! at은 소괄호 쓴다.
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
    int max = stoi(numbers); //max까지의 소수 판별을 위해 string을 int로 바꿈
    
    isPrime(max);
    for(int i=0; i<=max; i++ ){
        if(arr[i] && isNum(i,numbers) ) //arr 배열의 TF를 비교
        answer++;
    }
    return answer;
}
