//
//  RNMonthPicker.h
//  RNMonthPicker
//
//  Created by Gustavo Paris on 22/04/2020.
//  Copyright © 2020 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <React/UIView+React.h>

@interface RNMonthPicker : UIPickerView

@property (nonatomic, copy) RCTBubblingEventBlock onChange;
@property (nonatomic, strong) NSDate* value;
@property (nonatomic, strong) NSDate* minimumDate;
@property (nonatomic, strong) NSDate* maximumDate;

@end
