#include "calendar_application.h"

#include"calender.c"
#include"event.c"
#include"fileoperation.c"
#include"remainder.c"
#include"utils.c"


int main() {
    int choice;

    do{
        showMenu();
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                showCalendar();
                break;
            case 2:
                setReminder();
                break;
            case 3:
                scheduleEvent();
                break;
            case 4:
                printf("Exiting the application.\n");
				break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }while(choice!=4);

    return 0;
}
