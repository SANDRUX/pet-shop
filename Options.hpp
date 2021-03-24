#pragma once

#include "Inventory.hpp"

class Options
{
private:

    Inventory * inventory;
    int size;

    void print(const Inventory *);

public:

    Options();
    
    ~Options();

    void list();
    void search_by_item_number(int);
    void search_by_one_keyword(const std::string &);
    void show_low_inventories();
    void update();
    void add(const Inventory &);
    void r_delete(const Inventory &);
    void exit();
};