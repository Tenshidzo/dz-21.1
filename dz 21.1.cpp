#include "Student.h"
int main()
{
    setlocale(0, "");

    Student a("Andrey Bobafetovich", 5, 452, 2, "School №1", "Kharkiv", "Ukraine");

    a.show();

    Student b;
    b.show();
    cout << "------------\n";
    b.setAll();
    b.show();
}