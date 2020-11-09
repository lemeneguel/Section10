#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

int main(){
    
    string message{};
    string encrypted_message{};
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" };
    string key {"QWERTYUIOPLKJHGFDSAZXCVBNMmnbvcxzasdfghjklpoiuytrewq"};

    cout << "Enter your message: " << endl;
    getline(cin, message);
    
    for (char c: message) {
        size_t position = alphabet.find(c);
        if (position != string::npos) {
            char new_char {key.at(position)};
            encrypted_message += new_char;
        } else {
            encrypted_message += c;
        }
    }
    
    cout << encrypted_message << endl;
    
    cout << "---------------------" << endl;
    
    string decrypted_message  {};
    
    for (char c: encrypted_message) {
        size_t position = key.find(c);
        if (position != string::npos) {
            char new_char {alphabet.at(position)};
            decrypted_message += new_char;
        } else {
            decrypted_message += c;
        }
    }
    
    cout << decrypted_message << endl;
    
//    char full_name[50] {};
//    
//    cout << "Please enter your first name :" << endl;
//    cin >> first_name;
//    cout << "---------------------------" << endl;
//    
//    cout << "Please enter your lastname :" <<endl;
//    cin >> last_name;
//    cout << "---------------------------" << endl;
//    
//    cout << "Hello " << first_name << ", your first name has " << strlen(first_name)
//             << " characters." << endl;
//    cout << "and your last name, " << last_name << " has " << strlen(last_name) 
//             << " characters," << endl;
//             
//    strcpy(full_name, first_name);
//    strcat(full_name, " ");
//    strcat(full_name, last_name);
//    cout << "Your full name is " << full_name << endl;
    
    return 0;
    
}