#include "clinical_history.h"
#include "crud_clinical_history.h"

void display_clinical_history(struct ClinicalHistory *history) {
    printf("Name: %s\n", history->Personal_Info.Name);
    printf("Age: %d\n", history->Personal_Info.Age);
    printf("Weight: %.2f\n", history->Personal_Info.Weight);
    printf("Heigh: %.2f\n", history->Personal_Info.Height);
    printf("Allergies: %s\n", history->Allergies);
    printf("Restricciones: %s\n", history->Restrictions);
}