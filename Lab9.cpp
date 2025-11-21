#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("data.txt");
    
    string name;
    int age;
    float gpa;

    cout << "Enter name: ";
    cin >> name;
    
    cout << "Enter age: ";
    cin >> age;
    
    cout << "Enter GPA: ";
    cin >> gpa;

    file << name << endl;
    file << age << endl;
    file << gpa << endl;
    
    file.close();
}

#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("data.txt");
    
    string name;
    int age;
    float gpa;

    file >> name >> age >> gpa;

    cout << name << endl;
    cout << age << endl;
    cout << gpa << endl;

    file.close();
}















