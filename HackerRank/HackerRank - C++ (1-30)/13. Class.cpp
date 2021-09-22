
# Class
# https://www.hackerrank.com/challenges/c-tutorial-class/problem

#include <iostream>
#include <sstream>
using namespace std;


class Student{

private:
    int age, standard;
    string first_name, last_name;

public:
    void set_age(int v_age)
    {
        age=v_age;
    }

    int get_age() 
    {
        return age;
    }

    void set_first_name(string v_firstname)
    {
        first_name=v_firstname;
    }

    string get_first_name()
    {
        return first_name;
    }

    void set_last_name(string v_lastname)
    {
        last_name=v_lastname;
    }

    string get_last_name()
    {
        return last_name;
    }

    void set_standard(int v_standard)
    {
        standard=v_standard;
    }

    int get_standard()
    {
        return standard;
    }

    string to_string()
    {
        string words;
        stringstream ss;
        ss<<age<<","<<first_name<<","<<last_name<<","<<standard; 
        ss>>words; 
        return words;
    }

};
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}
