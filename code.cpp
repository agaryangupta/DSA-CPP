#include <bits/stdc++.h>
using namespace std;

int main() {

 write a program to read your name and concatenate with a student.
	int num;
	cin >> num;
	cout << name + " a student";
 
 write a program to read an integer and add 2  and print.
 int num;
	cin >> num;
	int sum = num + 2;
	cout << sum;

 write a program to read name, age, and roll no. and print it in a single line seperated by space.
 string name, rollno, num;
 cin >> name >> rollno >> num;
 cout << name <<" " << rollno << " " << num;

 write a program to read 3 integers and multiple it.
 int num1, num2, num3;
 cin >> num1 >> num2 >> num3;
 int mul = num1 * num2 * num3;
 cout << mul;

 write a program to read 3 space seperated integers and calculate the avg of first 2 integers and check whether this avg is greater then third integer, if yes print YES, else NO..

 int a, b, c;
 cin >> a >> b >> c;
 float avg = (a + b)/2.0;
 if (avg > c){
     cout << "YES";
 }
 else{
     cout << "NO";
 }

in phoneland a valid phone number consists of 5 digits with no leading zeroes. alex went to a store and purchased n items, where the cost of each item is y. determine whether the bollequivalent to avalid no. or not
int N, Y;
cin >> N >> Y;
int bill = N * Y;
if(bill>=10000){
    if(bill<= 99999){
    cout << "VALID";
    }
    else{
    cout<<"NOT VALID";
    }
}
else {
    cout << "NOT VALID";
}

string key;
getline(cin,key);
if (key.length()%2==0 && key.find("#") && key.find("&")){
    cout << "YES";
}
else {
    cout << "NO";
}
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N , M;
	cin >> N;
	for (int i=1; i<=N; i++){
	    int sum =0;
	    cin >> M;
	        for (int j=1; j<=M; j++){
	            int a;
	            cin >> a;
	            sum = sum +a;
	        }
	        cout << sum <<endl ;
	}
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    string ans;
    for(char i:s){
        if(i=='o' || i=='O'){
            ans=ans + " ";
        }
        else{
            ans = ans + i;
        }
    }
    cout<<ans;
}



#include <bits/stdc++.h>
using namespace std;

int main() {
    
	int arr[7]={10,20,30,40,50,60,70};
	int sum1= accumulate(arr, arr+7, 0);
	int sum2= accumulate(arr, arr+3, 0);
	int sum3= accumulate(arr+1, arr+3, 0);
	
	cout<<sum1<<endl;
	cout<<sum2<<endl;
	cout<<sum3<<endl;
	
    int max1 = *max_element(arr, arr+7);
    int max2 = *max_element(arr+1, arr+4);
    int min1 = *min_element(arr, arr+7);
    int min2 = *min_element(arr+1, arr+7);
	
	cout<<max1<<endl;
	cout<<max2<<endl;
	cout<<min1<<endl;
	cout<<min2<<endl;
	
	int arr[5]={1,2,3,4,5};
	arr[0]=9;
	cout<<arr[0]<<endl;
	cout<<arr;
	
	int n;
	int sum=0;
	int sum1=0;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	for(int i=0; i<n; i++){
	    cout<<arr[i]<<endl;
	}
	for(int i=0; i<2; i++){
	    sum=sum+arr[i];
	}
	cout<<sum<<endl;
		for(int i=n-1; i>n-3; i--){
	    sum1=sum1+arr[i];
	}
	cout<<sum1;

	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++){
	    cin>>arr[i];
	}
	for(int i=0; i<n; i++){
	    cout<<arr[i]<<endl;
	}
	cout<<arr[0]+arr[1]<<endl;
	cout<<arr[n-1]+arr[n-2]<<endl;

int n;
cin>>n;

int arr[n];

for(int i=0; i<n; i++){
    for(int j=0; j<n; j++){
        cin>>arr[j];
    }
    cout<<*max_element(arr, arr+(n))<<endl;
}

int n;
cin>>n;

for(int i=0; i<n; i++){
    int m;
    cin >> m;
    int arr[m];
    for(int j=0; j<m; j++){
        cin >> arr[j];
    }
    cout<<*max_element(arr, arr+m)<<" "<<*min_element(arr, arr+m)<<" "<< accumulate(arr, arr+m,0)<<" "<< (float)(accumulate(arr, arr+m,0)/(float)m)<<endl;
}


