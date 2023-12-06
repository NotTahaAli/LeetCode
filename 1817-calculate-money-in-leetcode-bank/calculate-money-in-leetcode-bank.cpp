class Solution {
public:
    int totalMoney(int n) {
        int weeks = n/7;
        int remainingDays = n%7;
        int weeksIncremental = (weeks-1)/2.0 * (weeks);
        int weeksMoney = weeksIncremental*7 + weeks*28;
        int remainingDaysMoney = remainingDays/2.0 * ((weeks+1) + (weeks+remainingDays));
        cout << weeksIncremental << " " << weeksMoney << " " << remainingDaysMoney << " " << (weeks+1) + (weeks+remainingDays) ;
        return weeksMoney + remainingDaysMoney;
    }
};