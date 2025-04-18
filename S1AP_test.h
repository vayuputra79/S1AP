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
#include <resolv.h>


#ifndef SIRIK_S1AP_TEST_H
#define SIRIK_S1AP_TEST_H

#include "S1AP_18.3.h"
#include "S1AP_18.3_Stack.h"

void __si_s1ap__set_testdata__Additional_GUTI( SI_S1AP_DT_Additional_GUTI ** pAdditional_GUTI);
void __si_s1ap__set_testdata__AreaScopeOfMDT( SI_S1AP_DT_AreaScopeOfMDT ** pAreaScopeOfMDT);
void __si_s1ap__set_testdata__AreaScopeOfQMC( SI_S1AP_DT_AreaScopeOfQMC ** pAreaScopeOfQMC);
void __si_s1ap__set_testdata__AllocationAndRetentionPriority( SI_S1AP_DT_AllocationAndRetentionPriority ** pAllocationAndRetentionPriority);
void __si_s1ap__set_testdata__AssistanceDataForCECapableUEs( SI_S1AP_DT_AssistanceDataForCECapableUEs ** pAssistanceDataForCECapableUEs);
void __si_s1ap__set_testdata__AssistanceDataForPaging( SI_S1AP_DT_AssistanceDataForPaging ** pAssistanceDataForPaging);
void __si_s1ap__set_testdata__AssistanceDataForRecommendedCells( SI_S1AP_DT_AssistanceDataForRecommendedCells ** pAssistanceDataForRecommendedCells);
void __si_s1ap__set_testdata__Bearers_SubjectToStatusTransferList( SI_S1AP_DT_Bearers_SubjectToStatusTransferList ** pBearers_SubjectToStatusTransferList);
void __si_s1ap__set_testdata__Bearers_SubjectToStatusTransfer_Item( SI_S1AP_DT_Bearers_SubjectToStatusTransfer_Item ** pBearers_SubjectToStatusTransfer_Item);
void __si_s1ap__set_testdata__Bearers_SubjectToEarlyStatusTransferList( SI_S1AP_DT_Bearers_SubjectToEarlyStatusTransferList ** pBearers_SubjectToEarlyStatusTransferList);
void __si_s1ap__set_testdata__Bearers_SubjectToEarlyStatusTransfer_Item( SI_S1AP_DT_Bearers_SubjectToEarlyStatusTransfer_Item ** pBearers_SubjectToEarlyStatusTransfer_Item);
void __si_s1ap__set_testdata__Bearers_SubjectToDLDiscardingList( SI_S1AP_DT_Bearers_SubjectToDLDiscardingList ** pBearers_SubjectToDLDiscardingList);
void __si_s1ap__set_testdata__Bearers_SubjectToDLDiscarding_Item( SI_S1AP_DT_Bearers_SubjectToDLDiscarding_Item ** pBearers_SubjectToDLDiscarding_Item);
void __si_s1ap__set_testdata__BluetoothMeasurementConfiguration( SI_S1AP_DT_BluetoothMeasurementConfiguration ** pBluetoothMeasurementConfiguration);
void __si_s1ap__set_testdata__BluetoothMeasConfigNameList( SI_S1AP_DT_BluetoothMeasConfigNameList ** pBluetoothMeasConfigNameList);
void __si_s1ap__set_testdata__BPLMNs( SI_S1AP_DT_BPLMNs ** pBPLMNs);
void __si_s1ap__set_testdata__BroadcastCancelledAreaList( SI_S1AP_DT_BroadcastCancelledAreaList ** pBroadcastCancelledAreaList);
void __si_s1ap__set_testdata__BroadcastCompletedAreaList( SI_S1AP_DT_BroadcastCompletedAreaList ** pBroadcastCompletedAreaList);
void __si_s1ap__set_testdata__CancelledCellinEAI( SI_S1AP_DT_CancelledCellinEAI ** pCancelledCellinEAI);
void __si_s1ap__set_testdata__CancelledCellinEAI_Item( SI_S1AP_DT_CancelledCellinEAI_Item ** pCancelledCellinEAI_Item);
void __si_s1ap__set_testdata__CancelledCellinTAI( SI_S1AP_DT_CancelledCellinTAI ** pCancelledCellinTAI);
void __si_s1ap__set_testdata__CancelledCellinTAI_Item( SI_S1AP_DT_CancelledCellinTAI_Item ** pCancelledCellinTAI_Item);
void __si_s1ap__set_testdata__Cause( SI_S1AP_DT_Cause ** pCause);
void __si_s1ap__set_testdata__CellIdentifierAndCELevelForCECapableUEs( SI_S1AP_DT_CellIdentifierAndCELevelForCECapableUEs ** pCellIdentifierAndCELevelForCECapableUEs);
void __si_s1ap__set_testdata__CellID_Broadcast( SI_S1AP_DT_CellID_Broadcast ** pCellID_Broadcast);
void __si_s1ap__set_testdata__CellID_Broadcast_Item( SI_S1AP_DT_CellID_Broadcast_Item ** pCellID_Broadcast_Item);
void __si_s1ap__set_testdata__CellID_Cancelled( SI_S1AP_DT_CellID_Cancelled ** pCellID_Cancelled);
void __si_s1ap__set_testdata__CellID_Cancelled_Item( SI_S1AP_DT_CellID_Cancelled_Item ** pCellID_Cancelled_Item);
void __si_s1ap__set_testdata__CellBasedMDT( SI_S1AP_DT_CellBasedMDT ** pCellBasedMDT);
void __si_s1ap__set_testdata__CellIdListforMDT( SI_S1AP_DT_CellIdListforMDT ** pCellIdListforMDT);
void __si_s1ap__set_testdata__CellBasedQMC( SI_S1AP_DT_CellBasedQMC ** pCellBasedQMC);
void __si_s1ap__set_testdata__CellIdListforQMC( SI_S1AP_DT_CellIdListforQMC ** pCellIdListforQMC);
void __si_s1ap__set_testdata__Cdma2000OneXSRVCCInfo( SI_S1AP_DT_Cdma2000OneXSRVCCInfo ** pCdma2000OneXSRVCCInfo);
void __si_s1ap__set_testdata__CellType( SI_S1AP_DT_CellType ** pCellType);
void __si_s1ap__set_testdata__CGI( SI_S1AP_DT_CGI ** pCGI);
void __si_s1ap__set_testdata__CNTypeRestrictions( SI_S1AP_DT_CNTypeRestrictions ** pCNTypeRestrictions);
void __si_s1ap__set_testdata__CNTypeRestrictions_Item( SI_S1AP_DT_CNTypeRestrictions_Item ** pCNTypeRestrictions_Item);
void __si_s1ap__set_testdata__ConnectedengNBList( SI_S1AP_DT_ConnectedengNBList ** pConnectedengNBList);
void __si_s1ap__set_testdata__ConnectedengNBItem( SI_S1AP_DT_ConnectedengNBItem ** pConnectedengNBItem);
void __si_s1ap__set_testdata__ContextatSource( SI_S1AP_DT_ContextatSource ** pContextatSource);
void __si_s1ap__set_testdata__CSG_IdList( SI_S1AP_DT_CSG_IdList ** pCSG_IdList);
void __si_s1ap__set_testdata__CSG_IdList_Item( SI_S1AP_DT_CSG_IdList_Item ** pCSG_IdList_Item);
void __si_s1ap__set_testdata__COUNTvalue( SI_S1AP_DT_COUNTvalue ** pCOUNTvalue);
void __si_s1ap__set_testdata__COUNTValueExtended( SI_S1AP_DT_COUNTValueExtended ** pCOUNTValueExtended);
void __si_s1ap__set_testdata__COUNTvaluePDCP_SNlength18( SI_S1AP_DT_COUNTvaluePDCP_SNlength18 ** pCOUNTvaluePDCP_SNlength18);
void __si_s1ap__set_testdata__CriticalityDiagnostics( SI_S1AP_DT_CriticalityDiagnostics ** pCriticalityDiagnostics);
void __si_s1ap__set_testdata__CriticalityDiagnostics_IE_List( SI_S1AP_DT_CriticalityDiagnostics_IE_List ** pCriticalityDiagnostics_IE_List);
void __si_s1ap__set_testdata__CriticalityDiagnostics_IE_Item( SI_S1AP_DT_CriticalityDiagnostics_IE_Item ** pCriticalityDiagnostics_IE_Item);
void __si_s1ap__set_testdata__DAPSRequestInfo( SI_S1AP_DT_DAPSRequestInfo ** pDAPSRequestInfo);
void __si_s1ap__set_testdata__DAPSResponseInfoList( SI_S1AP_DT_DAPSResponseInfoList ** pDAPSResponseInfoList);
void __si_s1ap__set_testdata__DAPSResponseInfoItem( SI_S1AP_DT_DAPSResponseInfoItem ** pDAPSResponseInfoItem);
void __si_s1ap__set_testdata__DAPSResponseInfo( SI_S1AP_DT_DAPSResponseInfo ** pDAPSResponseInfo);
void __si_s1ap__set_testdata__ServedDCNs( SI_S1AP_DT_ServedDCNs ** pServedDCNs);
void __si_s1ap__set_testdata__ServedDCNsItem( SI_S1AP_DT_ServedDCNsItem ** pServedDCNsItem);
void __si_s1ap__set_testdata__DL_CP_SecurityInformation( SI_S1AP_DT_DL_CP_SecurityInformation ** pDL_CP_SecurityInformation);
void __si_s1ap__set_testdata__DLCOUNT_PDCP_SNlength( SI_S1AP_DT_DLCOUNT_PDCP_SNlength ** pDLCOUNT_PDCP_SNlength);
void __si_s1ap__set_testdata__DLDiscarding( SI_S1AP_DT_DLDiscarding ** pDLDiscarding);
void __si_s1ap__set_testdata__ECGIList( SI_S1AP_DT_ECGIList ** pECGIList);
void __si_s1ap__set_testdata__PWSfailedECGIList( SI_S1AP_DT_PWSfailedECGIList ** pPWSfailedECGIList);
void __si_s1ap__set_testdata__EmergencyAreaIDList( SI_S1AP_DT_EmergencyAreaIDList ** pEmergencyAreaIDList);
void __si_s1ap__set_testdata__EmergencyAreaID_Broadcast( SI_S1AP_DT_EmergencyAreaID_Broadcast ** pEmergencyAreaID_Broadcast);
void __si_s1ap__set_testdata__EmergencyAreaID_Broadcast_Item( SI_S1AP_DT_EmergencyAreaID_Broadcast_Item ** pEmergencyAreaID_Broadcast_Item);
void __si_s1ap__set_testdata__EmergencyAreaID_Cancelled( SI_S1AP_DT_EmergencyAreaID_Cancelled ** pEmergencyAreaID_Cancelled);
void __si_s1ap__set_testdata__EmergencyAreaID_Cancelled_Item( SI_S1AP_DT_EmergencyAreaID_Cancelled_Item ** pEmergencyAreaID_Cancelled_Item);
void __si_s1ap__set_testdata__CompletedCellinEAI( SI_S1AP_DT_CompletedCellinEAI ** pCompletedCellinEAI);
void __si_s1ap__set_testdata__CompletedCellinEAI_Item( SI_S1AP_DT_CompletedCellinEAI_Item ** pCompletedCellinEAI_Item);
void __si_s1ap__set_testdata__ECGI_List( SI_S1AP_DT_ECGI_List ** pECGI_List);
void __si_s1ap__set_testdata__EmergencyAreaIDListForRestart( SI_S1AP_DT_EmergencyAreaIDListForRestart ** pEmergencyAreaIDListForRestart);
void __si_s1ap__set_testdata__ENB_EarlyStatusTransfer_TransparentContainer( SI_S1AP_DT_ENB_EarlyStatusTransfer_TransparentContainer ** pENB_EarlyStatusTransfer_TransparentContainer);
void __si_s1ap__set_testdata__ENB_ID( SI_S1AP_DT_ENB_ID ** pENB_ID);
void __si_s1ap__set_testdata__GERAN_Cell_ID( SI_S1AP_DT_GERAN_Cell_ID ** pGERAN_Cell_ID);
void __si_s1ap__set_testdata__Global_ENB_ID( SI_S1AP_DT_Global_ENB_ID ** pGlobal_ENB_ID);
void __si_s1ap__set_testdata__Global_en_gNB_ID( SI_S1AP_DT_Global_en_gNB_ID ** pGlobal_en_gNB_ID);
void __si_s1ap__set_testdata__GUMMEIList( SI_S1AP_DT_GUMMEIList ** pGUMMEIList);
void __si_s1ap__set_testdata__ENB_StatusTransfer_TransparentContainer( SI_S1AP_DT_ENB_StatusTransfer_TransparentContainer ** pENB_StatusTransfer_TransparentContainer);
void __si_s1ap__set_testdata__ENBX2TLAs( SI_S1AP_DT_ENBX2TLAs ** pENBX2TLAs);
void __si_s1ap__set_testdata__EN_DCSONConfigurationTransfer( SI_S1AP_DT_EN_DCSONConfigurationTransfer ** pEN_DCSONConfigurationTransfer);
void __si_s1ap__set_testdata__EN_DCSONTransferType( SI_S1AP_DT_EN_DCSONTransferType ** pEN_DCSONTransferType);
void __si_s1ap__set_testdata__EN_DCTransferTypeRequest( SI_S1AP_DT_EN_DCTransferTypeRequest ** pEN_DCTransferTypeRequest);
void __si_s1ap__set_testdata__EN_DCTransferTypeReply( SI_S1AP_DT_EN_DCTransferTypeReply ** pEN_DCTransferTypeReply);
void __si_s1ap__set_testdata__EN_DCSONeNBIdentification( SI_S1AP_DT_EN_DCSONeNBIdentification ** pEN_DCSONeNBIdentification);
void __si_s1ap__set_testdata__EN_DCSONengNBIdentification( SI_S1AP_DT_EN_DCSONengNBIdentification ** pEN_DCSONengNBIdentification);
void __si_s1ap__set_testdata__EPLMNs( SI_S1AP_DT_EPLMNs ** pEPLMNs);
void __si_s1ap__set_testdata__E_RABInformationList( SI_S1AP_DT_E_RABInformationList ** pE_RABInformationList);
void __si_s1ap__set_testdata__E_RABInformationListItem( SI_S1AP_DT_E_RABInformationListItem ** pE_RABInformationListItem);
void __si_s1ap__set_testdata__E_RABList( SI_S1AP_DT_E_RABList ** pE_RABList);
void __si_s1ap__set_testdata__E_RABItem( SI_S1AP_DT_E_RABItem ** pE_RABItem);
void __si_s1ap__set_testdata__E_RABLevelQoSParameters( SI_S1AP_DT_E_RABLevelQoSParameters ** pE_RABLevelQoSParameters);
void __si_s1ap__set_testdata__E_RABSecurityResultList( SI_S1AP_DT_E_RABSecurityResultList ** pE_RABSecurityResultList);
void __si_s1ap__set_testdata__E_RABSecurityResultItem( SI_S1AP_DT_E_RABSecurityResultItem ** pE_RABSecurityResultItem);
void __si_s1ap__set_testdata__E_RABUsageReportList( SI_S1AP_DT_E_RABUsageReportList ** pE_RABUsageReportList);
void __si_s1ap__set_testdata__E_RABUsageReportItem( SI_S1AP_DT_E_RABUsageReportItem ** pE_RABUsageReportItem);
void __si_s1ap__set_testdata__EUTRAN_CGI( SI_S1AP_DT_EUTRAN_CGI ** pEUTRAN_CGI);
void __si_s1ap__set_testdata__EventL1LoggedMDTConfig( SI_S1AP_DT_EventL1LoggedMDTConfig ** pEventL1LoggedMDTConfig);
void __si_s1ap__set_testdata__EventTrigger( SI_S1AP_DT_EventTrigger ** pEventTrigger);
void __si_s1ap__set_testdata__ExpectedUEBehaviour( SI_S1AP_DT_ExpectedUEBehaviour ** pExpectedUEBehaviour);
void __si_s1ap__set_testdata__ExpectedUEActivityBehaviour( SI_S1AP_DT_ExpectedUEActivityBehaviour ** pExpectedUEActivityBehaviour);
void __si_s1ap__set_testdata__FiveGSTAI( SI_S1AP_DT_FiveGSTAI ** pFiveGSTAI);
void __si_s1ap__set_testdata__ForbiddenTAs( SI_S1AP_DT_ForbiddenTAs ** pForbiddenTAs);
void __si_s1ap__set_testdata__ForbiddenTAs_Item( SI_S1AP_DT_ForbiddenTAs_Item ** pForbiddenTAs_Item);
void __si_s1ap__set_testdata__ForbiddenTACs( SI_S1AP_DT_ForbiddenTACs ** pForbiddenTACs);
void __si_s1ap__set_testdata__ForbiddenLAs( SI_S1AP_DT_ForbiddenLAs ** pForbiddenLAs);
void __si_s1ap__set_testdata__ForbiddenLAs_Item( SI_S1AP_DT_ForbiddenLAs_Item ** pForbiddenLAs_Item);
void __si_s1ap__set_testdata__ForbiddenLACs( SI_S1AP_DT_ForbiddenLACs ** pForbiddenLACs);
void __si_s1ap__set_testdata__GBR_QosInformation( SI_S1AP_DT_GBR_QosInformation ** pGBR_QosInformation);
void __si_s1ap__set_testdata__GUMMEI( SI_S1AP_DT_GUMMEI ** pGUMMEI);
void __si_s1ap__set_testdata__HandoverRestrictionList( SI_S1AP_DT_HandoverRestrictionList ** pHandoverRestrictionList);
void __si_s1ap__set_testdata__ImmediateMDT( SI_S1AP_DT_ImmediateMDT ** pImmediateMDT);
void __si_s1ap__set_testdata__InformationOnRecommendedCellsAndENBsForPaging( SI_S1AP_DT_InformationOnRecommendedCellsAndENBsForPaging ** pInformationOnRecommendedCellsAndENBsForPaging);
void __si_s1ap__set_testdata__IntersystemMeasurementConfiguration( SI_S1AP_DT_IntersystemMeasurementConfiguration ** pIntersystemMeasurementConfiguration);
void __si_s1ap__set_testdata__InterSystemMeasurementParameters( SI_S1AP_DT_InterSystemMeasurementParameters ** pInterSystemMeasurementParameters);
void __si_s1ap__set_testdata__InterSystemMeasurementList( SI_S1AP_DT_InterSystemMeasurementList ** pInterSystemMeasurementList);
void __si_s1ap__set_testdata__InterSystemMeasurementItem( SI_S1AP_DT_InterSystemMeasurementItem ** pInterSystemMeasurementItem);
void __si_s1ap__set_testdata__LAI( SI_S1AP_DT_LAI ** pLAI);
void __si_s1ap__set_testdata__LastVisitedCell_Item( SI_S1AP_DT_LastVisitedCell_Item ** pLastVisitedCell_Item);
void __si_s1ap__set_testdata__LastVisitedEUTRANCellInformation( SI_S1AP_DT_LastVisitedEUTRANCellInformation ** pLastVisitedEUTRANCellInformation);
void __si_s1ap__set_testdata__LastVisitedPSCellList( SI_S1AP_DT_LastVisitedPSCellList ** pLastVisitedPSCellList);
void __si_s1ap__set_testdata__LastVisitedPSCellInformation( SI_S1AP_DT_LastVisitedPSCellInformation ** pLastVisitedPSCellInformation);
void __si_s1ap__set_testdata__LastVisitedGERANCellInformation( SI_S1AP_DT_LastVisitedGERANCellInformation ** pLastVisitedGERANCellInformation);
void __si_s1ap__set_testdata__ListeningSubframePattern( SI_S1AP_DT_ListeningSubframePattern ** pListeningSubframePattern);
void __si_s1ap__set_testdata__LoggedMDT( SI_S1AP_DT_LoggedMDT ** pLoggedMDT);
void __si_s1ap__set_testdata__LoggedMBSFNMDT( SI_S1AP_DT_LoggedMBSFNMDT ** pLoggedMBSFNMDT);
void __si_s1ap__set_testdata__LoggedMDTTrigger( SI_S1AP_DT_LoggedMDTTrigger ** pLoggedMDTTrigger);
void __si_s1ap__set_testdata__LTE_NTN_TAI_Information( SI_S1AP_DT_LTE_NTN_TAI_Information ** pLTE_NTN_TAI_Information);
void __si_s1ap__set_testdata__M3Configuration( SI_S1AP_DT_M3Configuration ** pM3Configuration);
void __si_s1ap__set_testdata__M4Configuration( SI_S1AP_DT_M4Configuration ** pM4Configuration);
void __si_s1ap__set_testdata__M5Configuration( SI_S1AP_DT_M5Configuration ** pM5Configuration);
void __si_s1ap__set_testdata__M6Configuration( SI_S1AP_DT_M6Configuration ** pM6Configuration);
void __si_s1ap__set_testdata__M7Configuration( SI_S1AP_DT_M7Configuration ** pM7Configuration);
void __si_s1ap__set_testdata__MDT_Configuration( SI_S1AP_DT_MDT_Configuration ** pMDT_Configuration);
void __si_s1ap__set_testdata__MBSFN_ResultToLog( SI_S1AP_DT_MBSFN_ResultToLog ** pMBSFN_ResultToLog);
void __si_s1ap__set_testdata__MBSFN_ResultToLogInfo( SI_S1AP_DT_MBSFN_ResultToLogInfo ** pMBSFN_ResultToLogInfo);
void __si_s1ap__set_testdata__MDTPLMNList( SI_S1AP_DT_MDTPLMNList ** pMDTPLMNList);
void __si_s1ap__set_testdata__MDTMode( SI_S1AP_DT_MDTMode ** pMDTMode);
void __si_s1ap__set_testdata__MeasurementThresholdA2( SI_S1AP_DT_MeasurementThresholdA2 ** pMeasurementThresholdA2);
void __si_s1ap__set_testdata__MeasurementThresholdL1LoggedMDT( SI_S1AP_DT_MeasurementThresholdL1LoggedMDT ** pMeasurementThresholdL1LoggedMDT);
void __si_s1ap__set_testdata__MMEPagingTarget( SI_S1AP_DT_MMEPagingTarget ** pMMEPagingTarget);
void __si_s1ap__set_testdata__MutingPatternInformation( SI_S1AP_DT_MutingPatternInformation ** pMutingPatternInformation);
void __si_s1ap__set_testdata__NB_IoT_Paging_eDRXInformation( SI_S1AP_DT_NB_IoT_Paging_eDRXInformation ** pNB_IoT_Paging_eDRXInformation);
void __si_s1ap__set_testdata__NR_CGI( SI_S1AP_DT_NR_CGI ** pNR_CGI);
void __si_s1ap__set_testdata__NRUESecurityCapabilities( SI_S1AP_DT_NRUESecurityCapabilities ** pNRUESecurityCapabilities);
void __si_s1ap__set_testdata__NRV2XServicesAuthorized( SI_S1AP_DT_NRV2XServicesAuthorized ** pNRV2XServicesAuthorized);
void __si_s1ap__set_testdata__NRUESidelinkAggregateMaximumBitrate( SI_S1AP_DT_NRUESidelinkAggregateMaximumBitrate ** pNRUESidelinkAggregateMaximumBitrate);
void __si_s1ap__set_testdata__OverloadResponse( SI_S1AP_DT_OverloadResponse ** pOverloadResponse);
void __si_s1ap__set_testdata__PagingAttemptInformation( SI_S1AP_DT_PagingAttemptInformation ** pPagingAttemptInformation);
void __si_s1ap__set_testdata__Paging_eDRXInformation( SI_S1AP_DT_Paging_eDRXInformation ** pPaging_eDRXInformation);
void __si_s1ap__set_testdata__PC5QoSParameters( SI_S1AP_DT_PC5QoSParameters ** pPC5QoSParameters);
void __si_s1ap__set_testdata__PC5QoSFlowList( SI_S1AP_DT_PC5QoSFlowList ** pPC5QoSFlowList);
void __si_s1ap__set_testdata__PC5QoSFlowItem( SI_S1AP_DT_PC5QoSFlowItem ** pPC5QoSFlowItem);
void __si_s1ap__set_testdata__PC5FlowBitRates( SI_S1AP_DT_PC5FlowBitRates ** pPC5FlowBitRates);
void __si_s1ap__set_testdata__M1PeriodicReporting( SI_S1AP_DT_M1PeriodicReporting ** pM1PeriodicReporting);
void __si_s1ap__set_testdata__PLMNAreaBasedQMC( SI_S1AP_DT_PLMNAreaBasedQMC ** pPLMNAreaBasedQMC);
void __si_s1ap__set_testdata__PLMNListforQMC( SI_S1AP_DT_PLMNListforQMC ** pPLMNListforQMC);
void __si_s1ap__set_testdata__ProSeAuthorized( SI_S1AP_DT_ProSeAuthorized ** pProSeAuthorized);
void __si_s1ap__set_testdata__PSCellInformation( SI_S1AP_DT_PSCellInformation ** pPSCellInformation);
void __si_s1ap__set_testdata__RecommendedCellsForPaging( SI_S1AP_DT_RecommendedCellsForPaging ** pRecommendedCellsForPaging);
void __si_s1ap__set_testdata__RecommendedCellList( SI_S1AP_DT_RecommendedCellList ** pRecommendedCellList);
void __si_s1ap__set_testdata__RecommendedCellItem( SI_S1AP_DT_RecommendedCellItem ** pRecommendedCellItem);
void __si_s1ap__set_testdata__RecommendedENBsForPaging( SI_S1AP_DT_RecommendedENBsForPaging ** pRecommendedENBsForPaging);
void __si_s1ap__set_testdata__RecommendedENBList( SI_S1AP_DT_RecommendedENBList ** pRecommendedENBList);
void __si_s1ap__set_testdata__RecommendedENBItem( SI_S1AP_DT_RecommendedENBItem ** pRecommendedENBItem);
void __si_s1ap__set_testdata__RAT_Restrictions( SI_S1AP_DT_RAT_Restrictions ** pRAT_Restrictions);
void __si_s1ap__set_testdata__RAT_RestrictionsItem( SI_S1AP_DT_RAT_RestrictionsItem ** pRAT_RestrictionsItem);
void __si_s1ap__set_testdata__RequestType( SI_S1AP_DT_RequestType ** pRequestType);
void __si_s1ap__set_testdata__RIMTransfer( SI_S1AP_DT_RIMTransfer ** pRIMTransfer);
void __si_s1ap__set_testdata__RIMRoutingAddress( SI_S1AP_DT_RIMRoutingAddress ** pRIMRoutingAddress);
void __si_s1ap__set_testdata__RLFReportInformation( SI_S1AP_DT_RLFReportInformation ** pRLFReportInformation);
void __si_s1ap__set_testdata__ECGIListForRestart( SI_S1AP_DT_ECGIListForRestart ** pECGIListForRestart);
void __si_s1ap__set_testdata__SecurityContext( SI_S1AP_DT_SecurityContext ** pSecurityContext);
void __si_s1ap__set_testdata__SecondaryRATDataUsageReportList( SI_S1AP_DT_SecondaryRATDataUsageReportList ** pSecondaryRATDataUsageReportList);
void __si_s1ap__set_testdata__SecondaryRATDataUsageReportItem( SI_S1AP_DT_SecondaryRATDataUsageReportItem ** pSecondaryRATDataUsageReportItem);
void __si_s1ap__set_testdata__SecurityIndication( SI_S1AP_DT_SecurityIndication ** pSecurityIndication);
void __si_s1ap__set_testdata__SecurityResult( SI_S1AP_DT_SecurityResult ** pSecurityResult);
void __si_s1ap__set_testdata__SensorMeasConfigNameItem( SI_S1AP_DT_SensorMeasConfigNameItem ** pSensorMeasConfigNameItem);
void __si_s1ap__set_testdata__SensorMeasConfigNameList( SI_S1AP_DT_SensorMeasConfigNameList ** pSensorMeasConfigNameList);
void __si_s1ap__set_testdata__SensorMeasurementConfiguration( SI_S1AP_DT_SensorMeasurementConfiguration ** pSensorMeasurementConfiguration);
void __si_s1ap__set_testdata__SensorNameConfig( SI_S1AP_DT_SensorNameConfig ** pSensorNameConfig);
void __si_s1ap__set_testdata__SONInformation( SI_S1AP_DT_SONInformation ** pSONInformation);
void __si_s1ap__set_testdata__SONInformationReply( SI_S1AP_DT_SONInformationReply ** pSONInformationReply);
void __si_s1ap__set_testdata__SONInformationReport( SI_S1AP_DT_SONInformationReport ** pSONInformationReport);
void __si_s1ap__set_testdata__SONConfigurationTransfer( SI_S1AP_DT_SONConfigurationTransfer ** pSONConfigurationTransfer);
void __si_s1ap__set_testdata__SynchronisationInformation( SI_S1AP_DT_SynchronisationInformation ** pSynchronisationInformation);
void __si_s1ap__set_testdata__SourceeNB_ID( SI_S1AP_DT_SourceeNB_ID ** pSourceeNB_ID);
void __si_s1ap__set_testdata__SourceNodeID( SI_S1AP_DT_SourceNodeID ** pSourceNodeID);
void __si_s1ap__set_testdata__SourceeNB_ToTargeteNB_TransparentContainer( SI_S1AP_DT_SourceeNB_ToTargeteNB_TransparentContainer ** pSourceeNB_ToTargeteNB_TransparentContainer);
void __si_s1ap__set_testdata__SourceNgRanNode_ID( SI_S1AP_DT_SourceNgRanNode_ID ** pSourceNgRanNode_ID);
void __si_s1ap__set_testdata__ServedGUMMEIs( SI_S1AP_DT_ServedGUMMEIs ** pServedGUMMEIs);
void __si_s1ap__set_testdata__ServedGUMMEIsItem( SI_S1AP_DT_ServedGUMMEIsItem ** pServedGUMMEIsItem);
void __si_s1ap__set_testdata__ServedGroupIDs( SI_S1AP_DT_ServedGroupIDs ** pServedGroupIDs);
void __si_s1ap__set_testdata__ServedMMECs( SI_S1AP_DT_ServedMMECs ** pServedMMECs);
void __si_s1ap__set_testdata__ServedPLMNs( SI_S1AP_DT_ServedPLMNs ** pServedPLMNs);
void __si_s1ap__set_testdata__Subscription_Based_UE_DifferentiationInfo( SI_S1AP_DT_Subscription_Based_UE_DifferentiationInfo ** pSubscription_Based_UE_DifferentiationInfo);
void __si_s1ap__set_testdata__ScheduledCommunicationTime( SI_S1AP_DT_ScheduledCommunicationTime ** pScheduledCommunicationTime);
void __si_s1ap__set_testdata__SupportedTAs( SI_S1AP_DT_SupportedTAs ** pSupportedTAs);
void __si_s1ap__set_testdata__SupportedTAs_Item( SI_S1AP_DT_SupportedTAs_Item ** pSupportedTAs_Item);
void __si_s1ap__set_testdata__TimeSynchronisationInfo( SI_S1AP_DT_TimeSynchronisationInfo ** pTimeSynchronisationInfo);
void __si_s1ap__set_testdata__S_TMSI( SI_S1AP_DT_S_TMSI ** pS_TMSI);
void __si_s1ap__set_testdata__TACList_In_LTE_NTN( SI_S1AP_DT_TACList_In_LTE_NTN ** pTACList_In_LTE_NTN);
void __si_s1ap__set_testdata__TAIBasedMDT( SI_S1AP_DT_TAIBasedMDT ** pTAIBasedMDT);
void __si_s1ap__set_testdata__TAIListforMDT( SI_S1AP_DT_TAIListforMDT ** pTAIListforMDT);
void __si_s1ap__set_testdata__TAIListforWarning( SI_S1AP_DT_TAIListforWarning ** pTAIListforWarning);
void __si_s1ap__set_testdata__TAI( SI_S1AP_DT_TAI ** pTAI);
void __si_s1ap__set_testdata__TAI_Broadcast( SI_S1AP_DT_TAI_Broadcast ** pTAI_Broadcast);
void __si_s1ap__set_testdata__TAI_Broadcast_Item( SI_S1AP_DT_TAI_Broadcast_Item ** pTAI_Broadcast_Item);
void __si_s1ap__set_testdata__TAI_Cancelled( SI_S1AP_DT_TAI_Cancelled ** pTAI_Cancelled);
void __si_s1ap__set_testdata__TAI_Cancelled_Item( SI_S1AP_DT_TAI_Cancelled_Item ** pTAI_Cancelled_Item);
void __si_s1ap__set_testdata__TABasedMDT( SI_S1AP_DT_TABasedMDT ** pTABasedMDT);
void __si_s1ap__set_testdata__TAListforMDT( SI_S1AP_DT_TAListforMDT ** pTAListforMDT);
void __si_s1ap__set_testdata__TABasedQMC( SI_S1AP_DT_TABasedQMC ** pTABasedQMC);
void __si_s1ap__set_testdata__TAListforQMC( SI_S1AP_DT_TAListforQMC ** pTAListforQMC);
void __si_s1ap__set_testdata__TAIBasedQMC( SI_S1AP_DT_TAIBasedQMC ** pTAIBasedQMC);
void __si_s1ap__set_testdata__TAIListforQMC( SI_S1AP_DT_TAIListforQMC ** pTAIListforQMC);
void __si_s1ap__set_testdata__CompletedCellinTAI( SI_S1AP_DT_CompletedCellinTAI ** pCompletedCellinTAI);
void __si_s1ap__set_testdata__CompletedCellinTAI_Item( SI_S1AP_DT_CompletedCellinTAI_Item ** pCompletedCellinTAI_Item);
void __si_s1ap__set_testdata__TargetID( SI_S1AP_DT_TargetID ** pTargetID);
void __si_s1ap__set_testdata__TargeteNB_ID( SI_S1AP_DT_TargeteNB_ID ** pTargeteNB_ID);
void __si_s1ap__set_testdata__TargetRNC_ID( SI_S1AP_DT_TargetRNC_ID ** pTargetRNC_ID);
void __si_s1ap__set_testdata__TargetNgRanNode_ID( SI_S1AP_DT_TargetNgRanNode_ID ** pTargetNgRanNode_ID);
void __si_s1ap__set_testdata__Global_RAN_NODE_ID( SI_S1AP_DT_Global_RAN_NODE_ID ** pGlobal_RAN_NODE_ID);
void __si_s1ap__set_testdata__GNB( SI_S1AP_DT_GNB ** pGNB);
void __si_s1ap__set_testdata__Global_GNB_ID( SI_S1AP_DT_Global_GNB_ID ** pGlobal_GNB_ID);
void __si_s1ap__set_testdata__GNB_Identity( SI_S1AP_DT_GNB_Identity ** pGNB_Identity);
void __si_s1ap__set_testdata__NG_eNB( SI_S1AP_DT_NG_eNB ** pNG_eNB);
void __si_s1ap__set_testdata__TargeteNB_ToSourceeNB_TransparentContainer( SI_S1AP_DT_TargeteNB_ToSourceeNB_TransparentContainer ** pTargeteNB_ToSourceeNB_TransparentContainer);
void __si_s1ap__set_testdata__M1ThresholdEventA2( SI_S1AP_DT_M1ThresholdEventA2 ** pM1ThresholdEventA2);
void __si_s1ap__set_testdata__TimeBasedHandoverInformation( SI_S1AP_DT_TimeBasedHandoverInformation ** pTimeBasedHandoverInformation);
void __si_s1ap__set_testdata__TransportInformation( SI_S1AP_DT_TransportInformation ** pTransportInformation);
void __si_s1ap__set_testdata__TraceActivation( SI_S1AP_DT_TraceActivation ** pTraceActivation);
void __si_s1ap__set_testdata__TunnelInformation( SI_S1AP_DT_TunnelInformation ** pTunnelInformation);
void __si_s1ap__set_testdata__TAIListForRestart( SI_S1AP_DT_TAIListForRestart ** pTAIListForRestart);
void __si_s1ap__set_testdata__UEAggregateMaximumBitrate( SI_S1AP_DT_UEAggregateMaximumBitrate ** pUEAggregateMaximumBitrate);
void __si_s1ap__set_testdata__UEAppLayerMeasConfig( SI_S1AP_DT_UEAppLayerMeasConfig ** pUEAppLayerMeasConfig);
void __si_s1ap__set_testdata__UE_S1AP_IDs( SI_S1AP_DT_UE_S1AP_IDs ** pUE_S1AP_IDs);
void __si_s1ap__set_testdata__UE_S1AP_ID_pair( SI_S1AP_DT_UE_S1AP_ID_pair ** pUE_S1AP_ID_pair);
void __si_s1ap__set_testdata__UE_associatedLogicalS1_ConnectionItem( SI_S1AP_DT_UE_associatedLogicalS1_ConnectionItem ** pUE_associatedLogicalS1_ConnectionItem);
void __si_s1ap__set_testdata__UE_HistoryInformation( SI_S1AP_DT_UE_HistoryInformation ** pUE_HistoryInformation);
void __si_s1ap__set_testdata__UEPagingID( SI_S1AP_DT_UEPagingID ** pUEPagingID);
void __si_s1ap__set_testdata__UESecurityCapabilities( SI_S1AP_DT_UESecurityCapabilities ** pUESecurityCapabilities);
void __si_s1ap__set_testdata__UESidelinkAggregateMaximumBitrate( SI_S1AP_DT_UESidelinkAggregateMaximumBitrate ** pUESidelinkAggregateMaximumBitrate);
void __si_s1ap__set_testdata__UL_CP_SecurityInformation( SI_S1AP_DT_UL_CP_SecurityInformation ** pUL_CP_SecurityInformation);
void __si_s1ap__set_testdata__UserLocationInformation( SI_S1AP_DT_UserLocationInformation ** pUserLocationInformation);
void __si_s1ap__set_testdata__V2XServicesAuthorized( SI_S1AP_DT_V2XServicesAuthorized ** pV2XServicesAuthorized);
void __si_s1ap__set_testdata__WarningAreaList( SI_S1AP_DT_WarningAreaList ** pWarningAreaList);
void __si_s1ap__set_testdata__WLANMeasurementConfiguration( SI_S1AP_DT_WLANMeasurementConfiguration ** pWLANMeasurementConfiguration);
void __si_s1ap__set_testdata__WLANMeasConfigNameList( SI_S1AP_DT_WLANMeasConfigNameList ** pWLANMeasConfigNameList);
void __si_s1ap__set_testdata__WUS_Assistance_Information( SI_S1AP_DT_WUS_Assistance_Information ** pWUS_Assistance_Information);
void __si_s1ap__set_testdata__X2TNLConfigurationInfo( SI_S1AP_DT_X2TNLConfigurationInfo ** pX2TNLConfigurationInfo);
void __si_s1ap__set_testdata__ENBX2ExtTLAs( SI_S1AP_DT_ENBX2ExtTLAs ** pENBX2ExtTLAs);
void __si_s1ap__set_testdata__ENBX2ExtTLA( SI_S1AP_DT_ENBX2ExtTLA ** pENBX2ExtTLA);
void __si_s1ap__set_testdata__ENBX2GTPTLAs( SI_S1AP_DT_ENBX2GTPTLAs ** pENBX2GTPTLAs);
void __si_s1ap__set_testdata__ENBIndirectX2TransportLayerAddresses( SI_S1AP_DT_ENBIndirectX2TransportLayerAddresses ** pENBIndirectX2TransportLayerAddresses);
void __si_s1ap__set_testdata__ResetType( SI_S1AP_DT_ResetType ** pResetType);
void __si_s1ap__set_testdata__Inter_SystemInformationTransferType( SI_S1AP_DT_Inter_SystemInformationTransferType ** pInter_SystemInformationTransferType);
void __si_s1ap__set_testdata__E_RABDataForwardingItem( SI_S1AP_DT_E_RABDataForwardingItem ** pE_RABDataForwardingItem);
void __si_s1ap__set_testdata__E_RABToBeSetupItemHOReq( SI_S1AP_DT_E_RABToBeSetupItemHOReq ** pE_RABToBeSetupItemHOReq);
void __si_s1ap__set_testdata__E_RABAdmittedItem( SI_S1AP_DT_E_RABAdmittedItem ** pE_RABAdmittedItem);
void __si_s1ap__set_testdata__E_RABFailedToSetupItemHOReqAck( SI_S1AP_DT_E_RABFailedToSetupItemHOReqAck ** pE_RABFailedToSetupItemHOReqAck);
void __si_s1ap__set_testdata__E_RABToBeSwitchedDLItem( SI_S1AP_DT_E_RABToBeSwitchedDLItem ** pE_RABToBeSwitchedDLItem);
void __si_s1ap__set_testdata__E_RABToBeSwitchedULItem( SI_S1AP_DT_E_RABToBeSwitchedULItem ** pE_RABToBeSwitchedULItem);
void __si_s1ap__set_testdata__E_RABToBeUpdatedItem( SI_S1AP_DT_E_RABToBeUpdatedItem ** pE_RABToBeUpdatedItem);
void __si_s1ap__set_testdata__E_RABToBeSetupListBearerSUReq( SI_S1AP_DT_E_RABToBeSetupListBearerSUReq ** pE_RABToBeSetupListBearerSUReq);
void __si_s1ap__set_testdata__E_RABToBeSetupItemBearerSUReq( SI_S1AP_DT_E_RABToBeSetupItemBearerSUReq ** pE_RABToBeSetupItemBearerSUReq);
void __si_s1ap__set_testdata__E_RABSetupListBearerSURes( SI_S1AP_DT_E_RABSetupListBearerSURes ** pE_RABSetupListBearerSURes);
void __si_s1ap__set_testdata__E_RABSetupItemBearerSURes( SI_S1AP_DT_E_RABSetupItemBearerSURes ** pE_RABSetupItemBearerSURes);
void __si_s1ap__set_testdata__E_RABToBeModifiedListBearerModReq( SI_S1AP_DT_E_RABToBeModifiedListBearerModReq ** pE_RABToBeModifiedListBearerModReq);
void __si_s1ap__set_testdata__E_RABToBeModifiedItemBearerModReq( SI_S1AP_DT_E_RABToBeModifiedItemBearerModReq ** pE_RABToBeModifiedItemBearerModReq);
void __si_s1ap__set_testdata__E_RABModifyListBearerModRes( SI_S1AP_DT_E_RABModifyListBearerModRes ** pE_RABModifyListBearerModRes);
void __si_s1ap__set_testdata__E_RABModifyItemBearerModRes( SI_S1AP_DT_E_RABModifyItemBearerModRes ** pE_RABModifyItemBearerModRes);
void __si_s1ap__set_testdata__E_RABReleaseListBearerRelComp( SI_S1AP_DT_E_RABReleaseListBearerRelComp ** pE_RABReleaseListBearerRelComp);
void __si_s1ap__set_testdata__E_RABReleaseItemBearerRelComp( SI_S1AP_DT_E_RABReleaseItemBearerRelComp ** pE_RABReleaseItemBearerRelComp);
void __si_s1ap__set_testdata__E_RABToBeSetupListCtxtSUReq( SI_S1AP_DT_E_RABToBeSetupListCtxtSUReq ** pE_RABToBeSetupListCtxtSUReq);
void __si_s1ap__set_testdata__E_RABToBeSetupItemCtxtSUReq( SI_S1AP_DT_E_RABToBeSetupItemCtxtSUReq ** pE_RABToBeSetupItemCtxtSUReq);
void __si_s1ap__set_testdata__E_RABSetupListCtxtSURes( SI_S1AP_DT_E_RABSetupListCtxtSURes ** pE_RABSetupListCtxtSURes);
void __si_s1ap__set_testdata__E_RABSetupItemCtxtSURes( SI_S1AP_DT_E_RABSetupItemCtxtSURes ** pE_RABSetupItemCtxtSURes);
void __si_s1ap__set_testdata__TAIList( SI_S1AP_DT_TAIList ** pTAIList);
void __si_s1ap__set_testdata__TAIItem( SI_S1AP_DT_TAIItem ** pTAIItem);
void __si_s1ap__set_testdata__UE_associatedLogicalS1_ConnectionListRes( SI_S1AP_DT_UE_associatedLogicalS1_ConnectionListRes ** pUE_associatedLogicalS1_ConnectionListRes);
void __si_s1ap__set_testdata__UE_associatedLogicalS1_ConnectionListResAck( SI_S1AP_DT_UE_associatedLogicalS1_ConnectionListResAck ** pUE_associatedLogicalS1_ConnectionListResAck);
void __si_s1ap__set_testdata__E_RABToBeModifiedItemBearerModInd( SI_S1AP_DT_E_RABToBeModifiedItemBearerModInd ** pE_RABToBeModifiedItemBearerModInd);
void __si_s1ap__set_testdata__E_RABNotToBeModifiedItemBearerModInd( SI_S1AP_DT_E_RABNotToBeModifiedItemBearerModInd ** pE_RABNotToBeModifiedItemBearerModInd);
void __si_s1ap__set_testdata__CSGMembershipInfo( SI_S1AP_DT_CSGMembershipInfo ** pCSGMembershipInfo);
void __si_s1ap__set_testdata__E_RABModifyListBearerModConf( SI_S1AP_DT_E_RABModifyListBearerModConf ** pE_RABModifyListBearerModConf);
void __si_s1ap__set_testdata__E_RABModifyItemBearerModConf( SI_S1AP_DT_E_RABModifyItemBearerModConf ** pE_RABModifyItemBearerModConf);
void __si_s1ap__set_testdata__E_RABFailedToResumeItemResumeReq( SI_S1AP_DT_E_RABFailedToResumeItemResumeReq ** pE_RABFailedToResumeItemResumeReq);
void __si_s1ap__set_testdata__E_RABFailedToResumeItemResumeRes( SI_S1AP_DT_E_RABFailedToResumeItemResumeRes ** pE_RABFailedToResumeItemResumeRes);


