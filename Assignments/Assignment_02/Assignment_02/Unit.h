#ifndef UNIT_H
#define UNIT_H

class Unit 
{
private:
    std::string unitType;
    std::string unitNumber;
    bool available;
    float unitSqFt;
    float unitHeight;

public:
    // Big 3
    Unit();
    Unit(const Unit&);
    const Unit& operator= (const Unit&);
    virtual ~Unit();
    
    // Setters and getters
    std::string getUnitType();
    void setUnitType(std::string);
    std::string getUnitNumber();
    void setUnitNumber(std::string);
    bool getAvailable();
    void setAvailable(bool);
    float getUnitSqFt();
    float getUnitHeight();
};

#endif /* UNIT_H */

