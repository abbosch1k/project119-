#include <iostream>
#include <vector>
using namespace std;

int main() {

    vector<string> students;
    vector<bool> present;

    int n;

    cout << "Number of students: ";
    cin >> n;

    cin.ignore();

    for(int i = 0; i < n; i++) {

        string name;
        char status;

        cout << "Student " << i + 1 << ": ";
        getline(cin, name);

        cout << "Present? (Y/N): ";
        cin >> status;
        cin.ignore();

        students.push_back(name);
        present.push_back(status == 'Y' || status == 'y');
    }

    cout << "\nAttendance List\n";

    for(int i = 0; i < students.size(); i++) {

        cout << students[i] << " - ";

        if(present[i])
            cout << "Present";
        else
            cout << "Absent";

        cout << endl;
    }

    return 0;
}
