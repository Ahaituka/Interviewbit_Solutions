#include <iostream>
#include <vector>

using namespace std;

struct Interval {
    int start;
    int end;
    Interval() : start(0), end(0) {}
    Interval(int s, int e) : start(s), end(e) {}
};



bool myCmp(Interval a, Interval b) {
    return a.start < b.start;
}




vector<Interval> overlap(vector<Interval> &intervals) {
    if(intervals.size() <= 1) {
        return intervals;
    }
    sort(intervals.begin(), intervals.end(), myCmp);
    int first = 0;
    for(int second = 1; second < intervals.size(); second++) {
        // There is overlap in intervals at first and second position.
        if(intervals[second].start <= intervals[first].end) {
            // We overlap the second interval into the first one and modify the first interval to reflect it.
            intervals[first].end = max(intervals[second].end, intervals[first].end);
        }
        else {
            // No overlap between first and second. Move forward.
            ++first;
            intervals[first].start = intervals[second].start;
            intervals[first].end = intervals[second].end;
        }
    }

    intervals.erase(intervals.begin() + first + 1, intervals.end());
    return intervals;
}



int main(int argc, char**argv)
{
    Interval i1(1,3);
    Interval i2(2,6);
    Interval i3(8,10);
    Interval i4(15,18);
    Interval i5(19,20);
    vector<Interval> intervals;
    intervals.push_back(i1);
    intervals.push_back(i2);
    intervals.push_back(i3);
    intervals.push_back(i4);
    intervals.push_back(i5);

    // Interval n(4,9);
    vector<Interval> r = overlap(intervals);

    for(int i=0; i<r.size(); i++){
        cout << "[ " << r[i].start << ", " << r[i].end << " ] ";
    }
    cout <<endl;

    return 0;
}
