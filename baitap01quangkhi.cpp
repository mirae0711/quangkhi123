#include <iostream>
#include <cmath>
/*Dùng thư viện cmath nếu m thích iostream hơn cái kia*/
/*Nhớ sửa lại thành ko dấu k thôi nó lỗi đó*/
using namespace std;

int main() {
    double a, b, c;
    cout <<"nhap a:";
    cin >> a;
    cout<< "nhap b:";
    cin>>b;
    cout<<"nhap c:";
    cin >> c;
    if (a==0) {
        cout << "a bang 0 the loz nao"<< endl;
        if (b!= 0){
                    double x=-c/b;
                    cout<< "phuong trinh la bac 1 have nghiem la x="<<x<<endl;
                  }
            else {
                    if (c == 0) {
                    cout<< "phương trình có vô số nghiệm" << endl;
                                } else  {
                                            cout << "phương trình đéo có nghiệm" << endl;
                                        }
                }
        return 0;
    }
    double delta=b*b-4*a*c;
    if (delta>0){
                    double x1=(-b+sqrt(delta))/(2*a);
                    double x2=(-b-sqrt(delta))/(2*a);
                    cout<<"phương trình có hai nghiệm phân biệt:"<< endl;
                    cout<<"nghiệm thứ nhất: x1="<<x1<<endl;
                    cout<<"nghiệm thứ high: x2="<<x2<<endl;
                }
                    else if(delta==0){
                                        double x=-b/(2*a);
                                        cout<<"X= "<<x<<endl;
                                     } else {
                                                cout<<"phương trình vô nghiệm." << endl;
                                            }

    return 0;
}
