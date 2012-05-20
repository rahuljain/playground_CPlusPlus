//13. CAR
//Program created by Rahul Jain.
#include<fstream.h>
#include<conio.h>
#include<stdio.h>

char fname[20];
fstream f;

class car
{
	char colour[20];
	char model[20];
	float price;

	public:
	void read()
	{
		cout<<"Enter the following information: "<<endl;
		cout<<"Enter the colour: ";
		gets(colour);
		cout<<"Enter the model name: ";
		gets(model);
		cout<<"Enter the price: ";
		cin>>price;
	}

	void display()
	{
		cout<<" Colour: \t"<<colour;
		cout<<" Model name: \t"<<model;
		cout<<" Price: \t"<<price<<endl;
	}

	void write()
	{
		f.open(fname, ios::app);
		f.write((char*)this, sizeof(car));
		f.close();
	}

	void read_file()
	{
		f.open(fname, ios::in);
		cout<<"The file "<<fname<<" contains all the data: \n";
		f.read((char*)this, sizeof(car));
		while(f)
		{
			display();
			f.read((char*)this, sizeof(car));
		}
		f.close();
	}

};

void main()
	{
		clrscr();
		car c;
		int N;
		cout<<"Enter the value of N: ";
		cin>>N;
		cout<<"Enter the file name: ";
		gets(fname);
		f.open(fname, ios::out);
		f.close();

		for(int i=0; i<N; i++)
		{
			c.read();
			c.write();
		}


		c.read_file();

		getch();
	}