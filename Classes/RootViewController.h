//
//  RootViewController.h
//  SplitViewFirst
//
//  Created by Simon Allardice on 6/13/10.
//  Copyright __MyCompanyName__ 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface RootViewController : UITableViewController {
    DetailViewController *detailViewController;
	NSArray *attractions;
}

@property (nonatomic, retain) IBOutlet DetailViewController *detailViewController;

@end
