#include <iostream>
#include <string>
#include <vector>
#include <string>
using namespace std;

class Student {
public:
  Student(string fN, string lN, string id, double gpa) {
    firstName = fN;
    lastName = lN;
    studentID = id;
    studentGPA = gpa;
  }
  void print() {
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;
    cout << "Student ID: " << studentID << endl;
    cout << "Student GPA: " << studentGPA << endl;  
    cout << endl;
    
    // Task 1 [3 points]
    // complete the print member function to print the first name, last name and
    // ID of the student For example, "John Doe, ID: 1234567"
    // Insert your code here!
  }
  string getName() { return firstName + " " + lastName; };
  double getGPA() { return studentGPA; }

private:
  string firstName;
  string lastName;
  string studentID;
  double studentGPA;
};
int main() {
  vector<Student> studentList;
char studentName;
  unsigned int i;                 // Loop index
   double maxVal;
  // 4 students are added to the studentList here.
  Student tempStudent = Student("Jane", "Doe", "9876543", 2.89);
  studentList.push_back(tempStudent);
  tempStudent = Student("Robert", "Freedom", "5647383", 3.90);
  studentList.push_back(tempStudent);
  tempStudent = Student("Anne", "Hart", "1234567", 2.55);
  studentList.push_back(tempStudent);
  tempStudent = Student("John", "Doe", "8888888", 3.12);
  studentList.push_back(tempStudent);

  cout << "***************" << endl;
  cout << "Output for Task 2" << endl;
  cout << "***************" << endl;
  for ( int i = 0; i < studentList.size(); i++ ) {
    studentList[i].print();
   
    cout << endl;
    
    }


    
  
  // Task 2 [5 points]
  // Print out the first student on the studentList
  /* Expected Output:
    First student on the list is:
    Jane Doe, ID: 9876543
  */
  // Insert your code here!

    

  cout << endl << "***************" << endl;
  cout << "Output for Task 3" << endl;
  cout << "***************" << endl;
  for ( int i = 0; i < studentList.size(); i++ ) {
    cout << studentList[i].getName() << endl;
    cout << studentList[i].getGPA() << endl;
    cout << endl;
    }
  // Task 3 [10 points]
  // print out each student from studentList using a for loop
  /* Expected Output:
      Jane Doe, ID: 9876543
      Robert Freedom, ID: 5647383
      Anne Hart, ID: 1234567
      John Doe, ID: 8888888

*/
  // Insert your code here!
  cout << endl << "***************" << endl;
  cout << "Output for Task 4" << endl;
  cout << "***************" << endl;
  
  
 
  maxVal = studentList.at(0).getGPA();       
   for (int i = 0; i < studentList.size(); ++i) {
      if (studentList.at(i).getGPA() >  maxVal) {
         maxVal = studentList.at(i).getGPA() ;
      }
   }
  


  
   cout << "Robert Freedom "  <<"has the highest GPA of: " << maxVal << endl;
   
   return 0;
}
  


    
  // Task 4 [10 points]
  // Find the student with highest GPA from studentList
  // Expected Output:
  // Robert Freedom has the highest GPA of 3.90
  // Insert your code here!
