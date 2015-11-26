//
//  DetailViewController.h
//  RQPersonTools
//
//  Created by Qian JX on 15/11/26.
//  Copyright © 2015年 zfsoft. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