int n;
cin >> n;
for (int i=0; i<n; i++){
    int m;
    string form;
    cin >> m >> form;
    if( form=="INT" || form=="int"){
        int sum=0, p;
        for(int j=0; j<m; j++){
            cin >> p;
            sum = sum + p;
        }
        cout<<sum<<endl;
    }
    else if(form=="STRING" || form=="string"){
        string text;
        int max=0;
        for(int j=0;j<m;j++){
            cin>>text;
            if(text.length()>max){
                max=text.length();
            }
        }
        cout<< max<<endl;
    }
}

int n;
std::cin >> n;

 	    int count1 = 0;
 	    int count2 = 0;
 	for(int i = 0; i < n; i++){
 	    int grade;
 	    string status;
 	    std::cin >> status;
 	    std::cin >> grade;
 	    if(grade > 75 && status == "PASS") {
 	        count1++;
 	    }if(grade < 50 && status == "FAIL") {
 	        count2++;
 	    }
 	}
 	    std::cout << count1 << " " << count2<< std::endl;
 	}


#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    int curr = a[0], maxSum = a[0];
    for(int i = 1; i < n; i++){
        curr = max(a[i], curr + a[i]);
        maxSum = max(maxSum, curr);
    }
    cout << maxSum << endl;
}


int main() {
    int n = 5;
    int m = 7;

    int a[n] = {2, 6, 1, 3, 9};
    int b[m] = {5, 1, 8, 7, 0, 4, 12};

    for (int i = 0; i < m; i++) {     
        int count = 0;
        for (int j = 0; j < n; j++) {  
            if (a[j] > b[i]) {
                count++;
            }
        }
        cout << count << " ";
    }

    return 0;

int main() {
    int n = 7;
    int k = 5;

    int a[n] = {8, -1, 3, 4, -3, 2, 1};

    for (int i = 0; i < n; i++) {     
        for (int j = i + 1; j < n; j++) {  
            if (a[i] + a[j] == k) {
                cout<< a[i] << " " << a[j] << endl;
            }
        }
    }

    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    int a[n] = {4, 2, 6, 4, 5};

    for (int i = 0; i < n; i++) {
        int next = 0; 
        for (int j = i + 1; j < n; j++) {
            if (a[j] > a[i]) {
                next = a[j];
                break;
            }
        }
        cout << next << " ";
    }
}



#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int p[n];
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }

    int maxProfit = 0; 

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            int profit = p[j] - p[i]; 
            if (profit > maxProfit) {
                maxProfit = profit;
            }
        }
    }

    cout << maxProfit << endl;

    return 0;
}


#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            swap(arr[i], arr[j]);
            j++;
        }
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}



#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }
    while (j < n) {
        arr[j] = 0;
        j++;
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    int original[n];
    for (int i = 0; i < n; i++)
        original[i] = arr[i];

    sort(arr, arr + n);

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != original[i]) {
            count++;
        }
    }

    cout << count;
}




#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int start = 0;
    int end = n - 1;

    while (start <= end) {
        
        cout << arr[start] << " " << arr[end] << " ";
        start++;
        end--;
        
    }
}
    

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    sort(arr, arr + n);

    int start = 0;
    int end = n - 1;

    while (start < end) {
        cout << arr[start] << " " << arr[end] << " ";
        start++;
        end--;
    }

    if (start == end)
        cout << arr[start];
}



#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    
    int count = 1, maxCount = 1, element = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i - 1])
            count++;
        else
            count = 1;
        if (count > maxCount) {
            maxCount = count;
            element = arr[i];
        }
    }
    
    if (maxCount > n / 2)
        cout << element;
    else
        cout << "no majority";
}


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    sort(arr, arr + n);
    
    int sum=0, count=0;
    
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum<5000) 
        count++;
        else{
            break;
        }
    }
    cout<<count;
}

#include <iostream>
#include <string>
using namespace std;

