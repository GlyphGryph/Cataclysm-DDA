#ifndef _LIVE_VIEW_H_
#define _LIVE_VIEW_H_

#include "catacurse.h"

class game;
class item;

class live_view
{
public:
    live_view();
    ~live_view();

    void init(game *g, int start_x, int start_y, int width, int height);
    void show(const int x, const int y);
    bool hide(bool refresh = true, bool force = false);

private:
    WINDOW *w_live_view;
    int width, height;
    bool enabled;
    game *g;

    void print_items(std::vector<item> &items, int &line) const;
};
#endif