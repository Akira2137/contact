#ifndef CONTACT_H
#define CONTACT_H

#define MAX_NAME     50
#define MAX_PHONE    20
#define MAX_CONTACTS 1000

typedef struct
{
    char name[MAX_NAME];
    char phone[MAX_PHONE];
} Contact;

void add_contact(Contact *list, int *count);
void show_contacts(Contact *list, int count);
int  find_contact(Contact *list, int count, const char *name);
void delete_contact(Contact *list, int *count);
void save_to_file(Contact *list, int count);
void load_from_file(Contact *list, int *count);

#endif
