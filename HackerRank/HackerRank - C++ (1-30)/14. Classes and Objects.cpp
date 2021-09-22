
# Classes and Objects
# https://www.hackerrank.com/challenges/classes-objects/problem



class Student{

public:
    int exam1,exam2,exam3,exam4,exam5;

    void input()
    {
        cin>>exam1>>exam2>>exam3>>exam4>>exam5;
    }

    int calculateTotalScore()
    {
        return exam1+exam2+exam3+exam4+exam5;
    }
};

