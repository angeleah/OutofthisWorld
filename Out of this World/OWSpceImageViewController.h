//
//  OWSpceImageViewController.h
//  Out of this World
//
//  Created by Angeleah Daidone on 3/26/14.
//  Copyright (c) 2014 Angeleah Daidone. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface OWSpceImageViewController : UIViewController <UIScrollViewDelegate>
@property (strong, nonatomic) IBOutlet UIScrollView *scrollView;
@property (strong, nonatomic) UIImageView *imageView;

@end
