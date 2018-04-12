#include<iostream>
#include<conio.h>
using namespace std;
int main()
 {
 	  int at[100], bt[100]; // at= arrival time , bt= burst time 
	  int temp[100]; 
      int i, time, n;
	  int smallest, count = 0;
      double wait_time = 0;
	  double turnaround_time = 0, end;
      float average_waiting_time;
	  float average_turnaround_time;
	  cout<<"\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	  cout<<"\t\t\t\t\t\t\t\t >>>>> OPERATING SYSTEM PROJECT <<<<<\n";
	  cout<<"\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	  cout<<" \n PROBLEM:   A uniprocessor system has n number of CPU intensive processes, each process has its own requirement of CPU burst." ;
	  cout<< "The process with lowest CPU burst is given the highest priority. A late-arriving higher priority process can preempt";
	  cout<< "a currently running process with lower priority.Simulate a scheduler that is scheduling the processes in such a way";
	  cout<< "that higher priority process is never starved due to the execution of lower priority process. What should be its"; 
      cout<< "average waiting time and average turnaround time if  two processes are arriving at same time  ";
 	  cout<<"\n \n-->>Enter the Total Number of Processes:";
 	  cin>>n;
 	  cout<<"\n -->> Enter Details of " <<n<<" Processes\n";
 	   for(i = 0; i < n; i++)
      {
            cout<<"\n -->>Enter Arrival Time:";
            cin>>at[i];
            cout<<" -->>Enter Burst Time:";
            cin>>bt[i];
            temp[i] = bt[i];
      }
 
 
  bt[9] = 100000;  
      for(time = 0; count != n; time++)
      {
            smallest = 9;
            for(i = 0; i < n; i++)
            {
                  if(at[i] <= time && bt[i] < bt[smallest] && bt[i] > 0)
                  {
                        smallest = i;
                  }
            }
            bt[smallest]--;
            if(bt[smallest] == 0)
            {
                  count++;
                  end = time + 1;
                  wait_time = wait_time + end - at[smallest] - temp[smallest];
                  turnaround_time = turnaround_time + end - at[smallest];
            }
      }
        
        
        
        
        average_waiting_time = wait_time / n; 
        average_turnaround_time = turnaround_time / n;
        cout<<"\t\t\t\t\t\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout<<"\n\n Average Waiting Time:"<< average_waiting_time<<"\n";
		cout<<"Average Turnaround Time:"<<average_turnaround_time<< "\n";
		return 0;
	}
      
      
