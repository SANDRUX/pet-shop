#pragma once

#include "Inventory.hpp"

class Options
{
private:

    Inventory * inventory;
    int size;

    void print(const Inventory *) const;

public:

    Options();
    
    ~Options();

    void list() const;
    void search_by_item_number(int) const;
    void search_by_one_keyword(const std::string &) const;
    void show_low_inventories() const;
    void update();
    void add(const Inventory &);
    void r_delete(const Inventory &);
    void exit() const;
};