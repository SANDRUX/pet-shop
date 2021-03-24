#include "Options.hpp"
#include <iostream>
#include <fstream>
#include <cstring>

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

void Options::print(const Inventory * member)
{
    std::cout << member->get_item_num() << "\t";
    std::cout << member->get_description() << "\t";
    std::cout << member->get_brand() << "\t";
    std::cout << member->get_type() << "\t";
    std::cout << member->get_category() << "\t";
    std::cout << member->get_cost() << "\t";
    std::cout << member->get_quantity() << "\t";
    std::cout << member->get_supplier_name() << "\t";
    std::cout << member->get_contact() << std::endl;
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
        this->print(&(this->inventory[i]));
    }       
}

void Options::search_by_item_number(int item_num)
{
    if (this->inventory == nullptr)
    {
        std::cout << "Inventory is empty!" << std::endl;

        return;
    }

    for (int i = 0; i < this->size; i++)
    {
        if (this->inventory[i].get_item_num() == item_num)
        {
            this->print(&(this->inventory[i]));

            return;
        }
    }

    std::cout << "Not found!" << std::endl;
}

void Options::search_by_one_keyword(const std::string & keyword)
{
    if (this->inventory == nullptr)
    {
        std::cout << "Inventory is empty!" << std::endl;

        return;
    }


    for (int i = 0; i < this->size; i++)
    {
        const char * item_num = std::to_string(this->inventory[i].get_item_num()).c_str();
        const char * description = this->inventory[i].get_description().c_str();
        const char * brand = this->inventory[i].get_brand().c_str();
        const char * category = this->inventory[i].get_category().c_str();
        const char * cost = std::to_string(this->inventory[i].get_cost()).c_str();
        const char * quantity = std::to_string(this->inventory[i].get_quantity()).c_str();
        const char * sName = this->inventory[i].get_supplier_name().c_str();
        const char * contact = this->inventory[i].get_contact().c_str();

        if (strstr(description, keyword.c_str()) != NULL || strstr(brand, keyword.c_str()) != NULL || strstr(category, keyword.c_str()) != NULL 
        || strstr(item_num, keyword.c_str()) != NULL || strstr(cost, keyword.c_str()) != NULL || strstr(quantity, keyword.c_str()) != NULL)
        {
            this->print(&(this->inventory[i]));

            return;
        }
    }

    std::cout << "Not found!" << std::endl;
}

