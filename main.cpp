#include <string>
#include <iostream>
using namespace std;
//function header for sorting the string (pass by reference)
string sort(string& s);
int main(){
    //prompt a string input
    string s;
    cout << "Enter a string s: ";
    cin >> s;
    /// go to function
    sort(s);
    ///cout the sorted string 
    cout << s << endl;
    
    return 0;
}
///defining the function
string sort(string& s){
    //for loop to go through all string characters
    for (int i=0; i<s.length(); i++){
        //for loop compares each char to previous char
        //if first char is smaller then the two swap places
    for (int j=0; j<s.length();j++)
        if (s[i]<s[j]){
            //olds is a value holder while the two values swap
            int olds=s[i];
            s[i]=s[j];
            s[j]=olds;
            }
    }
    //returns sorted string
    return s;
}