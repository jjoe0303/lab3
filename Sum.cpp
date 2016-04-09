#include <iostream>
#include <vector>
#include <cstdlib>
#include <fstream>
#include <algorithm>

using namespace std;

void sort(vector<int> &v){
	int insert,moveitem;
	for(int next=1;next<v.size();++next){
		insert=v.at(next);
		moveitem=next;
		while(v.at(moveitem-1)>insert && moveitem>0){
			v.at(moveitem)=v.at(moveitem-1);
			--moveitem;
		}
		v.at(moveitem)=insert;
	}
}

int main(){
	ifstream fin("file.in",ios::in);
	if(!fin){
		cerr<<"Fail opening"<<endl;
		exit(1);
	}

	int size;
	fin>>size;
	vector<int> v(size);
	for(int i=0;i<size;++i){
		fin>>v.at(i);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<8;++i){
		cout<<v.at(i)<<endl;
	}
	int sum=0;
	for(int i=size-1;i>=size-5;--i){
		sum+=v.at(i);
	}

	cout<<sum<<endl;
}
