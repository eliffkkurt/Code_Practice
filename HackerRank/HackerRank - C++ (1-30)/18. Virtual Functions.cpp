
# Virtual Functions
# https://www.hackerrank.com/challenges/virtual-functions/problem


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
public:
    string name;
    int age;
    virtual void getdata()=0;
    virtual void putdata()=0;
};

class Professor:public Person{

private:
    static int cur_id;
    int id;
    
public:

    Professor()
    {
        cur_id=cur_id+1;
        id=cur_id;
    }

    int publications;

    void getdata()
    {
        cin>>name>>age>>publications;
        this->name=name;
        this->age=age;
        this->publications=publications;
        this->cur_id=cur_id;
    }

    void putdata()
    {
        cout<<name<<" "<<age<<" "<<publications<<" "<<id<<endl;
    }


};

int Professor::cur_id = 0;


class Student:public Person{

private:
    static int cur_id;
    int id;


public:
    int mark[6];
    int sum=0;

    Student()
        {
            cur_id=cur_id+1;
            id=cur_id;
        }

    void getdata()
        {
            cin>>name>>age;

            for (int i=0;i<6;i++)
            {
                cin>>mark[i];
                sum=sum+mark[i];
            }

            this->name=name;
            this->age=age;
            this->mark[6]=mark[6];
            this->cur_id=cur_id;

        }

    void putdata()
        {
            cout<<name<<" "<<age<<" "<<sum<<" "<<id<<endl;

        }

};
int Student::cur_id = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
