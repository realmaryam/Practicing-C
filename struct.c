#include <stdio.h>

struct emp{
    int emp_id;
    char emp_name[30];
};

    struct emp global_e;
int main(){
    struct emp e;

    printf("Enter the employee id : ");
    scanf("%d", &e.emp_id);

    printf("Enter the emploee name: ");
    scanf("%s", e.emp_name);

    // printf("Enter the global employee id : ");
    // scanf("%d", &global_e.emp_id);

    // printf("Enter the global emploee name: ");
    // scanf("%s", global_e.emp_name);

    printf("Employee ID  : %d\n", e.emp_id);
    printf("Employee Name: %s\n", e.emp_name);


    printf("Address of Emp. ID  : %p\n", &e.emp_id);
    printf("Address of Emp. Name: %p\n", &e.emp_name);

    /* e is stored in stack and it's address starts with 0x7ff..
       but global_e is stored in data memory and it's address starts with 0x55
    */

    // printf("Address of Global Emp. ID  : %p\n", &global_e.emp_id);
    // printf("Address of Global Emp. Name: %p\n", &global_e.emp_name);

    /* Memory allocated */
    /* 4 bytes for int and 30 bytes for string expected
    but compyler adds some padding to make it 36=9*4 
    */
    printf("memory allocated : %ld\n", sizeof(struct emp));
}