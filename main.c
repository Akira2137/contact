#include <stdio.h>
#include <string.h>
#include "contact.h"

int main(void)
{
    int choice;
    Contact list[MAX_CONTACTS];
    int count = 0;

    load_from_file(list, &count);

    for (;;)
    {
        printf("\n=== Contact Book ===\n");
        printf("1.Add\n2.Show\n3.Find\n4.Delete\n0.Exit\n");
        printf("Choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Please enter a number.\n");
            while (getchar() != '\n')
                ;
            continue;
        }
        while (getchar() != '\n')
            ;

        switch (choice)
        {
        case 1:
            add_contact(list, &count);
            break;
        case 2:
            show_contacts(list, count);
            break;
        case 3:
        {
            char name[MAX_NAME];
            int idx;

            printf("Name: ");
            fgets(name, MAX_NAME, stdin);
            name[strcspn(name, "\n")] = '\0';

            idx = find_contact(list, count, name);
            if (idx < 0)
                printf("Not found.\n");
            else
                printf("Found:%s %s\n", list[idx].name, list[idx].phone);

            break;
        }
        case 4:
            delete_contact(list, &count);
            break;
        case 0:
            save_to_file(list, count);
            printf("Saved, bye\n");
            return 0;
        default:
            printf("Invalid\n");
            break;
        }
    }

    return 0;
}
