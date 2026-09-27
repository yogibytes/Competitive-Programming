/*          problem introduction 
One day three best friends Petya, Vasya and Tonya decided to form a team and take part in programming contests. Participants are usually offered several problems during programming contests. Long before the start the friends decided that they will implement a problem if at least two of them are sure about the solution. Otherwise, the friends won't write the problem's solution.

This contest offers n problems to the participants. For each problem we know, which friend is sure about the solution. Help the friends find the number of problems for which they will write a solution.


Input

3
1 1 0
1 1 1
1 0 0

Output

2

*/


#include <bits/stdc++.h>
using namespace std;

int main (){
    /*
    take the nuber of the problem 
    then for each problem 1 to n 
        ask if the  'A', 'B' , 'C' min two of them KNoow the solution 
        1 means Yes
        0 means No
    */
    int numberOfProblems;
    cin >> numberOfProblems;
    int totalProblemSolved = 0;
    vector<int> ans(3);
    while(numberOfProblems--){
        int count = 0;
        for(int i = 0; i < 3;i++)
            {
             cin >> ans[i];
             if(ans[i]==1)
                count++;
            }
            if(count >= 2){
                totalProblemSolved++;
            }
    }
    cout << totalProblemSolved;

    return 0;
}