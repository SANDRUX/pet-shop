#include "Options.hpp"
#include <iostream>
#include <fstream>

Options::Options() 
{
    this->inventory = nullptr;
    this->size = 0;
}

Options::~Options()
{
    if (inventory != nullptr)
    {
        delete this->inventory;
    }
}


void Options::list()
{
    if (this->inventory == nullptr)
    {
        std::cout << "Inventory is empty!" << std::endl;       
        return;
    }

    for (int i = 0; i < this->size; i++)
    {
        std::cout << inventory[i].get_item_num() << std::endl;
        //TODO
        
    }
        
}
