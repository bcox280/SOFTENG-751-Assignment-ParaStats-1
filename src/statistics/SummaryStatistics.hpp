#ifndef SOFTENG_751_ASSIGNMENT_PARASTATS_SUMMARYSTATISTICS_H
#define SOFTENG_751_ASSIGNMENT_PARASTATS_SUMMARYSTATISTICS_H

#include <cmath>
#include <algorithm>
#include <cfloat>
#include "statStructs.hpp"

/**
 * This class will be used as a structure to keep the statistics from the data,
 * this will be used both for final statistics, and progression of statistics.
 */
class SummaryStatistics {
private:
    double m2, m3, m4, upperMedian, lowerMedian;
    double m1 = m2 = m3 = m4 = upperMedian = lowerMedian = 0;
    double min = DBL_MAX;
    double max = -DBL_MAX;
    unsigned long long count = 0;
    std::vector<double> modes;
public:
    SummaryStatistics();

    void updateStats(rawStats stats, size_t count);

    void updateMoments(moments rawMoments, size_t count);

    double getM1() const;

    void setM1(double m1);

    double getM2() const;

    void setM2(double m2);

    double getM3() const;

    void setM3(double m3);

    double getM4() const;

    void setM4(double m4);

    std::vector<double> getModes() const;

    void setModes(std::vector<double> mode);

    double getFinancialMedian() const;

    double getUpperMedian() const;

    void setUpperMedian(double upperMedian);

    double getLowerMedian() const;

    void setLowerMedian(double lowerMedian);

    double getMin() const;

    void setMin(double min);

    void updateMin(double min);

    double getMax() const;

    void setMax(double max);

    void updateMax(double max);

    unsigned long long getCount() const;

    void setCount(unsigned long long count);

    void updateCount(size_t count);

    double getVariance();

    double getEstimatedVariance();

    double getStandardDev();

    double getEstimatedStandardDev();

    double getSkewness();

    double getKurtosis();

    double getExcessKurtosis();

    double getSum();

    double getMean();
};

#endif //SOFTENG_751_ASSIGNMENT_PARASTATS_SUMMARYSTATISTICS_H
