//removing the vowels
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    string name;
    cout << "Enter string";
    getline(cin,name);

    string result = "";
    for (int i = 0; i < name.length(); i++) {
      
        if (name[i] != 'a' && name[i] != 'e' && name[i] != 'i' && name[i]!= 'o' && name[i]!= 'u') {
            result += name[i]; 
        }
    }

    cout << "String without vowels: " << result;
    return 0;
}
