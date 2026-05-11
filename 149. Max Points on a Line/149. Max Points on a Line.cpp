class Solution {
public:
    
    int gcd(int a, int b) {
        return b == 0 ? a : gcd(b, a % b);
    }

    int maxPoints(vector<vector<int>>& points) {
        
        int n = points.size();

        if(n <= 2) return n;

        int ans = 0;

        for(int i = 0; i < n; i++) {

            map<pair<int,int>, int> mp;

            int maxi = 0;

            for(int j = i + 1; j < n; j++) {

                int dx = points[j][0] - points[i][0];
                int dy = points[j][1] - points[i][1];

                int g = gcd(abs(dx), abs(dy));

                dx /= g;
                dy /= g;

                // Handle sign consistently
                if(dx < 0) {
                    dx *= -1;
                    dy *= -1;
                }

                // Vertical line
                if(dx == 0) {
                    dy = 1;
                }

                // Horizontal line
                if(dy == 0) {
                    dx = 1;
                }

                mp[{dy, dx}]++;

                maxi = max(maxi, mp[{dy, dx}]);
            }

            ans = max(ans, maxi + 1);
        }

        return ans;
    }
};