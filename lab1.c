#include <stdio.h>

int recordCount = 0;
int changeCount = 0;
char databaseName[50];

void printAllRecords() {
    printf("You have entered the Print all records function\n");
}

void addRecord() {
    int partNumber;
    char partName[50];
    float partSize;
    char partSizeMetric[10];
    float partCost;
    
    printf("Enter part number: ");
    scanf("%d", &partNumber);
    printf("Enter part name: ");
    scanf("%s", partName);
    printf("Enter part size: ");
    scanf("%f", &partSize);
    printf("Enter part size metric: ");
    scanf("%s", partSizeMetric);
    printf("Enter part cost: ");
    scanf("%f", &partCost);
    
    recordCount++;
    changeCount++;
    
    printf("You entered:\n Part number = %d\n Part name = %s\n Part size = %.2f\n Part size metric = %s\n Part cost = $%.2f\n", 
           partNumber, partName, partSize, partSizeMetric, partCost);
}

void deleteLastRecord() {
    if (recordCount > 0) {
        recordCount--;
        changeCount++;
        printf("You have entered the delete last record function\n");
    } else {
        printf("No records to delete.\n");
    }
}

void printNumRecords() {
    printf("You have entered the Print number of records function\n");
}

void printDatabaseSize() {
    printf("You have entered the Print database size function\n");
}

void printNumChanges() {
    printf("You have modified the database %d times\n", changeCount);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        printf("Error: specify database name.\n");
        return 1;
    }
    
    int i = 0;
    while (argv[1][i] != '\0' && i < 49) {
        databaseName[i] = argv[1][i];
        i++;
    }
    databaseName[i] = '\0';
    
    int choice;
    while (1) {
        printf("\n%s Database Menu:\n", databaseName);
        printf("1. Print all records\n");
        printf("2. Add record\n");
        printf("3. Delete the last record\n");
        printf("4. Print number of records\n");
        printf("5. Print database size\n");
        printf("6. Print number of changes\n");
        printf("7. Exit\n");
        printf("enter your selection: ");
        scanf("%d", &choice);
        
        if (choice == 1) {
            printAllRecords();
        } else if (choice == 2) {
            addRecord();
        } else if (choice == 3) {
            deleteLastRecord();
        } else if (choice == 4) {
            printNumRecords();
        } else if (choice == 5) {
            printDatabaseSize();
        } else if (choice == 6) {
            printNumChanges();
        } else if (choice == 7) {
            printf("Exiting program.\n");
            break;
        } else {
            printf("Invalid, try again.\n");
        }
    }
    return 0;
}
 