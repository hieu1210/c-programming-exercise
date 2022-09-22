// C++ program to implement
// function templates
#include <iostream>


using namespace std;

class Person{
private:
	string name;
	int age;
public:
	Person(){};
	Person(string name,int age){
		this->name = name;
		this->age  = age;
	}
	void input(){
		cin >> this->name >> this->age;
	}
	void display(){
		cout << "Name : " << this->name << endl;
		cout << "Age : " << this->age << endl;
	}
};
  
class PersonManagement{
private:
	Person *pm;
	int n ; // size
public:
	PersonManagement(int size){
		pm = new Person[size];
		n = size;
		for(int i = 0 ; i < n ; i ++) pm[i].input();
	}
	template<size_t T>
	PersonManagement(Person (&arr)[T]){
		cout << (arr) << endl;
		pm = arr;
		n = T;
	}
	void display(){
		for(int i =0 ; i < n ; i ++){
			pm[i].display();
		}
	}
};

int main(){
	PersonManagement pm(5);
	pm.display();
	Person one("One" , 1);
	Person two("Two" , 2);
	Person three("Three" , 3);
	Person arr[] = {one , two , three};
	cout << &arr << endl;
	PersonManagement pm2(arr);
	pm2.display();
}