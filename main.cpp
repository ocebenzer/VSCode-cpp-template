#include <string>
#include <iostream>
#include <algorithm>

int main() {
    using namespace std;

    cerr << "Starting.." << endl;

    string line;
    while (!cin.eof()) {
        getline(cin, line);
        if (line == "done") break;

        transform(line.begin(), line.end(), line.begin(), ::tolower);

        cout << line << endl;
    }

    cerr << "Exiting.." << endl;

    exit(0);
}
