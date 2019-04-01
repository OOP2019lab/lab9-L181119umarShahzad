#include "Project.h"
Project::Project(char* name, int budget, int duration)
{
	this->name = name;
	this->budget = budget;
	this->duration = duration;
}

Project::Project(const Project& c)
{
	this->name = c.name;
	this->budget = c.budget;
	this->duration = c.duration;
}

ostream& operator<<(ostream& osObject, const Project&c)
{
	osObject << "project name: " << c.name << endl << "budget: " << c.budget << endl <<  "duration: "<< c.duration<<endl;
	return osObject;
}

const Project &  Project:: operator=(const Project& other)
{
	this->name = other.name;
	this->budget = other.budget;
	this->duration = other.duration;
	return *this;
}

bool Project::exists(Project const *c)const
{
	if (strlen(name) == strlen(c->name))
	{
		for (int i = 0; i < strlen(name); i++)
		{
			if (name[i] != c->name[i])
			{
				return 0;
			}
		}
		return 1;
	}
	else
		return 0;
}

void Project::setBudget(int x)
{
	this->budget = x;
}

Project::~Project()
{
	delete[]name;
	name = nullptr;
}
