#import <UIKit/UIKit.h>
@interface JSForiOSEyesKeychainItemWrapper : NSObject
{
    NSMutableDictionary *keychainItemData;		
    NSMutableDictionary *genericPasswordQuery;	
    NSString* _identifier;
}
@property (nonatomic, strong) NSMutableDictionary *keychainItemData;
@property (nonatomic, strong) NSMutableDictionary *genericPasswordQuery;
- (id)initWithIdentifier: (NSString *)identifier accessGroup:(NSString *) accessGroup;
- (void)setObject:(id)inObject forKey:(id)key;
- (id)objectForKey:(id)key;
- (void)resetKeychainItem;
@end