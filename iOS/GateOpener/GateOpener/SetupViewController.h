//
//  SetupViewController.h
//  GateOpener
//
//

#import <UIKit/UIKit.h>
#import <MapKit/MapKit.h>

@interface SetupViewController : UIViewController

@property (nonatomic) IBOutlet UITextField * code;
@property (nonatomic) IBOutlet MKMapView * map;


-(IBAction)centerSet:(id)sender;
-(IBAction)codeSet:(id)sender;

@end
