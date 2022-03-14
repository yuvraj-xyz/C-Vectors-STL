#include <iostream>
#include <vector>

using namespace std;

// 1d vector
int main()
{
    cout << "1d Vector: " << endl;

    vector<int> v(4, 100);

    v.emplace_back(3);    // or push_back();
    v.emplace_back(8);

    for(auto elements: v)       // loop for elements of vector
    {
        cout << elements << " ";
    }
    cout << endl;

    cout << v[2] << endl; //or  v.at(2);   // ex. 100

    cout << v.size() << endl << v.at(5) << endl;   // size of vector ex. 6 and 5th element {8}

    v.pop_back();   // deletes last element we added ex {8}

    for(auto elements: v)  // loop for elements after pop_back();
    {
        cout << elements << " ";
    }
    cout << endl;
}

// 2d Vector
// int main()
// {
//     //1
//     int m,n;
//     cin >> m >> n;

//     vector<vector<int>>vec(m, vector<int>(n, 22));    // 
    
//     for(int i=0; i<m; i++)
//     {
//         for(int j=0; j<n; j++)
//         {
//             cout << vec[i][j] << " ";
//         }
//         cout << endl;
//     }
    
//     vector<vector<int>>vec;

//     vector<int>v1;               //    |           |  i
//     v1.push_back(1);             //    |           |  3
//     v1.push_back(2);             //    |           |  2
//                                  //    |  10   20  |  1
//     vector<int>v2;               //    |__1____2___|  0
//     v2.push_back(10);            //   j   0    1  
//     v2.push_back(20);

//     vec.push_back(v1);
//     vec.push_back(v2);

//     for(auto i: vec)
//     {
//         for(auto j: i)
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }
