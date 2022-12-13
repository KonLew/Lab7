#include<iostream>
#include<string>

using namespace std;

string func1(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += x[L-i-1];
		i++;
	}
	return y;
}

string func2(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += toupper(x[i]);
		i++;
	}
	return y;	
}
string func3(string x){
	int i = 0, L = x.size();
	string y = "";
	while(i < L){
		y += tolower(x[i]);
		i++;
	}
	return y;	
}

string func4(string x){
    int i = 0,L = x.size();
    string y = func2(x);
    while (i<L){
        if (y[i] == y[L-i-1]){
            i++;
        }else{
            return "No";
        }
    
    }
    return "Yes";
}
        
            
 
int main(){
    string N;
    cout << "Input text: ";
    cin >> N;
    cout << "Reversed text: " << func1(N) <<"\n";
    cout << "Palindrome: " << func4(N);
    return 0;
}
