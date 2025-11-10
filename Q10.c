#include<stdio.h>
int main(){
    int i, students=0,count=0, marks[100];
    printf("enter number of students: "); // taking thee input of number of students
    scanf("%d", &students);
    for(i=0;i<students;i++)
{
    printf("enter marks of student %d: ", i+1); // taking thee input of marks of students (loop)
    scanf("%d",&marks[i]);
}
for(i=0;i<students;i++){
    if(marks[i]==99){
    printf("student number %d has scored 99\n", i+1); // loop for which student has obtained how many marks
    count++;
    }
}
    printf("%d students have scored 99 marks", count); // final count of how many students

}
