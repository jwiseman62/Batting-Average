//
//  main.cpp
//  batting average
//
//  Created by Jeff Wiseman on 8/29/19.
//  Copyright © 2019 Jeff Wiseman. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
    double atBats;
    double hits;
    double doubles;
    double triples;
    double homeRuns;
    
    double battingAverage;
    double sluggingPercentage;
    
    cout << "Enter number of at bats: " << endl;
    cin >> atBats;
    
    cout << "Enter number of hits: " << endl;
    cin >> hits;
    
    cout << "Enter number of doubles: " << endl;
    cin >> doubles;
    
    cout << "Enter number of triples: " << endl;
    cin >> triples;
    
    cout << "Enter number of home runs: " << endl;
    cin >> homeRuns;
    
    battingAverage = hits / atBats;
    sluggingPercentage = (hits + doubles + triples + homeRuns) / atBats;
    
    cout << "The batting average is: " << battingAverage << endl;
    cout << "The slugging percentage is: " << sluggingPercentage << "%" << endl;
    
    return 0;
}
