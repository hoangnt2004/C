#include <stdio.h>
int ucln(int a, int b ){
	while(b>0){
		int x = a % b;
		a = b;
		b = x;
	}
	return a;
}
long long bcnn(int a, int b){
	return a * b/ucln(a,b);
}
typedef struct phanso{
	int tuso;
	int mauso;
} ps;
ps rutgon( ps a)
{
	ps c;
	c.tuso = a.tuso/ucln(a.tuso, a.mauso);
	c.mauso= a.mauso/ucln(a.tuso,a.mauso);
	return c;
}
// Cong hai phan so
ps cong(ps a, ps b){
	ps c;
	c.tuso = a.tuso*b.mauso+ a.mauso*b.tuso;
	c.mauso = a.mauso*b.mauso;
	c = rutgon(ps c);
	return c;
}
// Tru hai phan so
ps tru(ps a, ps b){
	ps c;
	c.tuso = a.tuso*b.mauso - a.mauso*b.tuso;
	c.mauso = a.mauso*b.mauso;
	c = rutgon(c);
	return c;
}
// Nhan hai phan so
ps nhan(ps a, ps b)
{
	ps c;
	c.tuso = a.tuso*b.tuso;
	c.mauso = a.mauso*b.mauso;
	c = rutgon(c);
	return c;
}
// Chia hai phan so
ps chia(ps a, ps b)
{
	ps c;
	c.tuso = a.tuso*b.mauso;
	c.mauso = a.mauso*b.tuso;
	c = rutgon(c);
	return c;
}
void in( ps a){
	printf("%d/%d",a.tuso,b.mauso);
}
int main() {
  ps 
}
