#import <UIKit/UIKit.h>

// We can't import the CustomCamera class because it would make a circular reference, so "fake" the existence of the class like this:
@class ownioscam;

@interface ownioscamController : UIViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
//{

//IBOutlet UIImageView *ImageView;
//}

// Action method
-(IBAction) takePhotoButtonPressed:(id)sender forEvent:(UIEvent*)event;

// Action method
-(IBAction) cancel:(id)sender forEvent:(UIEvent*)event;

@property (strong, nonatomic) IBOutlet UIImageView *ImageView;

// Declare some properties (to be explained soon)
@property (strong, nonatomic) ownioscam* plugin;
@property (strong, nonatomic) UIImagePickerController* picker;



@property (strong, nonatomic) IBOutlet UIToolbar *Toolbarevent;


@property (strong, nonatomic) IBOutlet UIBarButtonItem *flashproperty;
- (IBAction)flasheventfire:(id)sender;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *Autoproperty;
- (IBAction)Autoeventfire:(id)sender;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *Onproperty;
- (IBAction)OneventFire:(id)sender;
@property (strong, nonatomic) IBOutlet UIBarButtonItem *Offproperty;
- (IBAction)Offeventfire:(id)sender;

@end