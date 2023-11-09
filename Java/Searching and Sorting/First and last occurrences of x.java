class GFG {

        Long firstIndex(long arr[], int n, int x) {
            int low = 0, high = n - 1;
            long fi = -1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (arr[mid] > x) {
                    high = mid - 1;
                } else if (arr[mid] < x) {
                    low = mid + 1;
                } else {
                    fi = mid;
                    high = mid - 1;
                }
            }
            return fi;
        }

        Long lastIndex(long arr[], int n, int x) {
            int low = 0, high = n - 1;
            long li = -1;
            while (low <= high) {
                int mid = (low + high) / 2;
                if (arr[mid] < x) {
                    low = mid + 1;
                } else if (arr[mid] > x) {
                    high = mid - 1;
                } else {
                    li = mid;
                    low = mid + 1;
                }
            }
            return li;
        }

        ArrayList<Long> find(long arr[], int n, int x) {
            ArrayList<Long> fili = new ArrayList<>();

                fili.add(firstIndex(arr, n, x));
                fili.add(lastIndex(arr, n, x));
            return fili;
        }
    }