#include <bits/stdc++.h>
using namespace std;
int main(){
	int numberOfStatements;
	int valueOfX = 0;	
	string statement;	
	cin>>numberOfStatements;

	while(numberOfStatements--){
		cin>>statement;
		if(statement == "X++" || statement == "++X"|| statement =="++x" || statement == "x++")
			valueOfX++;
			
		else valueOfX--;
	}

	cout<<valueOfX;

	return 0;

}
