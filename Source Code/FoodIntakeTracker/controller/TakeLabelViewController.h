// Copyright (c) 2013 TopCoder. All rights reserved.

// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//    http://www.apache.org/licenses/LICENSE-2.0

// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//
//  TakeLabelViewController.h
//  FoodIntakeTracker
//
//  Created by lofzcx 06/25/2013
//

#import <UIKit/UIKit.h>
#import "TakePhotoViewController.h"

/**
 * controller for scan Label view.
 *
 * Changes in 1.1
 * - Added business logic
 *
 * @author lofzcx, flying2hk, subchap
 * @version 1.1
 * @since 1.0
 */
@interface TakeLabelViewController : TakeBaseViewController
<UISearchBarDelegate, UINavigationControllerDelegate, UIImagePickerControllerDelegate, UIPopoverControllerDelegate>

/* the note label at bottom */
@property (weak, nonatomic) IBOutlet UILabel *lblNoteBottom;
/* the photo image */
@property (weak, nonatomic) IBOutlet UIImageView *imgPhoto;
/* the background image view */
@property (weak, nonatomic) IBOutlet UIImageView *imgBG;
/* the search bar */
@property (weak, nonatomic) IBOutlet UISearchBar *searchBar;
/* the take button  */
@property (weak, nonatomic) IBOutlet UIButton *takeButton;
/* Represents the popover controller. */
@property (strong, nonatomic) UIPopoverController *popover;

/**
 * show clear label and update scan line, bracket, note label at top.
 */
- (void)showClearLabel;

/**
 * action for cancel button in progress view.
 * @param sender the button.
 */
- (IBAction)cancelProcessing:(id)sender;
@end
