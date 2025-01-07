#include <iostream>
#include <string>
using namespace std;

class Teacher{
    //properties/attributes
    private: ///data hiding
     double salary;//we cannot access outside class
     int password; 

    public:
        string name;
        string dept;
        string subject;

    /// contructor call 
    //non-parameterized contructor
    Teacher(){
        dept = "Information Technology";
        cout << "I am Contructor" << endl;
    }

    //parameterized contructor
    Teacher(string name,string d,string s,double sal){
        this->name = name;
        //this->name object name property = parameter
        dept = d;
        subject = s;
        salary = sal;
    }

    void getInfo(){
        cout << " Teacher name " <<  name << endl;
        cout << " Teacher subject " << subject << endl;
    }

    //copy constructor
    //pass by reference -> address pass 
    Teacher(Teacher &orgObj){
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->subject = orgObj.subject;
        this->salary = orgObj.salary;
    }

   //DESTRUCTOR (starts with tild~)

   ~Teacher(){
        cout << "Hi i delete everything" << endl;
        delete ptr;
    }
    //methods
    void changeDept(string newDept){
        dept = newDept;
    }
    void setSalary(double s){
        salary =s;
    }
    double getSalary(){
        return salary;
    }
};
//semicolon for class ends

int main(){
    Teacher t1; //create object or object creation 
    //automatically constructor call
    Teacher t2("priyanka","it","c++",300000);
    Teacher t3(t2);//default copy constructor -> invoke
    t3.getInfo();
    t1.name ="priyanka";
    t1.dept="Computer Science";
    //t1.salary =12000000;
    // declared private here
    // double salary;//we cannot access outside class
    // t1.subject="javascript";
    // t1.setSalary(250000);
   
    cout << t1.name << endl;
    cout << t1.dept << endl;
    // cout << t1.getSalary() << endl;

     t2.getInfo();
    return 0;
}

