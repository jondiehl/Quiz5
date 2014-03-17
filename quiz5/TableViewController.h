//
//  TableViewController.h
//  quiz5
//
//  Created by Jon Diehl on 3/15/14.
//  Copyright (c) 2014 Jon Diehl. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableViewController : UITableViewController<UITableViewDataSource,UITableViewDelegate>

@property NSMutableArray *tasks;

@end
