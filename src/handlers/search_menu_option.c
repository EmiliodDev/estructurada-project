#include "crud_clinical_history.h"
#include "clinical_history.h"

void search_menu_option(const ClinicalHistoryList *list)
{
    char buffer[256];
    printf("\nEnter the name to search: ");
    if (fgets(buffer, sizeof(buffer), stdin) != NULL)
    {
        buffer[strcspn(buffer, "\n")] = '\0';
        ClinicalHistoryNode *result = search_by_name(list, buffer);

        if (result)
        {
            printf("Clinical history found\n");
            display_clinical_history(result->history);
        }
        else
        {
            printf("No match found for name: %s\n", buffer);
        }
    }
    else
    {
        printf("Error reading input.\n");
    }
}