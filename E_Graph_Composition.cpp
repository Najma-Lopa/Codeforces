#include<bits/stdc++.h>
using namespace std;

void solve(){

    string header;
    string body;
    cout<<"Enter Header: ";
    cin>>header;
    cout<<"Enter Body: ";
    cin>>body;
    string send_data=header;
    string check;




    for(int i=0;i<body.size();i++){
        check="";
        for(int j=0;j<header.size();j++){
            check+=body[j+i];
        }
        // cout<<check<<endl;
        if(check==header){
            for(int j=0;j<header.size()-1;j++){
                send_data+=body[j+i];
            }
            send_data+='0';
            send_data+=body[header.size()-1];
            i+=header.size()-1;
        }else{
            send_data+=body[i];
        }
    }
    cout<<"Header: "<<header<<endl;
    cout<<"Body: "<<body<<endl;
    cout<<"Send Data: "<<send_data<<endl;

    string receive_data="";
    string receive_check;

    for(int i=header.size();i<send_data.size();i++){
        receive_check="";
        for(int j=0;j<header.size()-1;j++){
            receive_check+=send_data[j+i];
        }
        receive_check+=send_data[i+header.size()];
        if(receive_check==header){
            for(int j=0;j<header.size()-2;j++){
                receive_data+=send_data[j+i];
            }
            receive_data+=send_data[i+header.size()];
            i+=header.size()-1;
        }else{
            receive_data+=send_data[i];
        }
    }
    cout<<"Receive Data: "<<receive_data<<endl;

    
}


int main(){
    solve();
}