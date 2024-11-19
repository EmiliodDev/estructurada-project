#include "crud_clinical_history.h"
#include "clinical_history.h"

ClinicalHistoryNode *search_by_name(const ClinicalHistoryList *list, const char *name)
{
    if (!list || !name)
    {
        printf("Error: Invalid list or name.\n");
        return NULL;
    }

    ClinicalHistoryNode *current = list->head;
    while (current != NULL)
    {
        if (current->history && current->history->Personal_Info.Name)
        {
            if (strcmp(current->history->Personal_Info.Name, name) == 0)
            {
                return current;
            }
        }
        current = current->next;
    }

    printf("No clinical history found with name: %s\n", name);
    return NULL;
}