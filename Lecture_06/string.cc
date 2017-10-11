#include<iostream>
#include <string>

using namespace std;

int main(){
	string s1 = "Hello";
	string s2("world!");
	string s3 = " ";

	string s = s1 + s3 + s2 ; // combine strings
	cout << s << endl; // print new string

	for(int i =0;i<= s.size();++i){
		cout << s[i]<<endl; // print char by char	 
	}
  	
	cout << s.substr(0, 5) << endl;
      cout << s.substr(6, 5) << endl;

	auto pos = s.find("wo"); // it is searching for str "wo"
	if(pos!=string::npos){	
		cout << "Found" << endl;
		cout << s.substr(pos,2) << endl; // prints from pos 2 chars
	} else {
		cout << "Not found!"<<endl;	
	}	
 	return 0;
}
