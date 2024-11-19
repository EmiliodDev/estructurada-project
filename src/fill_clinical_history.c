#include "clinical_history.h"

void fill_clinical_history(struct ClinicalHistory *history) {
    // === Personal Information ===
    printf("=== Personal Information ===\n");
    printf("\nName: ");
    history->Personal_Info.Name = read_string_dynamic();

    history->Personal_Info.Age = read_int("Age: ");
    history->Personal_Info.Weight = read_float("Weight (kg): ");
    history->Personal_Info.Height = read_float("Height (m): ");

    // === Birth Date ===
    printf("=== Birth Date ===\n");
    history->Personal_Info.Birth_Date.Day = read_int("Day: ");
    history->Personal_Info.Birth_Date.Month = read_int("Month: ");
    history->Personal_Info.Birth_Date.Year = read_int("Year: ");

    // === Marital Status and Blood Type ===
    history->Personal_Info.Marital_Status = read_marital_status();
    history->Personal_Info.Blood_Type = read_blood_type();

    // === Emergency Contact ===
    printf("=== Emergency Contact ===\n");
    printf("\nContact name: ");
    history->Emergency_Contact.Name = read_string_dynamic();

    printf("\nContact phone: ");
    history->Emergency_Contact.Phone_Number = read_string_dynamic();
    // === Medical History ===
    printf("\nAllergies: ");
    history->Allergies = read_string_dynamic();
    printf("\nRestrictions: ");
    history->Restrictions = read_string_dynamic();
    printf("\nGenetics: ");
    history->Medical_History.Genetics = read_string_dynamic();
    printf("\nCurrent diseases: ");
    history->Medical_History.Currents = read_string_dynamic();

    // === Medical History Background ===
    printf("=== Medical History Background ===\n");
    printf("\nPreconditions: ");
    history->Medical_History.Background.Treatments.Conditions = read_string_dynamic();
    printf("\nDrugs in use: ");
    history->Medical_History.Background.Treatments.Medicines = read_string_dynamic();
    printf("\nLast medical examination: ");
    history->Medical_History.Background.Last_Test = read_string_dynamic();
}