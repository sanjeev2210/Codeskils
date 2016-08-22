#include<iostream>
#include<string>
using namespace std;
class sanjeev
{
	public: void myclass(string a)
		{
			cout<<"welcome to the grade book for\n"<<a<<endl;
		}
};
int main()
{
	string course;
		sanjeev q;
	cout<<"please enter the course name\n"<<endl;
	getline(cin,course);

	q.myclass(course);
	return 0;
}
