#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
	printf("�������£������֣�����ѡ����Լ�Ҳ����ѡ���Է���������Լ�������һ���غϻ����ֵ��㣬�����Է�������һ���غ�Ϊ�Է���ֱ��һ������ֵΪ0���鵯������˺�\n");
	int f=rand()%3+3;
	int g=f;
	printf("˫��Ѫ��Ϊ%d\n\n",g);
	
	int n=1;
do{
	printf("���ڿ�ʼ��%d��shoot\n\n",n); 
	n++;
	int i,j,a,b,c=0,d=0;
	srand(time(NULL));
	i=rand()%4+2;
	
	
	int danjia[i];
	
	    
	for(j=0;j<=i;j++){
	a=rand()%2;
	danjia[j]=a;
	}

	for(b=0;b<=i;b++){
		c=c+danjia[b];
	}
	
	
	printf("��������%dö�ӵ�\n",i+1);
	printf("��������%döʵ��\n",c);
	
	int e;
	
	for(d;d<i+1;){
	for(d;d<=i;){
		printf("��������Ҫ������Ŀ�꣬���Լ�������1���Է�������2:\n");
		scanf("%d",&e);
		if(e==1){
			if(danjia[d]==1){
				printf("�飡\n\n");
				f=f-1;
				d++;
				printf("�����ڻ�ʣ%d������,�Է����ڻ�ʣ%d������\n\n\n",f,g);
				if(f==0||g==0){
					break;
				}
			}else{
				printf("�˵�Ϊ�鵯\n\n"); 
				d++;
			}
			continue;
		}else{
			if(danjia[d]==1){
				printf("�飡\n\n");
				d++;
			    g=g-1;
			    printf("�����ڻ�ʣ%d������,�Է����ڻ�ʣ%d������\n\n\n",f,g); 
			    if(f==0||g==0){
					break;
				}
	        }else{
				printf("�˵�Ϊ�鵯\n\n"); 
				d++;
			}
			break;
		}
	}
	if(f==0||g==0){
		break;
	}
	
		int h=d;
		
		int k=0;
		
		for(h;h<=i;h++){
			k=k+danjia[h];
		}

		
		
		for(d;d<=i;){
			if(k>=i+1-d-k){
			printf("�Է�ѡ�񹥻���\n");
			if (danjia[d]==1){
				printf("�飡\n\n");
				d++;
			    f=f-1;
			    printf("�����ڻ�ʣ%d������,�Է����ڻ�ʣ%d������\n\n\n",f,g);
				if(f==0||g==0){
					break;
				}
			}else{
				printf("�˵�Ϊ�鵯\n\n"); 
				d++;
			}
			break;
		}else{
			printf("�Է�ѡ�񹥻��Լ�\n");
			if (danjia[d]==1){
				printf("�飡\n\n");
				g=g-1;
				printf("�����ڻ�ʣ%d������,�Է����ڻ�ʣ%d������\n\n\n",f,g);
				d++;
				if(f==0||g==0){
					break;
				}
			}else{
				printf("�˵�Ϊ�鵯\n\n"); 
				d++;
			}
			continue;
		}
		if(f==0||g==0){
			break;
		}
    }
    if(f==0||g==0){
			break;
		}
}
if(f==0||g==0){
			break;
		}
 
}while(f!=0||g!=0);
	if(f<=g){
		printf("������");
	}else{
		printf("��Ӯ��");
	}
	
	
	return 0;
}
