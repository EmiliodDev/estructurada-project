#ifndef CLINICAL_HISTORY_H
#define CLINICAL_HISTORY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 100
#define MAX_PHONE_LENGTH 15

enum BloodType { A_POS, A_NEG, B_POS, B_NEG, O_POS, O_NEG, AB_POS, AB_NEG };
enum MaritalStatus { SINGLE, MARRIED, DIVORCED, WIDOWED };

struct Date {
    unsigned int Day;
    unsigned int Month;
    unsigned int Year;
};

struct Contact {
    char Name[MAX_NAME_LENGTH];
    char Phone_Number[MAX_PHONE_LENGTH];
};

struct Treatments {
    char *Conditions;
    char *Medicines;
};

struct Background {
    struct Treatments Treatments;
    char *Last_Test;
};

struct History {
    struct Background Background;
    char *Genetics;
    char *Currents;
};

struct PersonalInfo {
    char Name[MAX_NAME_LENGTH];
    int Age;
    struct Date Birth_Date;
    float Weight;
    float Height;
    enum BloodType Blood_Type;
    enum MaritalStatus Marital_Status;
};

struct ClinicalHistory {
    struct PersonalInfo Personal_Info;
    struct History Medical_History;
    struct Contact Emergency_Contact;
    char *Allergies;
    char *Restrictions;
};

void fill_clinical_history(struct ClinicalHistory *history);

struct ClinicalHistory* create_clinical_history();
void free_clinical_history(struct ClinicalHistory *history);

int read_int(const char *prompt);
float read_float(const char *prompt);
char* read_string_dynamic(const char *prompt);

enum BloodType read_blood_type();
enum MaritalStatus read_marital_status();

#endif