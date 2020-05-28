#include <string>
#include <vector>
#include<iostream>

using namespace std;

bool solution(int x) {
int sum=0;

    //자릿수 문자열로 풀기
    string num = to_string(x); 
    for(int i = 0; i < num.size(); i++)
    {
     sum = sum + num[i]-'0';
    }
    
    if(x%sum == 0)
    return true;
    else return false;
}
