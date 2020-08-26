class QuickSort {
public:
    void quicksort(vector<int> &arr, int left, int right, int k) {
        if (k - 1 >= left) {
            int pivot = 0;
            if (left < right) {
                pivot = partition(arr, left, right);
                cout << pivot << endl;
                if (pivot == k - 1) {
                    cout << "max=";
                    cout << arr[pivot];
                    return;
                } else {
                    quicksort(arr, left, pivot - 1, k);
                    quicksort(arr, pivot + 1, right, k);
                }
            }
        } else {
            return;
        }

    }
}

int partition(vector<int>&arr,int left,int right){
    int temp=arr[left];
    while(left<right){
        while(left<right&&arr[right]>temp){
            right--;
        }
        arr[left]=arr[right];
        while(left<right&&arr[left]<temp){
            left++;
        }
        arr[right]=arr[left];
    }
    arr[left]=temp;
    return left;
}
};

int quicksort(vector<int>&arr,int low,int high,int k){
    int i=low;
    int j=high;
    int temp=arr[low];
    while(i<j){
        while(i<j&&arr[j]>temp) {
            j--;
        }
        arr[i]=arr[j];
        while(i<j&&arr[i]<temp){
            i++;
        }
        arr[j]=arr[i];
    }
    arr[i]=temp;
    if(i==k-1){
        return arr[i];
    }else if(i>k-1){
        return quicksort(arr,low,i-1,k);
    }else{
        return quicksort(arr,i+1,high,k);
    }
}
class Solution {
public:
    vector<int> smallestK(vector<int>& arr, int k) {//找最小k  用大根堆
                                                    //找第k大 用小根堆
    vector<int> res;
    priority_queue<int,vector<int>,less<int> > q;
    for(auto i:arr){
        q.push(i);
        if(q.size()>k) q.pop();
    }
    while(!q.empty()){
        res.push_back(q.top());
        q.pop();
    }
    }
};
int main(){
    int arr[11]={65,58,95,10,57,62,13,106,78,23,85};

Solution duixiang=new duixiang();
vector<int> res;
vector<int> res1;
for(int i:arr){
res.push_back(i);
res1.push_back(i);
}
sort(res1.begin(),res1.end());
for(auto i:res1){
cout<<i<<" ";
}
cout<<endl;
cout<<quicksort(res,0,res.size()-1,1);


}