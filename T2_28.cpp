/*
 * FileName: T2_28.CPP
 * Author: Jambo Yu
 * Student ID:2112080089
 * E-mail: 1027881124@QQ.COM
 * Date: Mar 11th, 2022
 */


#include <iostream>
#include<math.h>
using namespace std;

int main()
{
       int n,x,y[10];
       cin>>n;
       x=n;
       int i,sum=0;       //sum����ȷ�����������λ��
       for(i=0;i<10;i++)
       {
           if(i==0)
           {
                y[0]=x%10;          //����ǵ�һλ���򽫸�λ��������
                sum++;
           }
           if(x<10)                  //���x<10������ѭ��
            break;
            if(i>0)
            {
                y[i]=(x/10)%10;           //��������ͬ���㷨
                x=x/10;
                sum++;
            }

       }
        int k=sum;
       for(i=0;i<k;i++)                //ѭ���������ֵ�λ����
       {
          cout<<y[sum-1]<<"   ";          //�Ӻ���ǰ���
           sum--;

       }

       return 0;

}


