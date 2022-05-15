// A student will not be allowed to sit in exam if his/her attendence is less than 75%.
// Take following input from user
// Number of classes held
// Number of classes attended.
// And print
// percentage of class attended
// Is student is allowed to sit in exam or not.

#include <iostream> 
#include <iomanip> // for set precision 
using namespace std;

int main()
{
    float totalClasses, classesAttended, percentage;
    cout << "Enter total classes held : ";
    cin >> totalClasses;
    cout << "Enter classes attended by student : ";
    cin >> classesAttended;

    if (classesAttended <= totalClasses)
    {
        percentage = (classesAttended / totalClasses) * 100;
        cout << fixed << setprecision(2) << percentage << "%" << " of class attended" << endl;

        if ((percentage < 75) && (percentage >= 0))
        {
            cout << "Student is not allowed to sit in exam because his/her percentage is below 75";
        }
        else
        {
            cout << "Student is allowed to sit in exam because his/her percentage is above 75";
        }
    }
    else
    {
        cout << "Attended classes cannot be more than total classes held!";
    }

    return 0;
}