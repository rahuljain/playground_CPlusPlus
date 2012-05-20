#include <iostream>
#include <assert.h>
#include <string>

using namespace std;

void permute(string s, int i);

int main(int argc, char *argv[])
{
	assert(argc==2);
	cout<<"The entered string is: "<<argv[1];
	permute(argv[1], 0);
	return 0;
}

void permute(string s, int i)
{
	while(i<len) {
		if(length(s) == 1) {
			i++;
			return;
		}
		cout<<s[i]+permute(s,i)<<endl;
	}
}
