//
//  NSDate+CCPCalendar.h
//  CCPCalendar
//
//  Created by 储诚鹏 on 17/5/25.
//  Copyright © 2017年 ccp. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSDate (CCPCalendar)
//每月第一天的星期
- (NSInteger)firstDay_week;
//增加月
- (NSDate *)addMonth:(NSInteger)month;
//增加年
- (NSDate *)addYear:(NSInteger)year;
//增加日
- (NSDate *)addDay:(NSInteger)day;
//当月天数
- (NSInteger)dayOfMonth;
//当前日期年份
- (NSInteger)getYear;
//当前日期月份
- (NSInteger)getMonth;
//当前日期日
- (NSInteger)getDay;
//是否相等 精确到日
- (BOOL)isSameTo:(NSDate *)date;
//
- (NSDate *)changToDay:(NSInteger)day;
//是否晚于当前日期 精确到日
- (BOOL)laterThan:(NSDate *)date;
//星期转文字
- (NSString *)weekString;
@end
