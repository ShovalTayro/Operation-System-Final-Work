 README
  How to run Q3.2
1. Open a terminal in the folder where the source files are located (set_policy.c, makefile). 
2. In the terminal run the make command 
This command will compile the set_policy.c file into a run file named set_policy 
3. Now run the command 
sudo ./set_policy <policy> <priority> (we have to write sudo only if we run FIFO policy). 
Instead of <policy> we enter the number of the scheduling policy we want: 
* OTHER = 0 
* FIFO = 1 
* RR = 2 
* IDLE = 5 
* DEADLINE = 6 
Instead of <priority> we enter the number of priority we want. 
 
