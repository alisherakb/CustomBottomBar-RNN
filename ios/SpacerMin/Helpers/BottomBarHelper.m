//
//  BottomBarHelper.m
//  SpacerMin
//
//  Created by Paul Semionov on 31/08/2019.
//  Copyright © 2019 duffpod. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "BottomBarHelper.h"

@implementation BottomBarHelper

RCT_EXPORT_MODULE();

static NSInteger _reactTag = -1;

- (dispatch_queue_t)methodQueue
{
  return dispatch_get_main_queue();
}

/*!
 @brief Sets reactTag for later usage.
 @discussion This method is intended for React Native part. It accepts a @c reactTagToFind for usage with other methods.
 To use it, call @c NativeModules.BottomBarHelper.setReactTagToFind(reactTag);
 @param  reactTagToFind The input value representing reactTag from JavaScript part.
 */
RCT_EXPORT_METHOD(setReactTagToFind:(NSInteger)reactTagToFind) {
  _reactTag = reactTagToFind;
}

/*!
 @brief Finds the right window to set the right priority.
 @discussion This method is indented for React Native part. It searches for the window, which contains BottomBar and sets the UIWindowLevel to keep it visible through out the app.
 To use it, first call @c NativeModules.BottomBarHelper.setReactTagToFind(reactTag), then call @c NativeModules.BottomBarHelper.setHighestWindowLevelForBottomBarWindow();
 */
RCT_EXPORT_METHOD(setHighestWindowLevelForBottomBarWindow)
{
  if (_reactTag == -1) {
    NSLog(@"No reactTag specified.");
    return;
  }
  
  NSArray<UIWindow *> *windows = [UIApplication sharedApplication].windows;
  
  for (UIWindow *window in windows) {
    UIView *_Nullable bottomBarView = [self findViewWithReactTag:_reactTag inView:window];
    if (bottomBarView != nil) {
      window.windowLevel = UIWindowLevelNormal + 2;
      break;
    }
  }
}

/*!
 @brief Finds the view with specified react tag number.
 @discussion This method accepts a @c reactTag and @c view and searches the view recursively for a subview with specified @c reactTag.
 To use it, call @c[self findViewWithReactTag:12 inView:view];
 @param  reactTag The input value representing reactTag from JavaScript part.
 @param  view The input value representing entry point of search.
 @return View with specified tag or @c nil.
 */
- (nullable UIView *)findViewWithReactTag:(NSInteger)reactTag inView:(UIView *)view {
  for (UIView *subview in [view subviews]) {
    id reactTagValue = [subview valueForKey:@"reactTag"];
    if (reactTagValue != nil && [reactTagValue integerValue] == reactTag) {
      return subview;
    } else {
      return [self findViewWithReactTag:reactTag inView:subview];
    }
  }
  
  return nil;
}

@end
