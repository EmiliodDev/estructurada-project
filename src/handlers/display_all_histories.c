#include "crud_clinical_history.h"
#include "clinical_history.h"

void display_all_histories(ClinicalHistoryList *list) {
    ClinicalHistoryNode *current = list->head;
    int i = 0;

    if (current == NULL) {
        printf("There is not clinical histories to show.\n");
        return;
    }

    printf("=== Clinical History List ===\n");
    while(current != NULL) {
        printf("\nHistory #%d:\n", i + 1);
        display_clinical_history(current->history);
        current = current->next;
        i++;
    }
}