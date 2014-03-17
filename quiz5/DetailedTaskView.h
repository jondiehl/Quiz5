//
//  DetailedTaskView.h
//  quiz5
//
//  Created by Jon Diehl on 3/15/14.
//  Copyright (c) 2014 Jon Diehl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Task.h"

@interface DetailedTaskView : UIViewController<UITextFieldDelegate>
@property (weak, nonatomic) IBOutlet UILabel *urgencyLabel;
@property (weak, nonatomic) IBOutlet UITextField *nameField;
@property (weak, nonatomic) IBOutlet UISlider *urgencyField;
@property (weak, nonatomic) IBOutlet UIDatePicker *dateField;

@property (nonatomic, strong) Task *task;
- (IBAction)saveTask:(id)sender;
- (IBAction)urgencySlider:(id)sender;


@end
