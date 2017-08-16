#include<vector>
#include<iostream>
using namespace std;

class VectorTest {
public:
	vector<int> vector;
	VectorTest() {
		vector.push_back(0);
		vector.push_back(0);
		vector.push_back(0);
	}
	VectorTest(int a, int b, int c) {
		vector.push_back(a);
		vector.push_back(b);
		vector.push_back(c);
	}
	const int &VectorTest::operator[](int a)const {
		return vector[a];
	}
	const VectorTest& VectorTest::operator++() {
		for (auto i = vector.begin(); i != vector.end(); i++) {
			*i += 1;
		}
		return *this;
	}
	const VectorTest VectorTest::operator+(const VectorTest&vectorTest) {
		VectorTest vectorTestBuffer(this->vector[0] + vectorTest.vector[0], this->vector[1] + vectorTest.vector[1], this->vector[2] + vectorTest.vector[2]);
		return vectorTestBuffer;
	}
	void print() {
		for (auto i = vector.begin(); i != vector.end(); i++) {
			cout << *i << endl;
		}
	}
};

//
//int main() {
//	VectorTest vectorTest1(1, 1, 1);
//	VectorTest vectorTest2(1, 2, 3);
//	VectorTest vectorTest3 = vectorTest1 + vectorTest2;
//	vectorTest3.print();
//	vectorTest3.print();
//	system("pause");
//}
