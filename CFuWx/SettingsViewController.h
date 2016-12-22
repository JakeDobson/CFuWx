//
//  SettingsViewController.h
//  CFuWx
//
//  Created by Erica Winberry on 12/18/16.
//  Copyright © 2016 Erica Winberry. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LocationManager.h"

@interface SettingsViewController : UIViewController

@property(strong, nonatomic) UISearchBar *searchBar;

-(void)searchButtonClicked:(UISearchBar *)searchBar;

@end
