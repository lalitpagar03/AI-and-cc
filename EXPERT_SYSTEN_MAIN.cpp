#include <iostream>
#include <string>
#include <vector>
using namespace std;
class Hospital 
{
public:
    string name;
    string address;
    vector<string> specialties;
    Hospital(string name, string address, vector<string> specialties) 
    {
        this->name = name;
        this->address = address;
        this->specialties = specialties;
    }
};

// Define a list of hospitals with their facilities and specialties
vector<Hospital> hospitals = {
    Hospital("CNS Hospital", "Nashik Road", {"Emergency Care", "Surgery", "Radiology", "Cardiology"}),
    Hospital("Brain Hospital", "College Road", {"Pediatrics", "Neurology", "Oncology"}),
    Hospital("Heart Hospital", "Amrutdham", {"Cardiology", "Heart Surgery", "Cardiac Rehabilitation"}),
    Hospital("Women's Hospital", "Jail Road", {"Obstetrics", "Gynecology", "Skin Health", "Fertility Services"})
};

// Define a function to search for hospitals based on a user's disease input
void searchHospitals(string disease) 
{
    cout << "Hospitals for " << disease << ":" << endl;
    for (Hospital hospital : hospitals) {
        for (string specialty : hospital.specialties) {
            if (specialty.find(disease) != string::npos) {
                cout << hospital.name << " - " << hospital.address << endl;
                break;
            }
        }
    }
}

int main() 
{
    cout << "List of hospitals:" << endl;
    for (Hospital hospital : hospitals) {
        cout << hospital.name << endl;
        cout << "Address: " << hospital.address << endl;
        cout << "Facilities: ";
        for (string specialty : hospital.specialties) {
            cout << specialty << ", ";
        }
        cout << endl;
    }

    // Prompt the user to enter a disease and search for hospitals that treat it
    string disease;
    cout << "\n\nEnter a disease to search for hospitals: ";
    getline(cin, disease);
    searchHospitals(disease);

    return 0;
}
