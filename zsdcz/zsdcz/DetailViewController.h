//
//  DetailViewController.h
//  zsdcz
//
//  Created by 刘蒙 on 13-11-11.
//  Copyright (c) 2013年 刘蒙. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end