void __si_s1ap__set_testdata__PDU_Additional_GUTI_ExtIEs( SI_S1AP_DT_PDU_Additional_GUTI_ExtIEs ** pAdditional_GUTI_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_AllocationAndRetentionPriority_ExtIEs( SI_S1AP_DT_PDU_AllocationAndRetentionPriority_ExtIEs ** pAllocationAndRetentionPriority_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_InformationForCECapableUEs_ExtIEs( SI_S1AP_DT_PDU_InformationForCECapableUEs_ExtIEs ** pInformationForCECapableUEs_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_AssistanceDataForPaging_ExtIEs( SI_S1AP_DT_PDU_AssistanceDataForPaging_ExtIEs ** pAssistanceDataForPaging_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_AssistanceDataForRecommendedCells_ExtIEs( SI_S1AP_DT_PDU_AssistanceDataForRecommendedCells_ExtIEs ** pAssistanceDataForRecommendedCells_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_Bearers_SubjectToStatusTransfer_ItemIEs( SI_S1AP_DT_PDU_Bearers_SubjectToStatusTransfer_ItemIEs ** pBearers_SubjectToStatusTransfer_ItemIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_Bearers_SubjectToStatusTransfer_ItemExtIEs( SI_S1AP_DT_PDU_Bearers_SubjectToStatusTransfer_ItemExtIEs ** pBearers_SubjectToStatusTransfer_ItemExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_Bearers_SubjectToEarlyStatusTransfer_ItemIEs( SI_S1AP_DT_PDU_Bearers_SubjectToEarlyStatusTransfer_ItemIEs ** pBearers_SubjectToEarlyStatusTransfer_ItemIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_Bearers_SubjectToEarlyStatusTransfer_ItemExtIEs( SI_S1AP_DT_PDU_Bearers_SubjectToEarlyStatusTransfer_ItemExtIEs ** pBearers_SubjectToEarlyStatusTransfer_ItemExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_Bearers_SubjectToDLDiscarding_ItemIEs( SI_S1AP_DT_PDU_Bearers_SubjectToDLDiscarding_ItemIEs ** pBearers_SubjectToDLDiscarding_ItemIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_Bearers_SubjectToDLDiscarding_ItemExtIEs( SI_S1AP_DT_PDU_Bearers_SubjectToDLDiscarding_ItemExtIEs ** pBearers_SubjectToDLDiscarding_ItemExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_BluetoothMeasurementConfiguration_ExtIEs( SI_S1AP_DT_PDU_BluetoothMeasurementConfiguration_ExtIEs ** pBluetoothMeasurementConfiguration_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CancelledCellinEAI_Item_ExtIEs( SI_S1AP_DT_PDU_CancelledCellinEAI_Item_ExtIEs ** pCancelledCellinEAI_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CancelledCellinTAI_Item_ExtIEs( SI_S1AP_DT_PDU_CancelledCellinTAI_Item_ExtIEs ** pCancelledCellinTAI_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CellIdentifierAndCELevelForCECapableUEs_ExtIEs( SI_S1AP_DT_PDU_CellIdentifierAndCELevelForCECapableUEs_ExtIEs ** pCellIdentifierAndCELevelForCECapableUEs_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CellID_Broadcast_Item_ExtIEs( SI_S1AP_DT_PDU_CellID_Broadcast_Item_ExtIEs ** pCellID_Broadcast_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CellID_Cancelled_Item_ExtIEs( SI_S1AP_DT_PDU_CellID_Cancelled_Item_ExtIEs ** pCellID_Cancelled_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CellBasedMDT_ExtIEs( SI_S1AP_DT_PDU_CellBasedMDT_ExtIEs ** pCellBasedMDT_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CellBasedQMC_ExtIEs( SI_S1AP_DT_PDU_CellBasedQMC_ExtIEs ** pCellBasedQMC_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_Cdma2000OneXSRVCCInfo_ExtIEs( SI_S1AP_DT_PDU_Cdma2000OneXSRVCCInfo_ExtIEs ** pCdma2000OneXSRVCCInfo_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CellType_ExtIEs( SI_S1AP_DT_PDU_CellType_ExtIEs ** pCellType_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CGI_ExtIEs( SI_S1AP_DT_PDU_CGI_ExtIEs ** pCGI_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CNTypeRestrictions_Item_ExtIEs( SI_S1AP_DT_PDU_CNTypeRestrictions_Item_ExtIEs ** pCNTypeRestrictions_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ConnectedengNBItem_ExtIEs( SI_S1AP_DT_PDU_ConnectedengNBItem_ExtIEs ** pConnectedengNBItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ContextatSource_ExtIEs( SI_S1AP_DT_PDU_ContextatSource_ExtIEs ** pContextatSource_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CSG_IdList_Item_ExtIEs( SI_S1AP_DT_PDU_CSG_IdList_Item_ExtIEs ** pCSG_IdList_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_COUNTvalue_ExtIEs( SI_S1AP_DT_PDU_COUNTvalue_ExtIEs ** pCOUNTvalue_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_COUNTValueExtended_ExtIEs( SI_S1AP_DT_PDU_COUNTValueExtended_ExtIEs ** pCOUNTValueExtended_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_COUNTvaluePDCP_SNlength18_ExtIEs( SI_S1AP_DT_PDU_COUNTvaluePDCP_SNlength18_ExtIEs ** pCOUNTvaluePDCP_SNlength18_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CriticalityDiagnostics_ExtIEs( SI_S1AP_DT_PDU_CriticalityDiagnostics_ExtIEs ** pCriticalityDiagnostics_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CriticalityDiagnostics_IE_Item_ExtIEs( SI_S1AP_DT_PDU_CriticalityDiagnostics_IE_Item_ExtIEs ** pCriticalityDiagnostics_IE_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_DAPSRequestInfo_ExtIEs( SI_S1AP_DT_PDU_DAPSRequestInfo_ExtIEs ** pDAPSRequestInfo_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_DAPSResponseInfoItem_ExtIEs( SI_S1AP_DT_PDU_DAPSResponseInfoItem_ExtIEs ** pDAPSResponseInfoItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_DAPSResponseInfo_ExtIEs( SI_S1AP_DT_PDU_DAPSResponseInfo_ExtIEs ** pDAPSResponseInfo_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ServedDCNsItem_ExtIEs( SI_S1AP_DT_PDU_ServedDCNsItem_ExtIEs ** pServedDCNsItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_DL_CP_SecurityInformation_ExtIEs( SI_S1AP_DT_PDU_DL_CP_SecurityInformation_ExtIEs ** pDL_CP_SecurityInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_EmergencyAreaID_Broadcast_Item_ExtIEs( SI_S1AP_DT_PDU_EmergencyAreaID_Broadcast_Item_ExtIEs ** pEmergencyAreaID_Broadcast_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_EmergencyAreaID_Cancelled_Item_ExtIEs( SI_S1AP_DT_PDU_EmergencyAreaID_Cancelled_Item_ExtIEs ** pEmergencyAreaID_Cancelled_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CompletedCellinEAI_Item_ExtIEs( SI_S1AP_DT_PDU_CompletedCellinEAI_Item_ExtIEs ** pCompletedCellinEAI_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ENB_EarlyStatusTransfer_TransparentContainer_ExtIEs( SI_S1AP_DT_PDU_ENB_EarlyStatusTransfer_TransparentContainer_ExtIEs ** pENB_EarlyStatusTransfer_TransparentContainer_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_GERAN_Cell_ID_ExtIEs( SI_S1AP_DT_PDU_GERAN_Cell_ID_ExtIEs ** pGERAN_Cell_ID_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_GlobalENB_ID_ExtIEs( SI_S1AP_DT_PDU_GlobalENB_ID_ExtIEs ** pGlobalENB_ID_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_Global_en_gNB_ID_ExtIEs( SI_S1AP_DT_PDU_Global_en_gNB_ID_ExtIEs ** pGlobal_en_gNB_ID_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ENB_StatusTransfer_TransparentContainer_ExtIEs( SI_S1AP_DT_PDU_ENB_StatusTransfer_TransparentContainer_ExtIEs ** pENB_StatusTransfer_TransparentContainer_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_EN_DCSONConfigurationTransfer_ExtIEs( SI_S1AP_DT_PDU_EN_DCSONConfigurationTransfer_ExtIEs ** pEN_DCSONConfigurationTransfer_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_EN_DCTransferTypeRequest_ExtIEs( SI_S1AP_DT_PDU_EN_DCTransferTypeRequest_ExtIEs ** pEN_DCTransferTypeRequest_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_EN_DCTransferTypeReply_ExtIEs( SI_S1AP_DT_PDU_EN_DCTransferTypeReply_ExtIEs ** pEN_DCTransferTypeReply_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_EN_DCSONeNBIdentification_ExtIEs( SI_S1AP_DT_PDU_EN_DCSONeNBIdentification_ExtIEs ** pEN_DCSONeNBIdentification_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_EN_DCSONengNBIdentification_ExtIEs( SI_S1AP_DT_PDU_EN_DCSONengNBIdentification_ExtIEs ** pEN_DCSONengNBIdentification_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABInformationListItem_ExtIEs( SI_S1AP_DT_PDU_E_RABInformationListItem_ExtIEs ** pE_RABInformationListItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABItemIEs( SI_S1AP_DT_PDU_E_RABItemIEs ** pE_RABItemIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABItem_ExtIEs( SI_S1AP_DT_PDU_E_RABItem_ExtIEs ** pE_RABItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABSecurityResultItem_ExtIEs( SI_S1AP_DT_PDU_E_RABSecurityResultItem_ExtIEs ** pE_RABSecurityResultItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABUsageReportItemIEs( SI_S1AP_DT_PDU_E_RABUsageReportItemIEs ** pE_RABUsageReportItemIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABUsageReportItem_ExtIEs( SI_S1AP_DT_PDU_E_RABUsageReportItem_ExtIEs ** pE_RABUsageReportItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABQoSParameters_ExtIEs( SI_S1AP_DT_PDU_E_RABQoSParameters_ExtIEs ** pE_RABQoSParameters_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_EUTRAN_CGI_ExtIEs( SI_S1AP_DT_PDU_EUTRAN_CGI_ExtIEs ** pEUTRAN_CGI_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_EventL1LoggedMDTConfig_ExtIEs( SI_S1AP_DT_PDU_EventL1LoggedMDTConfig_ExtIEs ** pEventL1LoggedMDTConfig_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_EventTrigger_ExtIEs( SI_S1AP_DT_PDU_EventTrigger_ExtIEs ** pEventTrigger_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ExpectedUEBehaviour_ExtIEs( SI_S1AP_DT_PDU_ExpectedUEBehaviour_ExtIEs ** pExpectedUEBehaviour_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ExpectedUEActivityBehaviour_ExtIEs( SI_S1AP_DT_PDU_ExpectedUEActivityBehaviour_ExtIEs ** pExpectedUEActivityBehaviour_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_FiveGSTAI_ExtIEs( SI_S1AP_DT_PDU_FiveGSTAI_ExtIEs ** pFiveGSTAI_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ForbiddenTAs_Item_ExtIEs( SI_S1AP_DT_PDU_ForbiddenTAs_Item_ExtIEs ** pForbiddenTAs_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ForbiddenLAs_Item_ExtIEs( SI_S1AP_DT_PDU_ForbiddenLAs_Item_ExtIEs ** pForbiddenLAs_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_GBR_QosInformation_ExtIEs( SI_S1AP_DT_PDU_GBR_QosInformation_ExtIEs ** pGBR_QosInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_GUMMEI_ExtIEs( SI_S1AP_DT_PDU_GUMMEI_ExtIEs ** pGUMMEI_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_HandoverRestrictionList_ExtIEs( SI_S1AP_DT_PDU_HandoverRestrictionList_ExtIEs ** pHandoverRestrictionList_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ImmediateMDT_ExtIEs( SI_S1AP_DT_PDU_ImmediateMDT_ExtIEs ** pImmediateMDT_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_InformationOnRecommendedCellsAndENBsForPaging_ExtIEs( SI_S1AP_DT_PDU_InformationOnRecommendedCellsAndENBsForPaging_ExtIEs ** pInformationOnRecommendedCellsAndENBsForPaging_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_IntersystemMeasurementConfiguration_ExtIEs( SI_S1AP_DT_PDU_IntersystemMeasurementConfiguration_ExtIEs ** pIntersystemMeasurementConfiguration_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_InterSystemMeasurementParameters_ExtIEs( SI_S1AP_DT_PDU_InterSystemMeasurementParameters_ExtIEs ** pInterSystemMeasurementParameters_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_InterSystemMeasurementItem_ExtIEs( SI_S1AP_DT_PDU_InterSystemMeasurementItem_ExtIEs ** pInterSystemMeasurementItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_LAI_ExtIEs( SI_S1AP_DT_PDU_LAI_ExtIEs ** pLAI_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_LastVisitedEUTRANCellInformation_ExtIEs( SI_S1AP_DT_PDU_LastVisitedEUTRANCellInformation_ExtIEs ** pLastVisitedEUTRANCellInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_LastVisitedPSCellInformation_ExtIEs( SI_S1AP_DT_PDU_LastVisitedPSCellInformation_ExtIEs ** pLastVisitedPSCellInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ListeningSubframePattern_ExtIEs( SI_S1AP_DT_PDU_ListeningSubframePattern_ExtIEs ** pListeningSubframePattern_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_LoggedMDT_ExtIEs( SI_S1AP_DT_PDU_LoggedMDT_ExtIEs ** pLoggedMDT_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_LoggedMBSFNMDT_ExtIEs( SI_S1AP_DT_PDU_LoggedMBSFNMDT_ExtIEs ** pLoggedMBSFNMDT_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_LTE_NTN_TAI_Information_ExtIEs( SI_S1AP_DT_PDU_LTE_NTN_TAI_Information_ExtIEs ** pLTE_NTN_TAI_Information_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_M3Configuration_ExtIEs( SI_S1AP_DT_PDU_M3Configuration_ExtIEs ** pM3Configuration_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_M4Configuration_ExtIEs( SI_S1AP_DT_PDU_M4Configuration_ExtIEs ** pM4Configuration_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_M5Configuration_ExtIEs( SI_S1AP_DT_PDU_M5Configuration_ExtIEs ** pM5Configuration_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_M6Configuration_ExtIEs( SI_S1AP_DT_PDU_M6Configuration_ExtIEs ** pM6Configuration_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_M7Configuration_ExtIEs( SI_S1AP_DT_PDU_M7Configuration_ExtIEs ** pM7Configuration_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_MDT_Configuration_ExtIEs( SI_S1AP_DT_PDU_MDT_Configuration_ExtIEs ** pMDT_Configuration_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_MBSFN_ResultToLogInfo_ExtIEs( SI_S1AP_DT_PDU_MBSFN_ResultToLogInfo_ExtIEs ** pMBSFN_ResultToLogInfo_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_MDTMode_ExtensionIE( SI_S1AP_DT_PDU_MDTMode_ExtensionIE ** pMDTMode_ExtensionIE); //  L:11314
void __si_s1ap__set_testdata__PDU_MeasurementThresholdL1LoggedMDT_ExtIEs( SI_S1AP_DT_PDU_MeasurementThresholdL1LoggedMDT_ExtIEs ** pMeasurementThresholdL1LoggedMDT_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_MutingPatternInformation_ExtIEs( SI_S1AP_DT_PDU_MutingPatternInformation_ExtIEs ** pMutingPatternInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_NB_IoT_Paging_eDRXInformation_ExtIEs( SI_S1AP_DT_PDU_NB_IoT_Paging_eDRXInformation_ExtIEs ** pNB_IoT_Paging_eDRXInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_NR_CGI_ExtIEs( SI_S1AP_DT_PDU_NR_CGI_ExtIEs ** pNR_CGI_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_NRUESecurityCapabilities_ExtIEs( SI_S1AP_DT_PDU_NRUESecurityCapabilities_ExtIEs ** pNRUESecurityCapabilities_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_NRV2XServicesAuthorized_ExtIEs( SI_S1AP_DT_PDU_NRV2XServicesAuthorized_ExtIEs ** pNRV2XServicesAuthorized_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_NRUESidelinkAggregateMaximumBitrate_ExtIEs( SI_S1AP_DT_PDU_NRUESidelinkAggregateMaximumBitrate_ExtIEs ** pNRUESidelinkAggregateMaximumBitrate_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_PagingAttemptInformation_ExtIEs( SI_S1AP_DT_PDU_PagingAttemptInformation_ExtIEs ** pPagingAttemptInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_Paging_eDRXInformation_ExtIEs( SI_S1AP_DT_PDU_Paging_eDRXInformation_ExtIEs ** pPaging_eDRXInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_PC5QoSParameters_ExtIEs( SI_S1AP_DT_PDU_PC5QoSParameters_ExtIEs ** pPC5QoSParameters_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_PC5QoSFlowItem_ExtIEs( SI_S1AP_DT_PDU_PC5QoSFlowItem_ExtIEs ** pPC5QoSFlowItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_PC5FlowBitRates_ExtIEs( SI_S1AP_DT_PDU_PC5FlowBitRates_ExtIEs ** pPC5FlowBitRates_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_M1PeriodicReporting_ExtIEs( SI_S1AP_DT_PDU_M1PeriodicReporting_ExtIEs ** pM1PeriodicReporting_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_PLMNAreaBasedQMC_ExtIEs( SI_S1AP_DT_PDU_PLMNAreaBasedQMC_ExtIEs ** pPLMNAreaBasedQMC_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ProSeAuthorized_ExtIEs( SI_S1AP_DT_PDU_ProSeAuthorized_ExtIEs ** pProSeAuthorized_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_PSCellInformation_ExtIEs( SI_S1AP_DT_PDU_PSCellInformation_ExtIEs ** pPSCellInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_RecommendedCellsForPaging_ExtIEs( SI_S1AP_DT_PDU_RecommendedCellsForPaging_ExtIEs ** pRecommendedCellsForPaging_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_RecommendedCellItemIEs( SI_S1AP_DT_PDU_RecommendedCellItemIEs ** pRecommendedCellItemIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_RecommendedCellsForPagingItem_ExtIEs( SI_S1AP_DT_PDU_RecommendedCellsForPagingItem_ExtIEs ** pRecommendedCellsForPagingItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_RecommendedENBsForPaging_ExtIEs( SI_S1AP_DT_PDU_RecommendedENBsForPaging_ExtIEs ** pRecommendedENBsForPaging_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_RecommendedENBItemIEs( SI_S1AP_DT_PDU_RecommendedENBItemIEs ** pRecommendedENBItemIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_RecommendedENBItem_ExtIEs( SI_S1AP_DT_PDU_RecommendedENBItem_ExtIEs ** pRecommendedENBItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_RAT_RestrictionsItem_ExtIEs( SI_S1AP_DT_PDU_RAT_RestrictionsItem_ExtIEs ** pRAT_RestrictionsItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_RequestType_ExtIEs( SI_S1AP_DT_PDU_RequestType_ExtIEs ** pRequestType_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_RIMTransfer_ExtIEs( SI_S1AP_DT_PDU_RIMTransfer_ExtIEs ** pRIMTransfer_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_RLFReportInformation_ExtIEs( SI_S1AP_DT_PDU_RLFReportInformation_ExtIEs ** pRLFReportInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SecurityContext_ExtIEs( SI_S1AP_DT_PDU_SecurityContext_ExtIEs ** pSecurityContext_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SecondaryRATDataUsageReportItemIEs( SI_S1AP_DT_PDU_SecondaryRATDataUsageReportItemIEs ** pSecondaryRATDataUsageReportItemIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SecondaryRATDataUsageReportItem_ExtIEs( SI_S1AP_DT_PDU_SecondaryRATDataUsageReportItem_ExtIEs ** pSecondaryRATDataUsageReportItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SecurityIndication_ExtIEs( SI_S1AP_DT_PDU_SecurityIndication_ExtIEs ** pSecurityIndication_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SecurityResult_ExtIEs( SI_S1AP_DT_PDU_SecurityResult_ExtIEs ** pSecurityResult_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SensorMeasConfigNameItem_ExtIEs( SI_S1AP_DT_PDU_SensorMeasConfigNameItem_ExtIEs ** pSensorMeasConfigNameItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SensorMeasurementConfiguration_ExtIEs( SI_S1AP_DT_PDU_SensorMeasurementConfiguration_ExtIEs ** pSensorMeasurementConfiguration_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SensorNameConfig_ExtIEs( SI_S1AP_DT_PDU_SensorNameConfig_ExtIEs ** pSensorNameConfig_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SONInformation_ExtensionIE( SI_S1AP_DT_PDU_SONInformation_ExtensionIE ** pSONInformation_ExtensionIE); //  L:11314
void __si_s1ap__set_testdata__PDU_SONInformationReply_ExtIEs( SI_S1AP_DT_PDU_SONInformationReply_ExtIEs ** pSONInformationReply_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SONConfigurationTransfer_ExtIEs( SI_S1AP_DT_PDU_SONConfigurationTransfer_ExtIEs ** pSONConfigurationTransfer_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SynchronisationInformation_ExtIEs( SI_S1AP_DT_PDU_SynchronisationInformation_ExtIEs ** pSynchronisationInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SourceeNB_ID_ExtIEs( SI_S1AP_DT_PDU_SourceeNB_ID_ExtIEs ** pSourceeNB_ID_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SourceNodeID_ExtensionIE( SI_S1AP_DT_PDU_SourceNodeID_ExtensionIE ** pSourceNodeID_ExtensionIE); //  L:11314
void __si_s1ap__set_testdata__PDU_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs( SI_S1AP_DT_PDU_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs ** pSourceeNB_ToTargeteNB_TransparentContainer_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SourceNgRanNode_ID_ExtIEs( SI_S1AP_DT_PDU_SourceNgRanNode_ID_ExtIEs ** pSourceNgRanNode_ID_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ServedGUMMEIsItem_ExtIEs( SI_S1AP_DT_PDU_ServedGUMMEIsItem_ExtIEs ** pServedGUMMEIsItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_Subscription_Based_UE_DifferentiationInfo_ExtIEs( SI_S1AP_DT_PDU_Subscription_Based_UE_DifferentiationInfo_ExtIEs ** pSubscription_Based_UE_DifferentiationInfo_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ScheduledCommunicationTime_ExtIEs( SI_S1AP_DT_PDU_ScheduledCommunicationTime_ExtIEs ** pScheduledCommunicationTime_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_SupportedTAs_Item_ExtIEs( SI_S1AP_DT_PDU_SupportedTAs_Item_ExtIEs ** pSupportedTAs_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TimeSynchronisationInfo_ExtIEs( SI_S1AP_DT_PDU_TimeSynchronisationInfo_ExtIEs ** pTimeSynchronisationInfo_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_S_TMSI_ExtIEs( SI_S1AP_DT_PDU_S_TMSI_ExtIEs ** pS_TMSI_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TAIBasedMDT_ExtIEs( SI_S1AP_DT_PDU_TAIBasedMDT_ExtIEs ** pTAIBasedMDT_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TAI_ExtIEs( SI_S1AP_DT_PDU_TAI_ExtIEs ** pTAI_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TAI_Broadcast_Item_ExtIEs( SI_S1AP_DT_PDU_TAI_Broadcast_Item_ExtIEs ** pTAI_Broadcast_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TAI_Cancelled_Item_ExtIEs( SI_S1AP_DT_PDU_TAI_Cancelled_Item_ExtIEs ** pTAI_Cancelled_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TABasedMDT_ExtIEs( SI_S1AP_DT_PDU_TABasedMDT_ExtIEs ** pTABasedMDT_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TABasedQMC_ExtIEs( SI_S1AP_DT_PDU_TABasedQMC_ExtIEs ** pTABasedQMC_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TAIBasedQMC_ExtIEs( SI_S1AP_DT_PDU_TAIBasedQMC_ExtIEs ** pTAIBasedQMC_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CompletedCellinTAI_Item_ExtIEs( SI_S1AP_DT_PDU_CompletedCellinTAI_Item_ExtIEs ** pCompletedCellinTAI_Item_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TargeteNB_ID_ExtIEs( SI_S1AP_DT_PDU_TargeteNB_ID_ExtIEs ** pTargeteNB_ID_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TargetRNC_ID_ExtIEs( SI_S1AP_DT_PDU_TargetRNC_ID_ExtIEs ** pTargetRNC_ID_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TargetNgRanNode_ID_ExtIEs( SI_S1AP_DT_PDU_TargetNgRanNode_ID_ExtIEs ** pTargetNgRanNode_ID_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_GNB_ExtIEs( SI_S1AP_DT_PDU_GNB_ExtIEs ** pGNB_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_Global_GNB_ID_ExtIEs( SI_S1AP_DT_PDU_Global_GNB_ID_ExtIEs ** pGlobal_GNB_ID_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_NG_eNB_ExtIEs( SI_S1AP_DT_PDU_NG_eNB_ExtIEs ** pNG_eNB_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs( SI_S1AP_DT_PDU_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs ** pTargeteNB_ToSourceeNB_TransparentContainer_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_M1ThresholdEventA2_ExtIEs( SI_S1AP_DT_PDU_M1ThresholdEventA2_ExtIEs ** pM1ThresholdEventA2_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TimeBasedHandoverInformation_ExtIEs( SI_S1AP_DT_PDU_TimeBasedHandoverInformation_ExtIEs ** pTimeBasedHandoverInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TraceActivation_ExtIEs( SI_S1AP_DT_PDU_TraceActivation_ExtIEs ** pTraceActivation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_Tunnel_Information_ExtIEs( SI_S1AP_DT_PDU_Tunnel_Information_ExtIEs ** pTunnel_Information_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_UEAggregate_MaximumBitrates_ExtIEs( SI_S1AP_DT_PDU_UEAggregate_MaximumBitrates_ExtIEs ** pUEAggregate_MaximumBitrates_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_UEAppLayerMeasConfig_ExtIEs( SI_S1AP_DT_PDU_UEAppLayerMeasConfig_ExtIEs ** pUEAppLayerMeasConfig_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_UE_S1AP_ID_pair_ExtIEs( SI_S1AP_DT_PDU_UE_S1AP_ID_pair_ExtIEs ** pUE_S1AP_ID_pair_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_UE_associatedLogicalS1_ConnectionItemExtIEs( SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemExtIEs ** pUE_associatedLogicalS1_ConnectionItemExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_UESecurityCapabilities_ExtIEs( SI_S1AP_DT_PDU_UESecurityCapabilities_ExtIEs ** pUESecurityCapabilities_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_UE_Sidelink_Aggregate_MaximumBitrates_ExtIEs( SI_S1AP_DT_PDU_UE_Sidelink_Aggregate_MaximumBitrates_ExtIEs ** pUE_Sidelink_Aggregate_MaximumBitrates_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_UL_CP_SecurityInformation_ExtIEs( SI_S1AP_DT_PDU_UL_CP_SecurityInformation_ExtIEs ** pUL_CP_SecurityInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_UserLocationInformation_ExtIEs( SI_S1AP_DT_PDU_UserLocationInformation_ExtIEs ** pUserLocationInformation_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_V2XServicesAuthorized_ExtIEs( SI_S1AP_DT_PDU_V2XServicesAuthorized_ExtIEs ** pV2XServicesAuthorized_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_WLANMeasurementConfiguration_ExtIEs( SI_S1AP_DT_PDU_WLANMeasurementConfiguration_ExtIEs ** pWLANMeasurementConfiguration_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_WUS_Assistance_Information_ExtIEs( SI_S1AP_DT_PDU_WUS_Assistance_Information_ExtIEs ** pWUS_Assistance_Information_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_X2TNLConfigurationInfo_ExtIEs( SI_S1AP_DT_PDU_X2TNLConfigurationInfo_ExtIEs ** pX2TNLConfigurationInfo_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_ENBX2ExtTLA_ExtIEs( SI_S1AP_DT_PDU_ENBX2ExtTLA_ExtIEs ** pENBX2ExtTLA_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABDataForwardingItem_ExtIEs( SI_S1AP_DT_PDU_E_RABDataForwardingItem_ExtIEs ** pE_RABDataForwardingItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABToBeSetupItemHOReq_ExtIEs( SI_S1AP_DT_PDU_E_RABToBeSetupItemHOReq_ExtIEs ** pE_RABToBeSetupItemHOReq_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABAdmittedItem_ExtIEs( SI_S1AP_DT_PDU_E_RABAdmittedItem_ExtIEs ** pE_RABAdmittedItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABFailedToSetupItemHOReqAckExtIEs( SI_S1AP_DT_PDU_E_RABFailedToSetupItemHOReqAckExtIEs ** pE_RABFailedToSetupItemHOReqAckExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABToBeSwitchedDLItem_ExtIEs( SI_S1AP_DT_PDU_E_RABToBeSwitchedDLItem_ExtIEs ** pE_RABToBeSwitchedDLItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABToBeSwitchedULItem_ExtIEs( SI_S1AP_DT_PDU_E_RABToBeSwitchedULItem_ExtIEs ** pE_RABToBeSwitchedULItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABToBeUpdatedItem_ExtIEs( SI_S1AP_DT_PDU_E_RABToBeUpdatedItem_ExtIEs ** pE_RABToBeUpdatedItem_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABToBeSetupItemBearerSUReqIEs( SI_S1AP_DT_PDU_E_RABToBeSetupItemBearerSUReqIEs ** pE_RABToBeSetupItemBearerSUReqIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABToBeSetupItemBearerSUReqExtIEs( SI_S1AP_DT_PDU_E_RABToBeSetupItemBearerSUReqExtIEs ** pE_RABToBeSetupItemBearerSUReqExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABSetupItemBearerSUResIEs( SI_S1AP_DT_PDU_E_RABSetupItemBearerSUResIEs ** pE_RABSetupItemBearerSUResIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABSetupItemBearerSUResExtIEs( SI_S1AP_DT_PDU_E_RABSetupItemBearerSUResExtIEs ** pE_RABSetupItemBearerSUResExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABToBeModifiedItemBearerModReqIEs( SI_S1AP_DT_PDU_E_RABToBeModifiedItemBearerModReqIEs ** pE_RABToBeModifiedItemBearerModReqIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABToBeModifyItemBearerModReqExtIEs( SI_S1AP_DT_PDU_E_RABToBeModifyItemBearerModReqExtIEs ** pE_RABToBeModifyItemBearerModReqExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABModifyItemBearerModResIEs( SI_S1AP_DT_PDU_E_RABModifyItemBearerModResIEs ** pE_RABModifyItemBearerModResIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABModifyItemBearerModResExtIEs( SI_S1AP_DT_PDU_E_RABModifyItemBearerModResExtIEs ** pE_RABModifyItemBearerModResExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABReleaseItemBearerRelCompIEs( SI_S1AP_DT_PDU_E_RABReleaseItemBearerRelCompIEs ** pE_RABReleaseItemBearerRelCompIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABReleaseItemBearerRelCompExtIEs( SI_S1AP_DT_PDU_E_RABReleaseItemBearerRelCompExtIEs ** pE_RABReleaseItemBearerRelCompExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABToBeSetupItemCtxtSUReqIEs( SI_S1AP_DT_PDU_E_RABToBeSetupItemCtxtSUReqIEs ** pE_RABToBeSetupItemCtxtSUReqIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABToBeSetupItemCtxtSUReqExtIEs( SI_S1AP_DT_PDU_E_RABToBeSetupItemCtxtSUReqExtIEs ** pE_RABToBeSetupItemCtxtSUReqExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABSetupItemCtxtSUResIEs( SI_S1AP_DT_PDU_E_RABSetupItemCtxtSUResIEs ** pE_RABSetupItemCtxtSUResIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABSetupItemCtxtSUResExtIEs( SI_S1AP_DT_PDU_E_RABSetupItemCtxtSUResExtIEs ** pE_RABSetupItemCtxtSUResExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TAIItemIEs( SI_S1AP_DT_PDU_TAIItemIEs ** pTAIItemIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_TAIItemExtIEs( SI_S1AP_DT_PDU_TAIItemExtIEs ** pTAIItemExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_UE_associatedLogicalS1_ConnectionItemRes( SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemRes ** pUE_associatedLogicalS1_ConnectionItemRes); //  L:11314
void __si_s1ap__set_testdata__PDU_UE_associatedLogicalS1_ConnectionItemResAck( SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemResAck ** pUE_associatedLogicalS1_ConnectionItemResAck); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABToBeModifiedItemBearerModInd_ExtIEs( SI_S1AP_DT_PDU_E_RABToBeModifiedItemBearerModInd_ExtIEs ** pE_RABToBeModifiedItemBearerModInd_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABNotToBeModifiedItemBearerModInd_ExtIEs( SI_S1AP_DT_PDU_E_RABNotToBeModifiedItemBearerModInd_ExtIEs ** pE_RABNotToBeModifiedItemBearerModInd_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_CSGMembershipInfo_ExtIEs( SI_S1AP_DT_PDU_CSGMembershipInfo_ExtIEs ** pCSGMembershipInfo_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABModifyItemBearerModConfIEs( SI_S1AP_DT_PDU_E_RABModifyItemBearerModConfIEs ** pE_RABModifyItemBearerModConfIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABModifyItemBearerModConfExtIEs( SI_S1AP_DT_PDU_E_RABModifyItemBearerModConfExtIEs ** pE_RABModifyItemBearerModConfExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABFailedToResumeItemResumeReq_ExtIEs( SI_S1AP_DT_PDU_E_RABFailedToResumeItemResumeReq_ExtIEs ** pE_RABFailedToResumeItemResumeReq_ExtIEs); //  L:11314
void __si_s1ap__set_testdata__PDU_E_RABFailedToResumeItemResumeRes_ExtIEs( SI_S1AP_DT_PDU_E_RABFailedToResumeItemResumeRes_ExtIEs ** pE_RABFailedToResumeItemResumeRes_ExtIEs); //  L:11314


void __si_s1ap__Send_HandoverRequired_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_HandoverCommand_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_HandoverPreparationFailure_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_HandoverRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_HandoverRequestAcknowledge_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_HandoverFailure_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_HandoverNotify_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_PathSwitchRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_PathSwitchRequestAcknowledge_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_PathSwitchRequestFailure_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_E_RABSetupRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_E_RABSetupResponse_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_E_RABModifyRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_E_RABModifyResponse_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_E_RABReleaseCommand_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_E_RABReleaseResponse_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_E_RABReleaseIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_InitialContextSetupRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_InitialContextSetupResponse_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_InitialContextSetupFailure_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEContextReleaseRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_Paging_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_DownlinkNASTransport_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_InitialUEMessage_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UplinkNASTransport_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_NASNonDeliveryIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_HandoverCancel_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_HandoverCancelAcknowledge_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_Reset_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_ResetAcknowledge_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_ErrorIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_S1SetupRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_S1SetupResponse_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_S1SetupFailure_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_ENBConfigurationUpdate_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_ENBConfigurationUpdateAcknowledge_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_ENBConfigurationUpdateFailure_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_MMEConfigurationUpdate_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_MMEConfigurationUpdateAcknowledge_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_MMEConfigurationUpdateFailure_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_DownlinkS1cdma2000tunnelling_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UplinkS1cdma2000tunnelling_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEContextModificationRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEContextModificationResponse_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEContextModificationFailure_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UECapabilityInfoIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEContextReleaseCommand_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEContextReleaseComplete_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_ENBStatusTransfer_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_MMEStatusTransfer_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_DeactivateTrace_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_TraceStart_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_TraceFailureIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_CellTrafficTrace_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_LocationReportingControl_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_LocationReportingFailureIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_LocationReport_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_OverloadStart_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_OverloadStop_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_WriteReplaceWarningRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_WriteReplaceWarningResponse_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_ENBDirectInformationTransfer_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_MMEDirectInformationTransfer_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_ENBConfigurationTransfer_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_MMEConfigurationTransfer_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_PrivateMessage_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_PWSRestartIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_KillRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_KillResponse_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_DownlinkUEAssociatedLPPaTransport_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UplinkUEAssociatedLPPaTransport_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_DownlinkNonUEAssociatedLPPaTransport_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UplinkNonUEAssociatedLPPaTransport_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UERadioCapabilityMatchRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UERadioCapabilityMatchResponse_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_E_RABModificationIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_E_RABModificationConfirm_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEContextModificationIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEContextModificationConfirm_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_RerouteNASRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_PWSFailureIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEContextSuspendRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEContextSuspendResponse_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEContextResumeRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEContextResumeResponse_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEContextResumeFailure_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_ConnectionEstablishmentIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_NASDeliveryIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_RetrieveUEInformation_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UEInformationTransfer_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_ENBCPRelocationIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_MMECPRelocationIndication_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_SecondaryRATDataUsageReport_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UERadioCapabilityIDMappingRequest_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_UERadioCapabilityIDMappingResponse_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_HandoverSuccess_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_ENBEarlyStatusTransfer_Prototype( SI_S1APNode * node);
void __si_s1ap__Send_MMEEarlyStatusTransfer_Prototype( SI_S1APNode * node);




#endif

