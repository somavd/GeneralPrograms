#include <netdb.h> 
#include <arpa/inet.h>
#include <stdlib.h> 
#include <cstring> 
#include <sys/socket.h> 
#include <unistd.h>
#include<iostream>
#define MAX 80 
#define SA struct sockaddr 
using namespace std; 
void readData(int socket_file_des) 
{
	char buff[MAX];
	//sleep(5);
	if(read(socket_file_des, buff, sizeof(buff)))
	{
		cout<<"Open File Status : Success.\n";
		cout<<buff;
	}
	else
	{
		cout<<"Open File Status : Fail.\n";
		exit(0);
	}

	for (;;) {
		sleep(1);	
		cout<<"YES";
		bzero(buff, sizeof(buff));
		read(socket_file_des, buff, sizeof(buff));  
		cout<<buff;
		if ((strcmp(buff, "exit")) == 0) { 
			cout<<"Client Exit...\n"; 
			break; 
		} 
	}
} 

int main() 
{ 
	int socket_file_des, connection_file_des; 
	struct sockaddr_in server_Address, cli; 
	char str[20],filename[100];
	int port_number;
	cout<<"Enter IP : ";
	cin>>str;
	cout<<"Enter Port Number :";
	cin>>port_number;
	cout<<str;
	socket_file_des = socket(AF_INET, SOCK_STREAM, 0); 
	if (socket_file_des == -1) { 
		cout<<"Socket Creation Status : Failed.\n"; 
		exit(0); 
	} 
	else
		cout<<"Socket Creation Status : Success.\n"; 
	bzero(&server_Address, sizeof(server_Address)); 

	server_Address.sin_family = AF_INET; 
	server_Address.sin_addr.s_addr = inet_addr(str); 
	server_Address.sin_port = htons(port_number); 

	if (connect(socket_file_des, (SA*)&server_Address, sizeof(server_Address)) != 0) { 
		cout<<"Connect Status : Fail.\n"; 
		exit(0); 
	} 
	else
		cout<<"Connect Status : Success.\n"; 

	cout<<"Input File name requested from server : ";
	cin>>filename;
	write(socket_file_des,filename,strlen(filename));
	cout<<"Send Status : Success.\n";
	readData(socket_file_des); 

	// close the socket 
	close(socket_file_des); 
} 

