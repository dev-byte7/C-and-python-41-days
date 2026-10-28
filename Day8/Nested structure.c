#include <stdio.h>
struct DOB { int day, month, year; };
struct Student {
    int id;
    struct DOB dob;
};
int main() {
    struct Student s1 = {1, {28, 10, 2006}};
    printf("DOB: %d/%d/%d", s1.dob.day, s1.dob.month, s1.dob.year);
    return 0;
}
