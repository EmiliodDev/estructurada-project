#ifndef CRUD_CLINICAL_HISTORY_H
#define CRUD_CLINICAL_HISTORY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ClinicalHistoryNode {
    struct ClinicalHistory *history;
    struct ClinicalHistoryNode *next;
} ClinicalHistoryNode;

typedef struct {
    ClinicalHistoryNode *head;
    int count;
} ClinicalHistoryList;

void menu(ClinicalHistoryList *list);

void init_clinical_history(ClinicalHistoryList *list);

void add_clinical_history(ClinicalHistoryList *list);
void display_all_histories(ClinicalHistoryList *list);
void delete_clinical_history(ClinicalHistoryList *list, int index);
void update_clinical_history(ClinicalHistoryList *list, int index);
void display_clinical_history(struct ClinicalHistory *history);
ClinicalHistoryNode *search_by_name(const ClinicalHistoryList *list, const char *name);
void search_menu_option(const ClinicalHistoryList *list);

#endif