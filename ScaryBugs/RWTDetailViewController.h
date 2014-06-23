//
//  RWTDetailViewController.h
//  ScaryBugs
//
//  Created by Jesus Magana on 6/22/14.
//  Copyright (c) 2014 ZeroLinux5. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "RWTRateView.h"

@class RWTScaryBugDoc;

@interface RWTDetailViewController : UIViewController <UITextFieldDelegate, RWTRateViewDelegate,UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (strong, nonatomic) RWTScaryBugDoc* detailItem;

@property (strong, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@property (weak, nonatomic) IBOutlet UITextField *titleField;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@property (strong, nonatomic) UIImagePickerController *picker;
- (IBAction)addPictureTapped:(id)sender;
@property (weak, nonatomic) IBOutlet RWTRateView *rateView;
- (IBAction)titleFieldTextChanged:(id)sender;
@end
