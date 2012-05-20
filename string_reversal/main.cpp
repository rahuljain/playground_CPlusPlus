#include <assert.h>
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[])
{
	assert(argc > 1);
	cout<<"The entered string is: "<<argv[1]<<endl;
	string s = argv[1];
	int len = s.size();
	for(int k = 0; k < len/2; k++) {
		char temp = s[k];
		s[k] = s[len-k-1];
		s[len-k-1] = temp;
	}
	cout<<s<<endl;
	return 0;
}
