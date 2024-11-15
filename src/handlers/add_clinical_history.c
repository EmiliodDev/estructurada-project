#include "crud_clinical_history.h"
#include "clinical_history.h"

void add_clinical_history(ClinicalHistoryList *list) {
    ClinicalHistoryNode *new_node = (ClinicalHistoryNode *)malloc(sizeof(ClinicalHistoryNode));
    if (new_node == NULL) {
        printf("Error: memory assign to new history.");
        return;
    }

    fill_clinical_history(new_node->history);
    new_node->next = list->head;
    list->head = new_node;
    list->count++;
    printf("Clinical history successfully added.\n");
}