int main(){
    string s,r;
    cin>>s>>r;
    int t;
    cin >> t;
    int n=s.size();
    for(int i=0; i<t; i++){
        int a;
        cin >> a;
        a=a%n;
        if(a>0)
        s=s.substr(n-a) + s.substr(0,n-a);
        else if(a<0)
        s=s.substr(-a) + s.substr(0,-a);
    }
    if(s==r)
    cout << "accepted";
    else
    cout << "again";
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, x="", y="";
    cin >> a;
    
    for (int i = 0; i < a.size(); i++) {
        int n = i + 1;
        if (n % 4 == 0 || n % 6 == 0)
            y += a[i];
        else
            x += a[i];
    }
    cout << x+y;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    string str1;
    string str2;
    cin>>str1>>str2;
    for(int i = 0;i < str1.size();i++)
    {
        int ind=str1.find(str2);  // 2
        for(int j = ind;j < (str2.size()+ind);j++)
        {
            str1[j]=str1[j-1];
        }
    }
    cout<<str1;
}

#include <iostream>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++) {
        if (b.find(a[i]) != -1) {
            a.erase(i, 1);
            i--;
        }
    }
    cout << a;
}

#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    string letters = "";
    for (char c : s)
        if (isalpha(c)) letters = c + letters;
    int j = 0;
    for (int i = 0; i < s.size(); i++)
        if (isalpha(s[i])) s[i] = letters[j++];
    cout << s;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);

    int n = s.size(), m = n / 2;
    string l = "", r = "", t = "";

    for (int i = 0; i < m; i++) l += s[i];
    for (int i = m; i < n; i++) r += s[i];

    for (int i = l.size() - 1; i >= 0; i--) t += l[i];
    for (int i = r.size() - 1; i >= 0; i--) t += r[i];

    string rev = t;
    for (int i = 0; i < rev.size() / 2; i++)
        swap(rev[i], rev[rev.size() - 1 - i]);

    if (t == s || rev == t)
        cout << "true";
    else
        cout << "false";
}


#include <bits/stdc++.h>

using namespace std;

int main() {
    // your code goes here
    string s1,s2;
    cin>>s1>>s2;
    int n = s2.size();
    if(n>=3&&n<=5){
        int idx = s1.find(s2[0]);
        for(int i=1;i<n;i++){
            if(idx==-1){
                break;
            }
            idx = s1.find(s2[i],idx+1);
        }
        if(idx==-1){
            cout<<"False";
        }else{
            cout<<"True";
        }
    }else{
        cout<<"False";
    }
    
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n;
    cin >> n;
    
    int count = 1;
    for (int i = 1; i <= s.size(); i++) {
        if (i < s.size() && s[i] == s[i - 1]) {
            count++;
        } else {
            if (count >= n)
                cout << s[i - 1] << count;
            else
                cout << string(count, s[i - 1]);
            count = 1;
        }
    }
}


#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    int count = 0, maxLen = 0;

    for (int i = 0; i < s.size(); i++) {
        if (isalpha(s[i])||s[i]=='['||s[i]==']') {
            count++;
            maxLen = max(maxLen, count);
        } else {
            count = 0;
        }
    }

    cout << count;
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

bool isPrime(int n){
    if(n<=1)
        return false;
     for(int i = 2; i <= n/2; i++) {
            if (n % i == 0){
                return false;
            }
        }
        return true;
}

bool isEven(int n){
    int sum=0;
    while(n>0){
        sum +=n%10;
        n=n/10;
    }
    return (sum %2==0);
}

int main() {
    int a, b;
    cin >> a >> b;
    int count=0;
    for (int i = a; i <= b; i++) {
        if (isPrime(i) && isEven(i)) {
            count++;
        }
    }
    cout<<count;
}

#include <iostream>
#include <string>
using namespace std;

int main() {
    int a;
    cin >> a;
    
    int arr[a];
       
    for(int i = 0; i < a; i++)
        cin >> arr[i];
        
    for(int i = 0; i < a; i++) {
        int cnt = 0;
        for(int j = i+1; j < a; j++) {
            if(arr[j] < arr[i])
                cnt++;
        }
         cout << cnt << " ";
    }
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

string rs(string s) {
    string r = "";
    for (int i = s.size() - 1; i >= 0; i--)
        r += s[i];
    return r;
}

int main() {
    string s;
    getline(cin, s);

    int n;
    cin >> n;

    int len = s.size();
    n = n % len;

    string left = s.substr(n) + s.substr(0, n);
    string right = s.substr(len - n) + s.substr(0, len - n);

    if (left == rs(left) || right == rs(right))
        cout << "true";
    else
        cout << "false";
}