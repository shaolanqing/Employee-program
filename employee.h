#include<iostream>//输入输出流
#include<string>
#include <fstream>//文件流类
//#include <strstream>//字符串流
using namespace std;


class Employee
{
private:
	string name;
	string sex;
     string num;//工号
     string phonenum;//电话号
	string dept;//部门
	string title;//职称
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
    
	//void input_infor();//输入信息
	void find_num();//按工号查询
	void find_name_dept();       //能够根据姓名、科室查询职工信息
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
		cout<<"请输入employee的信息(name,sex,num,pnum,dept,title):"<<endl;
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



