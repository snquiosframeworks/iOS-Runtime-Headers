/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@class NSArray, NSMutableData, NSString;

@interface MFBufferedDataConsumer : NSObject <MFCollectingDataConsumer> {
    NSMutableData *_data;
    int _fd;
    NSString *_path;
    NSArray *_stack;
}

- (int)appendData:(id)arg1;
- (id)data;
- (void)dealloc;
- (void)done;
- (id)init;

@end