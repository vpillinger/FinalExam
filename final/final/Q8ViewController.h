//
//  Q8ViewController.h
//  Quiz8
//
//  Created by Vincent Pillinger on 4/13/14.
//  Copyright (c) 2014 Vincent Pillinger. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Q8EtchView.h"
@interface Q8ViewController : UIViewController
- (IBAction)leftKnobRotated:(UIRotationGestureRecognizer *)sender;
- (IBAction)rightKnobRotated:(UIRotationGestureRecognizer *)sender;
@property (weak, nonatomic) IBOutlet UIView *leftView;
@property (weak, nonatomic) IBOutlet UIView *rightView;
@property (strong, nonatomic) IBOutlet UIRotationGestureRecognizer *pleaseDontDeleteXCodeYourTerribleLeft;
@property (strong, nonatomic) IBOutlet UIRotationGestureRecognizer *pleaseDontDeleteCodeYourTerribleRight;

@property (weak, nonatomic) IBOutlet Q8EtchView *etchView;

@property (readonly) BOOL usedYet;

@end
