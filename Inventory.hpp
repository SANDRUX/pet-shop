#pragma once

#include <string>

class Inventory
{
private:

    int m_item_num;
    std::string m_description;
    std::string m_brand;
    char m_type;
    std::string m_category;
    double m_cost;
    int m_quantity;
    std::string m_sName;
    std::string m_contact;

public:

    inline void set_item_num(const int item_num) { this->m_item_num = item_num; }
    inline int get_item_num() const { return this->m_item_num; }
    inline void set_description(const std::string & description) { this->m_description = description; }
    inline const std::string & get_description() const { return this->m_description; }
    inline void set_brand(const std::string & brand) { this->m_brand = brand; }
    inline const std::string & get_brand() const { return this->m_brand; }
    inline void set_type(const char type) { this->m_type = type; }
    inline char get_type() const { return this->m_type; }
    inline void set_category(const std::string & category) { this->m_category = category; }
    inline const std::string & get_category() const { return this->m_category; }
    inline void set_cost(const double cost) { this->m_cost = cost; }
    inline double get_cost() const { return this->m_cost; }
    inline void set_quantity(const int quantity) { this->m_quantity = quantity; }
    inline int get_quantity() const { return this->m_quantity; }
    inline void set_supplier_name(const std::string & sName) { this->m_sName = sName; }
    inline const std::string & get_supplier_name() const { return this->m_sName; }
    inline void set_contact(const std::string contact) { this->m_contact = contact; }
    inline const std::string & get_contact() const { return this->m_contact; }
};