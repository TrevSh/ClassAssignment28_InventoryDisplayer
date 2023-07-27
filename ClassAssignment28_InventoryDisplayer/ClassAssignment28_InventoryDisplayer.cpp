#include <iostream>
#include <string>
#include <vector>

void display(const std::vector<std::string>& inventory);

int main() {
	std::vector<std::string> inventory;
	inventory.push_back("sword");
	inventory.push_back("armor");
	inventory.push_back("shield");

	display(inventory);

	system("pause");
}

//Function takes a const reference to the vector, meaning it wont change in function
void display(const std::vector<std::string>& inventory) {
	std::cout << "These are your items: \n";
	for (std::vector<std::string>::const_iterator iter = inventory.begin(); iter < inventory.end(); ++iter) {		//This is an iterator, dont be afraid. Just a three scope operators (::) makes it look scary
		std::cout << *iter<<"\n";
	}
}
