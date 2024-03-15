#include <stdio.h>
#include <stdlib.h>
#include "todo.h"

#define MAX_TASKS 30
#define MAX_TASK_NAME_LENGTH 50


int main()
{
    char name[20];
    int choice;
    printf("Welcome to your Todo Manager!\n");
    printf("Please Enter your Name: ");
    scanf("%s", name);
    printf("Hello %s ", name);
    do{
    printf("Please choose an option\n");
    printf("1. Enter a task \n");
    printf("2. Mark Task as Completed \n");
    printf("3. List all tasks\n ");
    printf("4. Exit\n");
    scanf("%d", choice);
    switch(choice) {
            case 1:
                addTask();
                break;
            case 2:
                markTaskCompleted();
                break;
            case 3:
                displayTasks();
                break;
            case 4:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide. Veuillez choisir une option valide.\n");
        }
    } while(choice != 4);
    return 0;
}
