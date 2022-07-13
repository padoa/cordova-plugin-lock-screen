#import <Cordova/CDVPlugin.h>

@interface Screen : CDVPlugin
{
    NSString* callbackId;
    NSInteger screenStatus;
}
- (void) init:(CDVInvokedUrlCommand*)command;
- (void)getScreenStatus:(CDVInvokedUrlCommand*)command;

@property(retain, nonatomic) NSString* callbackId;
@property(readwrite, atomic) NSInteger screenStatus;

@end
