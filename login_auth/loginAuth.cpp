#include <iostream>

using namespace std;

class User
{
public:
  string username;
  string password;
};

int main()
{
  User newUser;
  // Need to add so much stuff. Database, hashing passwords, etc. Maybe even roles.

  cout << "Welcome to a login authentication. Please create an account here: \n\n";
  cout << "Username: ";
  cin >> newUser.username;

  cout << "\nPassword: ";
  cin >> newUser.password;

  char str[75];

  string hashedPassword;
  // Encrypting passwords. Adding 3 to each ASCII value
  for (int i = 0; (i < 75 && str[i] != '\0'); i++)
  {

    str[i] = str[i] + 2;
    hashedPassword += str[i];
  }

  cout << "\nEncrypted Password: " << str << endl;
  cout << "\nThank you for creating an account!\n";

  string attemptUsername;
  string attemptPassword;

  cout << "Login with username: ";
  cin >> attemptUsername;

  cout << "\nNow enter password: ";
  cin >> attemptPassword;

  if (newUser.username == attemptUsername && newUser.password == attemptPassword)
  {
    cout << "\nCongratulations, you have successfully logged in with the username: " << newUser.username;
  }
  else
  {
    cout << "\nInvalid information.";
  }
}
