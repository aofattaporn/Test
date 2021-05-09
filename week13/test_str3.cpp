#include<iostream> 
using namespace std; 
int main() { 
    string text; 
    int i, n; 
    cout << "Enter message :"; 
    getline(cin, text); 
    cout << "You love >> " << text << endl; 
    for ( i = 0; text[i] != '\0'; i++)
    {
        if(text[i]==' ') {n=i; break;}
    }
    for (i = n + 1; text[i] != '\0'; i++)
    {
        cout << text[i]; 
    }
    cout << " "; 
    for(i=0; i<n; i++) {
        cout << text[i]; 
    }


}