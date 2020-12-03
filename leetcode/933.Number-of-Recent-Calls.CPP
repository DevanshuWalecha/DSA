class RecentCounter {
public:
    int counts;
    int lL;
    int uL;
    int i;
    int arr[10000] = {0};
    RecentCounter() {
        counts = 0;
        lL = -3000;
        uL = 0;
        i = 0;
    }

    int ping(int t) {
        if (uL == 0) {
            uL = t;
            lL = t - 3000;
            arr[i++] = t;
            return 1;
        } else {
            uL = t;
            lL = t - 3000;
            arr[i++] = t;
            counts = 0;
            for (int j = i-1; j >=0; j--) {
                if (arr[j] <= uL && arr[j] >= lL) {
                    counts++;
                }else {
                    break;
                }
            }
            return counts;
        }
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
