class Solution{
  public:
    int middle(int A, int B, int C){
        //code here//Position this line where user code will be pasted.
        if(A>B)
        {
            if(A<C)
            return A;
            if(B>C)
            return B;
            return C;
        }
        else
        {
            if(C>B)
            return B;
            else
            return C;
        }
        
    }
};