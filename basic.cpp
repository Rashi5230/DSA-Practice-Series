#include <iostream>
using namespace std;

int main(){
    //1-personal information 

    string name = "Rashi";
    int age = 22;
    string college_name = "BRCM CET";
    float cgpa = 8.9;

    cout << name << endl;
    cout << age << endl;
    cout << college_name << endl;
    cout << cgpa << endl;

    //2-sum of two numbers
    int a = 10;
    int b = 20;
    cout << a+b ;

    //3-area of rectangle
int len;
int brdth;

    cout << "length of a rectangle :" ;
    cin >> len;

    cout <<"breadth of a rectangle:";
    cin >> brdth;

    cout << "area of rectangle is "<< len * brdth;

 // 4-even or odd
int a;
cout << "enter a number:";
cin >> a;

string result = (a%2 == 0 ) ? "Even " : "Odd";
cout << result;

//5-swapping of two numbers
int num1 = 20 ;
int num2 = 40;
int a,b ;

a = num1;
b = num2;

num1 = b;
num2=a;
cout <<"after swapping:" << endl;
 cout <<"num1 = " << num1 << endl;
  cout <<"num2 = " << num2 << endl;




    return 0;
}