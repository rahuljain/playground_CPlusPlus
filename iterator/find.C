#include <iostream>
#include <string>
#include <vector>
#include <iterator>

using namespace std;

class foo
{
	public:
		int a;
		string b;

		foo(int p, string q)
		{
			a = p;
			b = q;
		}
};


vector<foo>::iterator func(vector<foo> q)
{
	foo o = q.at(0);
	vector<foo>::iterator it, temp;
	it = q.begin();
	while(it != q.end())
	{
		cout<<it->a<<" "<<it->b<<endl;
		if(((it)->a == o.a) && ((it)->b == o.b)) {
			cout<<"hurray\n";
			temp = it;
		}
		it++;
	}
	return temp;
}	

int main()
{
	vector<foo> q;
	string a = "a";
	string b = "b";
	string c = "c";
	foo *f = new foo(6, c);
	q.push_back(*f);
	q.push_back(foo(1, a));
	q.push_back(foo(2, b));
	q.push_back(foo(3, c));
	q.push_back(foo(4, a));
	q.push_back(foo(11, b));

	vector<foo>::iterator result = func(q);
	cout<<"result = "<<result->a<<" "<<result->b<<" "<<f->a<<endl;

	return 0;
}

