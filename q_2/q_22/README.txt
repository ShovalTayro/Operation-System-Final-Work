  README
How to run Q2.2 
1. Open a terminal in the folder where the source files are located (makefile, server.c, client.c). 
2. In the terminal run the make command 
This command will compile the server.c, client.c files into executable files with the names server, client respectively. 
3. Now we will run the server with the command./server now will be printed to the screen the pid of the server process 
4. Now in a separate terminal we will run the client with the command 
./client <pid> <siganlNumber> <count> 
<pid> = The server's pid 
<signalNumber> = 10 for SIGUSER1, 2 for SIGINT 
<count> = The amount of signals we want to send, usually if we send SIGUSR1 we will send it only once. 
 
output: 
When the server is running, the pid number of the server process will be printed on the screen. Then when we send SIGUSR1 we get the number of SIGINT signals that received at the server.  
 
 
 
