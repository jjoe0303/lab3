#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include "Clock.h"

using namespace std;

void insert_sort(vector<int> &v){
	int insert,moveitem;
	for(int next=1;next<v.size();++next){
		insert=v.at(next);
		moveitem=next;
		while(moveitem>0 && v.at(moveitem-1)>insert){
			v.at(moveitem)=v.at(moveitem-1);
			--moveitem;
		}
		v.at(moveitem)=insert;
	}
}

int main(){
	Clock clk;
	const int size=1000000;
	vector<int> v1(size),v2;
	srandom(time(NULL));
	for(int i=0;i<size;++i){
		v1.at(i)=random();
	}
	v2=v1; clk.start();
	sort(v1.begin(),v1.end());
	cout<<"sort():"<<clk.getElapsedtime()<<"seconds"<<endl;
	cout<<"v1 & v2 are "<<((v1==v2)?"the same \n":"different \n");
	clk.start();
	insert_sort(v2);
	cout<<"insert_sort():"<<clk.getElapsedtime()<<"seconds"<<endl;
	cout<<"v1 & v2 are "<<((v1==v2)?"the same \n":"different \n");

	return 0;
}
