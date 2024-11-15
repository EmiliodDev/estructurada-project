#include "crud_clinical_history.h"
#include "clinical_history.h"

void update_clinical_history(ClinicalHistoryList *list, int index) {
    if (index < 1 || index > list->count) {
        printf("Invalid index.\n");
        return;
    }

    ClinicalHistoryNode *current = list->head;
    for(int i = 1; i < index; i++) {
        current = current->next;
    }

    printf("Actualizando el historial #%d:\n", index);
    fill_clinical_history(current->history);
}