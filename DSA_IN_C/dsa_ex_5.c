#include <stdio.h>
struct Student
{
    char Name[20];
    int age;
   int marks;
};
int main()
{
    struct Student s1,s2,s3;
    scanf("%d %d %s",&s1.age,&s2.age,&s3.Name);
    printf("%d %d %s",s1.age,s2.age,s3.Name);
    for ( int i = 0; i < 1; i++)
    {
       scanf("%d %d %s",&s1.age,&s2.age,&s3.Name);
    }
    for ( int i = 0; i < 1; i++)
    {
       printf("%d %d %s",s1.age,s2.age,s3.Name);
    }  
}
#include <stdio.h>

struct Student {
    char Name[20];
    int age;
    int marks;
};

int main() {
    int n, totalMarks = 0;
    float averageMarks;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student students[n];

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].Name);
        printf("Age: ");
        scanf("%d", &students[i].age);
        printf("Marks: ");
        scanf("%d", &students[i].marks);

        totalMarks += students[i].marks;
    }

    averageMarks = (float)totalMarks / n;

    printf("Total Marks: %d\n", totalMarks);
    printf("Average Marks: %.2f\n", averageMarks);

    return 0;
}