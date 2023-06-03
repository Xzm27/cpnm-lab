// Create a structure to specify data on students given below: Roll number, Name, Department, Course, Year of joining, Marks of 6 Subjects Write a function to print the names of all students who joined in a particular year.
// a. Write a function to print the data of a student whose roll number is given.
// b. Write a function which prints in ascending order the rank list (Roll, Name, Department, Average) based on the average of 6 subjects.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STUDENTS 100

// Student structure
struct Student
{
    int rollNumber;
    char name[100];
    char department[100];
    char course[100];
    int yearOfJoining;
    int marks[6];
};

void addStudent(struct Student students[], int count)
{
    int len_struct_list = count;
    printf("Enter Roll Number: ");
    scanf("%d", &students[len_struct_list].rollNumber);
    getchar();

    printf("Enter Name: ");
    fgets(students[len_struct_list].name, sizeof(students[len_struct_list].name), stdin);

    printf("Enter Department: ");
    fgets(students[len_struct_list].department, sizeof(students[len_struct_list].department), stdin);

    printf("Enter Course: ");
    fgets(students[len_struct_list].course, sizeof(students[len_struct_list].course), stdin);

    printf("Enter Year of Joining: ");
    scanf("%d", &students[len_struct_list].yearOfJoining);

    printf("Enter Marks of 6 Subjects: \n");
    for (int i = 0; i < 6; i++)
    {
        scanf("%d", &students[len_struct_list].marks[i]);
    }
}

void printStudentByYear(struct Student students[], int count)
{
    if (count > 0)
    {
        int year;
        printf("Enter the year of joining: ");
        scanf("%d", &year);
        int i;
        printf("Students who joined in %d:\n", year);
        for (i = 0; i < count; i++)
        {
            if (students[i].yearOfJoining == year)
            {
                printf("%s\n", students[i].name);
            }
        }
    }
    else
    {
        printf("No students found.\n");
    }
}

void printStudentByRollNumber(struct Student students[], int count)
{
    if (count > 0)
    {
        int rollNumber;
        printf("Enter the roll number: ");
        scanf("%d", &rollNumber);
        int i;

        for (i = 0; i < count; i++)
        {
            if (students[i].rollNumber == rollNumber)
            {
                printf("Roll Number: %d\n", students[i].rollNumber);
                printf("Name: %s\n", students[i].name);
                printf("Department: %s\n", students[i].department);
                printf("Course: %s\n", students[i].course);
                printf("Year of Joining: %d\n", students[i].yearOfJoining);
                printf("Marks of 6 Subjects: ");
                for (int j = 0; j < 6; j++)
                {
                    printf("%d ", students[i].marks[j]);
                }
                printf("\n");
                return;
            }
        }

        printf("Student with roll number %d not found.\n", rollNumber);
    }
    else
    {
        printf("No students found.\n");
    }
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int compareStudents(const void* a, const void* b) {
    struct Student* studentA = (struct Student*)a;
    struct Student* studentB = (struct Student*)b;

    int sumA = 0;
    int sumB = 0;
    for (int i = 0; i < 6; i++) {
        sumA += studentA->marks[i];
        sumB += studentB->marks[i];
    }
    float avgA = (float)sumA / 6;
    float avgB = (float)sumB / 6;

    if (avgA < avgB) {
        return -1;
    } else if (avgA > avgB) {
        return 1;
    } else {
        return 0;
    }
}

void printRankList(struct Student students[], int count) {
    qsort(students, count, sizeof(struct Student), compareStudents);

    printf("Rank List (Roll, Name, Department, Average):\n");
    for (int i = 0; i < count; i++) {
        struct Student student = students[i];
        int sum = 0;
        for (int j = 0; j < 6; j++) {
            sum += student.marks[j];
        }
        float average = (float)sum / 6;
        printf("%d\t%s\t%s\t%.2f\n", student.rollNumber, student.name, student.department, average);
    }
}

int main()
{
    struct Student students[MAX_STUDENTS];
    int choice;
    int count = 0;
    do
    {
        printf("\n----------Student Management System----------\n");
        printf("%d\n", count);
        printf("1. Add student\n2. Print Students by Year of Joining\n3. Print Students by Roll Number\n4. Print Rank List\n5. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice)
        {
        case 1:
            addStudent(students, count);
            count++;
            break;
        case 2:
            printStudentByYear(students, count);
            break;
        case 3:
            printStudentByRollNumber(students, count);
            break;
        case 4:
            if (count > 0)
            {
                printRankList(students, count);
            }
            else
            {
                printf("No students found.\n");
            }
            break;
        case 5:
            printf("Exiting the program\n");
            break;
        default:
            printf("Invalid input\n");
            break;
        }
    } while (choice != 5);
    return 0;
}