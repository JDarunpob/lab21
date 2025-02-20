#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    if (argc == 1) {
        cout << "Please input numbers to find average." << endl;
    } else {
        double sum = 0.0;
        int count = argc - 1; 
        for (int i = 1; i < argc; ++i) {
            double num = atof(argv[i]); 
            if (num == 0 && argv[i][0] != '0') {
                cout << "Invalid input: " << argv[i] << endl;
                return 1; 
            }
            sum += num;
        }
        double average = sum / count;
        cout << "---------------------------------" << endl;
        cout << "Average of " << count << " numbers = " << static_cast<int>(average) << endl;
        cout << "---------------------------------" << endl;
    }
    return 0;
}
