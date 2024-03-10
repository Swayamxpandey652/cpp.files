There is a biker going on a road trip. The road trip consists of n + 1 points at different altitudes. The biker starts his trip on point 0 with altitude equal 0.

You are given an integer array gain of length n where gain[i] is the net gain in altitude between points i​​​​​​ and i + 1 for all (0 <= i < n). Return the highest altitude of a point.

 **********************************************class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int num=0;
        int max_1=0;
        int n=gain.size();
        for(int l=0;l<n;l++){
            num+=gain[l];
           max_1=std::max(max_1,num);
           
        }
        return max_1;
    }
};
