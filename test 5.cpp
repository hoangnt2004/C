#include <stdio.h>
#include<math.h>
#include<stdbool.h>
bool ham1(int n){
	if(n<2){
		return 0;
	}
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int ham2(int n){
	int sum=0;
	while(n>0){
		sum+=n%10;
		n/=10;
	}
	return sum;
}
int ham3(int n){
	int sum=0;
	while(n>0){
		if(n%10%2==0){
			sum+=n%10;
		}
		n/=10;
	}
	return sum;
}
int ham4(int n){
	int sum=0;
	while(n>0){
		int x=n%10;
		if(x=2||x==3||x==5||x==7){
			sum+=x;
		}
		n/=10;
	}
	return sum;
}
int ham5(int n){
	int sm=0;
	while(n>0){
		sm=sm*10+n%10;
		n/=10;
	}
	return sm;
}
int ham6(int n){
	int dem=0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			++dem;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n>1){
		++dem;
	}
	return dem;
}
int ham7(int n){
	int res;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			res=i;
			while(n%i==0){
				n/=i;
			}
		}
	}
	if(n>1){
		res=n;
	}
	return res;
}
int ham8(int n){
	while(n>0){
		if(n%10==6){
			return 1;
		}else{
			return 0;
		}
	}
}
int ham9(int n){
	if(ham2(n)%8==0){
		return 1;
	}else{
		return 0;
	}
}
int  gt(int n){
	int tich=1;
	for(int i=1;i<=n;i++){
		tich*=i;
	}
	return tich;
}
int  ham10(int n){
	int  sum=0;
	while(n>0){
		sum+=gt(n%10);
		n/=10;
	}
	return sum;
}
int ham11(int n){
	int x=n%10;
	n/=10;
	while(n>0){
		if(n%10!=x){
			return 0;
		}
	}
	return 1;
}
int ham12(int n){
	int x=n%10;
	n/=10;
	while(n>0){
		if(n%10>x){
			return 0;
		}
	}
	return 1;
}
int ham13(int n){
	int x=n;
	int dem=0;
	while(x>0){
		n%10;
		++dem;
		n/=10;
	}
	int  sum=0;
	while(n>0){
		sum+=pow((n%10),dem);
		n/=10;
	}
	return sum;
}
int main() {
    int n;
    scanf("%d",&n);
    printf("%d\n",ham1(n));
    printf("%d\n",ham2(n));
    printf("%d\n",ham3(n));
    printf("%d\n",ham4(n));
    printf("%d\n",ham5(n));
    printf("%d\n",ham6(n));
    printf("%d\n",ham7(n));
    printf("%d\n",ham8(n));
    printf("%d\n",ham9(n));
    printf("%d\n",ham10(n));
    printf("%d\n",ham11(n));
    printf("%d\n",ham12(n));
    printf("%d\n",ham13(n));
    
    return 0;
}

