#include <iostream>
using namespace std;

int main() {
    int student_data[4][4] = {
        {101, 85, 90, 78},
        {102, 92, 88, 95},
        {103, 76, 82, 80},
        {104, 89, 94, 91}
    };

    cout << "RollNo\tSub1\tSub2\tSub3" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << student_data[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
