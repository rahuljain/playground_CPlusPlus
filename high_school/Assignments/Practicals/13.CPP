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
cout<<"Enter the colour: ";
gets(colour);
cout<<"Enter the model name: ";
gets(model);
cout<<"Enter the price: ";
cin>>price;
}

void display()
{
cout<<"Colour: "<<colour;
cout<<"Model name: "<<model;
cout<<"Price: "<<price;
}

void write()
{
f.open(fname, ios::app);
cout<<"Enter the following information: "<<endl;
f.write((char*)this, sizeof(car));
f.close();
}

void read_file()
{
f.open(fname, ios::in);
cout<<"The file "<<fname<<" contains all the data: ";
f.read((char*)this, sizeof(car));
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

f.open(fname, ios::in);
while(f)
{
for(int j=0; j<N; j++)
{
c.read_file();
c.display();
}
}
getch();
}