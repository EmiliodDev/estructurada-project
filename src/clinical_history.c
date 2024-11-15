#include "clinical_history.h"

struct ClinicalHistory* create_clinical_history() {
    struct ClinicalHistory *history = (struct ClinicalHistory*) malloc(sizeof(struct ClinicalHistory));
    if (!history) {
        fprintf(stderr, "Error memory assing to ClinicalHistory.\n");
        exit(1);
    }

    history->Medical_History.Background.Treatments.Conditions = NULL;
    history->Medical_History.Background.Treatments.Medicines = NULL;
    history->Medical_History.Genetics = NULL;
    history->Medical_History.Currents = NULL;
    history->Allergies = NULL;
    history->Restrictions = NULL;

    return history;
}

void free_clinical_history(struct ClinicalHistory *history) {
    if (!history) return;

    free(history->Medical_History.Background.Treatments.Conditions);
    free(history->Medical_History.Background.Treatments.Medicines);
    free(history->Medical_History.Genetics);
    free(history->Medical_History.Currents);
    free(history->Allergies);
    free(history->Restrictions);
    free(history);
}

char* read_string_dynamic(const char *prompt) {
    printf("%s", prompt);
    char buffer[256];
    fgets(buffer, 256, stdin);
    buffer[strcspn(buffer, "\n")] = '\0';

    char *input = (char*) malloc(strlen(buffer) + 1);
    if (input) {
        strcpy(input, buffer);
    }
    return input;
}

int read_int(const char *prompt) {
    int value;
    printf("%s", prompt);
    scanf("%d", &value);
    getchar();
    return value;
}

float read_float(const char *prompt) {
    float value;
    printf("%s", prompt);
    scanf("%f", &value);
    getchar();
    return value;
}

enum BloodType read_blood_type() {
    int choice;
    printf("=== Blood Type ===\n");
    printf("0: A+\n1: A-\n2: B+\n3: B-\n4: O+\n 5: 0-\n6: AB+\n7: AB-\n");
    do {
        choice = read_int("Select a blood type (0-7): ");
    } while(choice < 0 || choice > 7);
    return (enum BloodType)choice;
}

enum MaritalStatus read_marital_status() {
    int choice;
    printf("=== Marital Status ===\n");
    printf("0: Single\n1: Married\n2: Divorced\n3: Widowed\n");
    do {
        choice = read_int("Select a marital status(0-3): ");
    } while(choice < 0 || choice > 3);
    return (enum MaritalStatus)choice;
}