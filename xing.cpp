#include"employee.h"//头文件名称
#define N 5
string Employee::getN()
{
	return name;
}
string Employee::getS()
{
	return sex;
}
string Employee::getNU()
{
	return num;
}
string Employee::getP()
{ 
	return phonenum;
}
string Employee::getD()
{
   return dept;
}
string Employee::getT()
{
	return title;
}
void Employee::setN(string na)
{
	name=na;
}
void Employee::setNU(string nu)
{
	num=nu;
}
void Employee::setP(string p)
{
	phonenum=p;
}
void Employee::setD(string d)
{
	dept=d;
}
void Employee::setT(string t)
{
      title=t;
}
void Employee::setS(string s)
{
	sex=s;
}



void Employee::find_num()
{	//按工号查询
	//将num个数的信息从文件employee.dat读出到数组e1中
				Employee e1[20];
				ifstream ifs;
				int i,j;
				ifs.open("d:\\employee.dat",ios::binary);  //ifs文件读操作
				if(ifs)
				{

					cout<<"hello!"<<endl;
					i=0;
					while(!ifs.eof())
					{					
						ifs.read(reinterpret_cast<char*>(&e1[i]),sizeof(e1[i]));
						i++;
					}
					ifs.close();
				}

				for(j=0;j<i-1;j++)
					cout<<e1[j];
				string n;
				cout<<"input the employee's num you find:"<<endl;
				cin>>n;
				bool flag=false;
				for(j=0;j<N;j++)
				{
					if(n==e1[j].getNU())//进行匹配
					{
						cout<<"name:"<<e1[j].getN()<<endl;
						cout<<"num:"<<e1[j].getNU()<<endl;
						cout<<"sex:"<<e1[j].getS()<<endl;
						cout<<"pnum:"<<e1[j].getP()<<endl;
						cout<<"dept:"<<e1[j].getD()<<endl;
						cout<<"title:"<<e1[j].getT()<<endl;
						flag=true;
					}
				}
				
				if(flag==false)
					cout<<"the employee's information not be found!"<<endl;
}
void Employee::find_name_dept()
{
	//2）能够根据姓名、科室查询职工信息
	//将num个数的信息从文件employee.dat读出到数组e1中
				Employee e1[20];
				ifstream ifs;
				ifs.open("d:\\employee.dat",ios::binary);  //ifs文件读操作
				if(ifs)
				{ 
					int i=0;
					while(!ifs.eof())
					{
						
						ifs.read(reinterpret_cast<char*>(&e1[i]),sizeof(e1[i]));
						i++;
					}
					ifs.close();
				}
				string na,d;
				cout<<"input the employee's name and dept you find:"<<endl;
				cin>>na>>d;
				 bool flag=false;

				for(int j=0;j<N;j++)
				{
					if(e1[j].getN()==na&&e1[j].getD()==d)//进行匹配
					{
						cout<<e1[j];
					    flag=true;
						return ;
					}
				}
					if(flag==false)
						cout<<"the employee's information not be found!"<<endl;
	
			
}	
void Employee::sort_num()
{
	//将num个数的信息从文件employee.dat读出到数组e1中
				Employee e1[20];
				ifstream ifs;
				ifs.open("d:\\employee.dat",ios::binary);  //ifs文件读操作
				if(ifs)
				{
					int i=0;
					while(!ifs.eof())
					{
					   
						ifs.read(reinterpret_cast<char*>(&e1[i]),sizeof(e1[i]));
						i++;
					}
					ifs.close();
				}
						//根据职工的职称排序输出
				
	//将文件employee.dat中读出的数据进行升序排序，冒泡法
				for(int j=0;j<N-1;j++)
					for(int k=0;k<N-1-j;k++)
						if(e1[k].getT()>e1[k+1].getT())
						{
                           cout<<"//////////////////////"<<endl;
						
						   Employee temp;	//整个类排序转换
							temp=e1[k];
							e1[k]=e1[k+1];
							e1[k+1]=temp;
						}

						cout<<"----------------------------------------------"<<endl;
						cout<<"the information of all employees:"<<endl;
							for(int j=0;j<N;j++)
							cout<<e1[j];
							cout<<endl;
						cout<<"----------------------------------------------"<<endl;
}
void Employee::delete_num()
{
	
		//将num个数的信息从文件employee.dat读出到数组e1中
				Employee e1[20];
				ifstream ifs;
				ifs.open("d:\\employee.dat",ios::binary);  //ifs文件读操作
				if(ifs)
				{
					int i=0;
					while(!ifs.eof())
					{
					   
						ifs.read(reinterpret_cast<char*>(&e1[i]),sizeof(e1[i]));
						i++;
					}
					ifs.close();
				}
				int i;
				string s;
				cout<<"请输入要删除的工号："<<endl;
				cin>>s;
				for(i=0;i<N;i++)
					if(e1[i].getNU()==s)
					{
					    for(int t=i;t<N-1;t++)
						{
							/*e[t].getNU()=e[t+1].getNU();
							e[t].getN()=e[t+1].getN();
							e[t].getS()=e[t+1].getS();
							e[t].getP()=e[t+1].getP();
							e[t].getD()=e[t+1].getD();
							e[t].getT()=e[t+1].getT();*/
							e1[t]=e1[t+1];

							break;
						}
				}
				cout<<"删除成功!"<<endl;		
                 
						cout<<"----------------------------------------------"<<endl;
						cout<<"the information of all employees:"<<endl;
						for(int j=0;j<N-1;j++)
						  cout<<e1[j];
						cout<<endl;
}
void Employee::change_num()
{
		//将num个数的信息从文件employee.dat读出到数组e1中
				Employee e1[20];
				ifstream ifs;
				ifs.open("d:\\employee.dat",ios::binary);  //ifs文件读操作
				if(ifs)
				{
					int	i=0;
					while(!ifs.eof())
					{
						
						ifs.read(reinterpret_cast<char*>(&e1[i]),sizeof(e1[i]));
						i++;
					}
					ifs.close();
				}
				int i;
				string s;
				cout<<"请输入要修改的工号："<<endl;
				cin>>s;
				for(i=0;i<N;i++)
					if(e1[i].getNU()==s)
					{
						cout<<"请输入新的工号："<<endl;
						string tmp;
						cin>>tmp;
						e1[i].setNU(tmp);
						cout<<"请输入新的name："<<endl;						
						cin>>tmp;
						e1[i].setN(tmp);
						cout<<"请输入新的sex："<<endl;
						cin>>tmp;
						e1[i].setS(tmp);
						cout<<"请输入新的pnum："<<endl;
						cin>>tmp;
						e1[i].setP(tmp);
						cout<<"请输入新的dept："<<endl;
						cin>>tmp;
						e1[i].setD(tmp);
						cout<<"请输入新的title："<<endl;
						cin>>tmp;
						e1[i].setT(tmp);
					}
					for(i=0;i<N;i++)
						cout<<e1[i];
					cout<<endl;
}
void Employee::classfi_dept()//分系部进行职称统计，计算各职称的人数
{
//将num个数的信息从文件employee.dat读出到数组e1中
				Employee e1[20];
				ifstream ifs;
				ifs.open("d:\\employee.dat",ios::binary);  //ifs文件读操作
				if(ifs)
				{
					int	i=0;
					while(!ifs.eof())
					{
						
						ifs.read(reinterpret_cast<char*>(&e1[i]),sizeof(e1[i]));
						i++;
					}
					ifs.close();
				}
			
			   
			    string m,e,c,t,h;
			    m="math";
			    e="english";
			    c="chinese";
			    t="technologe";
			    h="handmaster";
			
				int acount=0, bcount=0,ccount=0,dcount=0,ecount=0;
				for(int j=0;j<N;j++)
				{
					if(m==e1[j].getD())
					{
						
						acount++;
					     cout<<e1[j].getD()<<"人数:"<<acount<<endl;

					}
				
			
					 if(e==e1[j].getD())
					{
							
						bcount++;
					     cout<<e1[j].getD()<<"人数:"<<bcount<<endl;

					}
				
						else if(c==e1[j].getD())
					{
							
						ccount++;
					     cout<<e1[j].getD()<<"人数:"<<ccount<<endl;

					}
						else if(t==e1[j].getD())
					{
								
								dcount++;
					     cout<<e1[j].getD()<<"人数:"<<dcount<<endl;

					}
						else	if(h==e1[j].getD())
					{
									
									ecount++;
					     cout<<e1[j].getD()<<"人数:"<<ecount<<endl;

					}
					
					
				}
					
				
}

