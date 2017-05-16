//
//  TAViewController.h
//  Matching Game
//
//  Created by Todd Austin on 1/12/14.
//  Copyright (c) 2014 Todd Austin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TAViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *buttonFourMoved;
@property (weak, nonatomic) IBOutlet UIButton *buttonTwoMoved;
@property (weak, nonatomic) IBOutlet UIButton *buttonOneMoved;
@property (weak, nonatomic) IBOutlet UIButton *buttonThreeMoved;
@property (weak, nonatomic) IBOutlet UIButton *buttonFiveMoved;


- (IBAction)buttonOne:(id)sender;
- (IBAction)buttonTwo:(id)sender;
- (IBAction)buttonThree:(id)sender;
- (IBAction)buttonFour:(id)sender;
- (IBAction)buttonFive:(id)sender;

@end
