#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <semaphore.h>
#include <string.h>
#include <time.h>
#include <sys/time.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdarg.h>
#include <unistd.h>
#include <signal.h>
#include <limits.h>
#include <poll.h>
#include <sys/epoll.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <error.h>
#include <errno.h>
#include <sys/ioctl.h>
#include <net/if.h> 

#include "sirik_core.h"
#include "libAsn.h"
#include "S1AP_18.3.h"
//#include "lib_node.h"

#ifndef SIRIK_S1AP_H
#define SIRIK_S1AP_H


typedef struct __si_s1ap_node
{
	SI_Socket * siSocket;
	//SI_RAN_Client * RANClient;
	int NodeType;
	uint8_t * transportEng;
	
} SI_S1APNode;

typedef void (*fp_s1ap_on_message)( uint8_t procedureCode, uint8_t messageType, void * msg, SI_S1APNode * ngNode);
void __si_s1ap_set_message_handler( fp_s1ap_on_message handler);

void __si_s1ap_handle_message( SI_S1APNode * s1apNode, SI_SocketSCTPBuffer * sctpBuffer);

int __si_s1ap_sendmsg( uint8_t * buffer, uint32_t len, SI_S1APNode * ngNode);
void __si_s1ap_app_message_handler( uint8_t procedureCode, uint8_t messageType, void * msg, SI_S1APNode * ngNode);


