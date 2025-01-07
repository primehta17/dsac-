#include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name,int age){
        this->name = name;
        this->age = age;
        cout << "Parent Constructor" << endl;
    }
//     Person(){
//   cout << "Parent Constructor" << endl;
//     }
};
//public mode
class Student : public Person{
    //name, age,rollname;
    public:
    int rollno;
    // Student(){
    //     cout << "Derived/child Constructor" << endl;
    // }
    Student(string name,int age,int rollno) : Person(name,age){ 
        //donot write type beacause we are calling person(explicity) class not defining it
        this->rollno =rollno;
        cout << "Derived/child Constructor" << endl;
    }
    void getInfo(){
        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollno : " << rollno << endl;
    }
};

int main(){
    Student s1("hello",9,23);
    // s1.name="RASHMI";
    // s1.age = 12;
    // s1.rollno = 1234;
    s1.getInfo();
  return 0;
}