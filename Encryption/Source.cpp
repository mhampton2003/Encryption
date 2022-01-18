//This is my own work
//Maya Hampton

#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main() {
	int key = 0;
	//asks user for key to adjust the letters
	cout << "Enter the key value: ";
	cin >> key;
	cout << endl;

	string msg = "";
	string strEncrypt = "";

	//asks user for message
	cout << "Enter the message, and enter quit to stop: ";
	cout << endl;
	cin >> msg;

	//while the user still has messages to encrypt it will keep repeating
	while (msg != "quit") {
		for (int i = 0; i < msg.length(); i++) {
			int encrypt;
			char character;
			//for each letter in the word it subtracts 97 (a), adds key, and mods by 26
			encrypt = ((int(msg[i]) - 97) + key) % 26;
			//adds 97 and converts to a char to get the new character
			character = char(encrypt + 97);
			//adds the character to the end of the new word string
			strEncrypt.push_back(character);
		}
		//prints each original word and encrypted word out in a tabular format
		printf("%-10s %-10s\n", msg.c_str(), strEncrypt.c_str());
		strEncrypt = "";
		cin >> msg;
	}

	return 0;
}