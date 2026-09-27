
#include <bits/stdc++.h>
#include<io.h>
using namespace std;

int findDigit(long long number) {
    if (number == 0) return 1;
    return log10(abs(number)) + 1;
}

long long findMinInvertedNumber(long long num) { 
    int totalDigit = findDigit(num);
    vector<int> v;
    long long tempNum = num; 
    
    while (totalDigit > 0) {
        int digit = tempNum % 10;
        tempNum = tempNum / 10; 
        
        int newDigit = digit;
        if (digit >= 5) {
            newDigit = 9 - digit;
        }
        
        v.push_back(newDigit);
        totalDigit--;
    }

    reverse(v.begin(), v.end());
    
    if (v[0] == 0) { 
        v[0] = 9;
    }
	
    long long result = 0;
    for (int digit : v) {
        result = (result * 10) + digit;
    }
    
    return result;
}

int main() {
    long long number;
    cin >> number;

    cout << findMinInvertedNumber(number) << "\n";

    return 0;
}
