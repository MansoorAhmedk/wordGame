#include<iostream>
using namespace std;

main(){
	
	
	cout<<"=============== select the anyone Option=================\n\n";
	cout<<"=============== Press 1 for 2 Lives =================\n";
	cout<<"=============== Press 2 for infinite Lives =================\n";	
		
		int opt;
		cin>>opt;
		string write_word;
		
		if(opt==1){
			cout<<"Identify the Correct Sequence of given words\n\n";
			cout<<"1)Compoter \n2)Computre \n3)Computer\n";
			
			for(int a=1; a<=2; a++){
				cout<<"Please Enter the Correct Word here\t";
				cin>>write_word;
				
				if(write_word=="Computer"){
					cout<<"\n\nCongratulations!!! You won the game\t";
					break;
				}
				else{
					cout<<"\nTry Again\n";
				}
			}
		}
		
		else if(opt==2){
			cout<<"Identify the Correct Sequence of given words\n\n";
			cout<<"1)Compoter \n2)Computre \n3)Computer\n";
			while(true)
			{
				cout<<"Please Enter the Correct Word here\t";
				cin>>write_word;
				
				if(write_word=="Computer"){
					cout<<"\n\nCongratulations!!! You won the game\t";
					break;
				}
				else{
					cout<<"\nTry Again\n";
				}
			}
		}
		else{
			cout<<"\nInvalide Entry";
		}
		
}
