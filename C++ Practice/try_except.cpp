#include <bits/stdc++.h>
using namespace std;
void age_constraint()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    try
    {
        if (age >= 24)
            cout << "You have right to drink alcohol\n";
        else
            throw(age);
    }
    catch (int age)
    {
        cout << "You are not allowed to drink alcohol. You are underage. Your age is " << age << endl;
    }
}
void divide_by_0()
{
    int num, den;
    cout << "Enter numerator and denominator both: ";
    cin >> num >> den;
    try
    {
        if (den == 0)
            throw(den);
        else
            cout << "The result of division is: " << num / den << endl;
    }
    catch (int den)
    {
        cout << "Denominator cannot be 0. Please enter another denominator\n";
        divide_by_0();
    }
}
int main()
{
    age_constraint();
    divide_by_0();
    return 0;
}