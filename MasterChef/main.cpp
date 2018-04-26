#include <iostream>
#include <string>
#include "Player.h"
//#include "Player.cpp"
#include "Team.h"
//#include "Team.cpp"


using namespace std;

int main()
{
    int a=0;
    Team red("red",0,0,NULL);
    Team blue("blue",0,0,NULL);
    string e="";
    string b;
    int i=0;
    int j=0;
    string xd;
    int c=0;
    Player      p(e,e,e,0,0,0,50,(rand() % 81));


    cout <<"Welcome to the Masterchef Show 2018"<<endl;
    cout <<"Press 1 to register new players.\nPress 2 to show informations about a team."<<endl;
    cout <<"Press 3 to show information about a player of a team according to his name."<<endl;
    cout <<"Press 4 to show information about a player of a team according to his number in the team."<<endl;
    cout <<"Press 5 to exit the program."<<endl;
    cin>>a;


    while(a!=5)
    {
        if (a==1)
    {
        //cout <<"Type exit to exit registering"<<endl;
        //cin >> e;
        while((e!="exit") and (i<12) and (j<12))
        {
            cout <<"Which team do you want to register a player in? (type red or blue)"<<endl;
            cin >> b;
            if(b=="red")
            {
	    	    cout <<"Give player's name"<<endl;
                cin >> xd ;
                p.setName(xd);
                cout <<"Give player's age"<<endl;
                cin >> c;
                p.setAge(c);
                cout <<"Give player's job"<<endl;
                cin >> xd;
                p.setJob(xd);
                cout <<"Give player's sex"<<endl;
                cin >> xd;
                p.setSex(xd);
                cout <<"Give player's exhaustion"<<endl;
                cin >> c;
                p.setExhaustion(c);
                red.setPlayers(p,i);
                i++;

    		}
            else if(b=="blue")
            {
                 cout <<"Give player's name"<<endl;
                 cin >> xd ;
                 p.setName(xd);
                 cout <<"Give player's age"<<endl;
                 cin >> c;
                 p.setAge(c);
                 cout <<"Give player's job"<<endl;
                 cin >> xd;
                 p.setJob(xd);
                 cout <<"Give player's sex"<<endl;
                 cin >> xd;
                 p.setSex(xd);
                 cout <<"Give player's exhaustion"<<endl;
                 cin >> c;
                 p.setExhaustion(c);
                 blue.setPlayers(p,j);
                 j++;

            }
            else
            {
                    cout<<"Give a valid answer."<<endl;
            }
            cout <<"Type exit to exit registering"<<endl;
            cin >> e;
            cout<<endl;
            }
    }
    else if (a==2)
    {
        cout <<"Team: red"<<endl;
        cout <<"Number of players:"<<red.getPlayersNum(i)<<endl;
        cout <<"Wins:" <<red.getWins()<<endl;
        cout <<"Players:"<<red.getPlayersNum();

        cout<<"\n\n";

        cout <<"Team: blue"<<endl;
        cout <<"Number of players:"<<blue.getPlayersNum(j)<<endl;
        cout <<"Wins:" <<blue.getWins()<<endl;
        cout <<"Players:"<<blue.getPlayersNum();
        cout<<"\n\n";
    }
    else if (a==3)
    {

    }
    else if (a==4)
    {
        //cout

    }
    else if (a==5)
    {

    }
    else
    {
       cout<< "Select one of the options above. Please try again."<<endl;
    }

    cout <<"Welcome to the Masterchef Show 2018"<<endl;
    cout <<"Press 1 to register new players.\nPress 2 to show informations about a team."<<endl;
    cout <<"Press 3 to show information about a player of a team according to his name."<<endl;
    cout <<"Press 4 to show information about a player of a team according to his number in the team."<<endl;
    cout <<"Press 5 to exit the program."<<endl;
    cin>>a;

    }




}
