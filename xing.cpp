#include"employee.h"//ͷ�ļ�����
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
{	//�����Ų�ѯ
	//��num��������Ϣ���ļ�employee.dat����������e1��
				Employee e1[20];
				ifstream ifs;
				int i,j;
				ifs.open("d:\\employee.dat",ios::binary);  //ifs�ļ�������
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
					if(n==e1[j].getNU())//����ƥ��
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
	//2���ܹ��������������Ҳ�ѯְ����Ϣ
	//��num��������Ϣ���ļ�employee.dat����������e1��
				Employee e1[20];
				ifstream ifs;
				ifs.open("d:\\employee.dat",ios::binary);  //ifs�ļ�������
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
					if(e1[j].getN()==na&&e1[j].getD()==d)//����ƥ��
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
	//��num��������Ϣ���ļ�employee.dat����������e1��
				Employee e1[20];
				ifstream ifs;
				ifs.open("d:\\employee.dat",ios::binary);  //ifs�ļ�������
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
						//����ְ����ְ���������
				
	//���ļ�employee.dat�ж��������ݽ�����������ð�ݷ�
				for(int j=0;j<N-1;j++)
					for(int k=0;k<N-1-j;k++)
						if(e1[k].getT()>e1[k+1].getT())
						{
                           cout<<"//////////////////////"<<endl;
						
						   Employee temp;	//����������ת��
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
	
		//��num��������Ϣ���ļ�employee.dat����������e1��
				Employee e1[20];
				ifstream ifs;
				ifs.open("d:\\employee.dat",ios::binary);  //ifs�ļ�������
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
				cout<<"������Ҫɾ���Ĺ��ţ�"<<endl;
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
				cout<<"ɾ���ɹ�!"<<endl;		
                 
						cout<<"----------------------------------------------"<<endl;
						cout<<"the information of all employees:"<<endl;
						for(int j=0;j<N-1;j++)
						  cout<<e1[j];
						cout<<endl;
}
void Employee::change_num()
{
		//��num��������Ϣ���ļ�employee.dat����������e1��
				Employee e1[20];
				ifstream ifs;
				ifs.open("d:\\employee.dat",ios::binary);  //ifs�ļ�������
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
				cout<<"������Ҫ�޸ĵĹ��ţ�"<<endl;
				cin>>s;
				for(i=0;i<N;i++)
					if(e1[i].getNU()==s)
					{
						cout<<"�������µĹ��ţ�"<<endl;
						string tmp;
						cin>>tmp;
						e1[i].setNU(tmp);
						cout<<"�������µ�name��"<<endl;						
						cin>>tmp;
						e1[i].setN(tmp);
						cout<<"�������µ�sex��"<<endl;
						cin>>tmp;
						e1[i].setS(tmp);
						cout<<"�������µ�pnum��"<<endl;
						cin>>tmp;
						e1[i].setP(tmp);
						cout<<"�������µ�dept��"<<endl;
						cin>>tmp;
						e1[i].setD(tmp);
						cout<<"�������µ�title��"<<endl;
						cin>>tmp;
						e1[i].setT(tmp);
					}
					for(i=0;i<N;i++)
						cout<<e1[i];
					cout<<endl;
}
void Employee::classfi_dept()//��ϵ������ְ��ͳ�ƣ������ְ�Ƶ�����
{
//��num��������Ϣ���ļ�employee.dat����������e1��
				Employee e1[20];
				ifstream ifs;
				ifs.open("d:\\employee.dat",ios::binary);  //ifs�ļ�������
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
					     cout<<e1[j].getD()<<"����:"<<acount<<endl;

					}
				
			
					 if(e==e1[j].getD())
					{
							
						bcount++;
					     cout<<e1[j].getD()<<"����:"<<bcount<<endl;

					}
				
						else if(c==e1[j].getD())
					{
							
						ccount++;
					     cout<<e1[j].getD()<<"����:"<<ccount<<endl;

					}
						else if(t==e1[j].getD())
					{
								
								dcount++;
					     cout<<e1[j].getD()<<"����:"<<dcount<<endl;

					}
						else	if(h==e1[j].getD())
					{
									
									ecount++;
					     cout<<e1[j].getD()<<"����:"<<ecount<<endl;

					}
					
					
				}
					
				
}

int main()
{	
	Employee e[20];
	int i;
	for(i=0;i<N;i++)   //����num��employee����Ϣ�����뵽e������
		
	cin>>e[i];
		

	//��num��������Ϣд�뵽employee.dat�ļ�
	ofstream ofs;//�������������
	ofs.open("d:\\employee.dat",ios::binary);  //ofs�ļ�д��
	if(ofs) 
	{
		for(i=0;i<N;i++)
           ofs.write(reinterpret_cast<char*>(&e[i]),sizeof(e[i]));
		ofs.close();
	}
	

	
		cout<<"��ӭ����ְ��ϵͳ��"<<endl;
	while(1)
	{
		cout<<"---------------------------------------------------"<<endl;
		cout<<endl;
		system("title ְ������ϵͳ");
			system("color 30");
		cout<<"1.���չ��Ų�ѯԱ����Ϣ"<<endl;
		cout<<"2.���������Ͳ��Ų�ѯԱ����Ϣ"<<endl;
		cout<<"3.����ְ����ְ���������"<<endl;
        cout<<"4�����ݹ���ɾ��ְ����Ϣ"<<endl;
        cout<<"5�����ݹ����޸�ְ����Ϣ"<<endl;
		cout<<"6.��ϵ������ְ��ͳ�ƣ������ְ�Ƶ�����"<<endl;
		cout<<"0.�˳�"<<endl;
		cout<<"----------------------------------------------------"<<endl;
		cout<<"��ѡ��"<<endl;
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
			//��ϵ������ְ��ͳ�ƣ������ְ�Ƶ�����
		case 6:
			{
			
					e[i].classfi_dept();
					break;
			}
        case 0:
			return 0;
		default:
			cout<<"������������ȷ��ѡ��"<<endl;
		}
		
	
	}

	
	
return 0;


}
			
