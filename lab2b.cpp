nclude <iostream>
#include <string>
#include <cctype>
using namespace std;
// Michael Bettencourt. Lab02b.

int main()
{
  string user_input;
  int vowels = 0;
  int consonants = 0;
  int digits = 0;
  int spec_characters = 0;
  cout << "Enter a String:";
  cin >> user_input;

  for(int x = user_input.length();x > 0,x--;){
    if (isalpha(user_input[x])){
    user_input[x] = toupper(user_input[x]);
    switch (user_input[x]){
      case 'A':
        vowels += 1;
        break;
      case 'E':
        vowels += 1;
        break;
      case 'I':
        vowels += 1;
        break;
      case 'O':
        vowels += 1;
        break;
      case 'U':
        vowels += 1;
        break;
      default:
        consonants += 1;
    }
    } 
    else if (isdigit(user_input[x])){
      digits += 1;
    }
    else{
      spec_characters += 1;
    }

 }
cout << "Vowels:" << vowels << endl;
cout << "Consonants:" << consonants << endl;
cout << "Digits:" << digits << endl;
cout << "Special characters:" << spec_characters << endl;

return 0;


}
