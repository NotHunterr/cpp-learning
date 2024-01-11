#include <iostream>
#include <string>

using namespace std;

class User {
public:
  string username;
  string password;
};

int main() {
  User newUser;

  cout << "Welcome to a login authentication. Please create an account here: "
          "\n\n";
  cout << "Username: ";
  cin >> newUser.username;

  cout << "\nPassword: ";
  cin >> newUser.password;

  string hashedPassword;
  // Encrypting passwords. Adding 2 to each ASCII value
  for (int i = 0; i < newUser.password.length(); i++) {
    newUser.password[i] = newUser.password[i] + 2;
    hashedPassword += newUser.password[i];
  }

  cout << "\nEncrypted Password: " << hashedPassword << endl;
  cout << "\nThank you for creating an account!\n";

  string encryptedAttemptPassword;
  // Encrypting the user's input password. Adding 2 to each ASCII value
  for (int i = 0; i < newUser.password.length(); i++) {
    encryptedAttemptPassword += newUser.password[i] + 2;
  }

  string attemptUsername;
  string attemptPassword;

  cout << "\nLogin with username: ";
  cin >> attemptUsername;

  cout << "\nNow enter password: ";
  cin >> attemptPassword;

  if (newUser.username == attemptUsername && hashedPassword == encryptedAttemptPassword) {
    cout << "\nCongratulations, you have successfully logged in with the "
            "username: "
         << newUser.username;
  } else {
    cout << "\nInvalid information.";
  }

  return 0;
}

