using namespace std;

int main() {
	//code
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    long long arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    long long diff = INT_MAX;
	    int m;
	    cin >> m;
	    sort(arr,arr+n);
	    int i=0;
	    while(i<=(n-m)){
	        long long temp = arr[i+m-1] - arr[i];
	        diff = min(diff,temp);
	        i++;
	    }
	    cout << diff << endl;
	}
	return 0;
}
