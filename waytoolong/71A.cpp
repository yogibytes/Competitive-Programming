#include <bits/stdc++.h>
using namespace std;


string findShortWord(string word){
    string shortWord;
    shortWord = string(1,word[0]) + to_string(word.size()-2) + word[word.size()-1];
    return shortWord;
}
int main(){

    int numberOfWords;
    string word;
    cin >> numberOfWords;

    while(numberOfWords--){
        cin >> word;
        if(word.size() > 10){
            string shortWord = findShortWord(word);
            cout << shortWord<<"\n";
        }else{
            cout << word<<"\n";
        }
    }
    return 0;
}