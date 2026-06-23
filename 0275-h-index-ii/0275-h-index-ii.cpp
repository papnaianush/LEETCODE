class Solution {
public:
    int hIndex(vector<int>& citations) {
        int st=0;
        int end=citations.size()-1;
        int ans=0;
        while(st<=end){
            int mid=st+(end-st)/2;
            int len=citations.size()-mid;
            if(citations[mid]==len){
                ans=len;
                end=mid-1;
            }
            else if(citations[mid]>len && citations[mid]>ans){
                ans=len;
                end=mid-1;;
            }
            else if(citations[mid]<len) st=mid+1;
        }
        return ans;
    }
    
};