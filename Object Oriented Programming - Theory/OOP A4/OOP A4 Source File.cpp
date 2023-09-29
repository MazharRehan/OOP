#include<iostream>
#include<string>
#include<fstream>

using namespace std;

class Event;
class Client
{
    string name, phone, email, id, passward, feedBack;
    void inputEmail();
    void inputName();
    void inputPhone();

public:
    Client()
    {
        name = phone = email = id = feedBack = passward = "";
    }
    Client(string clntId, string pswd)
    {
        id = clntId;
        name = phone = email = "";
        passward = pswd;
        feedBack = "";
    }
    ~Client()
    {

    }
    string getClientId()
    {
        return id;
    }
    string getClientName()
    {
        return name;
    }
    string getClientPhoneNumber()
    {
        return phone;
    }
    void input();
    int performAction();
    void updatePassward();
    void display();
    void inputFeedBack();

};

void Client::input()
{
    cout << "\t\tInput the following info" << endl;
    inputName();
    inputPhone();
    inputEmail();
    cout << endl;
}
void Client::inputName()
{
    cout << "\t\t\tName: ";
    getline(cin, name);
}
void Client::inputPhone()
{
    cout << "\t\t\tPhone Number: ";
    getline(cin, phone);
}
void Client::inputEmail()
{
    cout << "\t\t\tEmail: ";
    getline(cin, email);
}
int Client::performAction()
{
    cout << "\n\t\t~~~~~~~~~~~~~~~~~~~~ Actions ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    cout << "\n\n\t\t\t 1 - Book an Event\n"
        << "\t\t\t 2 - Update Name\n"
        << "\t\t\t 3 - Update Phone Number\n"
        << "\t\t\t 4 - Update Email\n"
        << "\t\t\t 5 - Update Passward\n"
        << "\t\t\t 6 - Display Client Information\n"
        << "\t\t\t 7 - Sign Out\n"
        << "\t\t\t\tInput the action do you want to perform: ";

    string temp = "";
    getline(cin, temp);

    if (temp == "1")
        return 1;
    else if (temp == "2")
        inputName();
    else if (temp == "3")
        inputPhone();
    else if (temp == "4")
        inputEmail();
    else if (temp == "5")
        updatePassward();
    else if (temp == "6")
        display();
    else if (temp == "7")
    {
        cout << "\t\t\tSignout successful" << endl;
        return 7;
    }
    else
        cout << "\t\t\tIncorrect Input" << endl;

    cout << "\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;

    return 0;
}
void Client::updatePassward()
{
    string newPassward, oldPassward;

    cout << "\t\t''''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;

    for (int i = 0; i < 2; i++)
    {
        cout << "\t\t\tEnter Old passward: ";
        getline(cin, oldPassward);

        if (oldPassward == passward)
        {
            cout << "\t\t\tEnter New Passward: ";
            getline(cin, newPassward);
            passward = newPassward;
            cout << "\t\t\tPassward Update Successful" << endl;
            break;
        }
        else
            cout << "\t\t\tIncorrect Passward! Please Try Again." << endl;
    }

    cout << "\t\t''''''''''''''''''''''''''''''''''''''''''''''''''''''" << endl;
}
void Client::display()
{
    cout << "\n\t\t_____________________Client Information_________________-__\n"
        << "\t\tName: " << name
        << "\n\t\tClient ID: " << id
        << "\n\t\tPnone: " << phone
        << "\n\t\tEmail: " << email << endl;
        
    cout << "\t\t_________________________________________________________________" << endl << endl;
}
void Client::inputFeedBack()
{
    cout << "Please Provide your feedback about the services: ";
    getline(cin, feedBack);
}

class Admin
{
    string name, phone, email, id, passward;
public:
    Admin()
    {
        name = phone = email = "";
        id = "a000b";
        passward = "Pa000b";
    }
    ~Admin()
    {

    }
    
    void input()
    {
        cout << "\t\t\tInput the following info of Admin" << endl;
        cout << "\t\t\t\tName: ";
        getline(cin, name);
        cout << "\t\t\t\tPhone Number: ";
        getline(cin, phone);
        cout << "\t\t\t\tEmail: ";
        getline(cin, email);

        cout << endl;
    }

};


class Event
{
private:
    static int eventId;
    string type, timee, date, location, venue, cateringService, foodPresentation;
    int capacity;
    int budget;
    string clientid;
    string eventStatus; // booked, cancelled, completed
    Client* clntObj;
    void inputEventType();
    void inputVenue();
    void inputCatering();
    void inputFoodPresentation();
public:
    // constructor to initialize event details
    Event()
    {
        clntObj = new Client;
        type = "";
        date = "";
        timee = "";
        location = venue = cateringService = foodPresentation = "";
        capacity = 0;
        budget = 0;
        clientid = clntObj->getClientId();
        eventStatus = "";
        eventId++;
    }

