#include <iostream>
#include <cstring>

using namespace std;

struct Node {
	int data;
	Node *next;
};


int main(int argc,char *argv[]) {
	char *op=new char[0];
	op=argv[argc-1];
	int z=0;
	if(argc>2)
		for(int i=1; i<argc; i++) {
			z++;
		}
	else if(argc==2) {
		for(int i=0; i<strlen(op); i++) {
			if(op[i]>='0'&& op[i]<='9')
				;
			else z++;
		}
		z++;
	}

	int y=0;
	int *znach=new int[0];

	if(argc==2) {
		for(int i=0; i<5; i++)
			znach[z]=0;
	}

	if(argc>2)	{
		for(int i=1; i<argc; i++) {
			if(isdigit(argv[i][0])) {
				znach[i-1]=atoi(argv[i]);
				y++;
			}
		}
	} else if(argc==2) {
		for(int i=0; i<strlen(op)+1; i++)
			if(op[i]>='0'&&op[i]<='9')
				znach[y]=znach[y]*10+op[i]-'0';
			else y++;
	}

	Node *first=nullptr;
	Node *current=nullptr;
	for(int i=0; i<y; i++) {
		Node *node=new Node {znach[i],nullptr};
		if(current == nullptr) {
			current=node;
			first=current;
			continue;
		}
		current->next = node;
		current = node;
	}
	int choice=0;
	do {
		cout<<"choise operation"<<endl;
		cout<<"1: show list"<<endl;
		cout<<"2: add element to list"<<endl;
		cout<<"3: delete element from list"<<endl;
		cout<<"4: find an element of list"<<endl;
		cout<<"5: Replace the item with another one"<<endl;
		cout<<"6: sort list"<<endl;
		cout<<"7: finish programm"<<endl;
		cout<<endl;
		cin>>choice;
		Node *curr=first;
		switch(choice) {
			case 1:
				if(curr != nullptr && argc>1) {
					do {
						cout<<curr->data;
						if(curr->next!=nullptr)
							cout<<" -> ";
						curr=curr->next;
					} while (curr!=nullptr);
					cout<<endl;
				} else
					cerr<<"list is empty"<<endl;
				break;
			case 2:
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				break;
			case 6:
				break;
			case 7:
				break;
		}
		cout<<endl;
	} while(choice!=7);
	return 0;
}
