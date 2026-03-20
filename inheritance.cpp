#include <iostream>
using namespace std;
class student{
	public:
		string name;
		int rollno;
		void display()
		{
			cout<<"name  "<<name<<endl;
			cout<<"roll no  "<<rollno<<endl;
		}
};
		class engstudent : public student{
			public:
				string dept;
				void show()
				{
					cout<<"name  "<<name<<endl;
					cout<<"roll no  "<<rollno<<endl;
					cout<<"dept  "<<dept<<endl;
				}
		};

int main()
{
engstudent s;
s.name="akki";
s.rollno=91;
s.display();
s.dept="csm";
s.show();	
}
