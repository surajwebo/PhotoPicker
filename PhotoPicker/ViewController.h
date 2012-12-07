//
//  ViewController.h
//  PhotoPicker
//
//  Created by Suraj Mirajkar on 07/12/12.
//  Copyright (c) 2012 suraj. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIImagePickerControllerDelegate, UIActionSheetDelegate> {
    
}
@property (weak, nonatomic) IBOutlet UIImageView *imgViewBackground;

-(void) TakeAPicture;
- (IBAction)takeAPicture:(id)sender;
-(BOOL)iOSVersion6;

@end
