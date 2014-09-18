/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
 */

@interface SGSimpleTimeRange : NSObject <NSCopying, NSSecureCoding> {
    double _end;
    long long _endUTCOffsetSeconds;
    double _start;
    long long _startUTCOffsetSeconds;
    bool_floating;
}

@property(readonly) double end;
@property(readonly) long long endUTCOffsetSeconds;
@property(getter=isFloating,readonly) bool floating;
@property(readonly) double start;
@property(readonly) long long startUTCOffsetSeconds;

+ (id)dateFromGregorianComponents:(id)arg1;
+ (id)floatingRangeWithStart:(double)arg1 end:(double)arg2;
+ (id)floatingRangeWithStartDate:(id)arg1 endDate:(id)arg2;
+ (double)fromFloatingTime:(double)arg1;
+ (bool)hasYearMonthDayComponents:(id)arg1;
+ (bool)isAllDayComponents:(id)arg1;
+ (id)rangeWithGregorianStartComponents:(id)arg1 endComponents:(id)arg2;
+ (id)rangeWithStart:(double)arg1 duration:(double)arg2 timeZone:(id)arg3;
+ (id)rangeWithStart:(double)arg1 end:(double)arg2 timeZone:(id)arg3;
+ (id)rangeWithStart:(double)arg1 startTimeZone:(id)arg2 end:(double)arg3 endTimeZone:(id)arg4;
+ (id)rangeWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4;
+ (bool)supportsSecureCoding;
+ (double)toFloatingTime:(double)arg1;
+ (id)utcRangeWithStart:(double)arg1 duration:(double)arg2;
+ (id)utcRangeWithStart:(double)arg1 end:(double)arg2;

- (id)absoluteRange;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)end;
- (long long)endUTCOffsetSeconds;
- (unsigned long long)hash;
- (id)initFloatingWithStart:(double)arg1 end:(double)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStart:(double)arg1 startUTCOffsetSeconds:(long long)arg2 end:(double)arg3 endUTCOffsetSeconds:(long long)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSimpleTimeRange:(id)arg1;
- (bool)isFloating;
- (id)stableStringRepresentation;
- (double)start;
- (long long)startUTCOffsetSeconds;

@end