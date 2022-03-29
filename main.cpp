#include <iostream>
#include<string>
#include<cstring>
#include<cmath>
using namespace std;

int main() {
    int choose= 0 ;
    while (choose != 3) {
        cout << "plz choose what want to do ? " << endl;
        cout << "1- to chipher massege" << endl;
        cout << "2- to decipher massege as hexa " << endl;
        cout << "3- to exit " << endl;
        cin >> choose;
        while (choose!=1 and choose!=2 and choose!=3){
            cout<<"wrong choice"<<endl<<"plz try again"<<endl;
            cin>>choose;
        }
        if (choose == 1) {
            string a, c, hexa[1000];
            int b[8], B, secretkey[8];
            int s1, sum = 0, z = 0, n = 0;
            char key;
            cout<<"plz enter secret key : "<<'\n';
            cin>>key;
            B=(int)key;
            for (int i = 0; i < 8; i++) {
                if (B == 0)
                    secretkey[7 - i] = 0;
                else if (B % 2 == 0) {
                    secretkey[7 - i] = 0;
                    B = floor(B / 2);
                }
                else if (B % 2 != 0) {
                    secretkey[7 - i] = 1;
                    B = floor(B / 2);
                }
            }
            cout<<"plz enter the plain text "<<endl ;
           cin>>a;
            for (int k = 0; k < a.length(); k++) {
                s1 = (int) a[k];
                for (int i = 0; i < 8; i++) {
                    if (s1 == 0)
                        b[7 - i] = 0;
                    else if (s1 % 2 == 0) {
                        b[7 - i] = 0;
                        s1 = floor(s1 / 2);
                    } else if (s1 % 2 != 0) {
                        b[7 - i] = 1;
                        s1 = floor(s1 / 2);
                    }
                }
                for (int i = 0; i < 8; i++) {
                    if (secretkey[i] == b[i]) {
                        c[i] = 0;
                    } else {
                        c[i] = 1;
                    }
                    //cout<<(int)P[i]<<' '<<(int)b[i];
                }
                //for (int i = 0; i < 8; i++)
                //cout << (int) c[i];

                for (int i = 0; i < 8; i++) {
                    sum += c[7 - i] * pow(2, i);
                    // cout<<endl <<sum ;
                }
                cout << (char) sum;
                sum = 0;
                for (int i = 0; i < 8; i++) {
                    sum += c[7 - i] * pow(2, z);
                    z += 1;
                    if (z == 4) {
                        if (sum < 10) {
                            hexa[n] += sum + '0';
                        } else if (sum == 10) {
                            hexa[n] = 'A';
                        } else if (sum == 11) {
                            hexa[n] = 'B';
                        } else if (sum == 12) {
                            hexa[n] = 'C';
                        } else if (sum == 13) {
                            hexa[n] = 'D';
                        } else if (sum == 14) {
                            hexa[n] = 'E';
                        } else if (sum == 15) {
                            hexa[n] = 'F';
                        }
                        n += 1;
                        sum = 0;
                        z = 0;
                    }

                }

            }
            cout << endl;
            for (int i = 0; i < n;) {
                cout << hexa[i + 1];
                cout << hexa[i] << " ";
                i += 2;

            }
            cout<<endl;

        }if(choose==2){

            string h, b1;
            int sum1[1000], u=1,sum2=0,x,l=0,c[8] ;
            int s1, sum = 0, z=0, n=0 ,B, secretkey[8];
            int b[8];
            char key;
            cout<<"plz enter secret key : "<<'\n';
            cin>>key;
            B=(int)key;
            for (int i = 0; i < 8; i++) {
                if (B == 0)
                    secretkey[7 - i] = 0;
                else if (B % 2 == 0) {
                    secretkey[7 - i] = 0;
                    B = floor(B / 2);
                }
                else if (B % 2 != 0) {
                    secretkey[7 - i] = 1;
                    B = floor(B / 2);
                }
            }
            cout<<"plz enter the massege "<<endl ;
            cin>>h;
            for (int i=0; i<h.length();i++) {
                if (h[i] == 'A'){
                    x=10 ;
                }
                else  if (h[i] == 'B') {
                    x=11;
                }
                else if (h[i] == 'C') {
                    x=12;
                }
                else if (h[i] == 'D') {
                    x=13;
                }
                else if (h[i] == 'E') {
                    x=14;}

                else if (h[i] == 'F') {
                    x=15;
                }
                else
                {
                    b1 = h[i];
                    x = stoi(b1);
                }
                //else if (sum==15) {
                //  hexa[n] = 'F';
                // }

                sum2 += x * pow(16, u);
                u = 0;
                if (i % 2 != 0) {
                    u = 1;
                    sum1[l] = sum2;
                    l+=1;
                    sum2 = 0;
                    //   cout << sum1[i] << ' ' << endl;

                }



            }
            for (int k = 0; k < l; k++) {
                s1 = sum1[k];
                //cout<<s1;
                for (int i = 0; i < 8; i++) {
                    if (s1 == 0)
                        b[7 - i] = 0;
                    else if (s1 % 2 == 0) {
                        b[7 - i] = 0;
                        s1 = floor(s1 / 2);
                    } else if (s1 % 2 != 0) {
                        b[7 - i] = 1;
                        s1 = floor(s1 / 2);
                    }
                }
                for (int i = 0; i < 8; i++) {
                    if (secretkey[i] == b[i]) {
                        c[i] = 0;
                    } else {
                        c[i] = 1;
                    }
                    //cout<<(int)P[i]<<' '<<(int)b[i];
                }
                //for (int i = 0; i < 8; i++)
                //cout << (int) c[i];

                for (int i = 0; i < 8; i++) {
                    sum += c[7 - i] * pow(2, i);
                    //cout<<endl <<sum ;
                }
                cout << (char) sum;
                sum=0;
            }
            cout<<endl;

        }
        }
    }
