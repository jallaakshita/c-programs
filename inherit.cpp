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

class tpc{
			public:
			string train="training";
		};
	class engstudent : public student,public tpc{
			public:
				string dept;
			
				void display()
				{
					student :: display();
					cout<<"dept  "<<dept<<endl;
					cout<<"train  "<<train<<endl;	
				}
		};
		
			
int main()
{
	engstudent s;
	s.name="akki";
	s.rollno=91;
	s.dept="csm";
	s.display();
}	
