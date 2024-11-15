#include "include/clinical_history.h"
#include "include/crud_clinical_history.h"

int main() {
    ClinicalHistoryList historyList;

    init_clinical_history(&historyList);

    menu(&historyList);

    ClinicalHistoryNode *current = historyList.head;
    while(current != NULL) {
        ClinicalHistoryNode *next = current->next;
        free_clinical_history(current->history);
        free(current);
        current = next;
    }
    return 0;
}