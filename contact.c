#include <stdio.h>
#include <string.h>
#include "contact.h"

void add_contact(Contact *list, int *count)
{
    if (*count >= MAX_CONTACTS)
    {
        printf("List is full!\n");
        return;
    }

    printf("Name: ");
    fgets(list[*count].name, MAX_NAME, stdin);
    list[*count].name[strcspn(list[*count].name, "\n")] = '\0';

    printf("Phone: ");
    fgets(list[*count].phone, MAX_PHONE, stdin);
    list[*count].phone[strcspn(list[*count].phone, "\n")] = '\0';

    (*count)++;
    printf("Added.\n");
}

int find_contact(Contact *list, int count, const char *name)
{
    int i;

    for (i = 0; i < count; i++)
        if (strcmp(list[i].name, name) == 0)
            return i;

    return -1;
}

void delete_contact(Contact *list, int *count)
{
    char name[MAX_NAME];
    int idx, i;

    if (*count == 0)
    {
        printf("List is empty!\n");
        return;
    }

    printf("Name: ");
    fgets(name, MAX_NAME, stdin);
    name[strcspn(name, "\n")] = '\0';

    idx = find_contact(list, *count, name);
    if (idx < 0)
    {
        printf("Not found.\n");
        return;
    }

    for (i = idx; i < *count - 1; i++)
        list[i] = list[i + 1];

    (*count)--;
    printf("Deleted.\n");
}

void show_contacts(Contact *list, int count)
{
    int i;

    if (count == 0)
    {
        printf("List is empty!\n");
        return;
    }

    for (i = 0; i < count; i++)
        printf("%d.%s %s\n", i + 1, list[i].name, list[i].phone);
}

void save_to_file(Contact *list, int count)
{
    FILE *fp = fopen("contacts.dat", "wb");

    if (fp == NULL)
    {
        printf("Cannot open file.\n");
        return;
    }

    fwrite(&count, sizeof count, 1, fp);
    fwrite(list, sizeof(Contact), count, fp);
    fclose(fp);
}

void load_from_file(Contact *list, int *count)
{
    FILE *fp = fopen("contacts.dat", "rb");

    *count = 0;
    if (fp == NULL)
        return;

    if (fread(count, sizeof *count, 1, fp) != 1)
    {
        *count = 0;
        fclose(fp);
        return;
    }

    if (*count < 0 || *count > MAX_CONTACTS)
    {
        *count = 0;
        fclose(fp);
        return;
    }

    fread(list, sizeof(Contact), *count, fp);
    fclose(fp);
}
