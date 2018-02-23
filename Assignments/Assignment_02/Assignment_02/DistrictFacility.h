#ifndef DISTRICTFACILITY_H
#define DISTRICTFACILITY_H

class DistrictFacility : public StorageFacility
{
private:
    std::string district;

public:
    // Big 3
    DistrictFacility();
    DistrictFacility(const DistrictFacility& rhs);
    const DistrictFacility& operator=(const DistrictFacility& rhs);
    virtual ~DistrictFacility();
    
    // Setters and getters
    std::string getDistrict();
    void setDistrict(std::string);
};

#endif /* DISTRICTFACILITY_H */

