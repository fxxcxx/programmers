#include <string>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int solution(vector<int> citations) {
    int answer = 0;

    std::sort(citations.begin(), citations.end()); //오름차순 0 1 3 5 6
    for (int i = 0; i < citations.size(); i++) {
        if (citations.size() - i <= citations[i]) {
            answer = citations.size() - i;
            cout<<answer;
            break;
        }
    }


    return answer;
}
