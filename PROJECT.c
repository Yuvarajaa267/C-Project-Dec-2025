#include<stdio.h>
#include<string.h>
#include<conio.h>
#include<stdlib.h>
//using typedef allows us to use the structure name without  the keyword 'struct'.
typedef struct 
{
    char name[50];
    int code;
    char door;
    float dist;
}Station;

int main()
{   
    int read=0;
    FILE* file;
    file = fopen("station.txt","r");

    if(file == NULL){
        return 1;   
    }

    Station s[100];
    
    int i = 0;
while (fscanf(file, "%49[^,],%d,%c,%f", s[i].name, &s[i].code, &s[i].door, &s[i].dist) == 4) {
    // Remove trailing \r and \n characters from s[i].name
    size_t len = strlen(s[i].name);
    while (len > 0 && (s[i].name[len - 1] == '\r' || s[i].name[len - 1] == '\n')) {
        s[i].name[len - 1] = '\0';
        len--;
    }
    i++;
}
    system("cls");
    
   
    printf("||WELCOME TO VADODARA METRO PHASE-1||");
   
    
    int entry, exit;
    for(int j=0;j<i;j++)
    {
        printf("\n%d:%s",s[j].code,s[j].name);
    }
    printf("Enter ENTRY Station Code:");
    scanf("%d",&entry);
    printf("Enter EXIT Station Code:");
    scanf("%d",&exit);

    if(entry > i-2 || exit > i-2 || entry < 0 || exit < 0)
        return 1;
    if(entry>exit)  
    {
        for()
    }

    else if(exit>entry){

    }

    else if(entry == exit)
        printf("The Entered Station Codes are invalid");
    fclose(file);
    return 0;
}
