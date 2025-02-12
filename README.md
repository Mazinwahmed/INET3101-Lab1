# INET3101 Lab1
## Code for INET3101 Lab 1
Written by Mazin Ahmed.
This program serves a simple database interface in the C language 
that allows you to input information and hold that information in records.
When the program is executed, it displays a menu with 7 options, the two 
main ones for this lab being "Add record" and "Print number of changes".
The user can select one of the seven options in order to go over, edit, delete or view the records of information that were inputted to the program.

printAllRecords() -> 
input: None 
output: message indicating that function was entered
algo: just a placeholder message

addRecord() -> 
input: information for the record they wish to establish
output: confirms your entries that have been added to the record
algo: asks user for data regarding each field, sotres it, increments the record and change counter, and then prints the entered details

deleteLastRecord() -> 
input: None 
output: message indicating the deletion
algo: checks for record existance, deletes the record, increments change counter, prints confirmation message

printNumRecords() -> 
input: None 
output: message indicating that function was entered
algo: just a placeholder message

printDatabaseSize() -> 
input: None 
output: message indicating that function was entered
algo: just a placeholder message

printNumChanges() -> 
input: None 
output: message indicating that function was entered
algo: just a placeholder message

Files: 
lab1 -> C Source file
lab1 -> executable file
README -> design doc

