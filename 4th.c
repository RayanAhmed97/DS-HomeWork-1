#include <stdio.h>
#include <stdlib.h>
struct student {
    int num;
    char name[20];
    int age;
    struct student *next;
};
void add_student(struct student **head, int num, char *name, int age) {
    struct student *new_student = (struct student *)malloc(sizeof(struct student));
    new_student->num = num;
    strcpy(new_student->name, name);
    new_student->age = age;
    new_student->next = *head;
    *head = new_student;
}
void print_students(struct student *head) {
    int count = 0;
    while (head != NULL) {
        printf("%d- %s %d %d\n", count, head->name, head->age, head->num);
        count++;
        head = head->next;
    }
    printf("Total number of students: %d\n", count);
}
int main() {
    struct student *head = NULL;
    add_student(&head, 201, "Saliha", 27);
    add_student(&head, 203, "Ece", 19);
    print_students(head);
    return 0;
}
