#include <string>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

bool isPrime(int num){
    if(num<2)
        return false;
        for(int i=2; i<=sqrt(num); i++){
            if(num%i == 0)
                return false;
        return true;
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
    
    //wrong
    int max = stoi(numbers);
    for(int i=0; i<=max; i++ ){
        if(isPrime(i) && isNum(i,numbers) ){answer++;
    }
    }
    return answer;
}
