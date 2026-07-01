#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> books = {
        "C++",
        "Python",
        "Java",
        "Algorithms"
    };

    int choice;

    cout << "Books:\n";

    for(int i = 0; i < books.size(); i++)
        cout << i + 1 << ". " << books[i] << endl;

    cout << "Choose book: ";
    cin >> choice;

    if(choice >= 1 && choice <= books.size()) {

        cout << "You borrowed: "
             << books[choice - 1];

        books.erase(books.begin() + choice - 1);
    }

    cout << "\n\nAvailable books:\n";

    for(string book : books)
        cout << book << endl;

    return 0;
}
