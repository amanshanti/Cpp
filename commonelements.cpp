//My Code

vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        { 
            vector <int> temp;
            vector <int> ans;
            for(int i=0;i<n1;i++){
                for(int j=0;j<n2;j++){
                if(A[i]==B[j])
                temp.push_back(A[i]);
            }
            }
            
            for(int k=0;k<n3;k++){
                for(int m=0;m<temp.size();m++){
                if(C[k]==temp[m])
                ans.push_back(C[k]);
                
                }    
            }
            std::sort(ans.begin(), ans.end());
    ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
        
            return ans;
        }
