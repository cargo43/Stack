#include<stdio.h>
#include<stdlib.h>

void push ();
void pop ();
void display() ;
int array[10];
int top=-1;
int data;

int main()
{
	 
	int choice;
	 printf("Get your choice \n 1.Push \n 2.Pop \n 3.Display \n");
	 scanf("%d",&choice);
	 if(choice==1)
	 { 
	   push();
	 }
	 else if(choice==2)
	 {
	 	pop();
	 }
	 else if(choice==3)
	 { 
	    display();
	 }
}
	 
	 	void push( )
	 	{
	 	 int data;
		 if (top== 9)
		 printf("Overflow");
		else
		   {
		   	printf("Enter data \n");
		   	scanf("%d",&data);
		    top=top ++;
		    array[top]=data;
		    }
	}
        
        
	       
	       	void pop( )
	       	{   
	       	
	       		if (top==-1)
	       		{
	       				printf("underflow");
				   }
	       	
	       		else
	       		{
	       			top=top-1;
		    	   }
	         	}
	        
				   
				   	void display( )
				   	{  
				   	    int i;
						if (top==-1)
				   		{
				   			printf("Stack is empty");	
						}
				   		
				   		
						
							else 
							   {
							   	for(i=top;i>=9;i--)
							   	printf("%d",array[i]);
							   }
						
					   }
				   
			   
		   

	 




