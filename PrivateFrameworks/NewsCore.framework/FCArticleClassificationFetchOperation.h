/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCArticleClassificationFetchOperation : FCMultiStepFetchOperation {
    NSString * _articleID;
    FCCloudContext * _context;
    FCHeldRecords * _heldArticleRecords;
    FCHeldRecords * _heldTopicRecords;
}

@property (nonatomic, retain) NSString *articleID;
@property (nonatomic, retain) FCCloudContext *context;
@property (nonatomic, retain) FCHeldRecords *heldArticleRecords;
@property (nonatomic, retain) FCHeldRecords *heldTopicRecords;

- (void).cxx_destruct;
- (id)articleID;
- (id)completeFetchOperation;
- (id)context;
- (id)fetchArticleWithCompletion:(id /* block */)arg1;
- (id)fetchTopicsWithCompletion:(id /* block */)arg1;
- (id)heldArticleRecords;
- (id)heldTopicRecords;
- (id)initWithContext:(id)arg1 articleID:(id)arg2;
- (void)setArticleID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setHeldArticleRecords:(id)arg1;
- (void)setHeldTopicRecords:(id)arg1;

@end
