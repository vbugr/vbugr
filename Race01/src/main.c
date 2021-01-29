#include "../inc/header.h"

int main() {
    int row;
    int col;

    initscr();
    //curs_set(0);
    getmaxyx(stdscr, row, col);
    // max tear len
    t_tear **tears = (t_tear **)malloc(sizeof(t_tear *) * col);
    for (int i = 0; i < col; i++) {
      t_tear *tear = (t_tear *)malloc(sizeof(t_tear));
      tear->max_len = (rand() % (row - 5)) + 5;
      // tear->max_len = 5;
      tear->curr_row = 0;
      tear->col = i;
      tear->wait_time = rand() % row;
      // tear->wait_time = 5;
      tear->tail_row = 0;
      tears[i] = tear;
    }
    refresh();
    start_color();
    init_pair(1, COLOR_GREEN, COLOR_BLACK);
    attron(COLOR_PAIR(1));

    // row - 2 because it takes whole row for tear to go,
    // and max of row to delete the trail,
    // as well as max of row to wait for a tear
    for (int i = 0; i <= row * 3; i++) {
      usleep(SECOND / 10);
      for (int j = 0; j < col; j++) {
        if (tears[j]->curr_row < tears[j]->wait_time) {
          tears[j]->wait_time--;
          continue;
        }
        if (tears[j]->tail_row < row && tears[j]->curr_row >= tears[j]->max_len) {
          mvdelch(tears[j]->tail_row, tears[j]->col);
          mvinsch(tears[j]->tail_row, tears[j]->col, ' ');
          tears[j]->tail_row++;
        }
        if (tears[j]->curr_row < row) {
          move(tears[j]->curr_row, tears[j]->col);
          addch(rand() % 26 + 65);
          tears[j]->curr_row++;
        }
      }
      refresh();
    }
    getchar();
    endwin();
}
