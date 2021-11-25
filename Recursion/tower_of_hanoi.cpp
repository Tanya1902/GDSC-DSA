//Tower of hanoi
//https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1#editorial
class Solution{
    public:
    // You need to complete this function
    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here
        if(N==0)
        return 0;
        else if(N==1)
        cout<<"move disk 1 from rod "<<from<<" to rod "<<to<<endl;
        else{
            toh(N-1,from,aux,to);
            cout<<"move disk "<<N<<" from rod "<<from<<" to rod "<<to<<endl;
            toh(N-1,aux,to,from);
        }
        return (pow(2,N))-1;
    }

};