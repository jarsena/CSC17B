#ifndef STORAGEFACILITY_H
#define STORAGEFACILITY_H

class StorageFacility 
{
private:
    Unit* Unit;
    std::string facilityNumber;
    std::string facilityName;
    std::string managerName;
    int unitAmount;
    

public:
    // Big 3
    StorageFacility();
    StorageFacility(const StorageFacility& rhs);
    const StorageFacility& operator=(const StorageFacility& rhs);
    virtual ~StorageFacility();
    
    // Setters and getters
    std::string getFacilityNumber();
    void setFacilityNumber(std::string);
    std::string getFacilityName();
    void setFacilityName(std::string);
    std::string getManagerName();
    void setManagerName(std::string);
    int getUnitAmount();
    void setUnitAmount(int);
    Unit& getUnit();
};

#endif /* STORAGEFACILITY_H */

