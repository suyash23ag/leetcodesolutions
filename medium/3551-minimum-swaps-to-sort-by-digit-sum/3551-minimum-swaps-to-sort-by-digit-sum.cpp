                x /= 10;
            }
            return s;
        };
        
        vector<array<int, 3>> v(n);
        for (int i = 0; i < n; i++) {
            v[i] = {digitSum(nums[i]), nums
            [i], i};
        }
        sort(v.begin(), v.end());
        
        // v[i][2] = original index of the 
        element that belongs at position i
        vector<bool> vis(n, false);
        int cycles = 0;
        
        for (int i = 0; i < n; i++) {
            if (vis[i]) continue;
            cycles++;
            int j = i;
            while (!vis[j]) {
                vis[j] = true;
                j = v[j][2];
            }
        }
        
        return n - cycles;
    }