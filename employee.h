#include<iostream>//���������
#include<string>
#include <fstream>//�ļ�����
//#include <strstream>//�ַ�����
using namespace std;


class Employee
{
private:
	string name;
	string sex;
     string num;//����
     string phonenum;//�绰��
	string dept;//����
	string title;//ְ��
public:


    void setNU(string nu);
	void setN(string na);
	void setD(string d);
	void setT(string t);
	void setP(string p);
	void setS(string s);
	void same_title(string t);

	string getN();
	string getS();
	string getNU();
    string getP();
    string getD();
	string getT();
    
	//void input_infor();//������Ϣ
	void find_num();//�����Ų�ѯ
	void find_name_dept();       //�ܹ��������������Ҳ�ѯְ����Ϣ
	void classfi_dept();
     void sort_num();
	 void delete_num();
	 void change_num();

	 void printinfo();
    friend istream & operator >>(istream &is,Employee &e)
	{
	    /*string na,nu,p,d,t;
		is>>na;
		e.setN(na);
		is>>nu;
		e.setN(nu);
		is>>p;
		e.setP(p);
		is>>d;
	     e.setD(d);
		 is>>t;
		e.setT(t);*/
		cout<<"������employee����Ϣ(name,sex,num,pnum,dept,title):"<<endl;
		is>>e.name>>e.sex>>e.num>>e.phonenum>>e.dept>>e.title;

		return is;
	}
   friend ostream & operator <<(ostream &os,Employee &e)
	 {
		 cout<<"----------------------------------------------"<<endl;
		 cout<<"the Employee's information:"<<endl;
		/* os<<"name:"<<e.getN()<<endl;
		 os<<"sex:"<<e.getS()<<endl;
		 os<<"num:"<<e.getNU()<<endl;
		 os<<"phonenum:"<<e.getP()<<endl;
		 os<<"dept:"<<e.getD()<<endl;
		 os<<"title:"<<e.getT()<<endl;*/
		 os<<"name:"<<e.name<<endl;
		 os<<"sex:"<<e.sex<<endl;
		 os<<"num:"<<e.num<<endl;
		 os<<"phonenum:"<<e.phonenum<<endl;
		 os<<"dept:"<<e.dept<<endl;
		 os<<"title:"<<e.title<<endl;
		 cout<<"------------------------------------------------"<<endl;
		 return os;
	 }

	 
};



