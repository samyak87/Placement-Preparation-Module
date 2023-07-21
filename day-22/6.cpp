class Solution {
public:
   void dfs(vector<vector<int>>& ans,int sr,int sc,vector<vector<int>>& image,int newColor,int delrow[],int delcol[],int inicolor)
   {
       int n=image.size();
       int m=image[0].size();
        ans[sr][sc]=newColor;
       for(int i=0;i<4;i++)
       {
           int nrow=sr+delrow[i];
           int ncol=sc+delcol[i];
           if(nrow>=0 && nrow<n && ncol>=0 && ncol<m  &&  image[nrow][ncol]==inicolor && ans[nrow][ncol]!=newColor){
               dfs(ans,nrow,ncol,image,newColor,delrow,delcol,inicolor);
           }
           

       }
        
   }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        vector<vector<int>> ans=image;
        int inicolor=image[sr][sc];
        int delrow[]={-1,0,+1,0};
        int delcol[]={0,+1,0,-1};
        dfs(ans,sr,sc,image,newColor,delrow,delcol,inicolor);
        return ans;
    }
};