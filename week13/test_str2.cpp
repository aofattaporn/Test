#include<iostream> 
#include<string> 
using namespace std; 
int main() { 
    string kmit = "King Mongkut's Institute of Technology"; 
    string change = "Instutute"; 
    string change_with = "University"; 
    if (kmit.find(change) != string::npos) // เช็คค่าที่หาพบหรือไม่พบ 
    {
        kmit.replace(kmit.find(change),change.length(),change_with); 

    }
    cout << kmit << endl; 

}