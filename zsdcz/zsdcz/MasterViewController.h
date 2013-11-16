//
//  MasterViewController.h
//  zsdcz
//
//  Created by 刘蒙 on 13-11-11.
//  Copyright (c) 2013年 刘蒙. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
