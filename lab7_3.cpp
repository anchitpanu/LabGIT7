#include<iostream>
using namespace std;

char before(char x){
    if (x == 'A'){
        return 90;
    }
    if (x < 'A' || x > 'Z'){
        return 48;
    }
    else{
        char ans;
        ans = x-1;
        return ans;
    }
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
