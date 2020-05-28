#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    
    for(int i=0; i<s.size();i++)
    {
        for(int j=i+1;j<s.size();j++){
            if(s[i]<s[j]){ //ascii code를 기준으로 비교
                int r=s[i];
                s[i]=s[j];
                s[j]=r;
            }
        }
    }
    answer = s;
    
    return answer;
}
