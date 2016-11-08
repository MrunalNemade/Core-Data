//
//  AddViewController.h
//  MNCoreData
//
//  Created by Mrunalini on 06/11/16.
//  Copyright © 2016 Mrunalini Nemade. All rights reserved.
//

#import "ViewController.h"

@interface AddViewController : UIViewController <UITextFieldDelegate>
{
    UISegmentedControl *localSegment;

}
@property (strong, nonatomic) IBOutlet UITextField *firstTextField;

@property (strong, nonatomic) IBOutlet UITextField *secondTextField;

@property (strong, nonatomic) IBOutlet UITextField *thirdTextField;


- (IBAction)actionSecondSegment:(id)sender;

- (IBAction)actionSave:(id)sender;

- (IBAction)actionCancel:(id)sender;

@end
