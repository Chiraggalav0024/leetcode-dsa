
bool value_sort(pair<int,int> a, pair<int,int> b){
           return a.second > b.second;
        }
class Solution {
public:
     
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int x: nums){
            freq[x]++;
        }
       
        vector<pair<int,int>> temp;
        for (auto x : freq){
            temp.push_back({x.first, x.second});
        }
        sort(temp.begin(), temp.end(), value_sort);
        vector <int> result;
        for (int i=0; i<k; i++){
            result.push_back(temp[i].first);
        }
        return result;
    }
};