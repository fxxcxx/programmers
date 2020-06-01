#include <string>
#include <vector>
#include<algorithm>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<int> answer;
    
    vector<int>answer1{1,2,3,4,5};
    vector<int>answer2{2,1,2,3,2,4,2,5};
    vector<int>answer3{3,3,1,1,2,2,4,4,5,5};
    
    vector<int>score(3);
    
    
    for(int i=0; i<answers.size(); i++)
    {
    int i1 = i%5;
    int i2 = i%8;
    int i3 = i%10;
        
        if(answers[i]==answer1[i1]){score[0]++;}
        if(answers[i]==answer2[i2]){score[1]++;}
        if(answers[i]==answer3[i3]){score[2]++;}
    }
    
   int maxcounter = max(score[0], max(score[1],score[2]));
    
    for(int i=0; i<3; i++){
   if(maxcounter == score[i]) {answer.push_back(i+1);}
    }
    
    return answer;
}
