# include < stdio .h > 
# include < time .h > 
# include " E101 .h " 

int main (){ 

init (); 

	// Sets the motor connected to pin 1 to rotate 
	// in one direction at MAX speed . 
	set_motor (1 , 254); 
	// Sets the motor connected to pin 2 to rotate 
	// in one direction at MAX speed .
	set_motor (2 , -254); 
	sleep1 (0 ,500000); 

	// stops motors 
	stop (1); 
	stop (2); 
return 0;}
