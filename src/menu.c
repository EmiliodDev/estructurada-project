#include "clinical_history.h"
#include "crud_clinical_history.h"

void menu(ClinicalHistoryList *list) {
    int choice = 0;
    int index;
    do {
        printf("=== Clinical History Menu ===\n");
        printf("1. Add clinical history\n");
        printf("2. Show all clinical histories\n");
        printf("3. Update clinical history\n");
        printf("4. Delete clinical history\n");
        printf("5. Search by name\n");
        printf("6. Exit\n");
        printf("Seleccione una opcion: ");

        if (scanf("%d", &choice) != 1) {
            printf("Invalid input. Please insert a number.\n");
            clear_buffer();
            continue;
        }
        clear_buffer();

        switch (choice) {
            case 1:
                add_clinical_history(list);
                break;
            case 2:
                display_all_histories(list);
                break;
            case 3:
                printf("Insert the index of the history to update: ");
                if(scanf("%d", &index) == 1) {
                    clear_buffer();
                    update_clinical_history(list, index);
                } else {
                    printf("Invalid value. You must insert a number.\n");
                    clear_buffer();
                }
                break;
            case 4:
                printf("Insert the index of the history to delete: ");
                if (scanf("%d", &index) == 1) {
                    clear_buffer();
                    delete_clinical_history(list, index);
                } else {
                    printf("Invalid value. You must insert a number.\n");
                    clear_buffer();
                }
                break;
            case 5:
                search_menu_option(list);
                break;
            case 6:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Invalid option. Insert the value again.\n");
        }
    } while (choice != 6);
}