#include <bits/stdc++.h>
using namespace std;

int main (){
    int a = 0;
    int b = 0;
    int count =0;

    vector< vector<int>> matrix(5,vector<int>(5));
    for( auto& row :matrix){
        for(int &elem :row){
            cin >> elem;
        }
    }
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5;j++){
            if(matrix[i][j]==1){
                a = i;
                b = j;
            }
        }
    }

    // approach one
//     if((!(a<0) && !(b<0)) && (!(a>5) && !(b>5)) ){
//         if(a>=2){
//             while(a!=2){
//                 a--;
//                 count++;
//                 // cout << "a>=2 , count is: " << count<<endl;
//             }
//         }if(a<2){while(a!=2){
//             a++;
//             count++;
//             // cout << "a<2 , count is: " << count<<endl;
//         }}
        
//         if(b>=2){
//             while(b!=2){
//                 b--;
//                 count++;
//                 // cout << "b>=2 , count is: " << count<<endl;
//             }
//         }if(b<2){while(b!=2){
//             b++;
//             count++;
//             // cout << "b<2 , count is: " << count << endl;
//         }
//     }
// }




// approach 2

    count = abs(a - 2) + abs(b - 2);
    cout <<count;

    return 0;
}