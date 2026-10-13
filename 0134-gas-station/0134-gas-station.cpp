class Solution {
public:
    int canCompleteCircuit(vector<int>& g, vector<int>& c) {

        int n=g.size(),tg=0,tc=0;

        for(int i=0;i<n;i++)tg+=g[i],tc+=c[i];

        if(tg<tc)return -1;


        int cg=0,cc=0,si=0;

        for(int i=0;i<n;i++){
            cg+=(g[i]-c[i]);
            if(cg<0){
                cg=0;
                si=i+1;

            }
        }

return si;





        
    }
};