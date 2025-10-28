//Task # 1
#include <iostream>
using namespace std;

int main() {
    cout << "Name : Muhammad Waqas" << endl;
    cout << "Registration Number: 23845" << endl;
    cout << "Course: Software Construction and Development" << endl;
    return 0;
}

//Task # 2
#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    string roll;
    double gpa;
};

int main() {
    Student s[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter name of student " << i + 1 << ": ";
        getline(cin, s[i].name);
        cout << "Enter roll number: ";
        getline(cin, s[i].roll);
        cout << "Enter GPA: ";
        cin >> s[i].gpa;
        cin.ignore();  // clear newline
        cout << endl;
    }

    cout << "\nStudent Details:\n";
    for (int i = 0; i < 3; i++) {
        cout << i + 1 << ". " << s[i].name
             << " | Roll: " << s[i].roll
             << " | GPA: " << s[i].gpa << endl;
    }
    return 0;
}

//Task # 3
#include <iostream>
using namespace std;

int main() {
    int marks;
    cout << "Enter marks =";
    cin >> marks;

    if (marks < 0 || marks > 100) {
        cout << "Invalid marks entered!" << endl;
    } else if (marks >= 90) {
        cout << "Grade: A" << endl;
    } else if (marks >= 80) {
        cout << "Grade: B" << endl;
    } else if (marks >= 70) {
        cout << "Grade: C" << endl;
    } else if (marks >= 60) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }
    return 0;
}

//Task # 4
#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int original = n, sum = 0, digits = 0;
    int temp = n;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }
    temp = n;
    while (temp > 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }
    return sum == original;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is NOT an Armstrong number." << endl;
    return 0;
}

//Task # 5
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) cin >> arr[i];

    int maxVal = arr[0], minVal = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
        if (arr[i] < minVal) minVal = arr[i];
    }

    cout << "Maximum value: " << maxVal << endl;
    cout << "Minimum value: " << minVal << endl;
    return 0;
}

//Task # 6
#include <iostream>
using namespace std;

int main() {
    int arr[10], target;
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) cin >> arr[i];

    cout << "Enter value to search: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == target) {
            cout << "Value found at index: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Value not found in the array." << endl;

    return 0;
}

//Task # 7
#include <iostream>
using namespace std;

int main() {
    int arr[10];
    cout << "Enter 10 integers:\n";
    for (int i = 0; i < 10; i++) cin >> arr[i];

    // Bubble sort
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Array in ascending order:\n";
    for (int i = 0; i < 10; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}

