#include <iostream>
using namespace std;

// 1 - Printing a Full square
// ==============================================================================

// int main()
// {
//     int n;
//     cout << "Enter n here : ";
//     cin >> n;

//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < n; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// 2- printing a hollow square
// ==============================================================================
// int main(){

//     int n;
//     cout<< "Enter your n here : ";
//     cin>>n;

//     for(int row=0;row<n;row++){

//         for(int col=0; col<n;col++){
//             if(row==0 || col == 0 || row == n-1 || col == n-1){
//                 cout<< "* ";
//             }else{
//                 cout<< "  ";
//             }
//         }
//         cout<< endl;
//     }
// }

// 3- printing ractangle
// ==============================================================================

// int main()
// {

//     int n;

//     cout << "Enter your n here : ";
//     cin >> n;

//     int m;
//     cout << "Enter your m here";
//     cin >> m;

//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < m; col++)
//         {
//             cout << "* ";
//         }
//         cout << endl;
//     }
// }

// 4- printing hollow rectangle
// ==============================================================================

// int main(){

//     int n;

//     cout << "Enter your n here : ";
//     cin >> n;

//     int m;
//     cout << "Enter your m here : ";
//     cin >> m;

//     for (int row = 0; row < n; row++)
//     {
//         for (int col = 0; col < m; col++)
//         {
//             if(col == 0 || row == 0 || col==m-1 || row == n-1){
//                 cout << "* ";
//             }else{
//                  cout << "  ";
//             }
//         }
//         cout << endl;
//     }
// }

// 5 - printing straight hollow triangle/half pyramid
// ==============================================================================

// int main(){

//     int n;
//     cout<< "Enter your n here : ";
//     cin>>n;

//     for(int row=0; row<n;row++){

//         for(int col=0; col <n; col ++){
//             if(row==n-1 || col == 0 || row==col){
//                 cout<< "* ";
//             }else{
//                 cout<< "  ";
//             }
//         }
//         cout<< endl;
//     }

// }

// 6 - printing straight triangle/half pyramid
// ==============================================================================

// int main(){

//     int n;
//     cout<< "Enter your n here : ";
//     cin>>n;

//     for(int row=0; row<n; row++){

//         for(int col=0; col <row+1; col ++){
//                 cout<< "* ";
//         }
//         cout<< endl;
//     }

// }

// 7 - printing inverted triangle/half pyramid
// ==============================================================================

// int main(){

//     int n;
//     cout<< "Enter your n here : ";
//     cin>>n;

//     for(int row=0; row<n; row++){

//         for(int col=0; col <n-row; col ++){
//                 cout<< "* ";
//         }
//         cout<< endl;
//     }

// }

// 8 - printing inverted hollow triangle/half pyramid
// ==============================================================================

// int main(){

//     int n;
//     cout<< "Enter your n here : ";
//     cin>>n;

//     for(int row=0; row<n; row++){

//         for(int col=0; col <n-row; col ++){
//             if(row == 0 || col ==0 || row == n-col-1 ){
//                 cout<< "* ";
//             }else{
//                 cout<< "  ";
//             }

//         }
//         cout<< endl;
//     }

// }

// 9 - printing number-wise triangle/half pyramid  do it
// ==============================================================================

// int main(){

//     int n;
//     cout<< "Enter your n here : ";
//     cin>>n;

//     for(int row=0; row<n; row++){

//         for(int col=0; col <row +1; col ++){
//             cout << col+1;
//         }
//         cout<< endl;
//     }

// }

// 10 - printing Full pyramid  --   do it
// ==============================================================================

// int main(){

//     int n=15;

//     for(int row=0; row<n; row++){

//             for(int col=0; col<n-row-1; col++)
//             cout<< " ";

//             for(int col = 0; col < row+1; col++)
//             cout<< "* ";

//             cout << endl;

//     }

// }

// 11 - Inverted Full pyramid  --   do it
// ==============================================================================

// int main(){

//     int n=5;
//     for(int row=0; row<n; row++){

//         for(int col=0; col<row; col ++)
//         cout << " ";

//         for(int col=0; col<n-row; col++)
//         cout<< "* ";

//         cout << endl;
//     }
// }

// 12 - Printing Diamond   --   do it
// ==============================================================================

// void fullPyramid(int n){

//  for(int row=0; row<n; row++){

//             for(int col=0; col<n-row-1; col++)
//             cout<< " ";

//             for(int col = 0; col < row+1; col++)
//             cout<< "* ";

//             cout << endl;

//     }

// }

// void invertedFullPyramid(int n){

//     for(int row=0; row<n; row++){

//         for(int col=0; col<row; col ++)
//         cout << " ";

//         for(int col=0; col<n-row; col++)
//         cout<< "* ";

//         cout << endl;
//     }
// }

// void diamond(int n){
//         fullPyramid(n);
//         invertedFullPyramid(n);

