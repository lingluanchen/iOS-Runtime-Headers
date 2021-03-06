/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NPEdgeSelection : EdgeSelection {
    NSString * _bestEdge;
    unsigned int  _bestEdgeProbedRTT;
    unsigned int  _bestEdgeRTT;
    NSString * _nextBestEdge;
    unsigned int  _nextBestEdgeRTT;
    NSDate * _probeDate;
    NPWaldo * _waldoInfo;
}

@property (retain) NSString *bestEdge;
@property unsigned int bestEdgeProbedRTT;
@property unsigned int bestEdgeRTT;
@property (retain) NSString *nextBestEdge;
@property unsigned int nextBestEdgeRTT;
@property (retain) NSDate *probeDate;
@property (nonatomic) NPWaldo *waldoInfo;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bestEdge;
- (unsigned int)bestEdgeProbedRTT;
- (unsigned int)bestEdgeRTT;
- (id)copyEdgeSelectionTelemetry;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)getBestEdgeFromEdgeSelection;
- (id)initWithCoder:(id)arg1;
- (id)initWithWaldo:(id)arg1 signature:(id)arg2 interfaceType:(id)arg3;
- (id)nextBestEdge;
- (unsigned int)nextBestEdgeRTT;
- (id)probeDate;
- (void)setBestEdge:(id)arg1;
- (void)setBestEdgeProbedRTT:(unsigned int)arg1;
- (void)setBestEdgeRTT:(unsigned int)arg1;
- (void)setNextBestEdge:(id)arg1;
- (void)setNextBestEdgeRTT:(unsigned int)arg1;
- (void)setProbeDate:(id)arg1;
- (void)setWaldoInfo:(id)arg1;
- (BOOL)shouldProbeForEdgeSelection:(id)arg1 edgeRank:(int*)arg2 edgeIndex:(int*)arg3 bestEdgeLabel:(id*)arg4;
- (void)trainEdgeSelection:(id)arg1 edgeRank:(unsigned int)arg2 rtt:(unsigned int)arg3;
- (void)updateEdgeSelection:(unsigned int)arg1;
- (id)waldoInfo;

@end
