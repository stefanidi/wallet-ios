//
//  MYCBackupViewController.h
//  Mycelium Wallet
//
//  Created by Oleg Andreev on 01.10.2014.
//  Copyright (c) 2014 Mycelium. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MYCBackupViewController : UIViewController

// Called with YES if completed successfully. NO if cancelled.
@property(nonatomic,copy) void(^completionBlock)(BOOL completed);

@end
