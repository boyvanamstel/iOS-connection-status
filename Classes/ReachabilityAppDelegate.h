//
//  ReachabilityAppDelegate.h
//  Reachability
//
//  Created by Boy van Amstel on 10-02-11.
//  Copyright 2011 boyvanamstel.nl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Reachability.h"

@class ReachabilityViewController;

@interface ReachabilityAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    ReachabilityViewController *viewController;
	
	Reachability* _hostReach;
    //Reachability* _internetReach;
    //Reachability* _wifiReach;
	
	BOOL _firstrun;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet ReachabilityViewController *viewController;

- (void)showAlert:(NSString *)title message:(NSString *)message;
- (void)updateWithReachability: (Reachability*) curReach;

@end

