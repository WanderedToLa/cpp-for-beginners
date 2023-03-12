#include<bits/stdc++.h>
using namespace std;

// 보편적 초기화 (C++ 11)
int i {100};
int age = 24;

// sizeof(data type , variable)
int main (void){
    cout << "hello" + to_string(i) << '\n';
    cout << "char Size :" + to_string(sizeof(char)) + "byte" << '\n'; // 1byte
    cout << "short Size :" + to_string(sizeof(short)) + "byte" << '\n'; // 2byte
    cout << "int Size :" + to_string(sizeof(int)) + "byte" << '\n'; //4byte
    cout << "long Size :" + to_string(sizeof(long)) + "byte" << '\n'; // 4byte
    cout << "long long Size :" + to_string(sizeof(long long)) + "byte" << '\n'; // 8byte
    cout << "float Size :" + to_string(sizeof(float)) + "byte" << '\n'; //4byte
    cout << "double Size :" + to_string(sizeof(double)) + "byte" << '\n'; //8byte
    cout << "long double Size :" + to_string(sizeof(long double)) + "byte" << '\n'; //8byte
    cout << "bool Size :" + to_string(sizeof(bool)) + "byte" << '\n'; //1byte

    // & 주소참조연산
    cout << "address of age :" << &age << '\n';
    return 0;
}