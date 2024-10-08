#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>

using namespace std;

typedef vector<int> Records;

class RecordsManager {
private:
    ifstream _file;
    string _filename;

public:
    RecordsManager(string filename) : _filename(filename) {}

    void read(Records &records) {
        _file.open(_filename, ios::in);
        if (_file.is_open()) {
            string line;
            while (getline(_file, line)) {
                try {
                    // Attempt to convert line to integer and store in records
                    records.push_back(stoi(line));
                } catch (const invalid_argument &e) {
                    // Handle case where line is not a valid integer
                    throw runtime_error("Invalid argument when reading the file: " + _filename + " -> '" + line + "'");
                } catch (const out_of_range &e) {
                    // Handle case where the integer is out of range
                    throw runtime_error("Out of range when reading the file: " + _filename + " -> '" + line + "'");
                }
            }
            _file.close();
        } else {
            throw runtime_error("Failed to open the file: " + _filename);
        }
    }
};

int main() {
    try {
        // You can test with the other files by changing the file names
        RecordsManager recordM("test_clean.txt"); 
        //RecordsManager recordM("test_corrupt1.txt");
        //RecordsManager recordM("test_corrupt2.txt");

        Records myRecords;

        // Read records from file
        recordM.read(myRecords);

        // Calculate and print the sum
        int sum = 0;
        for (int i = 0; i < myRecords.size(); i++) {
            sum += myRecords[i];
        }

        cout << "Sum: " << sum << endl;

    } catch (const runtime_error &e) {
        // Catch and print any runtime errors that occur
        cerr << "Error: " << e.what() << endl;
        return 1;
    }

    return 0;
}
