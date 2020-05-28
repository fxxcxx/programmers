#include <iostream>
#include <string>
using namespace std;
 
 //문자열로 변환해서 풀기
 
int solution(int n)
{
    int answer = 0;
    string num = to_string(n);
    
    for(int i = 0; i < num.size(); i++)
    {
        answer += num[i]-'0'; //char 형식의 int 값을 실제 int값으로 변환하기 위해 '0'의 아스키 값을 뺀다.
    }
 
    return answer;
}
