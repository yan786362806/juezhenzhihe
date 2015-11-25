//
//  main.cpp
//  juezhenzhihe
//
//  Created by 20141105044y on 15/11/25.
//  Copyright © 2015年 20141105044y. All rights reserved.
//

#include <iostream>
using namespace std;
class Matrix
{public:
    Matrix();
    friend Matrix operator+(Matrix &,Matrix &);
    void input();
    void display();
private:
    int mat[2][3];
};

Matrix::Matrix()
{for(int i=0;i<2;i++)
    for(int j=0;j<3;j++)
        mat[i][j]=0;
}

Matrix operator+(Matrix &a,Matrix &b)
{Matrix c;
    for(int i=0;i<2;i++)
        for(int j=0;j<3;j++)
        {c.mat[i][j]=a.mat[i][j]+b.mat[i][j];}
    return c;
}

void Matrix::display()
{for(int i=0;i<2;i++)
{for(int j=0;j<3;j++)
{cout<<mat[i][j]<<" ";
    cout<<endl;    }
}
}


int main()
{Matrix a,b,c;
    a.input();
    b.input();
    cout<<endl<<"Matrix a:"<<endl;
    a.display();
    cout<<endl<<"Matrix b:"<<endl;
    b.display();
    c=a+b;
    cout<<endl<<"Matrix c = Matrix a +Matrix b:"<<endl;
    c.display();
    return 0;

}
