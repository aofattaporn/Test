#include<string> 
#include<iostream>
using namespace std; 
int main() { 
    int i; 
    string sentence = "KMUTT Bangmod"; 
    string reverse = ""; 
    for ( i = sentence.length() - 1; i >= 0; i--)
    {
        reverse += sentence[i];
    }
    cout << "Original:" << sentence <<endl; 
    cout << "Reversed:" << reverse  <<endl;
}