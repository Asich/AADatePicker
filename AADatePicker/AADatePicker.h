//
//  AADatePicker.h
//  CustomDatePicker
//
//  Created by Amit Attias on 3/26/14.
//  Copyright (c) 2014 I'm IT. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol AADatePickerDelegate <NSObject>

@optional
-(void)dateChanged:(id)sender;
@end

@interface AADatePicker : UIControl

@property (nonatomic, strong) id<AADatePickerDelegate> delegate;
@property (nonatomic, strong) NSDate *date;
@property (nonatomic, strong) UIColor *tintColor;

- (id)initWithFrame:(CGRect)frame maxDate:(NSDate *)maxDate minDate:(NSDate *)minDate showValidDatesOnly:(BOOL)showValidDatesOnly;

@end