int __si_s1ap_send_HandoverRequired( SI_S1AP_DT_PDU_HandoverRequired * objHandoverRequired, SI_S1APNode * s1apNode);
int __si_s1ap_send_HandoverCommand( SI_S1AP_DT_PDU_HandoverCommand * objHandoverCommand, SI_S1APNode * s1apNode);
int __si_s1ap_send_HandoverPreparationFailure( SI_S1AP_DT_PDU_HandoverPreparationFailure * objHandoverPreparationFailure, SI_S1APNode * s1apNode);
int __si_s1ap_send_HandoverRequest( SI_S1AP_DT_PDU_HandoverRequest * objHandoverRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_HandoverRequestAcknowledge( SI_S1AP_DT_PDU_HandoverRequestAcknowledge * objHandoverRequestAcknowledge, SI_S1APNode * s1apNode);
int __si_s1ap_send_HandoverFailure( SI_S1AP_DT_PDU_HandoverFailure * objHandoverFailure, SI_S1APNode * s1apNode);
int __si_s1ap_send_HandoverNotify( SI_S1AP_DT_PDU_HandoverNotify * objHandoverNotify, SI_S1APNode * s1apNode);
int __si_s1ap_send_PathSwitchRequest( SI_S1AP_DT_PDU_PathSwitchRequest * objPathSwitchRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_PathSwitchRequestAcknowledge( SI_S1AP_DT_PDU_PathSwitchRequestAcknowledge * objPathSwitchRequestAcknowledge, SI_S1APNode * s1apNode);
int __si_s1ap_send_PathSwitchRequestFailure( SI_S1AP_DT_PDU_PathSwitchRequestFailure * objPathSwitchRequestFailure, SI_S1APNode * s1apNode);
int __si_s1ap_send_E_RABSetupRequest( SI_S1AP_DT_PDU_E_RABSetupRequest * objE_RABSetupRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_E_RABSetupResponse( SI_S1AP_DT_PDU_E_RABSetupResponse * objE_RABSetupResponse, SI_S1APNode * s1apNode);
int __si_s1ap_send_E_RABModifyRequest( SI_S1AP_DT_PDU_E_RABModifyRequest * objE_RABModifyRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_E_RABModifyResponse( SI_S1AP_DT_PDU_E_RABModifyResponse * objE_RABModifyResponse, SI_S1APNode * s1apNode);
int __si_s1ap_send_E_RABReleaseCommand( SI_S1AP_DT_PDU_E_RABReleaseCommand * objE_RABReleaseCommand, SI_S1APNode * s1apNode);
int __si_s1ap_send_E_RABReleaseResponse( SI_S1AP_DT_PDU_E_RABReleaseResponse * objE_RABReleaseResponse, SI_S1APNode * s1apNode);
int __si_s1ap_send_E_RABReleaseIndication( SI_S1AP_DT_PDU_E_RABReleaseIndication * objE_RABReleaseIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_InitialContextSetupRequest( SI_S1AP_DT_PDU_InitialContextSetupRequest * objInitialContextSetupRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_InitialContextSetupResponse( SI_S1AP_DT_PDU_InitialContextSetupResponse * objInitialContextSetupResponse, SI_S1APNode * s1apNode);
int __si_s1ap_send_InitialContextSetupFailure( SI_S1AP_DT_PDU_InitialContextSetupFailure * objInitialContextSetupFailure, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEContextReleaseRequest( SI_S1AP_DT_PDU_UEContextReleaseRequest * objUEContextReleaseRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_Paging( SI_S1AP_DT_PDU_Paging * objPaging, SI_S1APNode * s1apNode);
int __si_s1ap_send_DownlinkNASTransport( SI_S1AP_DT_PDU_DownlinkNASTransport * objDownlinkNASTransport, SI_S1APNode * s1apNode);
int __si_s1ap_send_InitialUEMessage( SI_S1AP_DT_PDU_InitialUEMessage * objInitialUEMessage, SI_S1APNode * s1apNode);
int __si_s1ap_send_UplinkNASTransport( SI_S1AP_DT_PDU_UplinkNASTransport * objUplinkNASTransport, SI_S1APNode * s1apNode);
int __si_s1ap_send_NASNonDeliveryIndication( SI_S1AP_DT_PDU_NASNonDeliveryIndication * objNASNonDeliveryIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_HandoverCancel( SI_S1AP_DT_PDU_HandoverCancel * objHandoverCancel, SI_S1APNode * s1apNode);
int __si_s1ap_send_HandoverCancelAcknowledge( SI_S1AP_DT_PDU_HandoverCancelAcknowledge * objHandoverCancelAcknowledge, SI_S1APNode * s1apNode);
int __si_s1ap_send_Reset( SI_S1AP_DT_PDU_Reset * objReset, SI_S1APNode * s1apNode);
int __si_s1ap_send_ResetAcknowledge( SI_S1AP_DT_PDU_ResetAcknowledge * objResetAcknowledge, SI_S1APNode * s1apNode);
int __si_s1ap_send_ErrorIndication( SI_S1AP_DT_PDU_ErrorIndication * objErrorIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_S1SetupRequest( SI_S1AP_DT_PDU_S1SetupRequest * objS1SetupRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_S1SetupResponse( SI_S1AP_DT_PDU_S1SetupResponse * objS1SetupResponse, SI_S1APNode * s1apNode);
int __si_s1ap_send_S1SetupFailure( SI_S1AP_DT_PDU_S1SetupFailure * objS1SetupFailure, SI_S1APNode * s1apNode);
int __si_s1ap_send_ENBConfigurationUpdate( SI_S1AP_DT_PDU_ENBConfigurationUpdate * objENBConfigurationUpdate, SI_S1APNode * s1apNode);
int __si_s1ap_send_ENBConfigurationUpdateAcknowledge( SI_S1AP_DT_PDU_ENBConfigurationUpdateAcknowledge * objENBConfigurationUpdateAcknowledge, SI_S1APNode * s1apNode);
int __si_s1ap_send_ENBConfigurationUpdateFailure( SI_S1AP_DT_PDU_ENBConfigurationUpdateFailure * objENBConfigurationUpdateFailure, SI_S1APNode * s1apNode);
int __si_s1ap_send_MMEConfigurationUpdate( SI_S1AP_DT_PDU_MMEConfigurationUpdate * objMMEConfigurationUpdate, SI_S1APNode * s1apNode);
int __si_s1ap_send_MMEConfigurationUpdateAcknowledge( SI_S1AP_DT_PDU_MMEConfigurationUpdateAcknowledge * objMMEConfigurationUpdateAcknowledge, SI_S1APNode * s1apNode);
int __si_s1ap_send_MMEConfigurationUpdateFailure( SI_S1AP_DT_PDU_MMEConfigurationUpdateFailure * objMMEConfigurationUpdateFailure, SI_S1APNode * s1apNode);
int __si_s1ap_send_DownlinkS1cdma2000tunnelling( SI_S1AP_DT_PDU_DownlinkS1cdma2000tunnelling * objDownlinkS1cdma2000tunnelling, SI_S1APNode * s1apNode);
int __si_s1ap_send_UplinkS1cdma2000tunnelling( SI_S1AP_DT_PDU_UplinkS1cdma2000tunnelling * objUplinkS1cdma2000tunnelling, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEContextModificationRequest( SI_S1AP_DT_PDU_UEContextModificationRequest * objUEContextModificationRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEContextModificationResponse( SI_S1AP_DT_PDU_UEContextModificationResponse * objUEContextModificationResponse, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEContextModificationFailure( SI_S1AP_DT_PDU_UEContextModificationFailure * objUEContextModificationFailure, SI_S1APNode * s1apNode);
int __si_s1ap_send_UECapabilityInfoIndication( SI_S1AP_DT_PDU_UECapabilityInfoIndication * objUECapabilityInfoIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEContextReleaseCommand( SI_S1AP_DT_PDU_UEContextReleaseCommand * objUEContextReleaseCommand, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEContextReleaseComplete( SI_S1AP_DT_PDU_UEContextReleaseComplete * objUEContextReleaseComplete, SI_S1APNode * s1apNode);
int __si_s1ap_send_ENBStatusTransfer( SI_S1AP_DT_PDU_ENBStatusTransfer * objENBStatusTransfer, SI_S1APNode * s1apNode);
int __si_s1ap_send_MMEStatusTransfer( SI_S1AP_DT_PDU_MMEStatusTransfer * objMMEStatusTransfer, SI_S1APNode * s1apNode);
int __si_s1ap_send_DeactivateTrace( SI_S1AP_DT_PDU_DeactivateTrace * objDeactivateTrace, SI_S1APNode * s1apNode);
int __si_s1ap_send_TraceStart( SI_S1AP_DT_PDU_TraceStart * objTraceStart, SI_S1APNode * s1apNode);
int __si_s1ap_send_TraceFailureIndication( SI_S1AP_DT_PDU_TraceFailureIndication * objTraceFailureIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_CellTrafficTrace( SI_S1AP_DT_PDU_CellTrafficTrace * objCellTrafficTrace, SI_S1APNode * s1apNode);
int __si_s1ap_send_LocationReportingControl( SI_S1AP_DT_PDU_LocationReportingControl * objLocationReportingControl, SI_S1APNode * s1apNode);
int __si_s1ap_send_LocationReportingFailureIndication( SI_S1AP_DT_PDU_LocationReportingFailureIndication * objLocationReportingFailureIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_LocationReport( SI_S1AP_DT_PDU_LocationReport * objLocationReport, SI_S1APNode * s1apNode);
int __si_s1ap_send_OverloadStart( SI_S1AP_DT_PDU_OverloadStart * objOverloadStart, SI_S1APNode * s1apNode);
int __si_s1ap_send_OverloadStop( SI_S1AP_DT_PDU_OverloadStop * objOverloadStop, SI_S1APNode * s1apNode);
int __si_s1ap_send_WriteReplaceWarningRequest( SI_S1AP_DT_PDU_WriteReplaceWarningRequest * objWriteReplaceWarningRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_WriteReplaceWarningResponse( SI_S1AP_DT_PDU_WriteReplaceWarningResponse * objWriteReplaceWarningResponse, SI_S1APNode * s1apNode);
int __si_s1ap_send_ENBDirectInformationTransfer( SI_S1AP_DT_PDU_ENBDirectInformationTransfer * objENBDirectInformationTransfer, SI_S1APNode * s1apNode);
int __si_s1ap_send_MMEDirectInformationTransfer( SI_S1AP_DT_PDU_MMEDirectInformationTransfer * objMMEDirectInformationTransfer, SI_S1APNode * s1apNode);
int __si_s1ap_send_ENBConfigurationTransfer( SI_S1AP_DT_PDU_ENBConfigurationTransfer * objENBConfigurationTransfer, SI_S1APNode * s1apNode);
int __si_s1ap_send_MMEConfigurationTransfer( SI_S1AP_DT_PDU_MMEConfigurationTransfer * objMMEConfigurationTransfer, SI_S1APNode * s1apNode);
int __si_s1ap_send_PrivateMessage( SI_S1AP_DT_PDU_PrivateMessage * objPrivateMessage, SI_S1APNode * s1apNode);
int __si_s1ap_send_PWSRestartIndication( SI_S1AP_DT_PDU_PWSRestartIndication * objPWSRestartIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_KillRequest( SI_S1AP_DT_PDU_KillRequest * objKillRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_KillResponse( SI_S1AP_DT_PDU_KillResponse * objKillResponse, SI_S1APNode * s1apNode);
int __si_s1ap_send_DownlinkUEAssociatedLPPaTransport( SI_S1AP_DT_PDU_DownlinkUEAssociatedLPPaTransport * objDownlinkUEAssociatedLPPaTransport, SI_S1APNode * s1apNode);
int __si_s1ap_send_UplinkUEAssociatedLPPaTransport( SI_S1AP_DT_PDU_UplinkUEAssociatedLPPaTransport * objUplinkUEAssociatedLPPaTransport, SI_S1APNode * s1apNode);
int __si_s1ap_send_DownlinkNonUEAssociatedLPPaTransport( SI_S1AP_DT_PDU_DownlinkNonUEAssociatedLPPaTransport * objDownlinkNonUEAssociatedLPPaTransport, SI_S1APNode * s1apNode);
int __si_s1ap_send_UplinkNonUEAssociatedLPPaTransport( SI_S1AP_DT_PDU_UplinkNonUEAssociatedLPPaTransport * objUplinkNonUEAssociatedLPPaTransport, SI_S1APNode * s1apNode);
int __si_s1ap_send_UERadioCapabilityMatchRequest( SI_S1AP_DT_PDU_UERadioCapabilityMatchRequest * objUERadioCapabilityMatchRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_UERadioCapabilityMatchResponse( SI_S1AP_DT_PDU_UERadioCapabilityMatchResponse * objUERadioCapabilityMatchResponse, SI_S1APNode * s1apNode);
int __si_s1ap_send_E_RABModificationIndication( SI_S1AP_DT_PDU_E_RABModificationIndication * objE_RABModificationIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_E_RABModificationConfirm( SI_S1AP_DT_PDU_E_RABModificationConfirm * objE_RABModificationConfirm, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEContextModificationIndication( SI_S1AP_DT_PDU_UEContextModificationIndication * objUEContextModificationIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEContextModificationConfirm( SI_S1AP_DT_PDU_UEContextModificationConfirm * objUEContextModificationConfirm, SI_S1APNode * s1apNode);
int __si_s1ap_send_RerouteNASRequest( SI_S1AP_DT_PDU_RerouteNASRequest * objRerouteNASRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_PWSFailureIndication( SI_S1AP_DT_PDU_PWSFailureIndication * objPWSFailureIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEContextSuspendRequest( SI_S1AP_DT_PDU_UEContextSuspendRequest * objUEContextSuspendRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEContextSuspendResponse( SI_S1AP_DT_PDU_UEContextSuspendResponse * objUEContextSuspendResponse, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEContextResumeRequest( SI_S1AP_DT_PDU_UEContextResumeRequest * objUEContextResumeRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEContextResumeResponse( SI_S1AP_DT_PDU_UEContextResumeResponse * objUEContextResumeResponse, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEContextResumeFailure( SI_S1AP_DT_PDU_UEContextResumeFailure * objUEContextResumeFailure, SI_S1APNode * s1apNode);
int __si_s1ap_send_ConnectionEstablishmentIndication( SI_S1AP_DT_PDU_ConnectionEstablishmentIndication * objConnectionEstablishmentIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_NASDeliveryIndication( SI_S1AP_DT_PDU_NASDeliveryIndication * objNASDeliveryIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_RetrieveUEInformation( SI_S1AP_DT_PDU_RetrieveUEInformation * objRetrieveUEInformation, SI_S1APNode * s1apNode);
int __si_s1ap_send_UEInformationTransfer( SI_S1AP_DT_PDU_UEInformationTransfer * objUEInformationTransfer, SI_S1APNode * s1apNode);
int __si_s1ap_send_ENBCPRelocationIndication( SI_S1AP_DT_PDU_ENBCPRelocationIndication * objENBCPRelocationIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_MMECPRelocationIndication( SI_S1AP_DT_PDU_MMECPRelocationIndication * objMMECPRelocationIndication, SI_S1APNode * s1apNode);
int __si_s1ap_send_SecondaryRATDataUsageReport( SI_S1AP_DT_PDU_SecondaryRATDataUsageReport * objSecondaryRATDataUsageReport, SI_S1APNode * s1apNode);
int __si_s1ap_send_UERadioCapabilityIDMappingRequest( SI_S1AP_DT_PDU_UERadioCapabilityIDMappingRequest * objUERadioCapabilityIDMappingRequest, SI_S1APNode * s1apNode);
int __si_s1ap_send_UERadioCapabilityIDMappingResponse( SI_S1AP_DT_PDU_UERadioCapabilityIDMappingResponse * objUERadioCapabilityIDMappingResponse, SI_S1APNode * s1apNode);
int __si_s1ap_send_HandoverSuccess( SI_S1AP_DT_PDU_HandoverSuccess * objHandoverSuccess, SI_S1APNode * s1apNode);
int __si_s1ap_send_ENBEarlyStatusTransfer( SI_S1AP_DT_PDU_ENBEarlyStatusTransfer * objENBEarlyStatusTransfer, SI_S1APNode * s1apNode);
int __si_s1ap_send_MMEEarlyStatusTransfer( SI_S1AP_DT_PDU_MMEEarlyStatusTransfer * objMMEEarlyStatusTransfer, SI_S1APNode * s1apNode);

#endif


