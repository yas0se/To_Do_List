#include <stdio.h>
#include <stdlib.h>
#include "todo.h"
void addTask(){
    if(numTasks < MAX_TASKS){
        printf("Entrez le nom de la tache: ");
        scanf("%s", tasks[numTasks].name);
        printf("Entrez la priorite de la tache (1 - 10): ");
        scanf("%d", &tasks[numTasks].priority);
        printf("Entrez la date d'echeance (YYYY-MM-DD): ");
        scanf("%s", tasks[numTasks].deadline);
        tasks[numTasks].completed = 0;
        numTasks++;
        printf("Tache ajoutee avec succes.\n");
    } else {
        printf("La liste des taches est pleine.\n");
    }
}

void markTaskCompleted() {
    int taskIndex;
    printf("Entrez l'indice de la tache a marquer comme terminee: ");
    scanf("%d", &taskIndex);
    if (taskIndex >= 0 && taskIndex < numTasks) {
        tasks[taskIndex].completed = 1;
        printf("La tache a ete marquee comme terminee.\n");
    } else {
        printf("Indice de tache invalide.\n");
    }
}

void displayTasks() {
    printf("Liste des taches :\n");
    printf("-------------------------------------------------------------\n");
    printf("Nom de la tache   | Priorite | Date d'echeance | Terminee\n");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < numTasks; i++) {
        printf("%-18s | %-8d | %-15s | %s\n", tasks[i].name, tasks[i].priority, tasks[i].deadline, tasks[i].completed ? "Oui" : "Non");
    }
    printf("-------------------------------------------------------------\n");
}

void deleteTask() {
    int taskIndex;
    printf("Entrez l'indice de la tache a supprimer : ");
    scanf("%d", &taskIndex);
    if (taskIndex >= 0 && taskIndex < numTasks) {
        for (int i = taskIndex; i < numTasks - 1; i++) {
            tasks[i] = tasks[i + 1];
        }
        numTasks--; 
        printf("La tache a ete supprimee avec succes.\n");
    } else {
        printf("Indice de tache invalide.\n");
    }
}
