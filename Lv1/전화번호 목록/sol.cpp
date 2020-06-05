#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool solution(vector<string> phone_book) {
    bool answer = true;
    
     sort(phone_book.begin(), phone_book.end());
    for(int i=1; i<phone_book.size();i++){ //1로 안하면 자기 자신도 비교해서 무조건  false;
    if(phone_book[0]==phone_book[i].substr(0,phone_book[0].size())){
        return false;}
    else return answer;
    }
}
