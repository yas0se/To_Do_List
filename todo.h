#ifndef TODO_H_INCLUDED
#define TODO_H_INCLUDED

#define MAX_TASKS 30
#define MAX_TASK_NAME_LENGTH 50

typedef struct {
    char name[MAX_TASK_NAME_LENGTH];
    int priority;
    char deadline[11];
    int completed;
} Task;

Task tasks[MAX_TASKS];
int numTasks = 0;

void displayTasks();
void markTaskCompleted();
void addTask();
void deleteTask();
void filterTasksByPriority(int priority);

#endif // TODO_H_INCLUDED
