#include "address.h"
#include "Project.h"
#include "Employee.h"


Address::Address(char* h.no, char* St.Name, char * City.name,char* Country.name)
{
	
	house_Number = h.no;
	street_Name = St.Name;
	city = City.name;
	country = Country.name;
}

 Address::Address(const Address &A)
 {
	 this->city=A.city;
	 this->country=A.country;
	 this->house_Number = A.house_Number;
	 this->street_Name = A.street_Name;
 }

 ostream& operator<<(ostream& osObject, const Address&A)
 {
	 osObject << A.house_Number << " " << A.street_Name << " " << A.city << " " << A.country;
	 return osObject;
 }

 const Address &  Address:: operator=(const Address& other)
 {
	 this->city = other.city;
	 this->country = other.country;
	 this->house_Number = other.house_Number;
	 this->street_Name = other.street_Name;

	 return *this;
 }

 Address::~Address()
 {
	 house_Number=nullptr;
	 street_Name=nullptr ;
	 city=nullptr;
	 country=nullptr;
 }
