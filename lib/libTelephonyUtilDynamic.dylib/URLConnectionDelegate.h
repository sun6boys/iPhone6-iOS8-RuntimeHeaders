/* Generated by RuntimeBrowser.
   Image: /usr/lib/libTelephonyUtilDynamic.dylib
 */

@class NSMutableData, NSString;

@interface URLConnectionDelegate : NSObject <NSURLConnectionDelegate> {
    NSMutableData *fData;
    NSMutableData *fPostData;
    boolfRedirection;
    struct weak_ptr<ctu::Http::URLConnectionCallbackHandler> { 
        struct URLConnectionCallbackHandler {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } fHandler;
    struct shared_ptr<ctu::Http::HttpResponse> { 
        struct HttpResponse {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    } fResponse;
}

@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(copy,readonly) NSString * description;
@property(copy,readonly) NSString * debugDescription;


- (bool)getRedirection;
- (void)setOriginalPostBody:(id)arg1;
- (void)setRedirection:(bool)arg1;
- (id)initWithCallbackHandler:(struct shared_ptr<ctu::Http::URLConnectionCallbackHandler> { struct URLConnectionCallbackHandler {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (struct shared_ptr<ctu::Http::URLConnectionCallbackHandler> { struct URLConnectionCallbackHandler {} *x1; struct __shared_weak_count {} *x2; })getHandler;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void).cxx_destruct;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (id).cxx_construct;
- (void)dealloc;
- (void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4;
- (id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3;

@end