    Event(Client* obj)
    {
        clntObj = obj;
        type = "";
        date = "";
        timee = "";
        location = venue = cateringService = foodPresentation = "";
        capacity = 0;
        budget = 0;
        clientid = clntObj->getClientId();
        eventStatus = "";
        eventId++;
    }
    ~Event()
    {
        delete clntObj;
        clntObj = NULL;
    }

    // function to update event details
    //void updateEvent(string type, string date, string location, int capacity, int budget) 

    // function to cancel event
    void cancelEvent()
    {
        eventStatus = "cancelled";
    }

    // function to complete event
    void completeEvent()
    {
        eventStatus = "completed";
    }

    // function to display event details

    void displayEvent();
    void bookEvent();

};

void Event::bookEvent()
{
    cout << "\n\n\t\t:-:-:-:-:-:-:-:-:-:\tBooking Event\t:-:-:-:-:-:-:-:-:-:" << endl;

    cout << "\t\t\tEnter event Capacity: ";
    cin >> capacity;

    cout << "\t\t\tEnter event Date: ";
    cin.ignore();
    getline(cin, date);

    cout << "\t\t\tEnter event Location: ";
    //cin.ignore();
    getline(cin, location);

    cout << "\t\t\tEnter event Time: ";
   // cin.ignore();
    getline(cin, timee);

    inputEventType();
    inputVenue();
    inputCatering();
    inputFoodPresentation();

    eventStatus = "Booked";

    cout << "\n\t\t:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:-:\n" << endl;

    cout << "\t\t\tEvent Booked Successfully" << endl;

    cout << "\n\n\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
    Event::displayEvent();
}

void Event::inputEventType()
{
    string temp = "";
    cout << "\n\t\t:::::::::::::::::::::::\tServices\t::::::::::::::::::::::::::\n"
        << "\t\t\tAvailable Services for Event are::\n"
        << "\t\t\t 1 - Birthday Parties\n"
        << "\t\t\t 2 - Marriage Ceremonies\n"
        << "\t\t\t 3 - Corporative Event\n"
        << "\t\t\t 4 - Social Eevent\n";
    cout << "\t\t\t\tSelect the relevent: ";
    getline(cin, temp);

    if (temp == "1")
        type = "Birthday Party";
    else  if (temp == "2")
        type = "Marriage Ceremonie";
    else  if (temp == "3")
        type = "Corporative Event";
    else  if (temp == "4")
        type = "Social Eevent";
    else
        type = "notSelected";
}

void Event::inputCatering()
{
    string temp = "";
    cout << "\n\t\t::::::::::::::::::::::::\tCatering Services\t::::::::::::::::::::::::\n"
        << "\t\t\t 1 - On-Premise\n"
        << "\t\t\t 2 - Off-Premise\n"
        << "\t\t\t\tSelect you choice: ";
    getline(cin, temp);


    cout << "\n\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
    if (temp == "1")
        cateringService = "On-Premise";
    else
        cateringService = "Off-Premise";
}

void Event::inputFoodPresentation()
{
    cout << "\n\t\t::::::::::::::::::::::::::\tFood Presentation\t::::::::::::::::::::::::::\n"
        << "\t\t\t 1 - Drying\n"
        << "\t\t\t 2 - Freezing\n"
        << "\t\t\t 3 - Smoking\n"
        << "\t\t\t 4 - Salting and Pickling\n"
        << "\t\t\t 5 - Canning and Bottling\n"
        << "\t\t\t\t\tSelect you choice: ";
    string temp = "";
    getline(cin, temp);

    cout << "\n\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;


    if (temp == "1")
        foodPresentation = "Drying";
    else  if (temp == "2")
        foodPresentation = "Freezing";
    else  if (temp == "3")
        foodPresentation = "Smoking";
    else  if (temp == "4")
        foodPresentation = "Salting and Pickling";
    else
        foodPresentation = "Canning and Bottling";
}

void Event::inputVenue()
{
    cout << "\n\t\t:::::::::::::::::\tVenue\t::::::::::::::::::\n"
        << "\t\t\t 1 - InDoor\n"
        << "\t\t\t 2 - OutDoor\n"
        << "\t\t\t\tEnter your choice: ";
    string temp = "";
    getline(cin, temp);

    cout << "\n\t\t::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;


    if (temp == "1")
        venue = "InDoor";
    else
        venue = "OutDoor";
}

