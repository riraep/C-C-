#include <iostream>
using namespace std;

struct Body
{
    int height;
    double weight;
};

Body makeStudent(Body father, Body mother)
{
    Body student;
    student.height = (father.height + mother.height) / 2.0 + 5;
    student.weight = (father.weight + mother.weight) / 2.0 - 4.5;
    return student;
}