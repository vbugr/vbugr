#include "../inc/menu.h"

char *choices[] = { 
			"START",
        /*    "SETTINGS",
            "ABOUT US",*/
            "EXIT",
		  };

int n_choices = sizeof(choices) / sizeof(char *);

void print_menu(WINDOW *win, int highlight);

// void mx_start_menu_choice(int highlight) {
// 	if (highlight == 1)
// 		mx_start_game; // function that will start game
// 	else if (highlight == 2) // if you are at settings input something
// 	else if  (highlight == 3) // if you are at about us, there will be some information about us
// 	else (highlight == 4) // exit out of menu
//  }

void print_menu(WINDOW *win, int highlight) {
    int x; 
    int y;
    getmaxyx(win, y, x);
    int text_spacing;
    int i;

    x = x/ 2 - 8 / 2;  // 8 is max len of text in menu (used to center options)
    y = y / 4;
    text_spacing = y / 4;

    wattron(win, COLOR_PAIR(1));
    box(win, 0, 0);

    for (i = 0; i < n_choices; ++i) {

        if (highlight == i + 1) { // this is used to highlight the present element
            wattron(win, A_REVERSE);
            mvwprintw(win, y, x, "%s", choices[i]);
            wattroff(win, A_REVERSE);
        } else
            mvwprintw(win, y, x, "%s", choices[i]);
        y += text_spacing;
    }
    wrefresh(win);
}


void mx_show_menu(t_config *config) {
    int highlight = 1;
    int choice;
    int yMax;
    int xMax;
    t_level level = config->level;
    t_sub_level sub_level = config->sub_level;
    int speed = config->platform_speed;

    getmaxyx(stdscr, yMax, xMax);

    WINDOW *win = newwin(yMax / 2, xMax / 2, yMax / 4, xMax / 4);
    keypad(win, TRUE);
    refresh();

    print_menu(win, highlight);

    while (1) {
        choice = wgetch(win);
        switch (choice) {
            case KEY_UP:
                if (highlight == 1)
                    highlight = n_choices;
                else
                    --highlight;
                break;
            case KEY_DOWN:
                if (highlight == n_choices)
                    highlight = 1;
                else
                    ++highlight;
                break;
            default:
                refresh();
        }
        if (choice == 10) {
            switch (highlight) {
                case 1:
                //start
                    play(config);
                    config->win = 0;
                    //reset level to start
                    config->level = level;
                    config->sub_level = sub_level;
                    config->score = 0;
                    config->platform_speed = speed;
                    break;
            //    case 2:
                    break;
                //settings
          //      case 3:
                
		    break;
                //about us

                case 4:
                    //exit
                    exit(0);
                    break;
                default:
                refresh();
                break;
            }
        }

        print_menu(win, highlight);
    }

    clrtoeol();
    refresh();
    endwin();
}
