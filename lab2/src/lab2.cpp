//============================================================================
// Name        : lab2.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;
class Student{
	         string name;
	         string usn;
	         string branch;
	         string sem;
public:
	         void readfromconsole()
	         {
	         cin.clear();
	         	 cin.ignore(255,'\n');
	        	 cout<<"enter the name";
	         getline(cin,name);
	         cin.clear();
	         cin.ignore(255,'\n');
	         cout<<"enter the usn"<<endl;
	         cin>>usn;
	         cin.clear();
	         cout<<"enter the branch"<<endl;
	         cin>>branch;
	         cin.clear();
	         cout<<"enter the sem"<<endl;
	         cin>>sem;
}
	         void show(){
	            cout<<name<<endl<<usn<<endl<<branch<<endl<<sem;
	         }
	         int pack(){
	        	 string temp,buffer;int i;
	        	 temp+=name+'|'+usn+'|'+branch+'|'+sem;
	        	 buffer=temp;
	        	 for(i=temp.size();i<100;i++)
	        	 buffer+='$';
	        	 cout<<buffer;
	         }
	         void write(){
	        	 fstream f1;
	        	 f1.open("data.txt",ios::out|ios::app)
	             f1<<buffer;
	        	 f1<<endl;
	        	 f1.close();
	         }

}

int main() {int ch;
    //while(1);
	cout<<"enter your choice";
	cout<<"1.insert 2.search 3.delete 4.modify 5.exit";
	cin>>ch;
	switch(ch)
	{
	case 1:Student s;
	      s.readfromconsole();s.show();s.pack();break;
	}

	return 0;
}
