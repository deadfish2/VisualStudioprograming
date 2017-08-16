#include<iostream>
using namespace std;

class Person {
public:
	int a;
	virtual void Name() {
		cout << "this is a Person" << endl;
	}
};
class Study {
public:
	void study() {
		cout << "study" << endl;
	}
};
class Student : public Person, public Study {
public:
	void Name() {
		cout << "this is a Student" << endl;
	}
};
class Teather :public Person {
public:
	void Name() {
		cout << "this is a Teather" << endl;
	}
};

void Name(Person *p){
	p->Name();
}

void test(int & a) {
	a = 1;
}
int main() {
	int b = 2;
	test(b);
	cout << b << endl;
	Person p;
	Student s;
	Teather t;
	Person* p2 = new Student;
	p2->Name();
	p.Name();
	s.Name();
	s.study();
	t.Name();
	Name(&s);
	system("pause");
	return 0;
}