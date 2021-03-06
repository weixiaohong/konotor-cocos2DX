//
//  KonotorFeedbackScreenViewController.h
//  KonotorSampleApp
//
//  Created by Srikrishnan Ganesan on 10/07/13.
//  Copyright (c) 2013 Demach. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "KonotorFeedbackScreen.h"
#import "KonotorUI.h"
#import "KonotorConversationViewController.h"

#define KONOTOR_FEEDBACKSCREEN_MARGIN 0

#define KONOTOR_DONTSHOWPOWEREDBY 0

@class KonotorFeedbackScreen,KonotorTextInputOverlay,KonotorConversationViewController;

@interface KonotorFeedbackScreenViewController : UIViewController <UITextViewDelegate>

@property (strong, nonatomic) UIView* transparentView;
@property (strong, nonatomic) UIView* textInputBox;

@property (strong, nonatomic) KonotorConversationViewController* messagesView;

@property (weak, nonatomic) IBOutlet UITableView *messageTableView;

@property (weak, nonatomic) IBOutlet UIView *headerContainerView;

@property (weak, nonatomic) IBOutlet UITextView *headerView;
@property (weak, nonatomic) IBOutlet UIButton* closeButton;

@property (weak, nonatomic) IBOutlet UIView *footerView;
@property (weak, nonatomic) IBOutlet UIButton *voiceInput;
@property (weak, nonatomic) IBOutlet UIButton *input;
@property (weak, nonatomic) IBOutlet UIButton *picInput;
@property (weak, nonatomic) IBOutlet UILabel *poweredByLabel;

- (void) refreshView;

@end

enum KonotorToastStyle{
    KonotorToastStyleDefault=0,
    KonotorToastStyleBarOnWindow=1,
    KonotorToastStyleBarOnRootView=2
};

@interface KonotorUIParameters : NSObject

@property (nonatomic) BOOL voiceInputEnabled;
@property (nonatomic) BOOL imageInputEnabled;
@property (strong, nonatomic) UIColor* headerViewColor;
@property (strong, nonatomic) UIColor* backgroundViewColor;
@property (nonatomic) BOOL disableTransparentOverlay;
@property (nonatomic) enum KonotorToastStyle toastStyle;
@property (strong, nonatomic) UIImage* closeButtonImage;
@property (strong, nonatomic) UIImage* textInputButtonImage;
@property (nonatomic) BOOL autoShowTextInput;
@property (strong, nonatomic) NSString* titleText;
@property (strong, nonatomic) UIColor* titleTextColor;
@property (strong, nonatomic) UIColor* toastBGColor;
@property (strong, nonatomic) UIColor* toastTextColor;
@property (nonatomic) BOOL showInputOptions;
@property (nonatomic) BOOL messageSharingEnabled;

+ (KonotorUIParameters*) sharedInstance;
- (void) setToastStyle:(enum KonotorToastStyle) toastStyle backgroundColor:(UIColor*) bgColor textColor: (UIColor*) textColor;
//- (void) disableMessageSharing;
//- (void) enableMessageSharing;

@end
