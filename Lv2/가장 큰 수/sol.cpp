#include <string>
#include <vector>
#include <algorithm>

using namespace std;

bool cmp(const string &a, const string &b){
        return a + b > b + a ? true : false ;
    }

string solution(vector<int> numbers) {
    vector<string> num;
    string answer = "";
    for(int i=0; i<numbers.size();i++){
        num.push_back(to_string(numbers.at(i)));
    }
    
    sort(num.begin(), num.end(), cmp);
    
    for (auto str : num) {
		answer += str;
	}
	if (answer[0] == '0')
		return "0";
    
	return answer;
}
