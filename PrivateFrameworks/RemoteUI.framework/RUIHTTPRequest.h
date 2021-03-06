/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
 */

@class NSURLRequest, NSURLConnection, NSMutableData;

@interface RUIHTTPRequest : NSObject <NSURLConnectionDelegate> {
    NSURLRequest *_request;
    NSURLConnection *_connection;
    NSMutableData *_rawData;
    BOOL _invalidResponse;
    id _delegate;
}

+ (id)invalidResponseError;
+ (BOOL)anyRequestLoading;
+ (id)serviceUnavailableError;

- (void)parseData:(id)arg1;
- (void)cancel;
- (id)init;
- (void)dealloc;
- (void)_finishedLoading;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (BOOL)isLoading;
- (id)request;
- (void)loadRequest:(id)arg1;
- (void)setDelegate:(id)arg1;
- (BOOL)loggingEnabled;
- (void)_startedLoading;
- (void)willParseData;
- (void)loadStatusChanged;
- (BOOL)receivedValidResponse:(id)arg1;
- (void)didParseData;
- (void)failWithError:(id)arg1;

@end
