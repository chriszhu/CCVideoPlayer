//
//  CCVideoPlayerAppDelegate.h
//  CCVideoPlayer
//
//  Created by Stepan Generalov on 12.04.11.
//  Copyright __MyCompanyName__ 2011. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface CCVideoPlayerAppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
}

@property (nonatomic, retain) UIWindow *window;

@end
