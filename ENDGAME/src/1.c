#include <ncurses.h>





 int main()
{
    initscr();
    curs_set(0);
    noecho();
    FILE * fp;

   fp = fopen ("A.txt", "r");
   
    

char string[201];
while (1)
{
        fp = fopen ("A.txt", "r");
    for (int i = 0; i < 89; i++) {
        fread(string, 201, sizeof(char), fp);  //1
        mvprintw(i, 81, "%s", string);
        refresh();
    }
        fclose(fp);

        sleep(1);
        fp = fopen ("AT.txt", "r");
    for (int i = 0; i < 89; i++) {
        fread(string, 150, sizeof(char), fp);  //1.1
        mvprintw(i, 81, "%s", string);
        refresh();
    }
        fclose(fp);

        sleep(2);
        fp = fopen ("N.txt", "r");
    for (int i = 0; i < 89; i++) {
        fread(string, 201, sizeof(char), fp);   //2
        mvprintw(i, 81, "%s", string);
        refresh();
    }
        fclose(fp);

        sleep(1);
        fp = fopen ("NT.txt", "r");
    for (int i = 0; i < 89; i++) {
        fread(string, 98, sizeof(char), fp);  //2.1
        mvprintw(i, 81, "%s", string);
        refresh();
    }
        fclose(fp);

        sleep(2);
        fp = fopen ("P.txt", "r");
    for (int i = 0; i < 89; i++) {
        fread(string, 201, sizeof(char), fp);   //3
        mvprintw(i, 81, "%s", string);
        refresh();
    }
        fclose(fp);

        sleep(1);
        fp = fopen ("PT.txt", "r");
    for (int i = 0; i < 89; i++) {
        fread(string, 139, sizeof(char), fp);  //3.1
        mvprintw(i, 81, "%s", string);
        refresh();
    }
        fclose(fp);

        sleep(2);
        fp = fopen ("S.txt", "r");
    for (int i = 0; i < 89; i++) {
        fread(string, 201, sizeof(char), fp);   //4
        mvprintw(i, 81, "%s", string);
        refresh();
    }
        fclose(fp);

        sleep(1);
        fp = fopen ("ST.txt", "r");
    for (int i = 0; i < 89; i++) {
        fread(string, 110, sizeof(char), fp);  //4.1
        mvprintw(i, 81, "%s", string);
        refresh();
    }
        fclose(fp);

        sleep(2);
        fp = fopen ("V.txt", "r");
    for (int i = 0; i < 89; i++) {
        fread(string, 201, sizeof(char), fp);   //5
        mvprintw(i, 81, "%s", string);
        refresh();
    }
        fclose(fp);

        sleep(1);
        fp = fopen ("VT.txt", "r");
    for (int i = 0; i < 89; i++) {
        fread(string, 94, sizeof(char), fp);  //5.1
        mvprintw(i, 81, "%s", string);
        refresh();
    }
        fclose(fp);


    break;
}

    getch();
    endwin();
}
