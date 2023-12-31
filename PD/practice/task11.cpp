#include <iostream>
using namespace std;
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute);
main()
{
    
	cout << "Enter Exam Starting Time (hour): ";
	int examHour;    
	cin >> examHour;
    
	cout << "Enter Exam Starting Time (minutes): ";
	int examMinute;    
	cin >> examMinute;
    
	cout << "Enter Student hour of arrival: ";
	int studentHour;    
	cin >> studentHour;
    
	cout << "Enter Student minutes of arrival: ";
	int studentMinute;   
 	cin >>studentMinute;
    
	string result = checkStudentStatus( examHour,examMinute,studentHour, studentMinute);
    	cout << result;
}
string checkStudentStatus(int examHour, int examMinute, int studentHour, int studentMinute)
{
	int examtime;
	int arrivetime;
	string result;
    	examtime = examHour * 60 + examMinute;
    	arrivetime = studentHour * 60 + studentMinute;
    	if (arrivetime == examtime || (examtime - arrivetime) <= 30)
    {
         result = "On time";
        if ((examtime - arrivetime) <= 30 && (examtime - arrivetime) != 0)
        {
            result = "On time\n" + to_string(examtime - arrivetime) + " minutes before the start";
        }
    }
     if (arrivetime < examtime)
    {
        if (examtime - arrivetime <= 60 && (examtime - arrivetime) > 30)

            result = "Early\nTest: " + to_string(examtime - arrivetime) +"\n"+ to_string(examtime - arrivetime) + " minutes before the start";
        if (examtime - arrivetime >= 60)
        {
            int h, m;
            int timeremains = examtime - arrivetime;
            int hours = timeremains / 60;
            h = hours % 10;
            if (hours == 1)
            {
                m = 0;
            }
            else
            {
                if (timeremains > 60)
                {
                    m = timeremains - (60 * h);
                }
            }
            result = "Early\nTest: " + to_string(examtime - arrivetime) +"\n" + to_string(h) + ":" + to_string(m) + " hours before the start";
        }
    }
    if (arrivetime > examtime)
    {
        if (arrivetime - examtime < 60)
        {
            int timeremains = arrivetime - examtime;
            result = "Late\n" + to_string(timeremains) + " minutes after the start";
        }
        if (arrivetime - examtime >= 60)
        {
            int h, m;
            int timeremains = arrivetime - examtime;
            int hours = timeremains / 60;
            h = hours % 10;
            if (hours == 1)
            {
                m = 0;
            }
                if (timeremains > 60)
                {
                    m = timeremains - (60 * h);
                }
            result = "Late\n" + to_string(hours) + ":" + to_string(m) + " hours after the start";
        }
    }
    return result;
}