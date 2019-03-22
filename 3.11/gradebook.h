#include <string>
using namespace std;

class GradeBook

{
public:
    explicit GradeBook(string name1,string name2 );

    void setCourseName(string name1);
    void setTeacherName(string name2);


    string getCourseName()const;
    string getTeacherName()const;


    void displayMessage () const;
private:
    string courseName;
    string teacherName;
};
