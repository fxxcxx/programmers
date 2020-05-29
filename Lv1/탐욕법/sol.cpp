#include <string>
#include <vector>

using namespace std;


int solution(int n, vector<int> lost, vector<int> reserve) 
{
    vector<int> list(n, 1); //1로 초기화된  n개의 원소를 갖는 vector list
    int answer=0;

    for (int i = 0; i < lost.size(); i++) {
        list[lost[i] - 1]--;
    }
    for (int i = 0; i < reserve.size(); i++) {
        list[reserve[i] - 1]++;
    }

    
    for (int i = 0; i < list.size(); i++)
    {
        if (list[i] == 0)
        {
            if (i != 0 && list[i - 1] == 2) {
                list[i - 1]--;
                list[i]++;
            }
            else if (i != list.size() - 1 && list[i + 1] == 2) {
                list[i + 1]--;
                list[i]++;
            }
        }
    }
    
    for (int i = 0; i < list.size(); i++) {
        if (list[i] !=0) {
            answer++;
        }
    }
    return answer;
}
