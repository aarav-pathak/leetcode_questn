class Solution {
public:
    bool canJump(vector<int>& v) {

        int mr=0,n=v.size();



        for(int i=0;i<n;i++){
            if(i>mr)return false;
            mr=max(mr,i+v[i]);
        }
        return true;

        
    }
};