void Event::displayEvent()
{
    cout << "\n\n\t\t:-:-:-:-:-::-:-:-:-:-:-:-:-:-:\tEvent Details\t:-:-:-:-:-:-::-:-:-:-:--:-:-:"
        << "\n\t\t>-< Client::"
        << "\n\t\t\t Name: " << clntObj->getClientName()
        << "\n\t\t\t Id: " << clientid
        << "\n\t\t\t Contact: " << clntObj->getClientPhoneNumber()
        << "\n\t\t>- Event::\n"
        << "\n\t\t\t Type: " << type
        << "\n\t\t\t Venue: " << venue
        << "\n\t\t\t Catering Service: " << cateringService
        << "\n\t\t\t Food Presentation: " << foodPresentation
        << "\n\t\t\t Date: " << date
        << "\n\t\t\t Time: " << timee
        << "\n\t\t\t Location: " << location
        << "\n\t\t\t Capacity: " << capacity
        << "\n\t\t\t Status: " << eventStatus << endl;

    cout << "\n\t\t:-:-:-:-::-:-:-:-:-:-:-:-:-:-::-:-:-:-:-:-:-:-:-:::-:-:-:-:-:-:-:-:-:-:-:-:-:-:\n" << endl << endl;

}



void readFile(ifstream& fin, string** clientId, string** passward)
{
    for (int i = 0; i < 10; i++)
    {
        getline(fin, *clientId[i], ',');
        getline(fin, *passward[i]);
    }
}

void inputClient(string& clntId, string& passward)
{
    cout << "\t\t\t\tEnter Client login ID: ";
    getline(cin, clntId);
    cout << "\t\t\t\tEnter Client login Passward: ";
    getline(cin, passward);
}
int verifyLogin(string clntId, string pswrd, string** clientId, string** passward)
{
    for (int i = 0; i < 10; i++)
    {
        if ((clntId == *clientId[i]) && (pswrd == *passward[i]))
        {
            return true;
        }
    }

    return false;
}

int Event::eventId = 1;

int main()
{
    string** clientId = new string * [10];
    string** passward = new string * [10];

    for (int i = 0; i < 10; i++)
    {
        clientId[i] = new string[10];
        passward[i] = new string[10];
    }

    ifstream fin;
    fin.open("Client.csv");

    if (fin.is_open())
    {
        readFile(fin, clientId, passward);

        string clntId, pswrd, accountType;
        bool loginStatus = 0;

        cout << "\n\n\t|---------------------------------------------------------------------------------------------|\n"
            << "\t|<<<<<<<<<<<<-------------<<<<<<<<<<<  Event Management System  >>>>>>>>>-------------->>>>>>>|\n"
            << "\t|---------------------------------------------------------------------------------------------|\n\n\n";
        cout << "\t\t\t................. Sign In ................\n"
            << "\t\t\t 1 - Client\n"
            << "\t\t\t 2 - Admin\n"
            << "\t\t\t\t\Please select your account type: ";
        getline(cin, accountType);

        if (accountType == "1")
        {
            for (int i = 0; i < 4; i++)
            {
                inputClient(clntId, pswrd);
                loginStatus = verifyLogin(clntId, pswrd, clientId, passward);

                if (loginStatus)
                {
                    cout << "\t\t\tSuccessfuly Login to the System\n" << endl;

                    cout << "\t\t\t--------------------------------------" << endl;
                    break;
                }
                else
                    cout << "\t\t\tInvalid Login Id or Passaward\n\t\t\tPlease try Again\n" << endl;

            }

            if (loginStatus)
            {
                // Event eventObj;
                bool action = 0;
                Client clientObj(clntId, pswrd);
                clientObj.input();

                for (int i = 0; i < 10; i++)
                {
                    action = clientObj.performAction();

                    if (action == 1)
                    {
                        Event eventObj(&clientObj); // (this);
                        eventObj.bookEvent();
                    }
                    else if (action == 7)
                        break;

                }

                clientObj.inputFeedBack();

                cout << "\t\t\t+++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
            }
            else
                cout << "\t\t\tWeight for 5 minutes" << endl;

        }
        else if (accountType == "2")
        {
            string id, passrd;
            cout << "\n\n\t\t\t**************\tLogIn\t**************" << endl;

            for (int i = 0; i < 3; i++)
            {
                cout << "\t\t\t\tEnter Admin ID: ";
                getline(cin, id);
                cout << "\t\t\t\tEnter Passward: ";
                getline(cin, passrd);

                if (id == "a000b" && passrd == "Pa000b")
                {
                    cout << "\n\t\t\t\tLogin Successful" << endl;
                    Admin adminObj;
                    adminObj.input();
                    break;
                }
                else
                    cout << "\n\t\t\t\tIncorrect Passward! Please try agian." << endl << endl;

            }
        }
        else
            cout << "\t\t\tIncorrect Input" << endl;


    }
    else
        cout << "\t\t\tFile Not Found" << endl;



    for (int i = 0; i < 10; i++)
    {
        delete[]clientId[i];
        clientId[i] = NULL;

        delete[] passward[i];
        passward[i] = NULL;
    }

    delete[] clientId;
    clientId = NULL;
    delete[] passward;
    passward = NULL;

    return 0;
}
