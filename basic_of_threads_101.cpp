#include<iostream>
#include<thread>
#include<unistd.h>   

//	The class thread represents a single thread of execution.
// Threads allow multiple functions to execute concurrently.

static bool t_Finished=false;

void DoWork()
{
	std::cout<<"Started Thread Id = "<<std::this_thread::get_id()<<std::endl;
	
    
while(!t_Finished){
   

    std::cout<<"Thread 1 Running ...";
}
}

int main(){

std::cout<<"Main Thread Id = "<<std::this_thread::get_id()<<std::endl;

std::thread worker(DoWork);

std::cin.get();

t_Finished=true;


/*

	JOIN is like wait
	
	
	or wait for this thread untill it execute
	
	basically it Says block the Current thread until this 
	other thread has completed. 


*/
worker.join();




	return 0;

}
