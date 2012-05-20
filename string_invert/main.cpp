#include <iostream>
#include <string>
#include <assert.h>

using namespace std;

int main(char argc, char *argv[])
{
	assert(argc > 1);
	string s = argv[1];
	cout<<"The entered string is: "<<s<<endl;
	bool has_space = false;
	int len = s.size();
	if(s[len-1] == ' ') {
		has_space = true;
	} else {
		s += ' ';
		len++;
	}
	
	for(int i = 0, pos=0; i < len; i++)
	{
		if(s[i]==' ') {
			for(int j=pos; j < (i+pos)/2; j++) {
				char temp = s[j];
				s[j] = s[i-j+pos-1];
				s[i-j+pos-1] = temp;
			}
			pos = i+1;
		}
	}
	for(int i = 0; i < len/2; i++) {
		char temp = s[i];
		s[i] = s[len-i-1];
		s[len-i-1] = temp;
	}
	if(has_space==false) {
		s.erase(0, 1);
	}
	cout<<"The inverted string is: "<<s<<endl;

	return 0;
}