int main()
{	
	Employee e[20];
	int i;
	for(i=0;i<N;i++)   //输入num个employee的信息，存入到e数组中
		
	cin>>e[i];
		

	//将num个数的信息写入到employee.dat文件
	ofstream ofs;//定义输出流对象
	ofs.open("d:\\employee.dat",ios::binary);  //ofs文件写入
	if(ofs) 
	{
		for(i=0;i<N;i++)
           ofs.write(reinterpret_cast<char*>(&e[i]),sizeof(e[i]));
		ofs.close();
	}
	

	
		cout<<"欢迎来到职工系统！"<<endl;
	while(1)
	{
		cout<<"---------------------------------------------------"<<endl;
		cout<<endl;
		system("title 职工管理系统");
			system("color 30");
		cout<<"1.按照工号查询员工信息"<<endl;
		cout<<"2.按照姓名和部门查询员工信息"<<endl;
		cout<<"3.根据职工的职称排序输出"<<endl;
        cout<<"4、根据工号删除职工信息"<<endl;
        cout<<"5、根据工号修改职工信息"<<endl;
		cout<<"6.分系部进行职称统计，计算各职称的人数"<<endl;
		cout<<"0.退出"<<endl;
		cout<<"----------------------------------------------------"<<endl;
		cout<<"请选择："<<endl;
		int number;
		cin>>number;
		switch(number)
		{
		
		case 1:
			{
			
			    e[i].find_num();	
			
				break;
			}
		
		case 2:
			{
						
			    e[i].find_name_dept();
				break;
			}
	

		case 3:
			{
				
				e[i].sort_num();
				break;
			}
		case 4:
			{
				
				e[i].delete_num();
				break;
			}
		case 5:
			{
				
			    e[i].change_num();
				break;
			}
			//分系部进行职称统计，计算各职称的人数
		case 6:
			{
			
					e[i].classfi_dept();
					break;
			}
        case 0:
			return 0;
		default:
			cout<<"请重新输入正确的选择："<<endl;
		}
		
	
	}

	
	
return 0;


}
			
