#include <string>
#include <vector>
#include<iostream>

using namespace std;

bool solution(int x) {
    bool answer = true;
    int sum=0;
    int n=x;
    
  while(x>0){
      sum += x%10;
      x = x/10;
  }
    
    if(n%sum == 0)
    return answer;
    else return false;
}
