#include<iostream>

using namespace std;

main()
{
    int days;
    
    cout << "Enter Number of days you visited Hospital: ";
    cin >> days;

    int patientCount;
    int doctor = 7;
    int treatedPatients = 0;
    int untreatedPatients = 0;

    for (int i = 1; i <= days; i++)
    {
        if ((i == 3 || i == 6) && untreatedPatients > treatedPatients)
            doctor += 1;
        
        cout << "Number of patients who visited hospital on Day " << i << ": ";
        cin >> patientCount;

        if (patientCount <= doctor)
        {
            treatedPatients += patientCount;
            untreatedPatients += 0;

        }
    
        else if (patientCount > doctor)
        {
            untreatedPatients += (patientCount - doctor);
            treatedPatients += doctor;
        }

    }    
    
    cout << "Treated Patients: " << treatedPatients << endl;
    cout << "Untreated Patients: " << untreatedPatients;
        
}