// }

// int main(){

// int n=5;
//     diamond(n);

// }

// 13 - Printing Hollow Pyramid   --   do it
// ==============================================================================

// int main()
// {

//     int n = 10;
//     for (int row = 0; row < n; row++)
//     {

//         for (int col = 0; col < n - row - 1; col++)

//             cout << " ";

//         for (int col = 0; col < row + 1; col++)
//         {

//             if (col == 0 || row == 0 || row == n - 1 || col == row)
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }

//         cout << endl;
//     }
// }

// 14 - Printing Inverted Hollow Pyramid   --   do it
// ==============================================================================

// int main(){

//     int n=8;
//     for(int row=0; row<n; row++){

//         for(int col=0; col<row; col++)
//             cout<< " ";

//         for(int col=0; col<n-row; col++){

//             if( row ==0 || row == n-1 || col==0 || col ==n-row-1)

//                 cout<<"* ";
//             else
//                 cout<< "  ";
//         }

//         cout<< endl;

//     }
// }

// 15 - Printing  Hollow Diamond   --   do it
// ==============================================================================

// void fullHollowPyramid(int n){

//     for (int row = 0; row < n; row++)
//     {

//         for (int col = 0; col < n - row - 1; col++)

//             cout << " ";

//         for (int col = 0; col < row + 1; col++)
//         {

//             if (col == 0 || row == 0 || /* row == n - 1  || */ col == row)
//                 cout << "* ";
//             else
//                 cout << "  ";
//         }

//         cout << endl;
//     }

// }

// void invertedHollowFullPyramid(int n){

//     for(int row=0; row<n; row++){

//         for(int col=0; col<row; col++)
//             cout<< " ";

//         for(int col=0; col<n-row; col++){

//             if( /* row ==0 || */row == n-1 || col==0 || col ==n-row-1)

//                 cout<<"* ";
//             else
//                 cout<< "  ";
//         }

//         cout<< endl;

//     }
// }

// void diamond(int n){
//         fullHollowPyramid(n);
//         invertedHollowFullPyramid(n);

// }

// int main(){

// int n=5;
//     diamond(n);

// }

// 15 -- Printing  Mixed Pyramid and Diamond   --   do it
// ==============================================================================
// * * * * *   * * * * *
// * * * *       * * * *
// * * *           * * *
// * *               * *
// *                   *
// *                   *
// * *               * *
// * * *           * * *
// * * * *       * * * *
// * * * * *   * * * * *
// int main(){

//     int n=5;

//     for(int row =0; row<n; row++){

//         // Upper Part
//         for(int col=0; col<n-row; col++)
//             cout<< "* ";

//         for(int col=0; col<2*row+1; col++)
//             cout<< "  ";

//         for(int col=0; col<n-row; col++)
//             cout<< "* ";
//         cout<< endl;

//     }

//     for(int row =0; row<n; row++){

//         // Lower Part
//         for(int col=0; col<row+1; col++)
//             cout<< "* ";

//         for(int col=0; col<2*(n-row)-1; col++)
//             cout<< "  ";

//         for(int col=0; col<row+1; col++)
//             cout<< "* ";
//         cout<< endl;

//     }
// }

// 16 - Printing  FANCY 12345  pattern--   do it
// ==============================================================================

// 1
// 2*2
// 3*3*3
// 4*4*4*4
// 5*5*5*5*5

// int main(){

//     int n=5;

//     for(int row=0; row<n; row++){

//         for(int col=0; col<2*row+1; col ++){
//             if(col % 2==0){
//                 cout<< row+1;
//             }else{
//                 cout<< "*";
//             }
//         }
//          cout<< endl;
//     }
// }

// 17 - Printing  FANCY 12345--54321  pattern--   do it
// ==============================================================================

// int main(){

//     int n=5;

//     for(int row=0; row<n; row++){

//         for(int col=0; col<2*row+1; col ++){
//             if(col % 2==0){
//                 cout<< row+1;
//             }else{
//                 cout<< "*";
//             }
//         }
//          cout<< endl;
//     }

// n--;
//     for(int row=0; row<n; row++){

//         for(int col=0; col<2*(n-row)-1;col++){
//             if(col % 2 ==0){
//                 cout<< n-row;
//             }else{
//                 cout<< "*";
//             }
//         }
//         cout<< endl;
//     }
// }

// 17 - Printing  FANCY 12345--54321  pattern--   do it - very Important do it.
// ==============================================================================

// int main(){

//     int n=5;
//     for(int row=0; row<n; row++){

//         char ch='A';
//         for(int col =0; col< row+1; col++){
//             cout<<ch;
//             ch+=1;
//         }
//         ch--;

//         while(ch > 'A'){

//             ch--;
//             cout<< ch;
//         }

//         cout<< endl;
//     }
// }