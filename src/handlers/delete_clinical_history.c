#include "crud_clinical_history.h"
#include "clinical_history.h"

void delete_clinical_history(ClinicalHistoryList *list, int index) {
    if (index < 1 || index > list->count) {
        printf("Invalid index\n");
        return;
    }

    ClinicalHistoryNode *current = list->head;
    ClinicalHistoryNode *previous = NULL;

    for (int i = 1; i < index; i++) {
        previous = current;
        current = current->next;
    }

    if (previous == NULL) {
        list->head = current->next;
    } else {
        previous->next = current->next;
    }

    free(current);
    list->count--;
    printf("Medical history deleted successfully\n");
}