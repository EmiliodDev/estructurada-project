#include "clinical_history.h"

void fill_clinical_history(struct ClinicalHistory *history) {
    printf("=== Personal Information ===\n");
    printf("Name: ");
    fgets(history->Personal_Info.Name, MAX_NAME_LENGTH, stdin);
    history->Personal_Info.Name[strcspn(history->Personal_Info.Name, "\n")] = '\0';

    history->Personal_Info.Age = read_int("Age: ");
    history->Personal_Info.Weight = read_float("Weight (kg): ");
    history->Personal_Info.Height = read_float("Height (m): ");

    printf("=== Bird Date ===\n");
    history->Personal_Info.Birth_Date.Day = read_int("Day: ");
    history->Personal_Info.Birth_Date.Month = read_int("Month: ");
    history->Personal_Info.Birth_Date.Year = read_int("Year: ");

    history->Personal_Info.Marital_Status = read_marital_status();
    history->Personal_Info.Blood_Type = read_blood_type();

    printf("=== Emergency Contact ===\n");
    printf("Contact name: ");
    fgets(history->Emergency_Contact.Name, MAX_NAME_LENGTH, stdin);
    history->Emergency_Contact.Name[strcspn(history->Emergency_Contact.Name, "\n")] = '\0';

    printf("Contact phone: ");
    fgets(history->Emergency_Contact.Phone_Number, MAX_PHONE_LENGTH, stdin);
    history->Emergency_Contact.Phone_Number[strcspn(history->Emergency_Contact.Phone_Number, "\n")] = '\0';

    history->Allergies = read_string_dynamic("Allergies: ");
    history->Restrictions = read_string_dynamic("Restrictions: ");
    history->Medical_History.Genetics = read_string_dynamic("Genetics: ");
    history->Medical_History.Currents = read_string_dynamic("Currents diseases: ");

    printf("=== Medica History Background ===\n");
    history->Medical_History.Background.Treatments.Conditions = read_string_dynamic("Preconditions: ");
    history->Medical_History.Background.Treatments.Medicines = read_string_dynamic("Drugs in use: ");
    history->Medical_History.Background.Last_Test = read_string_dynamic("Last medical examination: ");
}

