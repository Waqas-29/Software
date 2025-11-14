// Task # 1
#include <iostream>

using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s1;
    cout << "Enter Name, Roll No., and GPA:" << endl;
    cin >> s1.name >> s1.roll >> s1.gpa;
    cout << s1.name << " " << s1.roll << " " << s1.gpa << endl;
    
    return 0;
}

//Task # 2
#include <iostream>

using namespace std;

struct Laptop {
    string brand;
    int ram;
    float price;
};

int main() {
    Laptop l1;
    cout << "Brand, RAM, and Price:" << endl;
    cin >> l1.brand >> l1.ram >> l1.price;
    cout << l1.brand << ", " << l1.ram << "GB ," << l1.price << endl;
    return 0;
}

// Task # 3
#include <iostream>
using namespace std;

struct Rectangle {
    float length;
    float width;
};

int main() {
    Rectangle r1;
	cout << "Length and Width"<<endl;
    cin >> r1.length >> r1.width;
    cout << "Area: " <<r1.length * r1.width << " "<< "Perimter: " << 2 * (r1.length + r1.width) << endl;
    return 0;
}



// Task # 4
#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float gpa;
};

int main() {
    Student s1, s2;
    cout<<"ENter First student date.."<<endl;
    cin >> s1.name >> s1.roll >> s1.gpa;
    cout<<"ENter Second student date.."<<endl;
    cin >> s2.name >> s2.roll >> s2.gpa;

    if (s1.gpa > s2.gpa) {
        cout << s1.name << " " << s1.gpa << endl;
    } else if (s2.gpa > s1.gpa) {
        cout << s2.name << " " << s2.gpa << endl;
    } else {
        cout << "Both students have equal GPA" << endl;
    }
    return 0;
}












