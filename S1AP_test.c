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



#include "S1AP_18.3.h"
#include "S1AP_18.3_Stack.h"
#include "S1AP_test.h"




// SEQUENCE  L:11217
void __si_s1ap__set_testdata__Additional_GUTI( SI_S1AP_DT_Additional_GUTI ** pAdditional_GUTI)
{
	SI_S1AP_DT_Additional_GUTI * obj_Additional_GUTI = (SI_S1AP_DT_Additional_GUTI*) __si_allocM( sizeof(SI_S1AP_DT_Additional_GUTI));
	memset( obj_Additional_GUTI, 0, sizeof( SI_S1AP_DT_Additional_GUTI));

	// L:486
	__si_s1ap__set_testdata__GUMMEI( &obj_Additional_GUTI->gUMMEI);    // L:584

	__si_s1ap_init_M_TMSI2( &obj_Additional_GUTI->m_TMSI, "\x20\x20\x08\x11", 4);    // L:545


	*pAdditional_GUTI = obj_Additional_GUTI;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__AreaScopeOfMDT( SI_S1AP_DT_AreaScopeOfMDT ** pAreaScopeOfMDT)
{
	SI_S1AP_DT_AreaScopeOfMDT * obj_AreaScopeOfMDT = (SI_S1AP_DT_AreaScopeOfMDT*) __si_allocM( sizeof(SI_S1AP_DT_AreaScopeOfMDT));
	memset( obj_AreaScopeOfMDT, 0, sizeof( SI_S1AP_DT_AreaScopeOfMDT));

	obj_AreaScopeOfMDT->SelectedChoice = 0;

	// L:2784

	switch( obj_AreaScopeOfMDT->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__CellBasedMDT( &obj_AreaScopeOfMDT->u.cellBased);  // L:2910  ,  Parser:SEQUENCE, CellBasedMDT
			break;
		case 1:
			__si_s1ap__set_testdata__TABasedMDT( &obj_AreaScopeOfMDT->u.tABased);  // L:2910  ,  Parser:SEQUENCE, TABasedMDT
			break;
		case 2:
			//__si_s1ap__set_testdata__NULL( &obj_AreaScopeOfMDT->u.pLMNWide);  // L:2915  ,  Parser: NULL
			break;
		case 3:
			//__si_s1ap__set_testdata__TAIBasedMDT( &obj_AreaScopeOfMDT->u.tAIBased);  // L:2910  ,  Parser:SEQUENCE, TAIBasedMDT
			break;
	}

	*pAreaScopeOfMDT = obj_AreaScopeOfMDT;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__AreaScopeOfQMC( SI_S1AP_DT_AreaScopeOfQMC ** pAreaScopeOfQMC)
{
	SI_S1AP_DT_AreaScopeOfQMC * obj_AreaScopeOfQMC = (SI_S1AP_DT_AreaScopeOfQMC*) __si_allocM( sizeof(SI_S1AP_DT_AreaScopeOfQMC));
	memset( obj_AreaScopeOfQMC, 0, sizeof( SI_S1AP_DT_AreaScopeOfQMC));

	obj_AreaScopeOfQMC->SelectedChoice = 0;

	// L:2784

	switch( obj_AreaScopeOfQMC->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__CellBasedQMC( &obj_AreaScopeOfQMC->u.cellBased);  // L:2910  ,  Parser:SEQUENCE, CellBasedQMC
			break;
		case 1:
			__si_s1ap__set_testdata__TABasedQMC( &obj_AreaScopeOfQMC->u.tABased);  // L:2910  ,  Parser:SEQUENCE, TABasedQMC
			break;
		case 2:
			__si_s1ap__set_testdata__TAIBasedQMC( &obj_AreaScopeOfQMC->u.tAIBased);  // L:2910  ,  Parser:SEQUENCE, TAIBasedQMC
			break;
		case 3:
			__si_s1ap__set_testdata__PLMNAreaBasedQMC( &obj_AreaScopeOfQMC->u.pLMNAreaBased);  // L:2910  ,  Parser:SEQUENCE, PLMNAreaBasedQMC
			break;
	}

	*pAreaScopeOfQMC = obj_AreaScopeOfQMC;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__AllocationAndRetentionPriority( SI_S1AP_DT_AllocationAndRetentionPriority ** pAllocationAndRetentionPriority)
{
	SI_S1AP_DT_AllocationAndRetentionPriority * obj_AllocationAndRetentionPriority = (SI_S1AP_DT_AllocationAndRetentionPriority*) __si_allocM( sizeof(SI_S1AP_DT_AllocationAndRetentionPriority));
	memset( obj_AllocationAndRetentionPriority, 0, sizeof( SI_S1AP_DT_AllocationAndRetentionPriority));

	// L:486
	obj_AllocationAndRetentionPriority->priorityLevel = __getTestINTEGER( 0, 15);    // L:533

	obj_AllocationAndRetentionPriority->selected_epre_emptionCapability = Pre_emptionCapability_shall_not_trigger_pre_emption_val;   // L:529

	obj_AllocationAndRetentionPriority->selected_epre_emptionVulnerability = Pre_emptionVulnerability_not_pre_emptable_val;   // L:529


	*pAllocationAndRetentionPriority = obj_AllocationAndRetentionPriority;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__AssistanceDataForCECapableUEs( SI_S1AP_DT_AssistanceDataForCECapableUEs ** pAssistanceDataForCECapableUEs)
{
	SI_S1AP_DT_AssistanceDataForCECapableUEs * obj_AssistanceDataForCECapableUEs = (SI_S1AP_DT_AssistanceDataForCECapableUEs*) __si_allocM( sizeof(SI_S1AP_DT_AssistanceDataForCECapableUEs));
	memset( obj_AssistanceDataForCECapableUEs, 0, sizeof( SI_S1AP_DT_AssistanceDataForCECapableUEs));

	// L:486
	__si_s1ap__set_testdata__CellIdentifierAndCELevelForCECapableUEs( &obj_AssistanceDataForCECapableUEs->cellIdentifierAndCELevelForCECapableUEs);    // L:584


	*pAssistanceDataForCECapableUEs = obj_AssistanceDataForCECapableUEs;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__AssistanceDataForPaging( SI_S1AP_DT_AssistanceDataForPaging ** pAssistanceDataForPaging)
{
	SI_S1AP_DT_AssistanceDataForPaging * obj_AssistanceDataForPaging = (SI_S1AP_DT_AssistanceDataForPaging*) __si_allocM( sizeof(SI_S1AP_DT_AssistanceDataForPaging));
	memset( obj_AssistanceDataForPaging, 0, sizeof( SI_S1AP_DT_AssistanceDataForPaging));

	// L:486
	__si_s1ap__set_testdata__AssistanceDataForRecommendedCells( &obj_AssistanceDataForPaging->assistanceDataForRecommendedCells);    // L:584
	obj_AssistanceDataForPaging->isPresent_assistanceDataForRecommendedCells = 1;

	__si_s1ap__set_testdata__AssistanceDataForCECapableUEs( &obj_AssistanceDataForPaging->assistanceDataForCECapableUEs);    // L:584
	obj_AssistanceDataForPaging->isPresent_assistanceDataForCECapableUEs = 1;

	__si_s1ap__set_testdata__PagingAttemptInformation( &obj_AssistanceDataForPaging->pagingAttemptInformation);    // L:584
	obj_AssistanceDataForPaging->isPresent_pagingAttemptInformation = 1;


	*pAssistanceDataForPaging = obj_AssistanceDataForPaging;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__AssistanceDataForRecommendedCells( SI_S1AP_DT_AssistanceDataForRecommendedCells ** pAssistanceDataForRecommendedCells)
{
	SI_S1AP_DT_AssistanceDataForRecommendedCells * obj_AssistanceDataForRecommendedCells = (SI_S1AP_DT_AssistanceDataForRecommendedCells*) __si_allocM( sizeof(SI_S1AP_DT_AssistanceDataForRecommendedCells));
	memset( obj_AssistanceDataForRecommendedCells, 0, sizeof( SI_S1AP_DT_AssistanceDataForRecommendedCells));

	// L:486
	__si_s1ap__set_testdata__RecommendedCellsForPaging( &obj_AssistanceDataForRecommendedCells->recommendedCellsForPaging);    // L:584


	*pAssistanceDataForRecommendedCells = obj_AssistanceDataForRecommendedCells;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__Bearers_SubjectToStatusTransferList( SI_S1AP_DT_Bearers_SubjectToStatusTransferList ** pBearers_SubjectToStatusTransferList)
{
	SI_S1AP_DT_Bearers_SubjectToStatusTransferList * obj_Bearers_SubjectToStatusTransferList = NULL; 
	__si_s1ap_init_Bearers_SubjectToStatusTransferList( &obj_Bearers_SubjectToStatusTransferList);

	// L:1260
	SI_S1AP_DT_PDU_Bearers_SubjectToStatusTransfer_ItemIEs * objBearers_SubjectToStatusTransfer_ItemIEs = NULL;
	__si_s1ap__set_testdata__PDU_Bearers_SubjectToStatusTransfer_ItemIEs( &objBearers_SubjectToStatusTransfer_ItemIEs);
	// L:1412
	__si_linked_list_add( obj_Bearers_SubjectToStatusTransferList->list, (uint8_t*)objBearers_SubjectToStatusTransfer_ItemIEs);

	*pBearers_SubjectToStatusTransferList = obj_Bearers_SubjectToStatusTransferList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__Bearers_SubjectToStatusTransfer_Item( SI_S1AP_DT_Bearers_SubjectToStatusTransfer_Item ** pBearers_SubjectToStatusTransfer_Item)
{
	SI_S1AP_DT_Bearers_SubjectToStatusTransfer_Item * obj_Bearers_SubjectToStatusTransfer_Item = (SI_S1AP_DT_Bearers_SubjectToStatusTransfer_Item*) __si_allocM( sizeof(SI_S1AP_DT_Bearers_SubjectToStatusTransfer_Item));
	memset( obj_Bearers_SubjectToStatusTransfer_Item, 0, sizeof( SI_S1AP_DT_Bearers_SubjectToStatusTransfer_Item));

	// L:486
	obj_Bearers_SubjectToStatusTransfer_Item->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap__set_testdata__COUNTvalue( &obj_Bearers_SubjectToStatusTransfer_Item->uL_COUNTvalue);    // L:584

	__si_s1ap__set_testdata__COUNTvalue( &obj_Bearers_SubjectToStatusTransfer_Item->dL_COUNTvalue);    // L:584

	__si_s1ap_init_ReceiveStatusofULPDCPSDUs2( &obj_Bearers_SubjectToStatusTransfer_Item->receiveStatusofULPDCPSDUs, "81925794688617904251560064503194367434741809180943921480019978843471200034464627925598158691397615575403537362718451102250584350675566908109558013429754648970884164431407537590352376656262900423824055201525205291977108914867381730626454680519613927449025495229799651035825388953016205858169659269175135280011688311349416289693997356598411166390652694271426978601538404225072669307127525843075634580218687039450999778170455138303550202888535323951107095518338810145053022317368315063851724453294354850644175201001", 512, 4096);  // L:574
	obj_Bearers_SubjectToStatusTransfer_Item->receiveStatusofULPDCPSDUs->bitslen = 4096; //   L:575
	obj_Bearers_SubjectToStatusTransfer_Item->isPresent_receiveStatusofULPDCPSDUs = 1;


	*pBearers_SubjectToStatusTransfer_Item = obj_Bearers_SubjectToStatusTransfer_Item;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__Bearers_SubjectToEarlyStatusTransferList( SI_S1AP_DT_Bearers_SubjectToEarlyStatusTransferList ** pBearers_SubjectToEarlyStatusTransferList)
{
	SI_S1AP_DT_Bearers_SubjectToEarlyStatusTransferList * obj_Bearers_SubjectToEarlyStatusTransferList = NULL; 
	__si_s1ap_init_Bearers_SubjectToEarlyStatusTransferList( &obj_Bearers_SubjectToEarlyStatusTransferList);

	// L:1260
	SI_S1AP_DT_PDU_Bearers_SubjectToEarlyStatusTransfer_ItemIEs * objBearers_SubjectToEarlyStatusTransfer_ItemIEs = NULL;
	__si_s1ap__set_testdata__PDU_Bearers_SubjectToEarlyStatusTransfer_ItemIEs( &objBearers_SubjectToEarlyStatusTransfer_ItemIEs);
	// L:1412
	__si_linked_list_add( obj_Bearers_SubjectToEarlyStatusTransferList->list, (uint8_t*)objBearers_SubjectToEarlyStatusTransfer_ItemIEs);

	*pBearers_SubjectToEarlyStatusTransferList = obj_Bearers_SubjectToEarlyStatusTransferList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__Bearers_SubjectToEarlyStatusTransfer_Item( SI_S1AP_DT_Bearers_SubjectToEarlyStatusTransfer_Item ** pBearers_SubjectToEarlyStatusTransfer_Item)
{
	SI_S1AP_DT_Bearers_SubjectToEarlyStatusTransfer_Item * obj_Bearers_SubjectToEarlyStatusTransfer_Item = (SI_S1AP_DT_Bearers_SubjectToEarlyStatusTransfer_Item*) __si_allocM( sizeof(SI_S1AP_DT_Bearers_SubjectToEarlyStatusTransfer_Item));
	memset( obj_Bearers_SubjectToEarlyStatusTransfer_Item, 0, sizeof( SI_S1AP_DT_Bearers_SubjectToEarlyStatusTransfer_Item));

	// L:486
	obj_Bearers_SubjectToEarlyStatusTransfer_Item->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap__set_testdata__DLCOUNT_PDCP_SNlength( &obj_Bearers_SubjectToEarlyStatusTransfer_Item->dLCOUNT_PDCP_SNlength);    // L:588


	*pBearers_SubjectToEarlyStatusTransfer_Item = obj_Bearers_SubjectToEarlyStatusTransfer_Item;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__Bearers_SubjectToDLDiscardingList( SI_S1AP_DT_Bearers_SubjectToDLDiscardingList ** pBearers_SubjectToDLDiscardingList)
{
	SI_S1AP_DT_Bearers_SubjectToDLDiscardingList * obj_Bearers_SubjectToDLDiscardingList = NULL; 
	__si_s1ap_init_Bearers_SubjectToDLDiscardingList( &obj_Bearers_SubjectToDLDiscardingList);

	// L:1260
	SI_S1AP_DT_PDU_Bearers_SubjectToDLDiscarding_ItemIEs * objBearers_SubjectToDLDiscarding_ItemIEs = NULL;
	__si_s1ap__set_testdata__PDU_Bearers_SubjectToDLDiscarding_ItemIEs( &objBearers_SubjectToDLDiscarding_ItemIEs);
	// L:1412
	__si_linked_list_add( obj_Bearers_SubjectToDLDiscardingList->list, (uint8_t*)objBearers_SubjectToDLDiscarding_ItemIEs);

	*pBearers_SubjectToDLDiscardingList = obj_Bearers_SubjectToDLDiscardingList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__Bearers_SubjectToDLDiscarding_Item( SI_S1AP_DT_Bearers_SubjectToDLDiscarding_Item ** pBearers_SubjectToDLDiscarding_Item)
{
	SI_S1AP_DT_Bearers_SubjectToDLDiscarding_Item * obj_Bearers_SubjectToDLDiscarding_Item = (SI_S1AP_DT_Bearers_SubjectToDLDiscarding_Item*) __si_allocM( sizeof(SI_S1AP_DT_Bearers_SubjectToDLDiscarding_Item));
	memset( obj_Bearers_SubjectToDLDiscarding_Item, 0, sizeof( SI_S1AP_DT_Bearers_SubjectToDLDiscarding_Item));

	// L:486
	obj_Bearers_SubjectToDLDiscarding_Item->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap__set_testdata__DLDiscarding( &obj_Bearers_SubjectToDLDiscarding_Item->dL_Discarding);    // L:588


	*pBearers_SubjectToDLDiscarding_Item = obj_Bearers_SubjectToDLDiscarding_Item;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__BluetoothMeasurementConfiguration( SI_S1AP_DT_BluetoothMeasurementConfiguration ** pBluetoothMeasurementConfiguration)
{
	SI_S1AP_DT_BluetoothMeasurementConfiguration * obj_BluetoothMeasurementConfiguration = (SI_S1AP_DT_BluetoothMeasurementConfiguration*) __si_allocM( sizeof(SI_S1AP_DT_BluetoothMeasurementConfiguration));
	memset( obj_BluetoothMeasurementConfiguration, 0, sizeof( SI_S1AP_DT_BluetoothMeasurementConfiguration));

	// L:486
	obj_BluetoothMeasurementConfiguration->selected_ebluetoothMeasConfig = BluetoothMeasConfig_setup_val;   // L:529

	__si_s1ap__set_testdata__BluetoothMeasConfigNameList( &obj_BluetoothMeasurementConfiguration->bluetoothMeasConfigNameList);    // L:580
	obj_BluetoothMeasurementConfiguration->isPresent_bluetoothMeasConfigNameList = 1;

	obj_BluetoothMeasurementConfiguration->selected_ebt_rssi = BluetoothMeasurementConfiguration_bt_rssi_true_val;   // L:529
	obj_BluetoothMeasurementConfiguration->isPresent_bt_rssi = 1;


	*pBluetoothMeasurementConfiguration = obj_BluetoothMeasurementConfiguration;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__BluetoothMeasConfigNameList( SI_S1AP_DT_BluetoothMeasConfigNameList ** pBluetoothMeasConfigNameList)
{
	SI_S1AP_DT_BluetoothMeasConfigNameList * obj_BluetoothMeasConfigNameList = NULL; 
	__si_s1ap_init_BluetoothMeasConfigNameList( &obj_BluetoothMeasConfigNameList);

	// L:1260
	SI_S1AP_DT_BluetoothName * objBluetoothName = NULL;

	// OCTETSTRING  , BluetoothName  // L:1348
	__si_s1ap_init_BluetoothName2( &objBluetoothName, "\x13", 1);


	// L:1419
	__si_linked_list_add( obj_BluetoothMeasConfigNameList->BluetoothName, (uint8_t*)objBluetoothName);

	*pBluetoothMeasConfigNameList = obj_BluetoothMeasConfigNameList;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__BPLMNs( SI_S1AP_DT_BPLMNs ** pBPLMNs)
{
	SI_S1AP_DT_BPLMNs * obj_BPLMNs = NULL; 
	__si_s1ap_init_BPLMNs( &obj_BPLMNs);

	// L:1260
	SI_S1AP_DT_PLMNidentity * objPLMNidentity = NULL;

	// OCTETSTRING  , PLMNidentity  // L:1348
	__si_s1ap_init_PLMNidentity2( &objPLMNidentity, "\x19\x23\x15\x16\x01", 5);


	// L:1419
	__si_linked_list_add( obj_BPLMNs->PLMNidentity, (uint8_t*)objPLMNidentity);

	*pBPLMNs = obj_BPLMNs;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__BroadcastCancelledAreaList( SI_S1AP_DT_BroadcastCancelledAreaList ** pBroadcastCancelledAreaList)
{
	SI_S1AP_DT_BroadcastCancelledAreaList * obj_BroadcastCancelledAreaList = (SI_S1AP_DT_BroadcastCancelledAreaList*) __si_allocM( sizeof(SI_S1AP_DT_BroadcastCancelledAreaList));
	memset( obj_BroadcastCancelledAreaList, 0, sizeof( SI_S1AP_DT_BroadcastCancelledAreaList));

	obj_BroadcastCancelledAreaList->SelectedChoice = 0;

	// L:2784

	switch( obj_BroadcastCancelledAreaList->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__CellID_Cancelled( &obj_BroadcastCancelledAreaList->u.cellID_Cancelled);  // L:2910  ,  Parser:SEQUENCE_OF, CellID-Cancelled
			break;
		case 1:
			__si_s1ap__set_testdata__TAI_Cancelled( &obj_BroadcastCancelledAreaList->u.tAI_Cancelled);  // L:2910  ,  Parser:SEQUENCE_OF, TAI-Cancelled
			break;
		case 2:
			__si_s1ap__set_testdata__EmergencyAreaID_Cancelled( &obj_BroadcastCancelledAreaList->u.emergencyAreaID_Cancelled);  // L:2910  ,  Parser:SEQUENCE_OF, EmergencyAreaID-Cancelled
			break;
	}

	*pBroadcastCancelledAreaList = obj_BroadcastCancelledAreaList;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__BroadcastCompletedAreaList( SI_S1AP_DT_BroadcastCompletedAreaList ** pBroadcastCompletedAreaList)
{
	SI_S1AP_DT_BroadcastCompletedAreaList * obj_BroadcastCompletedAreaList = (SI_S1AP_DT_BroadcastCompletedAreaList*) __si_allocM( sizeof(SI_S1AP_DT_BroadcastCompletedAreaList));
	memset( obj_BroadcastCompletedAreaList, 0, sizeof( SI_S1AP_DT_BroadcastCompletedAreaList));

	obj_BroadcastCompletedAreaList->SelectedChoice = 0;

	// L:2784

	switch( obj_BroadcastCompletedAreaList->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__CellID_Broadcast( &obj_BroadcastCompletedAreaList->u.cellID_Broadcast);  // L:2910  ,  Parser:SEQUENCE_OF, CellID-Broadcast
			break;
		case 1:
			__si_s1ap__set_testdata__TAI_Broadcast( &obj_BroadcastCompletedAreaList->u.tAI_Broadcast);  // L:2910  ,  Parser:SEQUENCE_OF, TAI-Broadcast
			break;
		case 2:
			__si_s1ap__set_testdata__EmergencyAreaID_Broadcast( &obj_BroadcastCompletedAreaList->u.emergencyAreaID_Broadcast);  // L:2910  ,  Parser:SEQUENCE_OF, EmergencyAreaID-Broadcast
			break;
	}

	*pBroadcastCompletedAreaList = obj_BroadcastCompletedAreaList;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__CancelledCellinEAI( SI_S1AP_DT_CancelledCellinEAI ** pCancelledCellinEAI)
{
	SI_S1AP_DT_CancelledCellinEAI * obj_CancelledCellinEAI = NULL; 
	__si_s1ap_init_CancelledCellinEAI( &obj_CancelledCellinEAI);

	// L:1260
	SI_S1AP_DT_CancelledCellinEAI_Item * objCancelledCellinEAI_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__CancelledCellinEAI_Item( &objCancelledCellinEAI_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_CancelledCellinEAI->CancelledCellinEAI_Item, (uint8_t*)objCancelledCellinEAI_Item);

	*pCancelledCellinEAI = obj_CancelledCellinEAI;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CancelledCellinEAI_Item( SI_S1AP_DT_CancelledCellinEAI_Item ** pCancelledCellinEAI_Item)
{
	SI_S1AP_DT_CancelledCellinEAI_Item * obj_CancelledCellinEAI_Item = (SI_S1AP_DT_CancelledCellinEAI_Item*) __si_allocM( sizeof(SI_S1AP_DT_CancelledCellinEAI_Item));
	memset( obj_CancelledCellinEAI_Item, 0, sizeof( SI_S1AP_DT_CancelledCellinEAI_Item));

	// L:486
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_CancelledCellinEAI_Item->eCGI);    // L:584

	obj_CancelledCellinEAI_Item->numberOfBroadcasts = __getTestINTEGER( 0, 65535);    // L:533


	*pCancelledCellinEAI_Item = obj_CancelledCellinEAI_Item;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__CancelledCellinTAI( SI_S1AP_DT_CancelledCellinTAI ** pCancelledCellinTAI)
{
	SI_S1AP_DT_CancelledCellinTAI * obj_CancelledCellinTAI = NULL; 
	__si_s1ap_init_CancelledCellinTAI( &obj_CancelledCellinTAI);

	// L:1260
	SI_S1AP_DT_CancelledCellinTAI_Item * objCancelledCellinTAI_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__CancelledCellinTAI_Item( &objCancelledCellinTAI_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_CancelledCellinTAI->CancelledCellinTAI_Item, (uint8_t*)objCancelledCellinTAI_Item);

	*pCancelledCellinTAI = obj_CancelledCellinTAI;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CancelledCellinTAI_Item( SI_S1AP_DT_CancelledCellinTAI_Item ** pCancelledCellinTAI_Item)
{
	SI_S1AP_DT_CancelledCellinTAI_Item * obj_CancelledCellinTAI_Item = (SI_S1AP_DT_CancelledCellinTAI_Item*) __si_allocM( sizeof(SI_S1AP_DT_CancelledCellinTAI_Item));
	memset( obj_CancelledCellinTAI_Item, 0, sizeof( SI_S1AP_DT_CancelledCellinTAI_Item));

	// L:486
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_CancelledCellinTAI_Item->eCGI);    // L:584

	obj_CancelledCellinTAI_Item->numberOfBroadcasts = __getTestINTEGER( 0, 65535);    // L:533


	*pCancelledCellinTAI_Item = obj_CancelledCellinTAI_Item;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__Cause( SI_S1AP_DT_Cause ** pCause)
{
	SI_S1AP_DT_Cause * obj_Cause = (SI_S1AP_DT_Cause*) __si_allocM( sizeof(SI_S1AP_DT_Cause));
	memset( obj_Cause, 0, sizeof( SI_S1AP_DT_Cause));

	obj_Cause->SelectedChoice = 0;

	// L:2784

	switch( obj_Cause->SelectedChoice)
	{
		case 0:
			obj_Cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;  // TODO: set enum   L:2894  ,  Parser:ENUMERATED, CauseRadioNetwork
			break;
		case 1:
			obj_Cause->u.transport = CauseTransport_transport_resource_unavailable_val;  // TODO: set enum   L:2894  ,  Parser:ENUMERATED, CauseTransport
			break;
		case 2:
			obj_Cause->u.nas = CauseNas_normal_release_val;  // TODO: set enum   L:2894  ,  Parser:ENUMERATED, CauseNas
			break;
		case 3:
			obj_Cause->u.protocol = CauseProtocol_transfer_syntax_error_val;  // TODO: set enum   L:2894  ,  Parser:ENUMERATED, CauseProtocol
			break;
		case 4:
			obj_Cause->u.misc = CauseMisc_control_processing_overload_val;  // TODO: set enum   L:2894  ,  Parser:ENUMERATED, CauseMisc
			break;
	}

	*pCause = obj_Cause;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CellIdentifierAndCELevelForCECapableUEs( SI_S1AP_DT_CellIdentifierAndCELevelForCECapableUEs ** pCellIdentifierAndCELevelForCECapableUEs)
{
	SI_S1AP_DT_CellIdentifierAndCELevelForCECapableUEs * obj_CellIdentifierAndCELevelForCECapableUEs = (SI_S1AP_DT_CellIdentifierAndCELevelForCECapableUEs*) __si_allocM( sizeof(SI_S1AP_DT_CellIdentifierAndCELevelForCECapableUEs));
	memset( obj_CellIdentifierAndCELevelForCECapableUEs, 0, sizeof( SI_S1AP_DT_CellIdentifierAndCELevelForCECapableUEs));

	// L:486
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_CellIdentifierAndCELevelForCECapableUEs->global_Cell_ID);    // L:584

	__si_s1ap_init_CELevel2( &obj_CellIdentifierAndCELevelForCECapableUEs->cELevel, "\x18\x18\x04\x02\x20", 5);    // L:540


	*pCellIdentifierAndCELevelForCECapableUEs = obj_CellIdentifierAndCELevelForCECapableUEs;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__CellID_Broadcast( SI_S1AP_DT_CellID_Broadcast ** pCellID_Broadcast)
{
	SI_S1AP_DT_CellID_Broadcast * obj_CellID_Broadcast = NULL; 
	__si_s1ap_init_CellID_Broadcast( &obj_CellID_Broadcast);

	// L:1260
	SI_S1AP_DT_CellID_Broadcast_Item * objCellID_Broadcast_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__CellID_Broadcast_Item( &objCellID_Broadcast_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_CellID_Broadcast->CellID_Broadcast_Item, (uint8_t*)objCellID_Broadcast_Item);

	*pCellID_Broadcast = obj_CellID_Broadcast;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CellID_Broadcast_Item( SI_S1AP_DT_CellID_Broadcast_Item ** pCellID_Broadcast_Item)
{
	SI_S1AP_DT_CellID_Broadcast_Item * obj_CellID_Broadcast_Item = (SI_S1AP_DT_CellID_Broadcast_Item*) __si_allocM( sizeof(SI_S1AP_DT_CellID_Broadcast_Item));
	memset( obj_CellID_Broadcast_Item, 0, sizeof( SI_S1AP_DT_CellID_Broadcast_Item));

	// L:486
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_CellID_Broadcast_Item->eCGI);    // L:584


	*pCellID_Broadcast_Item = obj_CellID_Broadcast_Item;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__CellID_Cancelled( SI_S1AP_DT_CellID_Cancelled ** pCellID_Cancelled)
{
	SI_S1AP_DT_CellID_Cancelled * obj_CellID_Cancelled = NULL; 
	__si_s1ap_init_CellID_Cancelled( &obj_CellID_Cancelled);

	// L:1260
	SI_S1AP_DT_CellID_Cancelled_Item * objCellID_Cancelled_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__CellID_Cancelled_Item( &objCellID_Cancelled_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_CellID_Cancelled->CellID_Cancelled_Item, (uint8_t*)objCellID_Cancelled_Item);

	*pCellID_Cancelled = obj_CellID_Cancelled;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CellID_Cancelled_Item( SI_S1AP_DT_CellID_Cancelled_Item ** pCellID_Cancelled_Item)
{
	SI_S1AP_DT_CellID_Cancelled_Item * obj_CellID_Cancelled_Item = (SI_S1AP_DT_CellID_Cancelled_Item*) __si_allocM( sizeof(SI_S1AP_DT_CellID_Cancelled_Item));
	memset( obj_CellID_Cancelled_Item, 0, sizeof( SI_S1AP_DT_CellID_Cancelled_Item));

	// L:486
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_CellID_Cancelled_Item->eCGI);    // L:584

	obj_CellID_Cancelled_Item->numberOfBroadcasts = __getTestINTEGER( 0, 65535);    // L:533


	*pCellID_Cancelled_Item = obj_CellID_Cancelled_Item;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CellBasedMDT( SI_S1AP_DT_CellBasedMDT ** pCellBasedMDT)
{
	SI_S1AP_DT_CellBasedMDT * obj_CellBasedMDT = (SI_S1AP_DT_CellBasedMDT*) __si_allocM( sizeof(SI_S1AP_DT_CellBasedMDT));
	memset( obj_CellBasedMDT, 0, sizeof( SI_S1AP_DT_CellBasedMDT));

	// L:486
	__si_s1ap__set_testdata__CellIdListforMDT( &obj_CellBasedMDT->cellIdListforMDT);    // L:580


	*pCellBasedMDT = obj_CellBasedMDT;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__CellIdListforMDT( SI_S1AP_DT_CellIdListforMDT ** pCellIdListforMDT)
{
	SI_S1AP_DT_CellIdListforMDT * obj_CellIdListforMDT = NULL; 
	__si_s1ap_init_CellIdListforMDT( &obj_CellIdListforMDT);

	// L:1260
	SI_S1AP_DT_EUTRAN_CGI * objEUTRAN_CGI = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__EUTRAN_CGI( &objEUTRAN_CGI);  // L:1395

	// L:1419
	__si_linked_list_add( obj_CellIdListforMDT->EUTRAN_CGI, (uint8_t*)objEUTRAN_CGI);

	*pCellIdListforMDT = obj_CellIdListforMDT;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CellBasedQMC( SI_S1AP_DT_CellBasedQMC ** pCellBasedQMC)
{
	SI_S1AP_DT_CellBasedQMC * obj_CellBasedQMC = (SI_S1AP_DT_CellBasedQMC*) __si_allocM( sizeof(SI_S1AP_DT_CellBasedQMC));
	memset( obj_CellBasedQMC, 0, sizeof( SI_S1AP_DT_CellBasedQMC));

	// L:486
	__si_s1ap__set_testdata__CellIdListforQMC( &obj_CellBasedQMC->cellIdListforQMC);    // L:580


	*pCellBasedQMC = obj_CellBasedQMC;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__CellIdListforQMC( SI_S1AP_DT_CellIdListforQMC ** pCellIdListforQMC)
{
	SI_S1AP_DT_CellIdListforQMC * obj_CellIdListforQMC = NULL; 
	__si_s1ap_init_CellIdListforQMC( &obj_CellIdListforQMC);

	// L:1260
	SI_S1AP_DT_EUTRAN_CGI * objEUTRAN_CGI = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__EUTRAN_CGI( &objEUTRAN_CGI);  // L:1395

	// L:1419
	__si_linked_list_add( obj_CellIdListforQMC->EUTRAN_CGI, (uint8_t*)objEUTRAN_CGI);

	*pCellIdListforQMC = obj_CellIdListforQMC;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__Cdma2000OneXSRVCCInfo( SI_S1AP_DT_Cdma2000OneXSRVCCInfo ** pCdma2000OneXSRVCCInfo)
{
	SI_S1AP_DT_Cdma2000OneXSRVCCInfo * obj_Cdma2000OneXSRVCCInfo = (SI_S1AP_DT_Cdma2000OneXSRVCCInfo*) __si_allocM( sizeof(SI_S1AP_DT_Cdma2000OneXSRVCCInfo));
	memset( obj_Cdma2000OneXSRVCCInfo, 0, sizeof( SI_S1AP_DT_Cdma2000OneXSRVCCInfo));

	// L:486
	__si_s1ap_init_Cdma2000OneXMEID2( &obj_Cdma2000OneXSRVCCInfo->cdma2000OneXMEID, "\x20\x11\x14\x10\x11", 5);    // L:540

	__si_s1ap_init_Cdma2000OneXMSI2( &obj_Cdma2000OneXSRVCCInfo->cdma2000OneXMSI, "\x04\x01\x15\x18\x14", 5);    // L:540

	__si_s1ap_init_Cdma2000OneXPilot2( &obj_Cdma2000OneXSRVCCInfo->cdma2000OneXPilot, "\x19\x05\x11\x03\x21", 5);    // L:540


	*pCdma2000OneXSRVCCInfo = obj_Cdma2000OneXSRVCCInfo;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CellType( SI_S1AP_DT_CellType ** pCellType)
{
	SI_S1AP_DT_CellType * obj_CellType = (SI_S1AP_DT_CellType*) __si_allocM( sizeof(SI_S1AP_DT_CellType));
	memset( obj_CellType, 0, sizeof( SI_S1AP_DT_CellType));

	// L:486
	obj_CellType->selected_ecell_Size = Cell_Size_verysmall_val;   // L:529


	*pCellType = obj_CellType;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CGI( SI_S1AP_DT_CGI ** pCGI)
{
	SI_S1AP_DT_CGI * obj_CGI = (SI_S1AP_DT_CGI*) __si_allocM( sizeof(SI_S1AP_DT_CGI));
	memset( obj_CGI, 0, sizeof( SI_S1AP_DT_CGI));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_CGI->pLMNidentity, "\x04\x03\x03\x16\x05", 5);    // L:540

	__si_s1ap_init_LAC2( &obj_CGI->lAC, "\x01\x12", 2);    // L:545

	__si_s1ap_init_CI2( &obj_CGI->cI, "\x12\x19", 2);    // L:545

	__si_s1ap_init_RAC2( &obj_CGI->rAC, "\x21", 1);    // L:545
	obj_CGI->isPresent_rAC = 1;


	*pCGI = obj_CGI;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__CNTypeRestrictions( SI_S1AP_DT_CNTypeRestrictions ** pCNTypeRestrictions)
{
	SI_S1AP_DT_CNTypeRestrictions * obj_CNTypeRestrictions = NULL; 
	__si_s1ap_init_CNTypeRestrictions( &obj_CNTypeRestrictions);

	// L:1260
	SI_S1AP_DT_CNTypeRestrictions_Item * objCNTypeRestrictions_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__CNTypeRestrictions_Item( &objCNTypeRestrictions_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_CNTypeRestrictions->CNTypeRestrictions_Item, (uint8_t*)objCNTypeRestrictions_Item);

	*pCNTypeRestrictions = obj_CNTypeRestrictions;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CNTypeRestrictions_Item( SI_S1AP_DT_CNTypeRestrictions_Item ** pCNTypeRestrictions_Item)
{
	SI_S1AP_DT_CNTypeRestrictions_Item * obj_CNTypeRestrictions_Item = (SI_S1AP_DT_CNTypeRestrictions_Item*) __si_allocM( sizeof(SI_S1AP_DT_CNTypeRestrictions_Item));
	memset( obj_CNTypeRestrictions_Item, 0, sizeof( SI_S1AP_DT_CNTypeRestrictions_Item));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_CNTypeRestrictions_Item->pLMN_Identity, "\x18\x07\x10\x06\x15", 5);    // L:540

	obj_CNTypeRestrictions_Item->selected_ecNType = CNType_fiveGCForbidden_val;   // L:529


	*pCNTypeRestrictions_Item = obj_CNTypeRestrictions_Item;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ConnectedengNBList( SI_S1AP_DT_ConnectedengNBList ** pConnectedengNBList)
{
	SI_S1AP_DT_ConnectedengNBList * obj_ConnectedengNBList = NULL; 
	__si_s1ap_init_ConnectedengNBList( &obj_ConnectedengNBList);

	// L:1260
	SI_S1AP_DT_ConnectedengNBItem * objConnectedengNBItem = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__ConnectedengNBItem( &objConnectedengNBItem);  // L:1395

	// L:1419
	__si_linked_list_add( obj_ConnectedengNBList->ConnectedengNBItem, (uint8_t*)objConnectedengNBItem);

	*pConnectedengNBList = obj_ConnectedengNBList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ConnectedengNBItem( SI_S1AP_DT_ConnectedengNBItem ** pConnectedengNBItem)
{
	SI_S1AP_DT_ConnectedengNBItem * obj_ConnectedengNBItem = (SI_S1AP_DT_ConnectedengNBItem*) __si_allocM( sizeof(SI_S1AP_DT_ConnectedengNBItem));
	memset( obj_ConnectedengNBItem, 0, sizeof( SI_S1AP_DT_ConnectedengNBItem));

	// L:486
	__si_s1ap_init_En_gNB_ID2( &obj_ConnectedengNBItem->en_gNB_ID, "650", 3, 22);  // L:574
	obj_ConnectedengNBItem->en_gNB_ID->bitslen = 22; //   L:575

	__si_s1ap__set_testdata__SupportedTAs( &obj_ConnectedengNBItem->supportedTAs);    // L:580


	*pConnectedengNBItem = obj_ConnectedengNBItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ContextatSource( SI_S1AP_DT_ContextatSource ** pContextatSource)
{
	SI_S1AP_DT_ContextatSource * obj_ContextatSource = (SI_S1AP_DT_ContextatSource*) __si_allocM( sizeof(SI_S1AP_DT_ContextatSource));
	memset( obj_ContextatSource, 0, sizeof( SI_S1AP_DT_ContextatSource));

	// L:486
	__si_s1ap__set_testdata__Global_RAN_NODE_ID( &obj_ContextatSource->sourceNG_RAN_node_ID);    // L:588

	obj_ContextatSource->rAN_UE_NGAP_ID = __getTestINTEGER( 0, 4294967295);    // L:533


	*pContextatSource = obj_ContextatSource;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__CSG_IdList( SI_S1AP_DT_CSG_IdList ** pCSG_IdList)
{
	SI_S1AP_DT_CSG_IdList * obj_CSG_IdList = NULL; 
	__si_s1ap_init_CSG_IdList( &obj_CSG_IdList);

	// L:1260
	SI_S1AP_DT_CSG_IdList_Item * objCSG_IdList_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__CSG_IdList_Item( &objCSG_IdList_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_CSG_IdList->CSG_IdList_Item, (uint8_t*)objCSG_IdList_Item);

	*pCSG_IdList = obj_CSG_IdList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CSG_IdList_Item( SI_S1AP_DT_CSG_IdList_Item ** pCSG_IdList_Item)
{
	SI_S1AP_DT_CSG_IdList_Item * obj_CSG_IdList_Item = (SI_S1AP_DT_CSG_IdList_Item*) __si_allocM( sizeof(SI_S1AP_DT_CSG_IdList_Item));
	memset( obj_CSG_IdList_Item, 0, sizeof( SI_S1AP_DT_CSG_IdList_Item));

	// L:486
	__si_s1ap_init_CSG_Id2( &obj_CSG_IdList_Item->cSG_Id, "1501", 4, 27);  // L:574
	obj_CSG_IdList_Item->cSG_Id->bitslen = 27; //   L:575


	*pCSG_IdList_Item = obj_CSG_IdList_Item;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__COUNTvalue( SI_S1AP_DT_COUNTvalue ** pCOUNTvalue)
{
	SI_S1AP_DT_COUNTvalue * obj_COUNTvalue = (SI_S1AP_DT_COUNTvalue*) __si_allocM( sizeof(SI_S1AP_DT_COUNTvalue));
	memset( obj_COUNTvalue, 0, sizeof( SI_S1AP_DT_COUNTvalue));

	// L:486
	obj_COUNTvalue->pDCP_SN = __getTestINTEGER( 0, 4095);    // L:533

	obj_COUNTvalue->hFN = __getTestINTEGER( 0, 1048575);    // L:533


	*pCOUNTvalue = obj_COUNTvalue;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__COUNTValueExtended( SI_S1AP_DT_COUNTValueExtended ** pCOUNTValueExtended)
{
	SI_S1AP_DT_COUNTValueExtended * obj_COUNTValueExtended = (SI_S1AP_DT_COUNTValueExtended*) __si_allocM( sizeof(SI_S1AP_DT_COUNTValueExtended));
	memset( obj_COUNTValueExtended, 0, sizeof( SI_S1AP_DT_COUNTValueExtended));

	// L:486
	obj_COUNTValueExtended->pDCP_SNExtended = __getTestINTEGER( 0, 32767);    // L:533

	obj_COUNTValueExtended->hFNModified = __getTestINTEGER( 0, 131071);    // L:533


	*pCOUNTValueExtended = obj_COUNTValueExtended;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__COUNTvaluePDCP_SNlength18( SI_S1AP_DT_COUNTvaluePDCP_SNlength18 ** pCOUNTvaluePDCP_SNlength18)
{
	SI_S1AP_DT_COUNTvaluePDCP_SNlength18 * obj_COUNTvaluePDCP_SNlength18 = (SI_S1AP_DT_COUNTvaluePDCP_SNlength18*) __si_allocM( sizeof(SI_S1AP_DT_COUNTvaluePDCP_SNlength18));
	memset( obj_COUNTvaluePDCP_SNlength18, 0, sizeof( SI_S1AP_DT_COUNTvaluePDCP_SNlength18));

	// L:486
	obj_COUNTvaluePDCP_SNlength18->pDCP_SNlength18 = __getTestINTEGER( 0, 262143);    // L:533

	obj_COUNTvaluePDCP_SNlength18->hFNforPDCP_SNlength18 = __getTestINTEGER( 0, 16383);    // L:533


	*pCOUNTvaluePDCP_SNlength18 = obj_COUNTvaluePDCP_SNlength18;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CriticalityDiagnostics( SI_S1AP_DT_CriticalityDiagnostics ** pCriticalityDiagnostics)
{
	SI_S1AP_DT_CriticalityDiagnostics * obj_CriticalityDiagnostics = (SI_S1AP_DT_CriticalityDiagnostics*) __si_allocM( sizeof(SI_S1AP_DT_CriticalityDiagnostics));
	memset( obj_CriticalityDiagnostics, 0, sizeof( SI_S1AP_DT_CriticalityDiagnostics));

	// L:486
	//  Unknown Type=ProcedureCode  L:606
	//  Unknown Type=TriggeringMessage  L:606
	//  Unknown Type=Criticality  L:606
	__si_s1ap__set_testdata__CriticalityDiagnostics_IE_List( &obj_CriticalityDiagnostics->iEsCriticalityDiagnostics);    // L:580
	obj_CriticalityDiagnostics->isPresent_iEsCriticalityDiagnostics = 1;


	*pCriticalityDiagnostics = obj_CriticalityDiagnostics;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__CriticalityDiagnostics_IE_List( SI_S1AP_DT_CriticalityDiagnostics_IE_List ** pCriticalityDiagnostics_IE_List)
{
	SI_S1AP_DT_CriticalityDiagnostics_IE_List * obj_CriticalityDiagnostics_IE_List = NULL; 
	__si_s1ap_init_CriticalityDiagnostics_IE_List( &obj_CriticalityDiagnostics_IE_List);

	// L:1260
	SI_S1AP_DT_CriticalityDiagnostics_IE_Item * objCriticalityDiagnostics_IE_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__CriticalityDiagnostics_IE_Item( &objCriticalityDiagnostics_IE_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_CriticalityDiagnostics_IE_List->CriticalityDiagnostics_IE_Item, (uint8_t*)objCriticalityDiagnostics_IE_Item);

	*pCriticalityDiagnostics_IE_List = obj_CriticalityDiagnostics_IE_List;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CriticalityDiagnostics_IE_Item( SI_S1AP_DT_CriticalityDiagnostics_IE_Item ** pCriticalityDiagnostics_IE_Item)
{
	SI_S1AP_DT_CriticalityDiagnostics_IE_Item * obj_CriticalityDiagnostics_IE_Item = (SI_S1AP_DT_CriticalityDiagnostics_IE_Item*) __si_allocM( sizeof(SI_S1AP_DT_CriticalityDiagnostics_IE_Item));
	memset( obj_CriticalityDiagnostics_IE_Item, 0, sizeof( SI_S1AP_DT_CriticalityDiagnostics_IE_Item));

	// L:486
	//  Unknown Type=Criticality  L:606
	//  Unknown Type=ProtocolIE-ID  L:606
	obj_CriticalityDiagnostics_IE_Item->selected_etypeOfError = TypeOfError_not_understood_val;   // L:529


	*pCriticalityDiagnostics_IE_Item = obj_CriticalityDiagnostics_IE_Item;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__DAPSRequestInfo( SI_S1AP_DT_DAPSRequestInfo ** pDAPSRequestInfo)
{
	SI_S1AP_DT_DAPSRequestInfo * obj_DAPSRequestInfo = (SI_S1AP_DT_DAPSRequestInfo*) __si_allocM( sizeof(SI_S1AP_DT_DAPSRequestInfo));
	memset( obj_DAPSRequestInfo, 0, sizeof( SI_S1AP_DT_DAPSRequestInfo));

	// L:486
	obj_DAPSRequestInfo->selected_edAPSIndicator = DAPSRequestInfo_dAPSIndicator_dAPS_HO_required_val;   // L:529


	*pDAPSRequestInfo = obj_DAPSRequestInfo;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__DAPSResponseInfoList( SI_S1AP_DT_DAPSResponseInfoList ** pDAPSResponseInfoList)
{
	SI_S1AP_DT_DAPSResponseInfoList * obj_DAPSResponseInfoList = NULL; 
	__si_s1ap_init_DAPSResponseInfoList( &obj_DAPSResponseInfoList);

	// L:1260
	SI_S1AP_DT_DAPSResponseInfoListIEs * objDAPSResponseInfoListIEs = NULL;
	//CONTAINER // L:1394
	//__si_s1ap__set_testdata__DAPSResponseInfoListIEs( &objDAPSResponseInfoListIEs);  // L:1395

	// L:1412
	__si_linked_list_add( obj_DAPSResponseInfoList->list, (uint8_t*)objDAPSResponseInfoListIEs);

	*pDAPSResponseInfoList = obj_DAPSResponseInfoList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__DAPSResponseInfoItem( SI_S1AP_DT_DAPSResponseInfoItem ** pDAPSResponseInfoItem)
{
	SI_S1AP_DT_DAPSResponseInfoItem * obj_DAPSResponseInfoItem = (SI_S1AP_DT_DAPSResponseInfoItem*) __si_allocM( sizeof(SI_S1AP_DT_DAPSResponseInfoItem));
	memset( obj_DAPSResponseInfoItem, 0, sizeof( SI_S1AP_DT_DAPSResponseInfoItem));

	// L:486
	obj_DAPSResponseInfoItem->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap__set_testdata__DAPSResponseInfo( &obj_DAPSResponseInfoItem->dAPSResponseInfo);    // L:584


	*pDAPSResponseInfoItem = obj_DAPSResponseInfoItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__DAPSResponseInfo( SI_S1AP_DT_DAPSResponseInfo ** pDAPSResponseInfo)
{
	SI_S1AP_DT_DAPSResponseInfo * obj_DAPSResponseInfo = (SI_S1AP_DT_DAPSResponseInfo*) __si_allocM( sizeof(SI_S1AP_DT_DAPSResponseInfo));
	memset( obj_DAPSResponseInfo, 0, sizeof( SI_S1AP_DT_DAPSResponseInfo));

	// L:486
	obj_DAPSResponseInfo->selected_edapsresponseindicator = DAPSResponseInfo_dapsresponseindicator_dAPS_HO_accepted_val;   // L:529


	*pDAPSResponseInfo = obj_DAPSResponseInfo;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ServedDCNs( SI_S1AP_DT_ServedDCNs ** pServedDCNs)
{
	SI_S1AP_DT_ServedDCNs * obj_ServedDCNs = NULL; 
	__si_s1ap_init_ServedDCNs( &obj_ServedDCNs);

	// L:1260
	SI_S1AP_DT_ServedDCNsItem * objServedDCNsItem = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__ServedDCNsItem( &objServedDCNsItem);  // L:1395

	// L:1419
	__si_linked_list_add( obj_ServedDCNs->ServedDCNsItem, (uint8_t*)objServedDCNsItem);

	*pServedDCNs = obj_ServedDCNs;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ServedDCNsItem( SI_S1AP_DT_ServedDCNsItem ** pServedDCNsItem)
{
	SI_S1AP_DT_ServedDCNsItem * obj_ServedDCNsItem = (SI_S1AP_DT_ServedDCNsItem*) __si_allocM( sizeof(SI_S1AP_DT_ServedDCNsItem));
	memset( obj_ServedDCNsItem, 0, sizeof( SI_S1AP_DT_ServedDCNsItem));

	// L:486
	obj_ServedDCNsItem->dCN_ID = __getTestINTEGER( 0, 65535);    // L:533

	obj_ServedDCNsItem->relativeDCNCapacity = __getTestINTEGER( 0, 255);    // L:533


	*pServedDCNsItem = obj_ServedDCNsItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__DL_CP_SecurityInformation( SI_S1AP_DT_DL_CP_SecurityInformation ** pDL_CP_SecurityInformation)
{
	SI_S1AP_DT_DL_CP_SecurityInformation * obj_DL_CP_SecurityInformation = (SI_S1AP_DT_DL_CP_SecurityInformation*) __si_allocM( sizeof(SI_S1AP_DT_DL_CP_SecurityInformation));
	memset( obj_DL_CP_SecurityInformation, 0, sizeof( SI_S1AP_DT_DL_CP_SecurityInformation));

	// L:486
	__si_s1ap_init_DL_NAS_MAC2( &obj_DL_CP_SecurityInformation->dl_NAS_MAC, "64", 2, 16);  // L:574
	obj_DL_CP_SecurityInformation->dl_NAS_MAC->bitslen = 16; //   L:575


	*pDL_CP_SecurityInformation = obj_DL_CP_SecurityInformation;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__DLCOUNT_PDCP_SNlength( SI_S1AP_DT_DLCOUNT_PDCP_SNlength ** pDLCOUNT_PDCP_SNlength)
{
	SI_S1AP_DT_DLCOUNT_PDCP_SNlength * obj_DLCOUNT_PDCP_SNlength = (SI_S1AP_DT_DLCOUNT_PDCP_SNlength*) __si_allocM( sizeof(SI_S1AP_DT_DLCOUNT_PDCP_SNlength));
	memset( obj_DLCOUNT_PDCP_SNlength, 0, sizeof( SI_S1AP_DT_DLCOUNT_PDCP_SNlength));

	obj_DLCOUNT_PDCP_SNlength->SelectedChoice = 0;

	// L:2784

	switch( obj_DLCOUNT_PDCP_SNlength->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__COUNTvalue( &obj_DLCOUNT_PDCP_SNlength->u.dLCOUNTValuePDCP_SNlength12);  // L:2910  ,  Parser:SEQUENCE, COUNTvalue
			break;
		case 1:
			__si_s1ap__set_testdata__COUNTValueExtended( &obj_DLCOUNT_PDCP_SNlength->u.dLCOUNTValuePDCP_SNlength15);  // L:2910  ,  Parser:SEQUENCE, COUNTValueExtended
			break;
		case 2:
			__si_s1ap__set_testdata__COUNTvaluePDCP_SNlength18( &obj_DLCOUNT_PDCP_SNlength->u.dLCOUNTValuePDCP_SNlength18);  // L:2910  ,  Parser:SEQUENCE, COUNTvaluePDCP-SNlength18
			break;
	}

	*pDLCOUNT_PDCP_SNlength = obj_DLCOUNT_PDCP_SNlength;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__DLDiscarding( SI_S1AP_DT_DLDiscarding ** pDLDiscarding)
{
	SI_S1AP_DT_DLDiscarding * obj_DLDiscarding = (SI_S1AP_DT_DLDiscarding*) __si_allocM( sizeof(SI_S1AP_DT_DLDiscarding));
	memset( obj_DLDiscarding, 0, sizeof( SI_S1AP_DT_DLDiscarding));

	obj_DLDiscarding->SelectedChoice = 0;

	// L:2784

	switch( obj_DLDiscarding->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__COUNTvalue( &obj_DLDiscarding->u.discardDLCOUNTValuePDCP_SNlength12);  // L:2910  ,  Parser:SEQUENCE, COUNTvalue
			break;
		case 1:
			__si_s1ap__set_testdata__COUNTValueExtended( &obj_DLDiscarding->u.discardDLCOUNTValuePDCP_SNlength15);  // L:2910  ,  Parser:SEQUENCE, COUNTValueExtended
			break;
		case 2:
			__si_s1ap__set_testdata__COUNTvaluePDCP_SNlength18( &obj_DLDiscarding->u.discardDLCOUNTValuePDCP_SNlength18);  // L:2910  ,  Parser:SEQUENCE, COUNTvaluePDCP-SNlength18
			break;
	}

	*pDLDiscarding = obj_DLDiscarding;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ECGIList( SI_S1AP_DT_ECGIList ** pECGIList)
{
	SI_S1AP_DT_ECGIList * obj_ECGIList = NULL; 
	__si_s1ap_init_ECGIList( &obj_ECGIList);

	// L:1260
	SI_S1AP_DT_EUTRAN_CGI * objEUTRAN_CGI = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__EUTRAN_CGI( &objEUTRAN_CGI);  // L:1395

	// L:1419
	__si_linked_list_add( obj_ECGIList->EUTRAN_CGI, (uint8_t*)objEUTRAN_CGI);

	*pECGIList = obj_ECGIList;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__PWSfailedECGIList( SI_S1AP_DT_PWSfailedECGIList ** pPWSfailedECGIList)
{
	SI_S1AP_DT_PWSfailedECGIList * obj_PWSfailedECGIList = NULL; 
	__si_s1ap_init_PWSfailedECGIList( &obj_PWSfailedECGIList);

	// L:1260
	SI_S1AP_DT_EUTRAN_CGI * objEUTRAN_CGI = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__EUTRAN_CGI( &objEUTRAN_CGI);  // L:1395

	// L:1419
	__si_linked_list_add( obj_PWSfailedECGIList->EUTRAN_CGI, (uint8_t*)objEUTRAN_CGI);

	*pPWSfailedECGIList = obj_PWSfailedECGIList;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__EmergencyAreaIDList( SI_S1AP_DT_EmergencyAreaIDList ** pEmergencyAreaIDList)
{
	SI_S1AP_DT_EmergencyAreaIDList * obj_EmergencyAreaIDList = NULL; 
	__si_s1ap_init_EmergencyAreaIDList( &obj_EmergencyAreaIDList);

	// L:1260
	SI_S1AP_DT_EmergencyAreaID * objEmergencyAreaID = NULL;

	// OCTETSTRING  , EmergencyAreaID  // L:1348
	__si_s1ap_init_EmergencyAreaID2( &objEmergencyAreaID, "\x07\x18\x16", 3);


	// L:1419
	__si_linked_list_add( obj_EmergencyAreaIDList->EmergencyAreaID, (uint8_t*)objEmergencyAreaID);

	*pEmergencyAreaIDList = obj_EmergencyAreaIDList;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__EmergencyAreaID_Broadcast( SI_S1AP_DT_EmergencyAreaID_Broadcast ** pEmergencyAreaID_Broadcast)
{
	SI_S1AP_DT_EmergencyAreaID_Broadcast * obj_EmergencyAreaID_Broadcast = NULL; 
	__si_s1ap_init_EmergencyAreaID_Broadcast( &obj_EmergencyAreaID_Broadcast);

	// L:1260
	SI_S1AP_DT_EmergencyAreaID_Broadcast_Item * objEmergencyAreaID_Broadcast_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__EmergencyAreaID_Broadcast_Item( &objEmergencyAreaID_Broadcast_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_EmergencyAreaID_Broadcast->EmergencyAreaID_Broadcast_Item, (uint8_t*)objEmergencyAreaID_Broadcast_Item);

	*pEmergencyAreaID_Broadcast = obj_EmergencyAreaID_Broadcast;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__EmergencyAreaID_Broadcast_Item( SI_S1AP_DT_EmergencyAreaID_Broadcast_Item ** pEmergencyAreaID_Broadcast_Item)
{
	SI_S1AP_DT_EmergencyAreaID_Broadcast_Item * obj_EmergencyAreaID_Broadcast_Item = (SI_S1AP_DT_EmergencyAreaID_Broadcast_Item*) __si_allocM( sizeof(SI_S1AP_DT_EmergencyAreaID_Broadcast_Item));
	memset( obj_EmergencyAreaID_Broadcast_Item, 0, sizeof( SI_S1AP_DT_EmergencyAreaID_Broadcast_Item));

	// L:486
	__si_s1ap_init_EmergencyAreaID2( &obj_EmergencyAreaID_Broadcast_Item->emergencyAreaID, "\x03\x06\x15", 3);    // L:545

	__si_s1ap__set_testdata__CompletedCellinEAI( &obj_EmergencyAreaID_Broadcast_Item->completedCellinEAI);    // L:580


	*pEmergencyAreaID_Broadcast_Item = obj_EmergencyAreaID_Broadcast_Item;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__EmergencyAreaID_Cancelled( SI_S1AP_DT_EmergencyAreaID_Cancelled ** pEmergencyAreaID_Cancelled)
{
	SI_S1AP_DT_EmergencyAreaID_Cancelled * obj_EmergencyAreaID_Cancelled = NULL; 
	__si_s1ap_init_EmergencyAreaID_Cancelled( &obj_EmergencyAreaID_Cancelled);

	// L:1260
	SI_S1AP_DT_EmergencyAreaID_Cancelled_Item * objEmergencyAreaID_Cancelled_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__EmergencyAreaID_Cancelled_Item( &objEmergencyAreaID_Cancelled_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_EmergencyAreaID_Cancelled->EmergencyAreaID_Cancelled_Item, (uint8_t*)objEmergencyAreaID_Cancelled_Item);

	*pEmergencyAreaID_Cancelled = obj_EmergencyAreaID_Cancelled;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__EmergencyAreaID_Cancelled_Item( SI_S1AP_DT_EmergencyAreaID_Cancelled_Item ** pEmergencyAreaID_Cancelled_Item)
{
	SI_S1AP_DT_EmergencyAreaID_Cancelled_Item * obj_EmergencyAreaID_Cancelled_Item = (SI_S1AP_DT_EmergencyAreaID_Cancelled_Item*) __si_allocM( sizeof(SI_S1AP_DT_EmergencyAreaID_Cancelled_Item));
	memset( obj_EmergencyAreaID_Cancelled_Item, 0, sizeof( SI_S1AP_DT_EmergencyAreaID_Cancelled_Item));

	// L:486
	__si_s1ap_init_EmergencyAreaID2( &obj_EmergencyAreaID_Cancelled_Item->emergencyAreaID, "\x03\x13\x11", 3);    // L:545

	__si_s1ap__set_testdata__CancelledCellinEAI( &obj_EmergencyAreaID_Cancelled_Item->cancelledCellinEAI);    // L:580


	*pEmergencyAreaID_Cancelled_Item = obj_EmergencyAreaID_Cancelled_Item;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__CompletedCellinEAI( SI_S1AP_DT_CompletedCellinEAI ** pCompletedCellinEAI)
{
	SI_S1AP_DT_CompletedCellinEAI * obj_CompletedCellinEAI = NULL; 
	__si_s1ap_init_CompletedCellinEAI( &obj_CompletedCellinEAI);

	// L:1260
	SI_S1AP_DT_CompletedCellinEAI_Item * objCompletedCellinEAI_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__CompletedCellinEAI_Item( &objCompletedCellinEAI_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_CompletedCellinEAI->CompletedCellinEAI_Item, (uint8_t*)objCompletedCellinEAI_Item);

	*pCompletedCellinEAI = obj_CompletedCellinEAI;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CompletedCellinEAI_Item( SI_S1AP_DT_CompletedCellinEAI_Item ** pCompletedCellinEAI_Item)
{
	SI_S1AP_DT_CompletedCellinEAI_Item * obj_CompletedCellinEAI_Item = (SI_S1AP_DT_CompletedCellinEAI_Item*) __si_allocM( sizeof(SI_S1AP_DT_CompletedCellinEAI_Item));
	memset( obj_CompletedCellinEAI_Item, 0, sizeof( SI_S1AP_DT_CompletedCellinEAI_Item));

	// L:486
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_CompletedCellinEAI_Item->eCGI);    // L:584


	*pCompletedCellinEAI_Item = obj_CompletedCellinEAI_Item;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ECGI_List( SI_S1AP_DT_ECGI_List ** pECGI_List)
{
	SI_S1AP_DT_ECGI_List * obj_ECGI_List = NULL; 
	__si_s1ap_init_ECGI_List( &obj_ECGI_List);

	// L:1260
	SI_S1AP_DT_EUTRAN_CGI * objEUTRAN_CGI = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__EUTRAN_CGI( &objEUTRAN_CGI);  // L:1395

	// L:1419
	__si_linked_list_add( obj_ECGI_List->EUTRAN_CGI, (uint8_t*)objEUTRAN_CGI);

	*pECGI_List = obj_ECGI_List;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__EmergencyAreaIDListForRestart( SI_S1AP_DT_EmergencyAreaIDListForRestart ** pEmergencyAreaIDListForRestart)
{
	SI_S1AP_DT_EmergencyAreaIDListForRestart * obj_EmergencyAreaIDListForRestart = NULL; 
	__si_s1ap_init_EmergencyAreaIDListForRestart( &obj_EmergencyAreaIDListForRestart);

	// L:1260
	SI_S1AP_DT_EmergencyAreaID * objEmergencyAreaID = NULL;

	// OCTETSTRING  , EmergencyAreaID  // L:1348
	__si_s1ap_init_EmergencyAreaID2( &objEmergencyAreaID, "\x16\x11\x05", 3);


	// L:1419
	__si_linked_list_add( obj_EmergencyAreaIDListForRestart->EmergencyAreaID, (uint8_t*)objEmergencyAreaID);

	*pEmergencyAreaIDListForRestart = obj_EmergencyAreaIDListForRestart;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ENB_EarlyStatusTransfer_TransparentContainer( SI_S1AP_DT_ENB_EarlyStatusTransfer_TransparentContainer ** pENB_EarlyStatusTransfer_TransparentContainer)
{
	SI_S1AP_DT_ENB_EarlyStatusTransfer_TransparentContainer * obj_ENB_EarlyStatusTransfer_TransparentContainer = (SI_S1AP_DT_ENB_EarlyStatusTransfer_TransparentContainer*) __si_allocM( sizeof(SI_S1AP_DT_ENB_EarlyStatusTransfer_TransparentContainer));
	memset( obj_ENB_EarlyStatusTransfer_TransparentContainer, 0, sizeof( SI_S1AP_DT_ENB_EarlyStatusTransfer_TransparentContainer));

	// L:486
	__si_s1ap__set_testdata__Bearers_SubjectToEarlyStatusTransferList( &obj_ENB_EarlyStatusTransfer_TransparentContainer->bearers_SubjectToEarlyStatusTransferList);    // L:580


	*pENB_EarlyStatusTransfer_TransparentContainer = obj_ENB_EarlyStatusTransfer_TransparentContainer;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__ENB_ID( SI_S1AP_DT_ENB_ID ** pENB_ID)
{
	SI_S1AP_DT_ENB_ID * obj_ENB_ID = (SI_S1AP_DT_ENB_ID*) __si_allocM( sizeof(SI_S1AP_DT_ENB_ID));
	memset( obj_ENB_ID, 0, sizeof( SI_S1AP_DT_ENB_ID));

	obj_ENB_ID->SelectedChoice = 0;

	// L:2784

	switch( obj_ENB_ID->SelectedChoice)
	{
		case 0:
				__si_s1ap_init_ENBID_macroENB_ID2( &obj_ENB_ID->u.macroENB_ID, "152", 3, 20);  // L:2837
				obj_ENB_ID->u.macroENB_ID->bitslen = 20; //   L:2838
			break;
		case 1:
				__si_s1ap_init_ENBID_homeENB_ID2( &obj_ENB_ID->u.homeENB_ID, "2484", 4, 28);  // L:2837
				obj_ENB_ID->u.homeENB_ID->bitslen = 28; //   L:2838
			break;
		case 2:
				//__si_s1ap_init_ENBID_short_macroENB_ID2( &obj_ENB_ID->u.short_macroENB_ID, "829", 3, 18);  // L:2837
				//obj_ENB_ID->u.short_macroENB_ID->bitslen = 18; //   L:2838
			break;
		case 3:
				//__si_s1ap_init_ENBID_long_macroENB_ID2( &obj_ENB_ID->u.long_macroENB_ID, "585", 3, 21);  // L:2837
				//obj_ENB_ID->u.long_macroENB_ID->bitslen = 21; //   L:2838
			break;
	}

	*pENB_ID = obj_ENB_ID;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__GERAN_Cell_ID( SI_S1AP_DT_GERAN_Cell_ID ** pGERAN_Cell_ID)
{
	SI_S1AP_DT_GERAN_Cell_ID * obj_GERAN_Cell_ID = (SI_S1AP_DT_GERAN_Cell_ID*) __si_allocM( sizeof(SI_S1AP_DT_GERAN_Cell_ID));
	memset( obj_GERAN_Cell_ID, 0, sizeof( SI_S1AP_DT_GERAN_Cell_ID));

	// L:486
	__si_s1ap__set_testdata__LAI( &obj_GERAN_Cell_ID->lAI);    // L:584

	__si_s1ap_init_RAC2( &obj_GERAN_Cell_ID->rAC, "\x02", 1);    // L:545

	__si_s1ap_init_CI2( &obj_GERAN_Cell_ID->cI, "\x02\x19", 2);    // L:545


	*pGERAN_Cell_ID = obj_GERAN_Cell_ID;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__Global_ENB_ID( SI_S1AP_DT_Global_ENB_ID ** pGlobal_ENB_ID)
{
	SI_S1AP_DT_Global_ENB_ID * obj_Global_ENB_ID = (SI_S1AP_DT_Global_ENB_ID*) __si_allocM( sizeof(SI_S1AP_DT_Global_ENB_ID));
	memset( obj_Global_ENB_ID, 0, sizeof( SI_S1AP_DT_Global_ENB_ID));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_Global_ENB_ID->pLMNidentity, "\x01\x15\x03\x11\x16", 5);    // L:540

	__si_s1ap__set_testdata__ENB_ID( &obj_Global_ENB_ID->eNB_ID);    // L:588


	*pGlobal_ENB_ID = obj_Global_ENB_ID;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__Global_en_gNB_ID( SI_S1AP_DT_Global_en_gNB_ID ** pGlobal_en_gNB_ID)
{
	SI_S1AP_DT_Global_en_gNB_ID * obj_Global_en_gNB_ID = (SI_S1AP_DT_Global_en_gNB_ID*) __si_allocM( sizeof(SI_S1AP_DT_Global_en_gNB_ID));
	memset( obj_Global_en_gNB_ID, 0, sizeof( SI_S1AP_DT_Global_en_gNB_ID));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_Global_en_gNB_ID->pLMNidentity, "\x19\x16\x05\x24\x01", 5);    // L:540

	__si_s1ap_init_En_gNB_ID2( &obj_Global_en_gNB_ID->en_gNB_ID, "338", 3, 22);  // L:574
	obj_Global_en_gNB_ID->en_gNB_ID->bitslen = 22; //   L:575


	*pGlobal_en_gNB_ID = obj_Global_en_gNB_ID;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__GUMMEIList( SI_S1AP_DT_GUMMEIList ** pGUMMEIList)
{
	SI_S1AP_DT_GUMMEIList * obj_GUMMEIList = NULL; 
	__si_s1ap_init_GUMMEIList( &obj_GUMMEIList);

	// L:1260
	SI_S1AP_DT_GUMMEI * objGUMMEI = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__GUMMEI( &objGUMMEI);  // L:1395

	// L:1419
	__si_linked_list_add( obj_GUMMEIList->GUMMEI, (uint8_t*)objGUMMEI);

	*pGUMMEIList = obj_GUMMEIList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ENB_StatusTransfer_TransparentContainer( SI_S1AP_DT_ENB_StatusTransfer_TransparentContainer ** pENB_StatusTransfer_TransparentContainer)
{
	SI_S1AP_DT_ENB_StatusTransfer_TransparentContainer * obj_ENB_StatusTransfer_TransparentContainer = (SI_S1AP_DT_ENB_StatusTransfer_TransparentContainer*) __si_allocM( sizeof(SI_S1AP_DT_ENB_StatusTransfer_TransparentContainer));
	memset( obj_ENB_StatusTransfer_TransparentContainer, 0, sizeof( SI_S1AP_DT_ENB_StatusTransfer_TransparentContainer));

	// L:486
	__si_s1ap__set_testdata__Bearers_SubjectToStatusTransferList( &obj_ENB_StatusTransfer_TransparentContainer->bearers_SubjectToStatusTransferList);    // L:580


	*pENB_StatusTransfer_TransparentContainer = obj_ENB_StatusTransfer_TransparentContainer;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ENBX2TLAs( SI_S1AP_DT_ENBX2TLAs ** pENBX2TLAs)
{
	SI_S1AP_DT_ENBX2TLAs * obj_ENBX2TLAs = NULL; 
	__si_s1ap_init_ENBX2TLAs( &obj_ENBX2TLAs);

	// L:1260
	SI_S1AP_DT_TransportLayerAddress * objTransportLayerAddress = NULL;

	// BITSTRING  , TransportLayerAddress  // L:1327
	__si_s1ap_init_TransportLayerAddress2( &objTransportLayerAddress, "2", 1, 1);


	// L:1419
	__si_linked_list_add( obj_ENBX2TLAs->TransportLayerAddress, (uint8_t*)objTransportLayerAddress);

	*pENBX2TLAs = obj_ENBX2TLAs;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__EN_DCSONConfigurationTransfer( SI_S1AP_DT_EN_DCSONConfigurationTransfer ** pEN_DCSONConfigurationTransfer)
{
	SI_S1AP_DT_EN_DCSONConfigurationTransfer * obj_EN_DCSONConfigurationTransfer = (SI_S1AP_DT_EN_DCSONConfigurationTransfer*) __si_allocM( sizeof(SI_S1AP_DT_EN_DCSONConfigurationTransfer));
	memset( obj_EN_DCSONConfigurationTransfer, 0, sizeof( SI_S1AP_DT_EN_DCSONConfigurationTransfer));

	// L:486
	__si_s1ap__set_testdata__EN_DCSONTransferType( &obj_EN_DCSONConfigurationTransfer->transfertype);    // L:588

	__si_s1ap__set_testdata__SONInformation( &obj_EN_DCSONConfigurationTransfer->sONInformation);    // L:588

	__si_s1ap__set_testdata__X2TNLConfigurationInfo( &obj_EN_DCSONConfigurationTransfer->x2TNLConfigInfo);    // L:584
	obj_EN_DCSONConfigurationTransfer->isPresent_x2TNLConfigInfo = 1;


	*pEN_DCSONConfigurationTransfer = obj_EN_DCSONConfigurationTransfer;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__EN_DCSONTransferType( SI_S1AP_DT_EN_DCSONTransferType ** pEN_DCSONTransferType)
{
	SI_S1AP_DT_EN_DCSONTransferType * obj_EN_DCSONTransferType = (SI_S1AP_DT_EN_DCSONTransferType*) __si_allocM( sizeof(SI_S1AP_DT_EN_DCSONTransferType));
	memset( obj_EN_DCSONTransferType, 0, sizeof( SI_S1AP_DT_EN_DCSONTransferType));

	obj_EN_DCSONTransferType->SelectedChoice = 0;

	// L:2784

	switch( obj_EN_DCSONTransferType->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__EN_DCTransferTypeRequest( &obj_EN_DCSONTransferType->u.request);  // L:2910  ,  Parser:SEQUENCE, EN-DCTransferTypeRequest
			break;
		case 1:
			__si_s1ap__set_testdata__EN_DCTransferTypeReply( &obj_EN_DCSONTransferType->u.reply);  // L:2910  ,  Parser:SEQUENCE, EN-DCTransferTypeReply
			break;
	}

	*pEN_DCSONTransferType = obj_EN_DCSONTransferType;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__EN_DCTransferTypeRequest( SI_S1AP_DT_EN_DCTransferTypeRequest ** pEN_DCTransferTypeRequest)
{
	SI_S1AP_DT_EN_DCTransferTypeRequest * obj_EN_DCTransferTypeRequest = (SI_S1AP_DT_EN_DCTransferTypeRequest*) __si_allocM( sizeof(SI_S1AP_DT_EN_DCTransferTypeRequest));
	memset( obj_EN_DCTransferTypeRequest, 0, sizeof( SI_S1AP_DT_EN_DCTransferTypeRequest));

	// L:486
	__si_s1ap__set_testdata__EN_DCSONeNBIdentification( &obj_EN_DCTransferTypeRequest->sourceeNB);    // L:584

	__si_s1ap__set_testdata__EN_DCSONengNBIdentification( &obj_EN_DCTransferTypeRequest->targetengNB);    // L:584

	__si_s1ap__set_testdata__EN_DCSONeNBIdentification( &obj_EN_DCTransferTypeRequest->targeteNB);    // L:584
	obj_EN_DCTransferTypeRequest->isPresent_targeteNB = 1;

	__si_s1ap__set_testdata__TAI( &obj_EN_DCTransferTypeRequest->associatedTAI);    // L:584
	obj_EN_DCTransferTypeRequest->isPresent_associatedTAI = 1;

	__si_s1ap__set_testdata__FiveGSTAI( &obj_EN_DCTransferTypeRequest->broadcast5GSTAI);    // L:584
	obj_EN_DCTransferTypeRequest->isPresent_broadcast5GSTAI = 1;


	*pEN_DCTransferTypeRequest = obj_EN_DCTransferTypeRequest;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__EN_DCTransferTypeReply( SI_S1AP_DT_EN_DCTransferTypeReply ** pEN_DCTransferTypeReply)
{
	SI_S1AP_DT_EN_DCTransferTypeReply * obj_EN_DCTransferTypeReply = (SI_S1AP_DT_EN_DCTransferTypeReply*) __si_allocM( sizeof(SI_S1AP_DT_EN_DCTransferTypeReply));
	memset( obj_EN_DCTransferTypeReply, 0, sizeof( SI_S1AP_DT_EN_DCTransferTypeReply));

	// L:486
	__si_s1ap__set_testdata__EN_DCSONengNBIdentification( &obj_EN_DCTransferTypeReply->sourceengNB);    // L:584

	__si_s1ap__set_testdata__EN_DCSONeNBIdentification( &obj_EN_DCTransferTypeReply->targeteNB);    // L:584


	*pEN_DCTransferTypeReply = obj_EN_DCTransferTypeReply;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__EN_DCSONeNBIdentification( SI_S1AP_DT_EN_DCSONeNBIdentification ** pEN_DCSONeNBIdentification)
{
	SI_S1AP_DT_EN_DCSONeNBIdentification * obj_EN_DCSONeNBIdentification = (SI_S1AP_DT_EN_DCSONeNBIdentification*) __si_allocM( sizeof(SI_S1AP_DT_EN_DCSONeNBIdentification));
	memset( obj_EN_DCSONeNBIdentification, 0, sizeof( SI_S1AP_DT_EN_DCSONeNBIdentification));

	// L:486
	__si_s1ap__set_testdata__Global_ENB_ID( &obj_EN_DCSONeNBIdentification->globaleNBID);    // L:584

	__si_s1ap__set_testdata__TAI( &obj_EN_DCSONeNBIdentification->selectedTAI);    // L:584


	*pEN_DCSONeNBIdentification = obj_EN_DCSONeNBIdentification;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__EN_DCSONengNBIdentification( SI_S1AP_DT_EN_DCSONengNBIdentification ** pEN_DCSONengNBIdentification)
{
	SI_S1AP_DT_EN_DCSONengNBIdentification * obj_EN_DCSONengNBIdentification = (SI_S1AP_DT_EN_DCSONengNBIdentification*) __si_allocM( sizeof(SI_S1AP_DT_EN_DCSONengNBIdentification));
	memset( obj_EN_DCSONengNBIdentification, 0, sizeof( SI_S1AP_DT_EN_DCSONengNBIdentification));

	// L:486
	__si_s1ap__set_testdata__Global_en_gNB_ID( &obj_EN_DCSONengNBIdentification->globalengNBID);    // L:584

	__si_s1ap__set_testdata__TAI( &obj_EN_DCSONengNBIdentification->selectedTAI);    // L:584


	*pEN_DCSONengNBIdentification = obj_EN_DCSONengNBIdentification;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__EPLMNs( SI_S1AP_DT_EPLMNs ** pEPLMNs)
{
	SI_S1AP_DT_EPLMNs * obj_EPLMNs = NULL; 
	__si_s1ap_init_EPLMNs( &obj_EPLMNs);

	// L:1260
	SI_S1AP_DT_PLMNidentity * objPLMNidentity = NULL;

	// OCTETSTRING  , PLMNidentity  // L:1348
	__si_s1ap_init_PLMNidentity2( &objPLMNidentity, "\x02\x17\x15\x18\x14", 5);


	// L:1419
	__si_linked_list_add( obj_EPLMNs->PLMNidentity, (uint8_t*)objPLMNidentity);

	*pEPLMNs = obj_EPLMNs;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__E_RABInformationList( SI_S1AP_DT_E_RABInformationList ** pE_RABInformationList)
{
	SI_S1AP_DT_E_RABInformationList * obj_E_RABInformationList = NULL; 
	__si_s1ap_init_E_RABInformationList( &obj_E_RABInformationList);

	// L:1260
	SI_S1AP_DT_E_RABInformationListIEs * objE_RABInformationListIEs = NULL;
	//CONTAINER // L:1394
	//__si_s1ap__set_testdata__E_RABInformationListIEs( &objE_RABInformationListIEs);  // L:1395

	// L:1412
	__si_linked_list_add( obj_E_RABInformationList->list, (uint8_t*)objE_RABInformationListIEs);

	*pE_RABInformationList = obj_E_RABInformationList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABInformationListItem( SI_S1AP_DT_E_RABInformationListItem ** pE_RABInformationListItem)
{
	SI_S1AP_DT_E_RABInformationListItem * obj_E_RABInformationListItem = (SI_S1AP_DT_E_RABInformationListItem*) __si_allocM( sizeof(SI_S1AP_DT_E_RABInformationListItem));
	memset( obj_E_RABInformationListItem, 0, sizeof( SI_S1AP_DT_E_RABInformationListItem));

	// L:486
	obj_E_RABInformationListItem->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	obj_E_RABInformationListItem->selected_edL_Forwarding = DL_Forwarding_dL_Forwarding_proposed_val;   // L:529
	obj_E_RABInformationListItem->isPresent_dL_Forwarding = 1;


	*pE_RABInformationListItem = obj_E_RABInformationListItem;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__E_RABList( SI_S1AP_DT_E_RABList ** pE_RABList)
{
	SI_S1AP_DT_E_RABList * obj_E_RABList = NULL; 
	__si_s1ap_init_E_RABList( &obj_E_RABList);

	// L:1260
	SI_S1AP_DT_PDU_E_RABItemIEs * objE_RABItemIEs = NULL;
	__si_s1ap__set_testdata__PDU_E_RABItemIEs( &objE_RABItemIEs);
	// L:1412
	__si_linked_list_add( obj_E_RABList->list, (uint8_t*)objE_RABItemIEs);

	*pE_RABList = obj_E_RABList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABItem( SI_S1AP_DT_E_RABItem ** pE_RABItem)
{
	SI_S1AP_DT_E_RABItem * obj_E_RABItem = (SI_S1AP_DT_E_RABItem*) __si_allocM( sizeof(SI_S1AP_DT_E_RABItem));
	memset( obj_E_RABItem, 0, sizeof( SI_S1AP_DT_E_RABItem));

	// L:486
	obj_E_RABItem->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap__set_testdata__Cause( &obj_E_RABItem->cause);    // L:588


	*pE_RABItem = obj_E_RABItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABLevelQoSParameters( SI_S1AP_DT_E_RABLevelQoSParameters ** pE_RABLevelQoSParameters)
{
	SI_S1AP_DT_E_RABLevelQoSParameters * obj_E_RABLevelQoSParameters = (SI_S1AP_DT_E_RABLevelQoSParameters*) __si_allocM( sizeof(SI_S1AP_DT_E_RABLevelQoSParameters));
	memset( obj_E_RABLevelQoSParameters, 0, sizeof( SI_S1AP_DT_E_RABLevelQoSParameters));

	// L:486
	obj_E_RABLevelQoSParameters->qCI = __getTestINTEGER( 0, 255);    // L:533

	__si_s1ap__set_testdata__AllocationAndRetentionPriority( &obj_E_RABLevelQoSParameters->allocationRetentionPriority);    // L:584

	__si_s1ap__set_testdata__GBR_QosInformation( &obj_E_RABLevelQoSParameters->gbrQosInformation);    // L:584
	obj_E_RABLevelQoSParameters->isPresent_gbrQosInformation = 1;


	*pE_RABLevelQoSParameters = obj_E_RABLevelQoSParameters;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__E_RABSecurityResultList( SI_S1AP_DT_E_RABSecurityResultList ** pE_RABSecurityResultList)
{
	SI_S1AP_DT_E_RABSecurityResultList * obj_E_RABSecurityResultList = NULL; 
	__si_s1ap_init_E_RABSecurityResultList( &obj_E_RABSecurityResultList);

	// L:1260
	SI_S1AP_DT_E_RABSecurityResultListIEs * objE_RABSecurityResultListIEs = NULL;
	//CONTAINER // L:1394
	//__si_s1ap__set_testdata__E_RABSecurityResultListIEs( &objE_RABSecurityResultListIEs);  // L:1395

	// L:1412
	__si_linked_list_add( obj_E_RABSecurityResultList->list, (uint8_t*)objE_RABSecurityResultListIEs);

	*pE_RABSecurityResultList = obj_E_RABSecurityResultList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABSecurityResultItem( SI_S1AP_DT_E_RABSecurityResultItem ** pE_RABSecurityResultItem)
{
	SI_S1AP_DT_E_RABSecurityResultItem * obj_E_RABSecurityResultItem = (SI_S1AP_DT_E_RABSecurityResultItem*) __si_allocM( sizeof(SI_S1AP_DT_E_RABSecurityResultItem));
	memset( obj_E_RABSecurityResultItem, 0, sizeof( SI_S1AP_DT_E_RABSecurityResultItem));

	// L:486
	obj_E_RABSecurityResultItem->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap__set_testdata__SecurityResult( &obj_E_RABSecurityResultItem->securityResult);    // L:584


	*pE_RABSecurityResultItem = obj_E_RABSecurityResultItem;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__E_RABUsageReportList( SI_S1AP_DT_E_RABUsageReportList ** pE_RABUsageReportList)
{
	SI_S1AP_DT_E_RABUsageReportList * obj_E_RABUsageReportList = NULL; 
	__si_s1ap_init_E_RABUsageReportList( &obj_E_RABUsageReportList);

	// L:1260
	SI_S1AP_DT_PDU_E_RABUsageReportItemIEs * objE_RABUsageReportItemIEs = NULL;
	__si_s1ap__set_testdata__PDU_E_RABUsageReportItemIEs( &objE_RABUsageReportItemIEs);
	// L:1412
	__si_linked_list_add( obj_E_RABUsageReportList->list, (uint8_t*)objE_RABUsageReportItemIEs);

	*pE_RABUsageReportList = obj_E_RABUsageReportList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABUsageReportItem( SI_S1AP_DT_E_RABUsageReportItem ** pE_RABUsageReportItem)
{
	SI_S1AP_DT_E_RABUsageReportItem * obj_E_RABUsageReportItem = (SI_S1AP_DT_E_RABUsageReportItem*) __si_allocM( sizeof(SI_S1AP_DT_E_RABUsageReportItem));
	memset( obj_E_RABUsageReportItem, 0, sizeof( SI_S1AP_DT_E_RABUsageReportItem));

	// L:486
	__si_s1ap_init_ERABUsageReportItem_startTimestamp2( &obj_E_RABUsageReportItem->startTimestamp, "\x11\x14\x16\x18", 4);    // L:545

	__si_s1ap_init_ERABUsageReportItem_endTimestamp2( &obj_E_RABUsageReportItem->endTimestamp, "\x13\x23\x09\x19", 4);    // L:545

	//obj_E_RABUsageReportItem->usageCountUL = __getTestINTEGER( 0, 18446744073709552000);    // L:533

	//obj_E_RABUsageReportItem->usageCountDL = __getTestINTEGER( 0, 18446744073709552000);    // L:533


	*pE_RABUsageReportItem = obj_E_RABUsageReportItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__EUTRAN_CGI( SI_S1AP_DT_EUTRAN_CGI ** pEUTRAN_CGI)
{
	SI_S1AP_DT_EUTRAN_CGI * obj_EUTRAN_CGI = (SI_S1AP_DT_EUTRAN_CGI*) __si_allocM( sizeof(SI_S1AP_DT_EUTRAN_CGI));
	memset( obj_EUTRAN_CGI, 0, sizeof( SI_S1AP_DT_EUTRAN_CGI));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_EUTRAN_CGI->pLMNidentity, "\x22\x18\x15\x01\x04", 5);    // L:540

	__si_s1ap_init_CellIdentity2( &obj_EUTRAN_CGI->cell_ID, "4145", 4, 28);  // L:574
	obj_EUTRAN_CGI->cell_ID->bitslen = 28; //   L:575


	*pEUTRAN_CGI = obj_EUTRAN_CGI;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__EventL1LoggedMDTConfig( SI_S1AP_DT_EventL1LoggedMDTConfig ** pEventL1LoggedMDTConfig)
{
	SI_S1AP_DT_EventL1LoggedMDTConfig * obj_EventL1LoggedMDTConfig = (SI_S1AP_DT_EventL1LoggedMDTConfig*) __si_allocM( sizeof(SI_S1AP_DT_EventL1LoggedMDTConfig));
	memset( obj_EventL1LoggedMDTConfig, 0, sizeof( SI_S1AP_DT_EventL1LoggedMDTConfig));

	// L:486
	__si_s1ap__set_testdata__MeasurementThresholdL1LoggedMDT( &obj_EventL1LoggedMDTConfig->l1Threshold);    // L:588

	obj_EventL1LoggedMDTConfig->hysteresis = __getTestINTEGER( 0, 30);    // L:533

	obj_EventL1LoggedMDTConfig->selected_etimeToTrigger = TimeToTrigger_ms0_val;   // L:529


	*pEventL1LoggedMDTConfig = obj_EventL1LoggedMDTConfig;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__EventTrigger( SI_S1AP_DT_EventTrigger ** pEventTrigger)
{
	SI_S1AP_DT_EventTrigger * obj_EventTrigger = (SI_S1AP_DT_EventTrigger*) __si_allocM( sizeof(SI_S1AP_DT_EventTrigger));
	memset( obj_EventTrigger, 0, sizeof( SI_S1AP_DT_EventTrigger));

	obj_EventTrigger->SelectedChoice = 0;

	// L:2784

	switch( obj_EventTrigger->SelectedChoice)
	{
		case 0:
			obj_EventTrigger->u.outOfCoverage = EventTrigger_outOfCoverage_true_val;  // TODO: set enum   L:2894  ,  Parser:ENUMERATED, EventTrigger_outOfCoverage
			break;
		case 1:
			__si_s1ap__set_testdata__EventL1LoggedMDTConfig( &obj_EventTrigger->u.eventL1LoggedMDTConfig);  // L:2910  ,  Parser:SEQUENCE, EventL1LoggedMDTConfig
			break;
		case 2:
			__si_s1ap__set_testdata__PDU_EventTrigger_ExtIEs( &obj_EventTrigger->u.choice_Extensions);    // L:2871
			break;
	}

	*pEventTrigger = obj_EventTrigger;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ExpectedUEBehaviour( SI_S1AP_DT_ExpectedUEBehaviour ** pExpectedUEBehaviour)
{
	SI_S1AP_DT_ExpectedUEBehaviour * obj_ExpectedUEBehaviour = (SI_S1AP_DT_ExpectedUEBehaviour*) __si_allocM( sizeof(SI_S1AP_DT_ExpectedUEBehaviour));
	memset( obj_ExpectedUEBehaviour, 0, sizeof( SI_S1AP_DT_ExpectedUEBehaviour));

	// L:486
	__si_s1ap__set_testdata__ExpectedUEActivityBehaviour( &obj_ExpectedUEBehaviour->expectedActivity);    // L:584
	obj_ExpectedUEBehaviour->isPresent_expectedActivity = 1;

	obj_ExpectedUEBehaviour->selected_eexpectedHOInterval = ExpectedHOInterval_sec15_val;   // L:529
	obj_ExpectedUEBehaviour->isPresent_expectedHOInterval = 1;


	*pExpectedUEBehaviour = obj_ExpectedUEBehaviour;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ExpectedUEActivityBehaviour( SI_S1AP_DT_ExpectedUEActivityBehaviour ** pExpectedUEActivityBehaviour)
{
	SI_S1AP_DT_ExpectedUEActivityBehaviour * obj_ExpectedUEActivityBehaviour = (SI_S1AP_DT_ExpectedUEActivityBehaviour*) __si_allocM( sizeof(SI_S1AP_DT_ExpectedUEActivityBehaviour));
	memset( obj_ExpectedUEActivityBehaviour, 0, sizeof( SI_S1AP_DT_ExpectedUEActivityBehaviour));

	// L:486
	obj_ExpectedUEActivityBehaviour->expectedActivityPeriod = __getTestINTEGER( 1, 30);    // L:533
	obj_ExpectedUEActivityBehaviour->isPresent_expectedActivityPeriod = 1;

	obj_ExpectedUEActivityBehaviour->expectedIdlePeriod = __getTestINTEGER( 1, 30);    // L:533
	obj_ExpectedUEActivityBehaviour->isPresent_expectedIdlePeriod = 1;

	obj_ExpectedUEActivityBehaviour->selected_esourceofUEActivityBehaviourInformation = SourceOfUEActivityBehaviourInformation_subscription_information_val;   // L:529
	obj_ExpectedUEActivityBehaviour->isPresent_sourceofUEActivityBehaviourInformation = 1;


	*pExpectedUEActivityBehaviour = obj_ExpectedUEActivityBehaviour;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__FiveGSTAI( SI_S1AP_DT_FiveGSTAI ** pFiveGSTAI)
{
	SI_S1AP_DT_FiveGSTAI * obj_FiveGSTAI = (SI_S1AP_DT_FiveGSTAI*) __si_allocM( sizeof(SI_S1AP_DT_FiveGSTAI));
	memset( obj_FiveGSTAI, 0, sizeof( SI_S1AP_DT_FiveGSTAI));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_FiveGSTAI->pLMNidentity, "\x14\x16\x03\x19\x03", 5);    // L:540

	__si_s1ap_init_FiveGSTAC2( &obj_FiveGSTAI->fiveGSTAC, "\x20\x04\x07", 3);    // L:545


	*pFiveGSTAI = obj_FiveGSTAI;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ForbiddenTAs( SI_S1AP_DT_ForbiddenTAs ** pForbiddenTAs)
{
	SI_S1AP_DT_ForbiddenTAs * obj_ForbiddenTAs = NULL; 
	__si_s1ap_init_ForbiddenTAs( &obj_ForbiddenTAs);

	// L:1260
	SI_S1AP_DT_ForbiddenTAs_Item * objForbiddenTAs_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__ForbiddenTAs_Item( &objForbiddenTAs_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_ForbiddenTAs->ForbiddenTAs_Item, (uint8_t*)objForbiddenTAs_Item);

	*pForbiddenTAs = obj_ForbiddenTAs;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ForbiddenTAs_Item( SI_S1AP_DT_ForbiddenTAs_Item ** pForbiddenTAs_Item)
{
	SI_S1AP_DT_ForbiddenTAs_Item * obj_ForbiddenTAs_Item = (SI_S1AP_DT_ForbiddenTAs_Item*) __si_allocM( sizeof(SI_S1AP_DT_ForbiddenTAs_Item));
	memset( obj_ForbiddenTAs_Item, 0, sizeof( SI_S1AP_DT_ForbiddenTAs_Item));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_ForbiddenTAs_Item->pLMN_Identity, "\x17\x03\x03\x10\x24", 5);    // L:540

	__si_s1ap__set_testdata__ForbiddenTACs( &obj_ForbiddenTAs_Item->forbiddenTACs);    // L:580


	*pForbiddenTAs_Item = obj_ForbiddenTAs_Item;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ForbiddenTACs( SI_S1AP_DT_ForbiddenTACs ** pForbiddenTACs)
{
	SI_S1AP_DT_ForbiddenTACs * obj_ForbiddenTACs = NULL; 
	__si_s1ap_init_ForbiddenTACs( &obj_ForbiddenTACs);

	// L:1260
	SI_S1AP_DT_TAC * objTAC = NULL;

	// OCTETSTRING  , TAC  // L:1348
	__si_s1ap_init_TAC2( &objTAC, "\x09\x06", 2);


	// L:1419
	__si_linked_list_add( obj_ForbiddenTACs->TAC, (uint8_t*)objTAC);

	*pForbiddenTACs = obj_ForbiddenTACs;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ForbiddenLAs( SI_S1AP_DT_ForbiddenLAs ** pForbiddenLAs)
{
	SI_S1AP_DT_ForbiddenLAs * obj_ForbiddenLAs = NULL; 
	__si_s1ap_init_ForbiddenLAs( &obj_ForbiddenLAs);

	// L:1260
	SI_S1AP_DT_ForbiddenLAs_Item * objForbiddenLAs_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__ForbiddenLAs_Item( &objForbiddenLAs_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_ForbiddenLAs->ForbiddenLAs_Item, (uint8_t*)objForbiddenLAs_Item);

	*pForbiddenLAs = obj_ForbiddenLAs;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ForbiddenLAs_Item( SI_S1AP_DT_ForbiddenLAs_Item ** pForbiddenLAs_Item)
{
	SI_S1AP_DT_ForbiddenLAs_Item * obj_ForbiddenLAs_Item = (SI_S1AP_DT_ForbiddenLAs_Item*) __si_allocM( sizeof(SI_S1AP_DT_ForbiddenLAs_Item));
	memset( obj_ForbiddenLAs_Item, 0, sizeof( SI_S1AP_DT_ForbiddenLAs_Item));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_ForbiddenLAs_Item->pLMN_Identity, "\x07\x23\x20\x15\x16", 5);    // L:540

	__si_s1ap__set_testdata__ForbiddenLACs( &obj_ForbiddenLAs_Item->forbiddenLACs);    // L:580


	*pForbiddenLAs_Item = obj_ForbiddenLAs_Item;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ForbiddenLACs( SI_S1AP_DT_ForbiddenLACs ** pForbiddenLACs)
{
	SI_S1AP_DT_ForbiddenLACs * obj_ForbiddenLACs = NULL; 
	__si_s1ap_init_ForbiddenLACs( &obj_ForbiddenLACs);

	// L:1260
	SI_S1AP_DT_LAC * objLAC = NULL;

	// OCTETSTRING  , LAC  // L:1348
	__si_s1ap_init_LAC2( &objLAC, "\x18\x05", 2);


	// L:1419
	__si_linked_list_add( obj_ForbiddenLACs->LAC, (uint8_t*)objLAC);

	*pForbiddenLACs = obj_ForbiddenLACs;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__GBR_QosInformation( SI_S1AP_DT_GBR_QosInformation ** pGBR_QosInformation)
{
	SI_S1AP_DT_GBR_QosInformation * obj_GBR_QosInformation = (SI_S1AP_DT_GBR_QosInformation*) __si_allocM( sizeof(SI_S1AP_DT_GBR_QosInformation));
	memset( obj_GBR_QosInformation, 0, sizeof( SI_S1AP_DT_GBR_QosInformation));

	// L:486
	obj_GBR_QosInformation->e_RAB_MaximumBitrateDL = __getTestINTEGER( 0, 10000000000);    // L:533

	obj_GBR_QosInformation->e_RAB_MaximumBitrateUL = __getTestINTEGER( 0, 10000000000);    // L:533

	obj_GBR_QosInformation->e_RAB_GuaranteedBitrateDL = __getTestINTEGER( 0, 10000000000);    // L:533

	obj_GBR_QosInformation->e_RAB_GuaranteedBitrateUL = __getTestINTEGER( 0, 10000000000);    // L:533


	*pGBR_QosInformation = obj_GBR_QosInformation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__GUMMEI( SI_S1AP_DT_GUMMEI ** pGUMMEI)
{
	SI_S1AP_DT_GUMMEI * obj_GUMMEI = (SI_S1AP_DT_GUMMEI*) __si_allocM( sizeof(SI_S1AP_DT_GUMMEI));
	memset( obj_GUMMEI, 0, sizeof( SI_S1AP_DT_GUMMEI));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_GUMMEI->pLMN_Identity, "\x02\x16\x24\x09\x13", 5);    // L:540

	__si_s1ap_init_MME_Group_ID2( &obj_GUMMEI->mME_Group_ID, "\x15\x02", 2);    // L:545

	__si_s1ap_init_MME_Code2( &obj_GUMMEI->mME_Code, "\x13", 1);    // L:545


	*pGUMMEI = obj_GUMMEI;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__HandoverRestrictionList( SI_S1AP_DT_HandoverRestrictionList ** pHandoverRestrictionList)
{
	SI_S1AP_DT_HandoverRestrictionList * obj_HandoverRestrictionList = (SI_S1AP_DT_HandoverRestrictionList*) __si_allocM( sizeof(SI_S1AP_DT_HandoverRestrictionList));
	memset( obj_HandoverRestrictionList, 0, sizeof( SI_S1AP_DT_HandoverRestrictionList));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_HandoverRestrictionList->servingPLMN, "\x12\x24\x06\x24\x16", 5);    // L:540

	__si_s1ap__set_testdata__EPLMNs( &obj_HandoverRestrictionList->equivalentPLMNs);    // L:580
	obj_HandoverRestrictionList->isPresent_equivalentPLMNs = 1;

	__si_s1ap__set_testdata__ForbiddenTAs( &obj_HandoverRestrictionList->forbiddenTAs);    // L:580
	obj_HandoverRestrictionList->isPresent_forbiddenTAs = 1;

	__si_s1ap__set_testdata__ForbiddenLAs( &obj_HandoverRestrictionList->forbiddenLAs);    // L:580
	obj_HandoverRestrictionList->isPresent_forbiddenLAs = 1;

	obj_HandoverRestrictionList->selected_eforbiddenInterRATs = ForbiddenInterRATs_all_val;   // L:529
	obj_HandoverRestrictionList->isPresent_forbiddenInterRATs = 1;


	*pHandoverRestrictionList = obj_HandoverRestrictionList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ImmediateMDT( SI_S1AP_DT_ImmediateMDT ** pImmediateMDT)
{
	SI_S1AP_DT_ImmediateMDT * obj_ImmediateMDT = (SI_S1AP_DT_ImmediateMDT*) __si_allocM( sizeof(SI_S1AP_DT_ImmediateMDT));
	memset( obj_ImmediateMDT, 0, sizeof( SI_S1AP_DT_ImmediateMDT));

	// L:486
	__si_s1ap_init_MeasurementsToActivate2( &obj_ImmediateMDT->measurementsToActivate, "7", 1, 8);  // L:574
	obj_ImmediateMDT->measurementsToActivate->bitslen = 8; //   L:575

	obj_ImmediateMDT->selected_em1reportingTrigger = M1ReportingTrigger_periodic_val;   // L:529

	__si_s1ap__set_testdata__M1ThresholdEventA2( &obj_ImmediateMDT->m1thresholdeventA2);    // L:584
	obj_ImmediateMDT->isPresent_m1thresholdeventA2 = 1;

	__si_s1ap__set_testdata__M1PeriodicReporting( &obj_ImmediateMDT->m1periodicReporting);    // L:584
	obj_ImmediateMDT->isPresent_m1periodicReporting = 1;


	*pImmediateMDT = obj_ImmediateMDT;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__InformationOnRecommendedCellsAndENBsForPaging( SI_S1AP_DT_InformationOnRecommendedCellsAndENBsForPaging ** pInformationOnRecommendedCellsAndENBsForPaging)
{
	SI_S1AP_DT_InformationOnRecommendedCellsAndENBsForPaging * obj_InformationOnRecommendedCellsAndENBsForPaging = (SI_S1AP_DT_InformationOnRecommendedCellsAndENBsForPaging*) __si_allocM( sizeof(SI_S1AP_DT_InformationOnRecommendedCellsAndENBsForPaging));
	memset( obj_InformationOnRecommendedCellsAndENBsForPaging, 0, sizeof( SI_S1AP_DT_InformationOnRecommendedCellsAndENBsForPaging));

	// L:486
	__si_s1ap__set_testdata__RecommendedCellsForPaging( &obj_InformationOnRecommendedCellsAndENBsForPaging->recommendedCellsForPaging);    // L:584

	__si_s1ap__set_testdata__RecommendedENBsForPaging( &obj_InformationOnRecommendedCellsAndENBsForPaging->recommendENBsForPaging);    // L:584


	*pInformationOnRecommendedCellsAndENBsForPaging = obj_InformationOnRecommendedCellsAndENBsForPaging;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__IntersystemMeasurementConfiguration( SI_S1AP_DT_IntersystemMeasurementConfiguration ** pIntersystemMeasurementConfiguration)
{
	SI_S1AP_DT_IntersystemMeasurementConfiguration * obj_IntersystemMeasurementConfiguration = (SI_S1AP_DT_IntersystemMeasurementConfiguration*) __si_allocM( sizeof(SI_S1AP_DT_IntersystemMeasurementConfiguration));
	memset( obj_IntersystemMeasurementConfiguration, 0, sizeof( SI_S1AP_DT_IntersystemMeasurementConfiguration));

	// L:486
	obj_IntersystemMeasurementConfiguration->rSRP = __getTestINTEGER( 0, 127);    // L:533
	obj_IntersystemMeasurementConfiguration->isPresent_rSRP = 1;

	obj_IntersystemMeasurementConfiguration->rSRQ = __getTestINTEGER( 0, 127);    // L:533
	obj_IntersystemMeasurementConfiguration->isPresent_rSRQ = 1;

	obj_IntersystemMeasurementConfiguration->sINR = __getTestINTEGER( 0, 127);    // L:533
	obj_IntersystemMeasurementConfiguration->isPresent_sINR = 1;

	__si_s1ap__set_testdata__InterSystemMeasurementParameters( &obj_IntersystemMeasurementConfiguration->interSystemMeasurementParameters);    // L:584


	*pIntersystemMeasurementConfiguration = obj_IntersystemMeasurementConfiguration;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__InterSystemMeasurementParameters( SI_S1AP_DT_InterSystemMeasurementParameters ** pInterSystemMeasurementParameters)
{
	SI_S1AP_DT_InterSystemMeasurementParameters * obj_InterSystemMeasurementParameters = (SI_S1AP_DT_InterSystemMeasurementParameters*) __si_allocM( sizeof(SI_S1AP_DT_InterSystemMeasurementParameters));
	memset( obj_InterSystemMeasurementParameters, 0, sizeof( SI_S1AP_DT_InterSystemMeasurementParameters));

	// L:486
	obj_InterSystemMeasurementParameters->measurementDuration = __getTestINTEGER( 1, 100);    // L:533

	__si_s1ap__set_testdata__InterSystemMeasurementList( &obj_InterSystemMeasurementParameters->interSystemMeasurementList);    // L:580
	obj_InterSystemMeasurementParameters->isPresent_interSystemMeasurementList = 1;


	*pInterSystemMeasurementParameters = obj_InterSystemMeasurementParameters;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__InterSystemMeasurementList( SI_S1AP_DT_InterSystemMeasurementList ** pInterSystemMeasurementList)
{
	SI_S1AP_DT_InterSystemMeasurementList * obj_InterSystemMeasurementList = NULL; 
	__si_s1ap_init_InterSystemMeasurementList( &obj_InterSystemMeasurementList);

	// L:1260
	SI_S1AP_DT_InterSystemMeasurementItem * objInterSystemMeasurementItem = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__InterSystemMeasurementItem( &objInterSystemMeasurementItem);  // L:1395

	// L:1419
	__si_linked_list_add( obj_InterSystemMeasurementList->InterSystemMeasurementItem, (uint8_t*)objInterSystemMeasurementItem);

	*pInterSystemMeasurementList = obj_InterSystemMeasurementList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__InterSystemMeasurementItem( SI_S1AP_DT_InterSystemMeasurementItem ** pInterSystemMeasurementItem)
{
	SI_S1AP_DT_InterSystemMeasurementItem * obj_InterSystemMeasurementItem = (SI_S1AP_DT_InterSystemMeasurementItem*) __si_allocM( sizeof(SI_S1AP_DT_InterSystemMeasurementItem));
	memset( obj_InterSystemMeasurementItem, 0, sizeof( SI_S1AP_DT_InterSystemMeasurementItem));

	// L:486
	obj_InterSystemMeasurementItem->freqBandIndicatorNR = __getTestINTEGER( 1, 1024);    // L:533

	obj_InterSystemMeasurementItem->sSBfrequencies = __getTestINTEGER( 0, 0);    // L:533

	obj_InterSystemMeasurementItem->selected_esubcarrierSpacingSSB = InterSystemMeasurementItem_subcarrierSpacingSSB_kHz15_val;   // L:529

	obj_InterSystemMeasurementItem->maxRSIndexCellQual = __getTestINTEGER( 1, 0);    // L:533
	obj_InterSystemMeasurementItem->isPresent_maxRSIndexCellQual = 1;

	__si_s1ap_init_InterSystemMeasurementItem_sMTC2( &obj_InterSystemMeasurementItem->sMTC, "\x04\x18\x23\x05\x20", 5);    // L:540
	obj_InterSystemMeasurementItem->isPresent_sMTC = 1;

	__si_s1ap_init_InterSystemMeasurementItem_threshRS_Index_r152( &obj_InterSystemMeasurementItem->threshRS_Index_r15, "\x01\x18\x08\x12\x20", 5);    // L:540
	obj_InterSystemMeasurementItem->isPresent_threshRS_Index_r15 = 1;

	__si_s1ap_init_InterSystemMeasurementItem_sSBToMeasure2( &obj_InterSystemMeasurementItem->sSBToMeasure, "\x04\x17\x08\x10\x07", 5);    // L:540
	obj_InterSystemMeasurementItem->isPresent_sSBToMeasure = 1;

	__si_s1ap_init_InterSystemMeasurementItem_sSRSSIMeasurement2( &obj_InterSystemMeasurementItem->sSRSSIMeasurement, "\x05\x04\x11\x20\x14", 5);    // L:540
	obj_InterSystemMeasurementItem->isPresent_sSRSSIMeasurement = 1;

	__si_s1ap_init_InterSystemMeasurementItem_quantityConfigNR_R152( &obj_InterSystemMeasurementItem->quantityConfigNR_R15, "\x06\x16\x05\x03\x08", 5);    // L:540
	obj_InterSystemMeasurementItem->isPresent_quantityConfigNR_R15 = 1;

	__si_s1ap_init_InterSystemMeasurementItem_excludedCellsToAddModList2( &obj_InterSystemMeasurementItem->excludedCellsToAddModList, "\x03\x22\x21\x07\x08", 5);    // L:540
	obj_InterSystemMeasurementItem->isPresent_excludedCellsToAddModList = 1;


	*pInterSystemMeasurementItem = obj_InterSystemMeasurementItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__LAI( SI_S1AP_DT_LAI ** pLAI)
{
	SI_S1AP_DT_LAI * obj_LAI = (SI_S1AP_DT_LAI*) __si_allocM( sizeof(SI_S1AP_DT_LAI));
	memset( obj_LAI, 0, sizeof( SI_S1AP_DT_LAI));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_LAI->pLMNidentity, "\x02\x13\x06\x06\x03", 5);    // L:540

	__si_s1ap_init_LAC2( &obj_LAI->lAC, "\x12\x07", 2);    // L:545


	*pLAI = obj_LAI;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__LastVisitedCell_Item( SI_S1AP_DT_LastVisitedCell_Item ** pLastVisitedCell_Item)
{
	SI_S1AP_DT_LastVisitedCell_Item * obj_LastVisitedCell_Item = (SI_S1AP_DT_LastVisitedCell_Item*) __si_allocM( sizeof(SI_S1AP_DT_LastVisitedCell_Item));
	memset( obj_LastVisitedCell_Item, 0, sizeof( SI_S1AP_DT_LastVisitedCell_Item));

	obj_LastVisitedCell_Item->SelectedChoice = 0;

	// L:2784

	switch( obj_LastVisitedCell_Item->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__LastVisitedEUTRANCellInformation( &obj_LastVisitedCell_Item->u.e_UTRAN_Cell);  // L:2910  ,  Parser:SEQUENCE, LastVisitedEUTRANCellInformation
			break;
		case 1:
			__si_s1ap_init_LastVisitedUTRANCellInformation2( &obj_LastVisitedCell_Item->u.uTRAN_Cell, "aeiou", 5);  // L:2900  ,  Parser:OCTETSTRING, LastVisitedUTRANCellInformation
			break;
		case 2:
			//obj_LastVisitedCell_Item->u.gERAN_Cell = LastVisitedGERANCellInformation_undefined_val;  // TODO: set enum   L:2894  ,  Parser:CHOICE, LastVisitedGERANCellInformation
			break;
		case 3:
			//__si_s1ap_init_LastVisitedNGRANCellInformation2( &obj_LastVisitedCell_Item->u.nG_RAN_Cell, "aeiou", 5);  // L:2900  ,  Parser:OCTETSTRING, LastVisitedNGRANCellInformation
			break;
	}

	*pLastVisitedCell_Item = obj_LastVisitedCell_Item;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__LastVisitedEUTRANCellInformation( SI_S1AP_DT_LastVisitedEUTRANCellInformation ** pLastVisitedEUTRANCellInformation)
{
	SI_S1AP_DT_LastVisitedEUTRANCellInformation * obj_LastVisitedEUTRANCellInformation = (SI_S1AP_DT_LastVisitedEUTRANCellInformation*) __si_allocM( sizeof(SI_S1AP_DT_LastVisitedEUTRANCellInformation));
	memset( obj_LastVisitedEUTRANCellInformation, 0, sizeof( SI_S1AP_DT_LastVisitedEUTRANCellInformation));

	// L:486
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_LastVisitedEUTRANCellInformation->global_Cell_ID);    // L:584

	__si_s1ap__set_testdata__CellType( &obj_LastVisitedEUTRANCellInformation->cellType);    // L:584

	obj_LastVisitedEUTRANCellInformation->time_UE_StayedInCell = __getTestINTEGER( 0, 4095);    // L:533


	*pLastVisitedEUTRANCellInformation = obj_LastVisitedEUTRANCellInformation;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__LastVisitedPSCellList( SI_S1AP_DT_LastVisitedPSCellList ** pLastVisitedPSCellList)
{
	SI_S1AP_DT_LastVisitedPSCellList * obj_LastVisitedPSCellList = NULL; 
	__si_s1ap_init_LastVisitedPSCellList( &obj_LastVisitedPSCellList);

	// L:1260
	SI_S1AP_DT_LastVisitedPSCellInformation * objLastVisitedPSCellInformation = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__LastVisitedPSCellInformation( &objLastVisitedPSCellInformation);  // L:1395

	// L:1419
	__si_linked_list_add( obj_LastVisitedPSCellList->LastVisitedPSCellInformation, (uint8_t*)objLastVisitedPSCellInformation);

	*pLastVisitedPSCellList = obj_LastVisitedPSCellList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__LastVisitedPSCellInformation( SI_S1AP_DT_LastVisitedPSCellInformation ** pLastVisitedPSCellInformation)
{
	SI_S1AP_DT_LastVisitedPSCellInformation * obj_LastVisitedPSCellInformation = (SI_S1AP_DT_LastVisitedPSCellInformation*) __si_allocM( sizeof(SI_S1AP_DT_LastVisitedPSCellInformation));
	memset( obj_LastVisitedPSCellInformation, 0, sizeof( SI_S1AP_DT_LastVisitedPSCellInformation));

	// L:486
	__si_s1ap__set_testdata__PSCellInformation( &obj_LastVisitedPSCellInformation->pSCellID);    // L:584
	obj_LastVisitedPSCellInformation->isPresent_pSCellID = 1;

	obj_LastVisitedPSCellInformation->timeStay = __getTestINTEGER( 0, 40950);    // L:533


	*pLastVisitedPSCellInformation = obj_LastVisitedPSCellInformation;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__LastVisitedGERANCellInformation( SI_S1AP_DT_LastVisitedGERANCellInformation ** pLastVisitedGERANCellInformation)
{
	SI_S1AP_DT_LastVisitedGERANCellInformation * obj_LastVisitedGERANCellInformation = (SI_S1AP_DT_LastVisitedGERANCellInformation*) __si_allocM( sizeof(SI_S1AP_DT_LastVisitedGERANCellInformation));
	memset( obj_LastVisitedGERANCellInformation, 0, sizeof( SI_S1AP_DT_LastVisitedGERANCellInformation));

	obj_LastVisitedGERANCellInformation->SelectedChoice = 0;

	// L:2784

	switch( obj_LastVisitedGERANCellInformation->SelectedChoice)
	{
		case 0:
			//__si_s1ap__set_testdata__NULL( &obj_LastVisitedGERANCellInformation->u.undefined);  // L:2915  ,  Parser: NULL
			break;
	}

	*pLastVisitedGERANCellInformation = obj_LastVisitedGERANCellInformation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ListeningSubframePattern( SI_S1AP_DT_ListeningSubframePattern ** pListeningSubframePattern)
{
	SI_S1AP_DT_ListeningSubframePattern * obj_ListeningSubframePattern = (SI_S1AP_DT_ListeningSubframePattern*) __si_allocM( sizeof(SI_S1AP_DT_ListeningSubframePattern));
	memset( obj_ListeningSubframePattern, 0, sizeof( SI_S1AP_DT_ListeningSubframePattern));

	// L:486
	obj_ListeningSubframePattern->selected_epattern_period = ListeningSubframePattern_pattern_period_ms1280_val;   // L:529

	obj_ListeningSubframePattern->pattern_offset = __getTestINTEGER( 0, 10239);    // L:533


	*pListeningSubframePattern = obj_ListeningSubframePattern;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__LoggedMDT( SI_S1AP_DT_LoggedMDT ** pLoggedMDT)
{
	SI_S1AP_DT_LoggedMDT * obj_LoggedMDT = (SI_S1AP_DT_LoggedMDT*) __si_allocM( sizeof(SI_S1AP_DT_LoggedMDT));
	memset( obj_LoggedMDT, 0, sizeof( SI_S1AP_DT_LoggedMDT));

	// L:486
	obj_LoggedMDT->selected_eloggingInterval = LoggingInterval_ms1280_val;   // L:529

	obj_LoggedMDT->selected_eloggingDuration = LoggingDuration_m10_val;   // L:529


	*pLoggedMDT = obj_LoggedMDT;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__LoggedMBSFNMDT( SI_S1AP_DT_LoggedMBSFNMDT ** pLoggedMBSFNMDT)
{
	SI_S1AP_DT_LoggedMBSFNMDT * obj_LoggedMBSFNMDT = (SI_S1AP_DT_LoggedMBSFNMDT*) __si_allocM( sizeof(SI_S1AP_DT_LoggedMBSFNMDT));
	memset( obj_LoggedMBSFNMDT, 0, sizeof( SI_S1AP_DT_LoggedMBSFNMDT));

	// L:486
	obj_LoggedMBSFNMDT->selected_eloggingInterval = LoggingInterval_ms1280_val;   // L:529

	obj_LoggedMBSFNMDT->selected_eloggingDuration = LoggingDuration_m10_val;   // L:529

	__si_s1ap__set_testdata__MBSFN_ResultToLog( &obj_LoggedMBSFNMDT->mBSFN_ResultToLog);    // L:580
	obj_LoggedMBSFNMDT->isPresent_mBSFN_ResultToLog = 1;


	*pLoggedMBSFNMDT = obj_LoggedMBSFNMDT;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__LoggedMDTTrigger( SI_S1AP_DT_LoggedMDTTrigger ** pLoggedMDTTrigger)
{
	SI_S1AP_DT_LoggedMDTTrigger * obj_LoggedMDTTrigger = (SI_S1AP_DT_LoggedMDTTrigger*) __si_allocM( sizeof(SI_S1AP_DT_LoggedMDTTrigger));
	memset( obj_LoggedMDTTrigger, 0, sizeof( SI_S1AP_DT_LoggedMDTTrigger));

	obj_LoggedMDTTrigger->SelectedChoice = 0;

	// L:2784

	switch( obj_LoggedMDTTrigger->SelectedChoice)
	{
		case 0:
			//__si_s1ap__set_testdata__NULL( &obj_LoggedMDTTrigger->u.periodical);  // L:2915  ,  Parser: NULL
			break;
		case 1:
			obj_LoggedMDTTrigger->u.eventTrigger = EventTrigger_outOfCoverage_val;  // TODO: set enum   L:2894  ,  Parser:CHOICE, EventTrigger
			break;
	}

	*pLoggedMDTTrigger = obj_LoggedMDTTrigger;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__LTE_NTN_TAI_Information( SI_S1AP_DT_LTE_NTN_TAI_Information ** pLTE_NTN_TAI_Information)
{
	SI_S1AP_DT_LTE_NTN_TAI_Information * obj_LTE_NTN_TAI_Information = (SI_S1AP_DT_LTE_NTN_TAI_Information*) __si_allocM( sizeof(SI_S1AP_DT_LTE_NTN_TAI_Information));
	memset( obj_LTE_NTN_TAI_Information, 0, sizeof( SI_S1AP_DT_LTE_NTN_TAI_Information));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_LTE_NTN_TAI_Information->servingPLMN, "\x11\x11\x21\x23\x08", 5);    // L:540

	__si_s1ap__set_testdata__TACList_In_LTE_NTN( &obj_LTE_NTN_TAI_Information->tACList_In_LTE_NTN);    // L:580

	__si_s1ap_init_TAC2( &obj_LTE_NTN_TAI_Information->uE_Location_Derived_TAC, "\x07\x11", 2);    // L:545
	obj_LTE_NTN_TAI_Information->isPresent_uE_Location_Derived_TAC = 1;


	*pLTE_NTN_TAI_Information = obj_LTE_NTN_TAI_Information;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__M3Configuration( SI_S1AP_DT_M3Configuration ** pM3Configuration)
{
	SI_S1AP_DT_M3Configuration * obj_M3Configuration = (SI_S1AP_DT_M3Configuration*) __si_allocM( sizeof(SI_S1AP_DT_M3Configuration));
	memset( obj_M3Configuration, 0, sizeof( SI_S1AP_DT_M3Configuration));

	// L:486
	obj_M3Configuration->selected_em3period = M3period_ms100_val;   // L:529


	*pM3Configuration = obj_M3Configuration;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__M4Configuration( SI_S1AP_DT_M4Configuration ** pM4Configuration)
{
	SI_S1AP_DT_M4Configuration * obj_M4Configuration = (SI_S1AP_DT_M4Configuration*) __si_allocM( sizeof(SI_S1AP_DT_M4Configuration));
	memset( obj_M4Configuration, 0, sizeof( SI_S1AP_DT_M4Configuration));

	// L:486
	obj_M4Configuration->selected_em4period = M4period_ms1024_val;   // L:529

	obj_M4Configuration->selected_em4_links_to_log = Links_to_log_uplink_val;   // L:529


	*pM4Configuration = obj_M4Configuration;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__M5Configuration( SI_S1AP_DT_M5Configuration ** pM5Configuration)
{
	SI_S1AP_DT_M5Configuration * obj_M5Configuration = (SI_S1AP_DT_M5Configuration*) __si_allocM( sizeof(SI_S1AP_DT_M5Configuration));
	memset( obj_M5Configuration, 0, sizeof( SI_S1AP_DT_M5Configuration));

	// L:486
	obj_M5Configuration->selected_em5period = M5period_ms1024_val;   // L:529

	obj_M5Configuration->selected_em5_links_to_log = Links_to_log_uplink_val;   // L:529


	*pM5Configuration = obj_M5Configuration;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__M6Configuration( SI_S1AP_DT_M6Configuration ** pM6Configuration)
{
	SI_S1AP_DT_M6Configuration * obj_M6Configuration = (SI_S1AP_DT_M6Configuration*) __si_allocM( sizeof(SI_S1AP_DT_M6Configuration));
	memset( obj_M6Configuration, 0, sizeof( SI_S1AP_DT_M6Configuration));

	// L:486
	obj_M6Configuration->selected_em6report_Interval = M6report_Interval_ms1024_val;   // L:529

	obj_M6Configuration->selected_em6delay_threshold = M6delay_threshold_ms30_val;   // L:529
	obj_M6Configuration->isPresent_m6delay_threshold = 1;

	obj_M6Configuration->selected_em6_links_to_log = Links_to_log_uplink_val;   // L:529


	*pM6Configuration = obj_M6Configuration;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__M7Configuration( SI_S1AP_DT_M7Configuration ** pM7Configuration)
{
	SI_S1AP_DT_M7Configuration * obj_M7Configuration = (SI_S1AP_DT_M7Configuration*) __si_allocM( sizeof(SI_S1AP_DT_M7Configuration));
	memset( obj_M7Configuration, 0, sizeof( SI_S1AP_DT_M7Configuration));

	// L:486
	obj_M7Configuration->m7period = __getTestINTEGER( 1, 60);    // L:533

	obj_M7Configuration->selected_em7_links_to_log = Links_to_log_uplink_val;   // L:529


	*pM7Configuration = obj_M7Configuration;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__MDT_Configuration( SI_S1AP_DT_MDT_Configuration ** pMDT_Configuration)
{
	SI_S1AP_DT_MDT_Configuration * obj_MDT_Configuration = (SI_S1AP_DT_MDT_Configuration*) __si_allocM( sizeof(SI_S1AP_DT_MDT_Configuration));
	memset( obj_MDT_Configuration, 0, sizeof( SI_S1AP_DT_MDT_Configuration));

	// L:486
	obj_MDT_Configuration->selected_emdt_Activation = MDT_Activation_immediate_MDT_only_val;   // L:529

	__si_s1ap__set_testdata__AreaScopeOfMDT( &obj_MDT_Configuration->areaScopeOfMDT);    // L:588

	__si_s1ap__set_testdata__MDTMode( &obj_MDT_Configuration->mDTMode);    // L:588


	*pMDT_Configuration = obj_MDT_Configuration;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__MBSFN_ResultToLog( SI_S1AP_DT_MBSFN_ResultToLog ** pMBSFN_ResultToLog)
{
	SI_S1AP_DT_MBSFN_ResultToLog * obj_MBSFN_ResultToLog = NULL; 
	__si_s1ap_init_MBSFN_ResultToLog( &obj_MBSFN_ResultToLog);

	// L:1260
	SI_S1AP_DT_MBSFN_ResultToLogInfo * objMBSFN_ResultToLogInfo = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__MBSFN_ResultToLogInfo( &objMBSFN_ResultToLogInfo);  // L:1395

	// L:1419
	__si_linked_list_add( obj_MBSFN_ResultToLog->MBSFN_ResultToLogInfo, (uint8_t*)objMBSFN_ResultToLogInfo);

	*pMBSFN_ResultToLog = obj_MBSFN_ResultToLog;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__MBSFN_ResultToLogInfo( SI_S1AP_DT_MBSFN_ResultToLogInfo ** pMBSFN_ResultToLogInfo)
{
	SI_S1AP_DT_MBSFN_ResultToLogInfo * obj_MBSFN_ResultToLogInfo = (SI_S1AP_DT_MBSFN_ResultToLogInfo*) __si_allocM( sizeof(SI_S1AP_DT_MBSFN_ResultToLogInfo));
	memset( obj_MBSFN_ResultToLogInfo, 0, sizeof( SI_S1AP_DT_MBSFN_ResultToLogInfo));

	// L:486
	obj_MBSFN_ResultToLogInfo->mBSFN_AreaId = __getTestINTEGER( 0, 255);    // L:533
	obj_MBSFN_ResultToLogInfo->isPresent_mBSFN_AreaId = 1;

	obj_MBSFN_ResultToLogInfo->carrierFreq = __getTestINTEGER( 0, 0);    // L:533


	*pMBSFN_ResultToLogInfo = obj_MBSFN_ResultToLogInfo;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__MDTPLMNList( SI_S1AP_DT_MDTPLMNList ** pMDTPLMNList)
{
	SI_S1AP_DT_MDTPLMNList * obj_MDTPLMNList = NULL; 
	__si_s1ap_init_MDTPLMNList( &obj_MDTPLMNList);

	// L:1260
	SI_S1AP_DT_PLMNidentity * objPLMNidentity = NULL;

	// OCTETSTRING  , PLMNidentity  // L:1348
	__si_s1ap_init_PLMNidentity2( &objPLMNidentity, "\x19\x14\x08\x14\x01", 5);


	// L:1419
	__si_linked_list_add( obj_MDTPLMNList->PLMNidentity, (uint8_t*)objPLMNidentity);

	*pMDTPLMNList = obj_MDTPLMNList;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__MDTMode( SI_S1AP_DT_MDTMode ** pMDTMode)
{
	SI_S1AP_DT_MDTMode * obj_MDTMode = (SI_S1AP_DT_MDTMode*) __si_allocM( sizeof(SI_S1AP_DT_MDTMode));
	memset( obj_MDTMode, 0, sizeof( SI_S1AP_DT_MDTMode));

	obj_MDTMode->SelectedChoice = 0;

	// L:2784

	switch( obj_MDTMode->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__ImmediateMDT( &obj_MDTMode->u.immediateMDT);  // L:2910  ,  Parser:SEQUENCE, ImmediateMDT
			break;
		case 1:
			__si_s1ap__set_testdata__LoggedMDT( &obj_MDTMode->u.loggedMDT);  // L:2910  ,  Parser:SEQUENCE, LoggedMDT
			break;
		case 2:
			//__si_s1ap__set_testdata__MDTMode_Extension( &obj_MDTMode->u.mDTMode_Extension);  // L:2910  ,  Parser:CONTAINER, MDTMode-Extension
			break;
	}

	*pMDTMode = obj_MDTMode;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__MeasurementThresholdA2( SI_S1AP_DT_MeasurementThresholdA2 ** pMeasurementThresholdA2)
{
	SI_S1AP_DT_MeasurementThresholdA2 * obj_MeasurementThresholdA2 = (SI_S1AP_DT_MeasurementThresholdA2*) __si_allocM( sizeof(SI_S1AP_DT_MeasurementThresholdA2));
	memset( obj_MeasurementThresholdA2, 0, sizeof( SI_S1AP_DT_MeasurementThresholdA2));

	obj_MeasurementThresholdA2->SelectedChoice = 0;

	// L:2784

	switch( obj_MeasurementThresholdA2->SelectedChoice)
	{
		case 0:
			obj_MeasurementThresholdA2->u.threshold_RSRP = __getTestINTEGER( 0, 97);    // L:2816
			break;
		case 1:
			obj_MeasurementThresholdA2->u.threshold_RSRQ = __getTestINTEGER( 0, 34);    // L:2816
			break;
	}

	*pMeasurementThresholdA2 = obj_MeasurementThresholdA2;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__MeasurementThresholdL1LoggedMDT( SI_S1AP_DT_MeasurementThresholdL1LoggedMDT ** pMeasurementThresholdL1LoggedMDT)
{
	SI_S1AP_DT_MeasurementThresholdL1LoggedMDT * obj_MeasurementThresholdL1LoggedMDT = (SI_S1AP_DT_MeasurementThresholdL1LoggedMDT*) __si_allocM( sizeof(SI_S1AP_DT_MeasurementThresholdL1LoggedMDT));
	memset( obj_MeasurementThresholdL1LoggedMDT, 0, sizeof( SI_S1AP_DT_MeasurementThresholdL1LoggedMDT));

	obj_MeasurementThresholdL1LoggedMDT->SelectedChoice = 0;

	// L:2784

	switch( obj_MeasurementThresholdL1LoggedMDT->SelectedChoice)
	{
		case 0:
			obj_MeasurementThresholdL1LoggedMDT->u.threshold_RSRP = __getTestINTEGER( 0, 97);    // L:2816
			break;
		case 1:
			obj_MeasurementThresholdL1LoggedMDT->u.threshold_RSRQ = __getTestINTEGER( 0, 34);    // L:2816
			break;
		case 2:
			__si_s1ap__set_testdata__PDU_MeasurementThresholdL1LoggedMDT_ExtIEs( &obj_MeasurementThresholdL1LoggedMDT->u.choice_Extensions);    // L:2871
			break;
	}

	*pMeasurementThresholdL1LoggedMDT = obj_MeasurementThresholdL1LoggedMDT;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__MMEPagingTarget( SI_S1AP_DT_MMEPagingTarget ** pMMEPagingTarget)
{
	SI_S1AP_DT_MMEPagingTarget * obj_MMEPagingTarget = (SI_S1AP_DT_MMEPagingTarget*) __si_allocM( sizeof(SI_S1AP_DT_MMEPagingTarget));
	memset( obj_MMEPagingTarget, 0, sizeof( SI_S1AP_DT_MMEPagingTarget));

	obj_MMEPagingTarget->SelectedChoice = 0;

	// L:2784

	switch( obj_MMEPagingTarget->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__Global_ENB_ID( &obj_MMEPagingTarget->u.global_ENB_ID);  // L:2910  ,  Parser:SEQUENCE, Global-ENB-ID
			break;
		case 1:
			__si_s1ap__set_testdata__TAI( &obj_MMEPagingTarget->u.tAI);  // L:2910  ,  Parser:SEQUENCE, TAI
			break;
	}

	*pMMEPagingTarget = obj_MMEPagingTarget;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__MutingPatternInformation( SI_S1AP_DT_MutingPatternInformation ** pMutingPatternInformation)
{
	SI_S1AP_DT_MutingPatternInformation * obj_MutingPatternInformation = (SI_S1AP_DT_MutingPatternInformation*) __si_allocM( sizeof(SI_S1AP_DT_MutingPatternInformation));
	memset( obj_MutingPatternInformation, 0, sizeof( SI_S1AP_DT_MutingPatternInformation));

	// L:486
	obj_MutingPatternInformation->selected_emuting_pattern_period = MutingPatternInformation_muting_pattern_period_ms0_val;   // L:529

	obj_MutingPatternInformation->muting_pattern_offset = __getTestINTEGER( 0, 10239);    // L:533
	obj_MutingPatternInformation->isPresent_muting_pattern_offset = 1;


	*pMutingPatternInformation = obj_MutingPatternInformation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__NB_IoT_Paging_eDRXInformation( SI_S1AP_DT_NB_IoT_Paging_eDRXInformation ** pNB_IoT_Paging_eDRXInformation)
{
	SI_S1AP_DT_NB_IoT_Paging_eDRXInformation * obj_NB_IoT_Paging_eDRXInformation = (SI_S1AP_DT_NB_IoT_Paging_eDRXInformation*) __si_allocM( sizeof(SI_S1AP_DT_NB_IoT_Paging_eDRXInformation));
	memset( obj_NB_IoT_Paging_eDRXInformation, 0, sizeof( SI_S1AP_DT_NB_IoT_Paging_eDRXInformation));

	// L:486
	obj_NB_IoT_Paging_eDRXInformation->selected_enB_IoT_paging_eDRX_Cycle = NB_IoT_Paging_eDRX_Cycle_hf2_val;   // L:529

	obj_NB_IoT_Paging_eDRXInformation->selected_enB_IoT_pagingTimeWindow = NB_IoT_PagingTimeWindow_s1_val;   // L:529
	obj_NB_IoT_Paging_eDRXInformation->isPresent_nB_IoT_pagingTimeWindow = 1;


	*pNB_IoT_Paging_eDRXInformation = obj_NB_IoT_Paging_eDRXInformation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__NR_CGI( SI_S1AP_DT_NR_CGI ** pNR_CGI)
{
	SI_S1AP_DT_NR_CGI * obj_NR_CGI = (SI_S1AP_DT_NR_CGI*) __si_allocM( sizeof(SI_S1AP_DT_NR_CGI));
	memset( obj_NR_CGI, 0, sizeof( SI_S1AP_DT_NR_CGI));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_NR_CGI->pLMNIdentity, "\x04\x22\x09\x03\x24", 5);    // L:540

	__si_s1ap_init_NRCellIdentity2( &obj_NR_CGI->nRCellIdentity, "91921", 5, 36);  // L:574
	obj_NR_CGI->nRCellIdentity->bitslen = 36; //   L:575


	*pNR_CGI = obj_NR_CGI;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__NRUESecurityCapabilities( SI_S1AP_DT_NRUESecurityCapabilities ** pNRUESecurityCapabilities)
{
	SI_S1AP_DT_NRUESecurityCapabilities * obj_NRUESecurityCapabilities = (SI_S1AP_DT_NRUESecurityCapabilities*) __si_allocM( sizeof(SI_S1AP_DT_NRUESecurityCapabilities));
	memset( obj_NRUESecurityCapabilities, 0, sizeof( SI_S1AP_DT_NRUESecurityCapabilities));

	// L:486
	__si_s1ap_init_NRencryptionAlgorithms2( &obj_NRUESecurityCapabilities->nRencryptionAlgorithms, "90", 2, 16);  // L:574
	obj_NRUESecurityCapabilities->nRencryptionAlgorithms->bitslen = 16; //   L:575

	//  Unknown Type=NRintegrityProtectionAlgorithms  L:606

	*pNRUESecurityCapabilities = obj_NRUESecurityCapabilities;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__NRV2XServicesAuthorized( SI_S1AP_DT_NRV2XServicesAuthorized ** pNRV2XServicesAuthorized)
{
	SI_S1AP_DT_NRV2XServicesAuthorized * obj_NRV2XServicesAuthorized = (SI_S1AP_DT_NRV2XServicesAuthorized*) __si_allocM( sizeof(SI_S1AP_DT_NRV2XServicesAuthorized));
	memset( obj_NRV2XServicesAuthorized, 0, sizeof( SI_S1AP_DT_NRV2XServicesAuthorized));

	// L:486
	obj_NRV2XServicesAuthorized->selected_evehicleUE = VehicleUE_authorized_val;   // L:529
	obj_NRV2XServicesAuthorized->isPresent_vehicleUE = 1;

	obj_NRV2XServicesAuthorized->selected_epedestrianUE = PedestrianUE_authorized_val;   // L:529
	obj_NRV2XServicesAuthorized->isPresent_pedestrianUE = 1;


	*pNRV2XServicesAuthorized = obj_NRV2XServicesAuthorized;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__NRUESidelinkAggregateMaximumBitrate( SI_S1AP_DT_NRUESidelinkAggregateMaximumBitrate ** pNRUESidelinkAggregateMaximumBitrate)
{
	SI_S1AP_DT_NRUESidelinkAggregateMaximumBitrate * obj_NRUESidelinkAggregateMaximumBitrate = (SI_S1AP_DT_NRUESidelinkAggregateMaximumBitrate*) __si_allocM( sizeof(SI_S1AP_DT_NRUESidelinkAggregateMaximumBitrate));
	memset( obj_NRUESidelinkAggregateMaximumBitrate, 0, sizeof( SI_S1AP_DT_NRUESidelinkAggregateMaximumBitrate));

	// L:486
	obj_NRUESidelinkAggregateMaximumBitrate->uEaggregateMaximumBitRate = __getTestINTEGER( 0, 10000000000);    // L:533


	*pNRUESidelinkAggregateMaximumBitrate = obj_NRUESidelinkAggregateMaximumBitrate;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__OverloadResponse( SI_S1AP_DT_OverloadResponse ** pOverloadResponse)
{
	SI_S1AP_DT_OverloadResponse * obj_OverloadResponse = (SI_S1AP_DT_OverloadResponse*) __si_allocM( sizeof(SI_S1AP_DT_OverloadResponse));
	memset( obj_OverloadResponse, 0, sizeof( SI_S1AP_DT_OverloadResponse));

	obj_OverloadResponse->SelectedChoice = 0;

	// L:2784

	switch( obj_OverloadResponse->SelectedChoice)
	{
		case 0:
			obj_OverloadResponse->u.overloadAction = OverloadAction_reject_non_emergency_mo_dt_val;  // TODO: set enum   L:2894  ,  Parser:ENUMERATED, OverloadAction
			break;
	}

	*pOverloadResponse = obj_OverloadResponse;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__PagingAttemptInformation( SI_S1AP_DT_PagingAttemptInformation ** pPagingAttemptInformation)
{
	SI_S1AP_DT_PagingAttemptInformation * obj_PagingAttemptInformation = (SI_S1AP_DT_PagingAttemptInformation*) __si_allocM( sizeof(SI_S1AP_DT_PagingAttemptInformation));
	memset( obj_PagingAttemptInformation, 0, sizeof( SI_S1AP_DT_PagingAttemptInformation));

	// L:486
	obj_PagingAttemptInformation->pagingAttemptCount = __getTestINTEGER( 1, 16);    // L:533

	obj_PagingAttemptInformation->intendedNumberOfPagingAttempts = __getTestINTEGER( 1, 16);    // L:533

	obj_PagingAttemptInformation->selected_enextPagingAreaScope = NextPagingAreaScope_same_val;   // L:529
	obj_PagingAttemptInformation->isPresent_nextPagingAreaScope = 1;


	*pPagingAttemptInformation = obj_PagingAttemptInformation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__Paging_eDRXInformation( SI_S1AP_DT_Paging_eDRXInformation ** pPaging_eDRXInformation)
{
	SI_S1AP_DT_Paging_eDRXInformation * obj_Paging_eDRXInformation = (SI_S1AP_DT_Paging_eDRXInformation*) __si_allocM( sizeof(SI_S1AP_DT_Paging_eDRXInformation));
	memset( obj_Paging_eDRXInformation, 0, sizeof( SI_S1AP_DT_Paging_eDRXInformation));

	// L:486
	obj_Paging_eDRXInformation->selected_epaging_eDRX_Cycle = Paging_eDRX_Cycle_hfhalf_val;   // L:529

	obj_Paging_eDRXInformation->selected_epagingTimeWindow = PagingTimeWindow_s1_val;   // L:529
	obj_Paging_eDRXInformation->isPresent_pagingTimeWindow = 1;


	*pPaging_eDRXInformation = obj_Paging_eDRXInformation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__PC5QoSParameters( SI_S1AP_DT_PC5QoSParameters ** pPC5QoSParameters)
{
	SI_S1AP_DT_PC5QoSParameters * obj_PC5QoSParameters = (SI_S1AP_DT_PC5QoSParameters*) __si_allocM( sizeof(SI_S1AP_DT_PC5QoSParameters));
	memset( obj_PC5QoSParameters, 0, sizeof( SI_S1AP_DT_PC5QoSParameters));

	// L:486
	__si_s1ap__set_testdata__PC5QoSFlowList( &obj_PC5QoSParameters->pc5QoSFlowList);    // L:580

	obj_PC5QoSParameters->pc5LinkAggregatedBitRates = __getTestINTEGER( 0, 10000000000);    // L:533
	obj_PC5QoSParameters->isPresent_pc5LinkAggregatedBitRates = 1;


	*pPC5QoSParameters = obj_PC5QoSParameters;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__PC5QoSFlowList( SI_S1AP_DT_PC5QoSFlowList ** pPC5QoSFlowList)
{
	SI_S1AP_DT_PC5QoSFlowList * obj_PC5QoSFlowList = NULL; 
	__si_s1ap_init_PC5QoSFlowList( &obj_PC5QoSFlowList);

	// L:1260
	SI_S1AP_DT_PC5QoSFlowItem * objPC5QoSFlowItem = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__PC5QoSFlowItem( &objPC5QoSFlowItem);  // L:1395

	// L:1419
	__si_linked_list_add( obj_PC5QoSFlowList->PC5QoSFlowItem, (uint8_t*)objPC5QoSFlowItem);

	*pPC5QoSFlowList = obj_PC5QoSFlowList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__PC5QoSFlowItem( SI_S1AP_DT_PC5QoSFlowItem ** pPC5QoSFlowItem)
{
	SI_S1AP_DT_PC5QoSFlowItem * obj_PC5QoSFlowItem = (SI_S1AP_DT_PC5QoSFlowItem*) __si_allocM( sizeof(SI_S1AP_DT_PC5QoSFlowItem));
	memset( obj_PC5QoSFlowItem, 0, sizeof( SI_S1AP_DT_PC5QoSFlowItem));

	// L:486
	obj_PC5QoSFlowItem->pQI = __getTestINTEGER( 0, 255);    // L:533

	__si_s1ap__set_testdata__PC5FlowBitRates( &obj_PC5QoSFlowItem->pc5FlowBitRates);    // L:584
	obj_PC5QoSFlowItem->isPresent_pc5FlowBitRates = 1;

	obj_PC5QoSFlowItem->selected_erange = Range_m50_val;   // L:529
	obj_PC5QoSFlowItem->isPresent_range = 1;


	*pPC5QoSFlowItem = obj_PC5QoSFlowItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__PC5FlowBitRates( SI_S1AP_DT_PC5FlowBitRates ** pPC5FlowBitRates)
{
	SI_S1AP_DT_PC5FlowBitRates * obj_PC5FlowBitRates = (SI_S1AP_DT_PC5FlowBitRates*) __si_allocM( sizeof(SI_S1AP_DT_PC5FlowBitRates));
	memset( obj_PC5FlowBitRates, 0, sizeof( SI_S1AP_DT_PC5FlowBitRates));

	// L:486
	obj_PC5FlowBitRates->guaranteedFlowBitRate = __getTestINTEGER( 0, 10000000000);    // L:533

	obj_PC5FlowBitRates->maximumFlowBitRate = __getTestINTEGER( 0, 10000000000);    // L:533


	*pPC5FlowBitRates = obj_PC5FlowBitRates;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__M1PeriodicReporting( SI_S1AP_DT_M1PeriodicReporting ** pM1PeriodicReporting)
{
	SI_S1AP_DT_M1PeriodicReporting * obj_M1PeriodicReporting = (SI_S1AP_DT_M1PeriodicReporting*) __si_allocM( sizeof(SI_S1AP_DT_M1PeriodicReporting));
	memset( obj_M1PeriodicReporting, 0, sizeof( SI_S1AP_DT_M1PeriodicReporting));

	// L:486
	obj_M1PeriodicReporting->selected_ereportInterval = ReportIntervalMDT_ms120_val;   // L:529

	obj_M1PeriodicReporting->selected_ereportAmount = ReportAmountMDT_r1_val;   // L:529


	*pM1PeriodicReporting = obj_M1PeriodicReporting;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__PLMNAreaBasedQMC( SI_S1AP_DT_PLMNAreaBasedQMC ** pPLMNAreaBasedQMC)
{
	SI_S1AP_DT_PLMNAreaBasedQMC * obj_PLMNAreaBasedQMC = (SI_S1AP_DT_PLMNAreaBasedQMC*) __si_allocM( sizeof(SI_S1AP_DT_PLMNAreaBasedQMC));
	memset( obj_PLMNAreaBasedQMC, 0, sizeof( SI_S1AP_DT_PLMNAreaBasedQMC));

	// L:486
	__si_s1ap__set_testdata__PLMNListforQMC( &obj_PLMNAreaBasedQMC->plmnListforQMC);    // L:580


	*pPLMNAreaBasedQMC = obj_PLMNAreaBasedQMC;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__PLMNListforQMC( SI_S1AP_DT_PLMNListforQMC ** pPLMNListforQMC)
{
	SI_S1AP_DT_PLMNListforQMC * obj_PLMNListforQMC = NULL; 
	__si_s1ap_init_PLMNListforQMC( &obj_PLMNListforQMC);

	// L:1260
	SI_S1AP_DT_PLMNidentity * objPLMNidentity = NULL;

	// OCTETSTRING  , PLMNidentity  // L:1348
	__si_s1ap_init_PLMNidentity2( &objPLMNidentity, "\x05\x07\x05\x09\x06", 5);


	// L:1419
	__si_linked_list_add( obj_PLMNListforQMC->PLMNidentity, (uint8_t*)objPLMNidentity);

	*pPLMNListforQMC = obj_PLMNListforQMC;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ProSeAuthorized( SI_S1AP_DT_ProSeAuthorized ** pProSeAuthorized)
{
	SI_S1AP_DT_ProSeAuthorized * obj_ProSeAuthorized = (SI_S1AP_DT_ProSeAuthorized*) __si_allocM( sizeof(SI_S1AP_DT_ProSeAuthorized));
	memset( obj_ProSeAuthorized, 0, sizeof( SI_S1AP_DT_ProSeAuthorized));

	// L:486
	obj_ProSeAuthorized->selected_eproSeDirectDiscovery = ProSeDirectDiscovery_authorized_val;   // L:529
	obj_ProSeAuthorized->isPresent_proSeDirectDiscovery = 1;

	obj_ProSeAuthorized->selected_eproSeDirectCommunication = ProSeDirectCommunication_authorized_val;   // L:529
	obj_ProSeAuthorized->isPresent_proSeDirectCommunication = 1;


	*pProSeAuthorized = obj_ProSeAuthorized;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__PSCellInformation( SI_S1AP_DT_PSCellInformation ** pPSCellInformation)
{
	SI_S1AP_DT_PSCellInformation * obj_PSCellInformation = (SI_S1AP_DT_PSCellInformation*) __si_allocM( sizeof(SI_S1AP_DT_PSCellInformation));
	memset( obj_PSCellInformation, 0, sizeof( SI_S1AP_DT_PSCellInformation));

	// L:486
	__si_s1ap__set_testdata__NR_CGI( &obj_PSCellInformation->nCGI);    // L:584


	*pPSCellInformation = obj_PSCellInformation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__RecommendedCellsForPaging( SI_S1AP_DT_RecommendedCellsForPaging ** pRecommendedCellsForPaging)
{
	SI_S1AP_DT_RecommendedCellsForPaging * obj_RecommendedCellsForPaging = (SI_S1AP_DT_RecommendedCellsForPaging*) __si_allocM( sizeof(SI_S1AP_DT_RecommendedCellsForPaging));
	memset( obj_RecommendedCellsForPaging, 0, sizeof( SI_S1AP_DT_RecommendedCellsForPaging));

	// L:486
	__si_s1ap__set_testdata__RecommendedCellList( &obj_RecommendedCellsForPaging->recommendedCellList);    // L:580


	*pRecommendedCellsForPaging = obj_RecommendedCellsForPaging;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__RecommendedCellList( SI_S1AP_DT_RecommendedCellList ** pRecommendedCellList)
{
	SI_S1AP_DT_RecommendedCellList * obj_RecommendedCellList = NULL; 
	__si_s1ap_init_RecommendedCellList( &obj_RecommendedCellList);

	// L:1260
	SI_S1AP_DT_PDU_RecommendedCellItemIEs * objRecommendedCellItemIEs = NULL;
	__si_s1ap__set_testdata__PDU_RecommendedCellItemIEs( &objRecommendedCellItemIEs);
	// L:1412
	__si_linked_list_add( obj_RecommendedCellList->list, (uint8_t*)objRecommendedCellItemIEs);

	*pRecommendedCellList = obj_RecommendedCellList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__RecommendedCellItem( SI_S1AP_DT_RecommendedCellItem ** pRecommendedCellItem)
{
	SI_S1AP_DT_RecommendedCellItem * obj_RecommendedCellItem = (SI_S1AP_DT_RecommendedCellItem*) __si_allocM( sizeof(SI_S1AP_DT_RecommendedCellItem));
	memset( obj_RecommendedCellItem, 0, sizeof( SI_S1AP_DT_RecommendedCellItem));

	// L:486
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_RecommendedCellItem->eUTRAN_CGI);    // L:584

	obj_RecommendedCellItem->timeStayedInCell = __getTestINTEGER( 0, 4095);    // L:533
	obj_RecommendedCellItem->isPresent_timeStayedInCell = 1;


	*pRecommendedCellItem = obj_RecommendedCellItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__RecommendedENBsForPaging( SI_S1AP_DT_RecommendedENBsForPaging ** pRecommendedENBsForPaging)
{
	SI_S1AP_DT_RecommendedENBsForPaging * obj_RecommendedENBsForPaging = (SI_S1AP_DT_RecommendedENBsForPaging*) __si_allocM( sizeof(SI_S1AP_DT_RecommendedENBsForPaging));
	memset( obj_RecommendedENBsForPaging, 0, sizeof( SI_S1AP_DT_RecommendedENBsForPaging));

	// L:486
	__si_s1ap__set_testdata__RecommendedENBList( &obj_RecommendedENBsForPaging->recommendedENBList);    // L:580


	*pRecommendedENBsForPaging = obj_RecommendedENBsForPaging;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__RecommendedENBList( SI_S1AP_DT_RecommendedENBList ** pRecommendedENBList)
{
	SI_S1AP_DT_RecommendedENBList * obj_RecommendedENBList = NULL; 
	__si_s1ap_init_RecommendedENBList( &obj_RecommendedENBList);

	// L:1260
	SI_S1AP_DT_PDU_RecommendedENBItemIEs * objRecommendedENBItemIEs = NULL;
	__si_s1ap__set_testdata__PDU_RecommendedENBItemIEs( &objRecommendedENBItemIEs);
	// L:1412
	__si_linked_list_add( obj_RecommendedENBList->list, (uint8_t*)objRecommendedENBItemIEs);

	*pRecommendedENBList = obj_RecommendedENBList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__RecommendedENBItem( SI_S1AP_DT_RecommendedENBItem ** pRecommendedENBItem)
{
	SI_S1AP_DT_RecommendedENBItem * obj_RecommendedENBItem = (SI_S1AP_DT_RecommendedENBItem*) __si_allocM( sizeof(SI_S1AP_DT_RecommendedENBItem));
	memset( obj_RecommendedENBItem, 0, sizeof( SI_S1AP_DT_RecommendedENBItem));

	// L:486
	__si_s1ap__set_testdata__MMEPagingTarget( &obj_RecommendedENBItem->mMEPagingTarget);    // L:588


	*pRecommendedENBItem = obj_RecommendedENBItem;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__RAT_Restrictions( SI_S1AP_DT_RAT_Restrictions ** pRAT_Restrictions)
{
	SI_S1AP_DT_RAT_Restrictions * obj_RAT_Restrictions = NULL; 
	__si_s1ap_init_RAT_Restrictions( &obj_RAT_Restrictions);

	// L:1260
	SI_S1AP_DT_RAT_RestrictionsItem * objRAT_RestrictionsItem = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__RAT_RestrictionsItem( &objRAT_RestrictionsItem);  // L:1395

	// L:1419
	__si_linked_list_add( obj_RAT_Restrictions->RAT_RestrictionsItem, (uint8_t*)objRAT_RestrictionsItem);

	*pRAT_Restrictions = obj_RAT_Restrictions;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__RAT_RestrictionsItem( SI_S1AP_DT_RAT_RestrictionsItem ** pRAT_RestrictionsItem)
{
	SI_S1AP_DT_RAT_RestrictionsItem * obj_RAT_RestrictionsItem = (SI_S1AP_DT_RAT_RestrictionsItem*) __si_allocM( sizeof(SI_S1AP_DT_RAT_RestrictionsItem));
	memset( obj_RAT_RestrictionsItem, 0, sizeof( SI_S1AP_DT_RAT_RestrictionsItem));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_RAT_RestrictionsItem->pLMNidentity, "\x21\x05\x06\x21\x09", 5);    // L:540

	__si_s1ap_init_RATRestrictionsItem_rAT_RestrictionInformation2( &obj_RAT_RestrictionsItem->rAT_RestrictionInformation, "4", 1, 8);  // L:574
	obj_RAT_RestrictionsItem->rAT_RestrictionInformation->bitslen = 8; //   L:575


	*pRAT_RestrictionsItem = obj_RAT_RestrictionsItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__RequestType( SI_S1AP_DT_RequestType ** pRequestType)
{
	SI_S1AP_DT_RequestType * obj_RequestType = (SI_S1AP_DT_RequestType*) __si_allocM( sizeof(SI_S1AP_DT_RequestType));
	memset( obj_RequestType, 0, sizeof( SI_S1AP_DT_RequestType));

	// L:486
	obj_RequestType->selected_eeventType = EventType_direct_val;   // L:529

	obj_RequestType->selected_ereportArea = ReportArea_ecgi_val;   // L:529


	*pRequestType = obj_RequestType;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__RIMTransfer( SI_S1AP_DT_RIMTransfer ** pRIMTransfer)
{
	SI_S1AP_DT_RIMTransfer * obj_RIMTransfer = (SI_S1AP_DT_RIMTransfer*) __si_allocM( sizeof(SI_S1AP_DT_RIMTransfer));
	memset( obj_RIMTransfer, 0, sizeof( SI_S1AP_DT_RIMTransfer));

	// L:486
	__si_s1ap_init_RIMInformation2( &obj_RIMTransfer->rIMInformation, "\x16\x09\x21\x05\x10", 5);    // L:540

	__si_s1ap__set_testdata__RIMRoutingAddress( &obj_RIMTransfer->rIMRoutingAddress);    // L:588
	obj_RIMTransfer->isPresent_rIMRoutingAddress = 1;


	*pRIMTransfer = obj_RIMTransfer;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__RIMRoutingAddress( SI_S1AP_DT_RIMRoutingAddress ** pRIMRoutingAddress)
{
	SI_S1AP_DT_RIMRoutingAddress * obj_RIMRoutingAddress = (SI_S1AP_DT_RIMRoutingAddress*) __si_allocM( sizeof(SI_S1AP_DT_RIMRoutingAddress));
	memset( obj_RIMRoutingAddress, 0, sizeof( SI_S1AP_DT_RIMRoutingAddress));

	obj_RIMRoutingAddress->SelectedChoice = 0;

	// L:2784

	switch( obj_RIMRoutingAddress->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__GERAN_Cell_ID( &obj_RIMRoutingAddress->u.gERAN_Cell_ID);  // L:2910  ,  Parser:SEQUENCE, GERAN-Cell-ID
			break;
		case 1:
			//__si_s1ap__set_testdata__TargetRNC_ID( &obj_RIMRoutingAddress->u.targetRNC_ID);  // L:2910  ,  Parser:SEQUENCE, TargetRNC-ID
			break;
		case 2:
			//__si_s1ap_init_RIMRoutingAddress_eHRPD_Sector_ID2( &obj_RIMRoutingAddress->u.eHRPD_Sector_ID, "YsocpcpJxcCaf4kt", 16);  // L:2905  ,  Parser:OCTETSTRING, RIMRoutingAddress_eHRPD-Sector-ID
			break;
	}

	*pRIMRoutingAddress = obj_RIMRoutingAddress;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__RLFReportInformation( SI_S1AP_DT_RLFReportInformation ** pRLFReportInformation)
{
	SI_S1AP_DT_RLFReportInformation * obj_RLFReportInformation = (SI_S1AP_DT_RLFReportInformation*) __si_allocM( sizeof(SI_S1AP_DT_RLFReportInformation));
	memset( obj_RLFReportInformation, 0, sizeof( SI_S1AP_DT_RLFReportInformation));

	// L:486
	__si_s1ap_init_UE_RLF_Report_Container2( &obj_RLFReportInformation->uE_RLF_Report_Container, "\x13\x24\x18\x02\x09", 5);    // L:540

	__si_s1ap_init_UE_RLF_Report_Container_for_extended_bands2( &obj_RLFReportInformation->uE_RLF_Report_Container_for_extended_bands, "\x05\x05\x06\x09\x07", 5);    // L:540
	obj_RLFReportInformation->isPresent_uE_RLF_Report_Container_for_extended_bands = 1;


	*pRLFReportInformation = obj_RLFReportInformation;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ECGIListForRestart( SI_S1AP_DT_ECGIListForRestart ** pECGIListForRestart)
{
	SI_S1AP_DT_ECGIListForRestart * obj_ECGIListForRestart = NULL; 
	__si_s1ap_init_ECGIListForRestart( &obj_ECGIListForRestart);

	// L:1260
	SI_S1AP_DT_EUTRAN_CGI * objEUTRAN_CGI = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__EUTRAN_CGI( &objEUTRAN_CGI);  // L:1395

	// L:1419
	__si_linked_list_add( obj_ECGIListForRestart->EUTRAN_CGI, (uint8_t*)objEUTRAN_CGI);

	*pECGIListForRestart = obj_ECGIListForRestart;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__SecurityContext( SI_S1AP_DT_SecurityContext ** pSecurityContext)
{
	SI_S1AP_DT_SecurityContext * obj_SecurityContext = (SI_S1AP_DT_SecurityContext*) __si_allocM( sizeof(SI_S1AP_DT_SecurityContext));
	memset( obj_SecurityContext, 0, sizeof( SI_S1AP_DT_SecurityContext));

	// L:486
	obj_SecurityContext->nextHopChainingCount = __getTestINTEGER( 0, 7);    // L:533

	__si_s1ap_init_SecurityKey2( &obj_SecurityContext->nextHopParameter, "13567190830636657292432937154783", 32, 256);  // L:574
	obj_SecurityContext->nextHopParameter->bitslen = 256; //   L:575


	*pSecurityContext = obj_SecurityContext;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__SecondaryRATDataUsageReportList( SI_S1AP_DT_SecondaryRATDataUsageReportList ** pSecondaryRATDataUsageReportList)
{
	SI_S1AP_DT_SecondaryRATDataUsageReportList * obj_SecondaryRATDataUsageReportList = NULL; 
	__si_s1ap_init_SecondaryRATDataUsageReportList( &obj_SecondaryRATDataUsageReportList);

	// L:1260
	SI_S1AP_DT_PDU_SecondaryRATDataUsageReportItemIEs * objSecondaryRATDataUsageReportItemIEs = NULL;
	__si_s1ap__set_testdata__PDU_SecondaryRATDataUsageReportItemIEs( &objSecondaryRATDataUsageReportItemIEs);
	// L:1412
	__si_linked_list_add( obj_SecondaryRATDataUsageReportList->list, (uint8_t*)objSecondaryRATDataUsageReportItemIEs);

	*pSecondaryRATDataUsageReportList = obj_SecondaryRATDataUsageReportList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__SecondaryRATDataUsageReportItem( SI_S1AP_DT_SecondaryRATDataUsageReportItem ** pSecondaryRATDataUsageReportItem)
{
	SI_S1AP_DT_SecondaryRATDataUsageReportItem * obj_SecondaryRATDataUsageReportItem = (SI_S1AP_DT_SecondaryRATDataUsageReportItem*) __si_allocM( sizeof(SI_S1AP_DT_SecondaryRATDataUsageReportItem));
	memset( obj_SecondaryRATDataUsageReportItem, 0, sizeof( SI_S1AP_DT_SecondaryRATDataUsageReportItem));

	// L:486
	obj_SecondaryRATDataUsageReportItem->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	obj_SecondaryRATDataUsageReportItem->selected_esecondaryRATType = SecondaryRATType_nR_val;   // L:529

	__si_s1ap__set_testdata__E_RABUsageReportList( &obj_SecondaryRATDataUsageReportItem->e_RABUsageReportList);    // L:580


	*pSecondaryRATDataUsageReportItem = obj_SecondaryRATDataUsageReportItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__SecurityIndication( SI_S1AP_DT_SecurityIndication ** pSecurityIndication)
{
	SI_S1AP_DT_SecurityIndication * obj_SecurityIndication = (SI_S1AP_DT_SecurityIndication*) __si_allocM( sizeof(SI_S1AP_DT_SecurityIndication));
	memset( obj_SecurityIndication, 0, sizeof( SI_S1AP_DT_SecurityIndication));

	// L:486
	obj_SecurityIndication->selected_eintegrityProtectionIndication = IntegrityProtectionIndication_required_val;   // L:529


	*pSecurityIndication = obj_SecurityIndication;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__SecurityResult( SI_S1AP_DT_SecurityResult ** pSecurityResult)
{
	SI_S1AP_DT_SecurityResult * obj_SecurityResult = (SI_S1AP_DT_SecurityResult*) __si_allocM( sizeof(SI_S1AP_DT_SecurityResult));
	memset( obj_SecurityResult, 0, sizeof( SI_S1AP_DT_SecurityResult));

	// L:486
	obj_SecurityResult->selected_eintegrityProtectionResult = IntegrityProtectionResult_performed_val;   // L:529


	*pSecurityResult = obj_SecurityResult;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__SensorMeasConfigNameItem( SI_S1AP_DT_SensorMeasConfigNameItem ** pSensorMeasConfigNameItem)
{
	SI_S1AP_DT_SensorMeasConfigNameItem * obj_SensorMeasConfigNameItem = (SI_S1AP_DT_SensorMeasConfigNameItem*) __si_allocM( sizeof(SI_S1AP_DT_SensorMeasConfigNameItem));
	memset( obj_SensorMeasConfigNameItem, 0, sizeof( SI_S1AP_DT_SensorMeasConfigNameItem));

	// L:486
	__si_s1ap__set_testdata__SensorNameConfig( &obj_SensorMeasConfigNameItem->sensorNameConfig);    // L:588


	*pSensorMeasConfigNameItem = obj_SensorMeasConfigNameItem;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__SensorMeasConfigNameList( SI_S1AP_DT_SensorMeasConfigNameList ** pSensorMeasConfigNameList)
{
	SI_S1AP_DT_SensorMeasConfigNameList * obj_SensorMeasConfigNameList = NULL; 
	__si_s1ap_init_SensorMeasConfigNameList( &obj_SensorMeasConfigNameList);

	// L:1260
	SI_S1AP_DT_SensorMeasConfigNameItem * objSensorMeasConfigNameItem = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__SensorMeasConfigNameItem( &objSensorMeasConfigNameItem);  // L:1395

	// L:1419
	__si_linked_list_add( obj_SensorMeasConfigNameList->SensorMeasConfigNameItem, (uint8_t*)objSensorMeasConfigNameItem);

	*pSensorMeasConfigNameList = obj_SensorMeasConfigNameList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__SensorMeasurementConfiguration( SI_S1AP_DT_SensorMeasurementConfiguration ** pSensorMeasurementConfiguration)
{
	SI_S1AP_DT_SensorMeasurementConfiguration * obj_SensorMeasurementConfiguration = (SI_S1AP_DT_SensorMeasurementConfiguration*) __si_allocM( sizeof(SI_S1AP_DT_SensorMeasurementConfiguration));
	memset( obj_SensorMeasurementConfiguration, 0, sizeof( SI_S1AP_DT_SensorMeasurementConfiguration));

	// L:486
	obj_SensorMeasurementConfiguration->selected_esensorMeasConfig = SensorMeasConfig_setup_val;   // L:529

	__si_s1ap__set_testdata__SensorMeasConfigNameList( &obj_SensorMeasurementConfiguration->sensorMeasConfigNameList);    // L:580
	obj_SensorMeasurementConfiguration->isPresent_sensorMeasConfigNameList = 1;


	*pSensorMeasurementConfiguration = obj_SensorMeasurementConfiguration;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__SensorNameConfig( SI_S1AP_DT_SensorNameConfig ** pSensorNameConfig)
{
	SI_S1AP_DT_SensorNameConfig * obj_SensorNameConfig = (SI_S1AP_DT_SensorNameConfig*) __si_allocM( sizeof(SI_S1AP_DT_SensorNameConfig));
	memset( obj_SensorNameConfig, 0, sizeof( SI_S1AP_DT_SensorNameConfig));

	obj_SensorNameConfig->SelectedChoice = 0;

	// L:2784

	switch( obj_SensorNameConfig->SelectedChoice)
	{
		case 0:
			obj_SensorNameConfig->u.uncompensatedBarometricConfig = SensorNameConfig_uncompensatedBarometricConfig_true_val;  // TODO: set enum   L:2894  ,  Parser:ENUMERATED, SensorNameConfig_uncompensatedBarometricConfig
			break;
		case 1:
			__si_s1ap__set_testdata__PDU_SensorNameConfig_ExtIEs( &obj_SensorNameConfig->u.choice_Extensions);    // L:2871
			break;
	}

	*pSensorNameConfig = obj_SensorNameConfig;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__SONInformation( SI_S1AP_DT_SONInformation ** pSONInformation)
{
	SI_S1AP_DT_SONInformation * obj_SONInformation = (SI_S1AP_DT_SONInformation*) __si_allocM( sizeof(SI_S1AP_DT_SONInformation));
	memset( obj_SONInformation, 0, sizeof( SI_S1AP_DT_SONInformation));

	obj_SONInformation->SelectedChoice = 0;

	// L:2784

	switch( obj_SONInformation->SelectedChoice)
	{
		case 0:
			obj_SONInformation->u.sONInformationRequest = SONInformationRequest_x2TNL_Configuration_Info_val;  // TODO: set enum   L:2894  ,  Parser:ENUMERATED, SONInformationRequest
			break;
		case 1:
			__si_s1ap__set_testdata__SONInformationReply( &obj_SONInformation->u.sONInformationReply);  // L:2910  ,  Parser:SEQUENCE, SONInformationReply
			break;
		case 2:
			//__si_s1ap__set_testdata__SONInformation_Extension( &obj_SONInformation->u.sONInformation_Extension);  // L:2910  ,  Parser:CONTAINER, SONInformation-Extension
			break;
	}

	*pSONInformation = obj_SONInformation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__SONInformationReply( SI_S1AP_DT_SONInformationReply ** pSONInformationReply)
{
	SI_S1AP_DT_SONInformationReply * obj_SONInformationReply = (SI_S1AP_DT_SONInformationReply*) __si_allocM( sizeof(SI_S1AP_DT_SONInformationReply));
	memset( obj_SONInformationReply, 0, sizeof( SI_S1AP_DT_SONInformationReply));

	// L:486
	__si_s1ap__set_testdata__X2TNLConfigurationInfo( &obj_SONInformationReply->x2TNLConfigurationInfo);    // L:584
	obj_SONInformationReply->isPresent_x2TNLConfigurationInfo = 1;


	*pSONInformationReply = obj_SONInformationReply;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__SONInformationReport( SI_S1AP_DT_SONInformationReport ** pSONInformationReport)
{
	SI_S1AP_DT_SONInformationReport * obj_SONInformationReport = (SI_S1AP_DT_SONInformationReport*) __si_allocM( sizeof(SI_S1AP_DT_SONInformationReport));
	memset( obj_SONInformationReport, 0, sizeof( SI_S1AP_DT_SONInformationReport));

	obj_SONInformationReport->SelectedChoice = 0;

	// L:2784

	switch( obj_SONInformationReport->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__RLFReportInformation( &obj_SONInformationReport->u.rLFReportInformation);  // L:2910  ,  Parser:SEQUENCE, RLFReportInformation
			break;
	}

	*pSONInformationReport = obj_SONInformationReport;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__SONConfigurationTransfer( SI_S1AP_DT_SONConfigurationTransfer ** pSONConfigurationTransfer)
{
	SI_S1AP_DT_SONConfigurationTransfer * obj_SONConfigurationTransfer = (SI_S1AP_DT_SONConfigurationTransfer*) __si_allocM( sizeof(SI_S1AP_DT_SONConfigurationTransfer));
	memset( obj_SONConfigurationTransfer, 0, sizeof( SI_S1AP_DT_SONConfigurationTransfer));

	// L:486
	__si_s1ap__set_testdata__TargeteNB_ID( &obj_SONConfigurationTransfer->targeteNB_ID);    // L:584

	__si_s1ap__set_testdata__SourceeNB_ID( &obj_SONConfigurationTransfer->sourceeNB_ID);    // L:584

	__si_s1ap__set_testdata__SONInformation( &obj_SONConfigurationTransfer->sONInformation);    // L:588


	*pSONConfigurationTransfer = obj_SONConfigurationTransfer;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__SynchronisationInformation( SI_S1AP_DT_SynchronisationInformation ** pSynchronisationInformation)
{
	SI_S1AP_DT_SynchronisationInformation * obj_SynchronisationInformation = (SI_S1AP_DT_SynchronisationInformation*) __si_allocM( sizeof(SI_S1AP_DT_SynchronisationInformation));
	memset( obj_SynchronisationInformation, 0, sizeof( SI_S1AP_DT_SynchronisationInformation));

	// L:486
	obj_SynchronisationInformation->sourceStratumLevel = __getTestINTEGER( 0, 3);    // L:533
	obj_SynchronisationInformation->isPresent_sourceStratumLevel = 1;

	__si_s1ap__set_testdata__ListeningSubframePattern( &obj_SynchronisationInformation->listeningSubframePattern);    // L:584
	obj_SynchronisationInformation->isPresent_listeningSubframePattern = 1;

	__si_s1ap__set_testdata__ECGI_List( &obj_SynchronisationInformation->aggressoreCGI_List);    // L:580
	obj_SynchronisationInformation->isPresent_aggressoreCGI_List = 1;


	*pSynchronisationInformation = obj_SynchronisationInformation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__SourceeNB_ID( SI_S1AP_DT_SourceeNB_ID ** pSourceeNB_ID)
{
	SI_S1AP_DT_SourceeNB_ID * obj_SourceeNB_ID = (SI_S1AP_DT_SourceeNB_ID*) __si_allocM( sizeof(SI_S1AP_DT_SourceeNB_ID));
	memset( obj_SourceeNB_ID, 0, sizeof( SI_S1AP_DT_SourceeNB_ID));

	// L:486
	__si_s1ap__set_testdata__Global_ENB_ID( &obj_SourceeNB_ID->global_ENB_ID);    // L:584

	__si_s1ap__set_testdata__TAI( &obj_SourceeNB_ID->selected_TAI);    // L:584


	*pSourceeNB_ID = obj_SourceeNB_ID;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__SourceNodeID( SI_S1AP_DT_SourceNodeID ** pSourceNodeID)
{
	SI_S1AP_DT_SourceNodeID * obj_SourceNodeID = (SI_S1AP_DT_SourceNodeID*) __si_allocM( sizeof(SI_S1AP_DT_SourceNodeID));
	memset( obj_SourceNodeID, 0, sizeof( SI_S1AP_DT_SourceNodeID));

	obj_SourceNodeID->SelectedChoice = 0;

	// L:2784

	switch( obj_SourceNodeID->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__SourceNgRanNode_ID( &obj_SourceNodeID->u.sourceNgRanNode_ID);  // L:2910  ,  Parser:SEQUENCE, SourceNgRanNode-ID
			break;
		case 1:
			//__si_s1ap__set_testdata__SourceNodeID_Extension( &obj_SourceNodeID->u.sourceNodeID_Extension);  // L:2910  ,  Parser:CONTAINER, SourceNodeID-Extension
			break;
	}

	*pSourceNodeID = obj_SourceNodeID;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__SourceeNB_ToTargeteNB_TransparentContainer( SI_S1AP_DT_SourceeNB_ToTargeteNB_TransparentContainer ** pSourceeNB_ToTargeteNB_TransparentContainer)
{
	SI_S1AP_DT_SourceeNB_ToTargeteNB_TransparentContainer * obj_SourceeNB_ToTargeteNB_TransparentContainer = (SI_S1AP_DT_SourceeNB_ToTargeteNB_TransparentContainer*) __si_allocM( sizeof(SI_S1AP_DT_SourceeNB_ToTargeteNB_TransparentContainer));
	memset( obj_SourceeNB_ToTargeteNB_TransparentContainer, 0, sizeof( SI_S1AP_DT_SourceeNB_ToTargeteNB_TransparentContainer));

	// L:486
	__si_s1ap_init_RRC_Container2( &obj_SourceeNB_ToTargeteNB_TransparentContainer->rRC_Container, "\x13\x15\x19\x05\x21", 5);    // L:540

	__si_s1ap__set_testdata__E_RABInformationList( &obj_SourceeNB_ToTargeteNB_TransparentContainer->e_RABInformationList);    // L:580
	obj_SourceeNB_ToTargeteNB_TransparentContainer->isPresent_e_RABInformationList = 1;

	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_SourceeNB_ToTargeteNB_TransparentContainer->targetCell_ID);    // L:584

	obj_SourceeNB_ToTargeteNB_TransparentContainer->subscriberProfileIDforRFP = __getTestINTEGER( 1, 256);    // L:533
	obj_SourceeNB_ToTargeteNB_TransparentContainer->isPresent_subscriberProfileIDforRFP = 1;

	__si_s1ap__set_testdata__UE_HistoryInformation( &obj_SourceeNB_ToTargeteNB_TransparentContainer->uE_HistoryInformation);    // L:580


	*pSourceeNB_ToTargeteNB_TransparentContainer = obj_SourceeNB_ToTargeteNB_TransparentContainer;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__SourceNgRanNode_ID( SI_S1AP_DT_SourceNgRanNode_ID ** pSourceNgRanNode_ID)
{
	SI_S1AP_DT_SourceNgRanNode_ID * obj_SourceNgRanNode_ID = (SI_S1AP_DT_SourceNgRanNode_ID*) __si_allocM( sizeof(SI_S1AP_DT_SourceNgRanNode_ID));
	memset( obj_SourceNgRanNode_ID, 0, sizeof( SI_S1AP_DT_SourceNgRanNode_ID));

	// L:486
	__si_s1ap__set_testdata__Global_RAN_NODE_ID( &obj_SourceNgRanNode_ID->global_RAN_NODE_ID);    // L:588

	__si_s1ap__set_testdata__FiveGSTAI( &obj_SourceNgRanNode_ID->selected_TAI);    // L:584


	*pSourceNgRanNode_ID = obj_SourceNgRanNode_ID;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ServedGUMMEIs( SI_S1AP_DT_ServedGUMMEIs ** pServedGUMMEIs)
{
	SI_S1AP_DT_ServedGUMMEIs * obj_ServedGUMMEIs = NULL; 
	__si_s1ap_init_ServedGUMMEIs( &obj_ServedGUMMEIs);

	// L:1260
	SI_S1AP_DT_ServedGUMMEIsItem * objServedGUMMEIsItem = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__ServedGUMMEIsItem( &objServedGUMMEIsItem);  // L:1395

	// L:1419
	__si_linked_list_add( obj_ServedGUMMEIs->ServedGUMMEIsItem, (uint8_t*)objServedGUMMEIsItem);

	*pServedGUMMEIs = obj_ServedGUMMEIs;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ServedGUMMEIsItem( SI_S1AP_DT_ServedGUMMEIsItem ** pServedGUMMEIsItem)
{
	SI_S1AP_DT_ServedGUMMEIsItem * obj_ServedGUMMEIsItem = (SI_S1AP_DT_ServedGUMMEIsItem*) __si_allocM( sizeof(SI_S1AP_DT_ServedGUMMEIsItem));
	memset( obj_ServedGUMMEIsItem, 0, sizeof( SI_S1AP_DT_ServedGUMMEIsItem));

	// L:486
	__si_s1ap__set_testdata__ServedPLMNs( &obj_ServedGUMMEIsItem->servedPLMNs);    // L:580

	__si_s1ap__set_testdata__ServedGroupIDs( &obj_ServedGUMMEIsItem->servedGroupIDs);    // L:580

	__si_s1ap__set_testdata__ServedMMECs( &obj_ServedGUMMEIsItem->servedMMECs);    // L:580


	*pServedGUMMEIsItem = obj_ServedGUMMEIsItem;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ServedGroupIDs( SI_S1AP_DT_ServedGroupIDs ** pServedGroupIDs)
{
	SI_S1AP_DT_ServedGroupIDs * obj_ServedGroupIDs = NULL; 
	__si_s1ap_init_ServedGroupIDs( &obj_ServedGroupIDs);

	// L:1260
	SI_S1AP_DT_MME_Group_ID * objMME_Group_ID = NULL;

	// OCTETSTRING  , MME-Group-ID  // L:1348
	__si_s1ap_init_MME_Group_ID2( &objMME_Group_ID, "\x13\x22", 2);


	// L:1419
	__si_linked_list_add( obj_ServedGroupIDs->MME_Group_ID, (uint8_t*)objMME_Group_ID);

	*pServedGroupIDs = obj_ServedGroupIDs;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ServedMMECs( SI_S1AP_DT_ServedMMECs ** pServedMMECs)
{
	SI_S1AP_DT_ServedMMECs * obj_ServedMMECs = NULL; 
	__si_s1ap_init_ServedMMECs( &obj_ServedMMECs);

	// L:1260
	SI_S1AP_DT_MME_Code * objMME_Code = NULL;

	// OCTETSTRING  , MME-Code  // L:1348
	__si_s1ap_init_MME_Code2( &objMME_Code, "\x01", 1);


	// L:1419
	__si_linked_list_add( obj_ServedMMECs->MME_Code, (uint8_t*)objMME_Code);

	*pServedMMECs = obj_ServedMMECs;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ServedPLMNs( SI_S1AP_DT_ServedPLMNs ** pServedPLMNs)
{
	SI_S1AP_DT_ServedPLMNs * obj_ServedPLMNs = NULL; 
	__si_s1ap_init_ServedPLMNs( &obj_ServedPLMNs);

	// L:1260
	SI_S1AP_DT_PLMNidentity * objPLMNidentity = NULL;

	// OCTETSTRING  , PLMNidentity  // L:1348
	__si_s1ap_init_PLMNidentity2( &objPLMNidentity, "\x03\x04\x14\x08\x12", 5);


	// L:1419
	__si_linked_list_add( obj_ServedPLMNs->PLMNidentity, (uint8_t*)objPLMNidentity);

	*pServedPLMNs = obj_ServedPLMNs;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__Subscription_Based_UE_DifferentiationInfo( SI_S1AP_DT_Subscription_Based_UE_DifferentiationInfo ** pSubscription_Based_UE_DifferentiationInfo)
{
	SI_S1AP_DT_Subscription_Based_UE_DifferentiationInfo * obj_Subscription_Based_UE_DifferentiationInfo = (SI_S1AP_DT_Subscription_Based_UE_DifferentiationInfo*) __si_allocM( sizeof(SI_S1AP_DT_Subscription_Based_UE_DifferentiationInfo));
	memset( obj_Subscription_Based_UE_DifferentiationInfo, 0, sizeof( SI_S1AP_DT_Subscription_Based_UE_DifferentiationInfo));

	// L:486
	obj_Subscription_Based_UE_DifferentiationInfo->selected_eperiodicCommunicationIndicator = SubscriptionBasedUEDifferentiationInfo_periodicCommunicationIndicator_periodically_val;   // L:529
	obj_Subscription_Based_UE_DifferentiationInfo->isPresent_periodicCommunicationIndicator = 1;

	obj_Subscription_Based_UE_DifferentiationInfo->periodicTime = __getTestINTEGER( 1, 3600);    // L:533
	obj_Subscription_Based_UE_DifferentiationInfo->isPresent_periodicTime = 1;

	__si_s1ap__set_testdata__ScheduledCommunicationTime( &obj_Subscription_Based_UE_DifferentiationInfo->scheduledCommunicationTime);    // L:584
	obj_Subscription_Based_UE_DifferentiationInfo->isPresent_scheduledCommunicationTime = 1;

	obj_Subscription_Based_UE_DifferentiationInfo->selected_estationaryIndication = SubscriptionBasedUEDifferentiationInfo_stationaryIndication_stationary_val;   // L:529
	obj_Subscription_Based_UE_DifferentiationInfo->isPresent_stationaryIndication = 1;

	obj_Subscription_Based_UE_DifferentiationInfo->selected_etrafficProfile = SubscriptionBasedUEDifferentiationInfo_trafficProfile_single_packet_val;   // L:529
	obj_Subscription_Based_UE_DifferentiationInfo->isPresent_trafficProfile = 1;

	obj_Subscription_Based_UE_DifferentiationInfo->selected_ebatteryIndication = SubscriptionBasedUEDifferentiationInfo_batteryIndication_battery_powered_val;   // L:529
	obj_Subscription_Based_UE_DifferentiationInfo->isPresent_batteryIndication = 1;


	*pSubscription_Based_UE_DifferentiationInfo = obj_Subscription_Based_UE_DifferentiationInfo;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ScheduledCommunicationTime( SI_S1AP_DT_ScheduledCommunicationTime ** pScheduledCommunicationTime)
{
	SI_S1AP_DT_ScheduledCommunicationTime * obj_ScheduledCommunicationTime = (SI_S1AP_DT_ScheduledCommunicationTime*) __si_allocM( sizeof(SI_S1AP_DT_ScheduledCommunicationTime));
	memset( obj_ScheduledCommunicationTime, 0, sizeof( SI_S1AP_DT_ScheduledCommunicationTime));

	// L:486
	__si_s1ap_init_ScheduledCommunicationTime_dayofWeek2( &obj_ScheduledCommunicationTime->dayofWeek, "7", 1, 7);  // L:574
	obj_ScheduledCommunicationTime->dayofWeek->bitslen = 7; //   L:575
	obj_ScheduledCommunicationTime->isPresent_dayofWeek = 1;

	obj_ScheduledCommunicationTime->timeofDayStart = __getTestINTEGER( 0, 86399);    // L:533
	obj_ScheduledCommunicationTime->isPresent_timeofDayStart = 1;

	obj_ScheduledCommunicationTime->timeofDayEnd = __getTestINTEGER( 0, 86399);    // L:533
	obj_ScheduledCommunicationTime->isPresent_timeofDayEnd = 1;


	*pScheduledCommunicationTime = obj_ScheduledCommunicationTime;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__SupportedTAs( SI_S1AP_DT_SupportedTAs ** pSupportedTAs)
{
	SI_S1AP_DT_SupportedTAs * obj_SupportedTAs = NULL; 
	__si_s1ap_init_SupportedTAs( &obj_SupportedTAs);

	// L:1260
	SI_S1AP_DT_SupportedTAs_Item * objSupportedTAs_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__SupportedTAs_Item( &objSupportedTAs_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_SupportedTAs->SupportedTAs_Item, (uint8_t*)objSupportedTAs_Item);

	*pSupportedTAs = obj_SupportedTAs;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__SupportedTAs_Item( SI_S1AP_DT_SupportedTAs_Item ** pSupportedTAs_Item)
{
	SI_S1AP_DT_SupportedTAs_Item * obj_SupportedTAs_Item = (SI_S1AP_DT_SupportedTAs_Item*) __si_allocM( sizeof(SI_S1AP_DT_SupportedTAs_Item));
	memset( obj_SupportedTAs_Item, 0, sizeof( SI_S1AP_DT_SupportedTAs_Item));

	// L:486
	__si_s1ap_init_TAC2( &obj_SupportedTAs_Item->tAC, "\x08\x16", 2);    // L:545

	__si_s1ap__set_testdata__BPLMNs( &obj_SupportedTAs_Item->broadcastPLMNs);    // L:580


	*pSupportedTAs_Item = obj_SupportedTAs_Item;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TimeSynchronisationInfo( SI_S1AP_DT_TimeSynchronisationInfo ** pTimeSynchronisationInfo)
{
	SI_S1AP_DT_TimeSynchronisationInfo * obj_TimeSynchronisationInfo = (SI_S1AP_DT_TimeSynchronisationInfo*) __si_allocM( sizeof(SI_S1AP_DT_TimeSynchronisationInfo));
	memset( obj_TimeSynchronisationInfo, 0, sizeof( SI_S1AP_DT_TimeSynchronisationInfo));

	// L:486
	obj_TimeSynchronisationInfo->stratumLevel = __getTestINTEGER( 0, 3);    // L:533

	obj_TimeSynchronisationInfo->selected_esynchronisationStatus = SynchronisationStatus_synchronous_val;   // L:529


	*pTimeSynchronisationInfo = obj_TimeSynchronisationInfo;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__S_TMSI( SI_S1AP_DT_S_TMSI ** pS_TMSI)
{
	SI_S1AP_DT_S_TMSI * obj_S_TMSI = (SI_S1AP_DT_S_TMSI*) __si_allocM( sizeof(SI_S1AP_DT_S_TMSI));
	memset( obj_S_TMSI, 0, sizeof( SI_S1AP_DT_S_TMSI));

	// L:486
	__si_s1ap_init_MME_Code2( &obj_S_TMSI->mMEC, "\x22", 1);    // L:545

	__si_s1ap_init_M_TMSI2( &obj_S_TMSI->m_TMSI, "\x24\x12\x24\x22", 4);    // L:545


	*pS_TMSI = obj_S_TMSI;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__TACList_In_LTE_NTN( SI_S1AP_DT_TACList_In_LTE_NTN ** pTACList_In_LTE_NTN)
{
	SI_S1AP_DT_TACList_In_LTE_NTN * obj_TACList_In_LTE_NTN = NULL; 
	__si_s1ap_init_TACList_In_LTE_NTN( &obj_TACList_In_LTE_NTN);

	// L:1260
	SI_S1AP_DT_TAC * objTAC = NULL;

	// OCTETSTRING  , TAC  // L:1348
	__si_s1ap_init_TAC2( &objTAC, "\x02\x24", 2);


	// L:1419
	__si_linked_list_add( obj_TACList_In_LTE_NTN->TAC, (uint8_t*)objTAC);

	*pTACList_In_LTE_NTN = obj_TACList_In_LTE_NTN;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TAIBasedMDT( SI_S1AP_DT_TAIBasedMDT ** pTAIBasedMDT)
{
	SI_S1AP_DT_TAIBasedMDT * obj_TAIBasedMDT = (SI_S1AP_DT_TAIBasedMDT*) __si_allocM( sizeof(SI_S1AP_DT_TAIBasedMDT));
	memset( obj_TAIBasedMDT, 0, sizeof( SI_S1AP_DT_TAIBasedMDT));

	// L:486
	__si_s1ap__set_testdata__TAIListforMDT( &obj_TAIBasedMDT->tAIListforMDT);    // L:580


	*pTAIBasedMDT = obj_TAIBasedMDT;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__TAIListforMDT( SI_S1AP_DT_TAIListforMDT ** pTAIListforMDT)
{
	SI_S1AP_DT_TAIListforMDT * obj_TAIListforMDT = NULL; 
	__si_s1ap_init_TAIListforMDT( &obj_TAIListforMDT);

	// L:1260
	SI_S1AP_DT_TAI * objTAI = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__TAI( &objTAI);  // L:1395

	// L:1419
	__si_linked_list_add( obj_TAIListforMDT->TAI, (uint8_t*)objTAI);

	*pTAIListforMDT = obj_TAIListforMDT;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__TAIListforWarning( SI_S1AP_DT_TAIListforWarning ** pTAIListforWarning)
{
	SI_S1AP_DT_TAIListforWarning * obj_TAIListforWarning = NULL; 
	__si_s1ap_init_TAIListforWarning( &obj_TAIListforWarning);

	// L:1260
	SI_S1AP_DT_TAI * objTAI = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__TAI( &objTAI);  // L:1395

	// L:1419
	__si_linked_list_add( obj_TAIListforWarning->TAI, (uint8_t*)objTAI);

	*pTAIListforWarning = obj_TAIListforWarning;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TAI( SI_S1AP_DT_TAI ** pTAI)
{
	SI_S1AP_DT_TAI * obj_TAI = (SI_S1AP_DT_TAI*) __si_allocM( sizeof(SI_S1AP_DT_TAI));
	memset( obj_TAI, 0, sizeof( SI_S1AP_DT_TAI));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_TAI->pLMNidentity, "\x01\x08\x20\x17\x23", 5);    // L:540

	__si_s1ap_init_TAC2( &obj_TAI->tAC, "\x13\x11", 2);    // L:545


	*pTAI = obj_TAI;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__TAI_Broadcast( SI_S1AP_DT_TAI_Broadcast ** pTAI_Broadcast)
{
	SI_S1AP_DT_TAI_Broadcast * obj_TAI_Broadcast = NULL; 
	__si_s1ap_init_TAI_Broadcast( &obj_TAI_Broadcast);

	// L:1260
	SI_S1AP_DT_TAI_Broadcast_Item * objTAI_Broadcast_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__TAI_Broadcast_Item( &objTAI_Broadcast_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_TAI_Broadcast->TAI_Broadcast_Item, (uint8_t*)objTAI_Broadcast_Item);

	*pTAI_Broadcast = obj_TAI_Broadcast;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TAI_Broadcast_Item( SI_S1AP_DT_TAI_Broadcast_Item ** pTAI_Broadcast_Item)
{
	SI_S1AP_DT_TAI_Broadcast_Item * obj_TAI_Broadcast_Item = (SI_S1AP_DT_TAI_Broadcast_Item*) __si_allocM( sizeof(SI_S1AP_DT_TAI_Broadcast_Item));
	memset( obj_TAI_Broadcast_Item, 0, sizeof( SI_S1AP_DT_TAI_Broadcast_Item));

	// L:486
	__si_s1ap__set_testdata__TAI( &obj_TAI_Broadcast_Item->tAI);    // L:584

	__si_s1ap__set_testdata__CompletedCellinTAI( &obj_TAI_Broadcast_Item->completedCellinTAI);    // L:580


	*pTAI_Broadcast_Item = obj_TAI_Broadcast_Item;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__TAI_Cancelled( SI_S1AP_DT_TAI_Cancelled ** pTAI_Cancelled)
{
	SI_S1AP_DT_TAI_Cancelled * obj_TAI_Cancelled = NULL; 
	__si_s1ap_init_TAI_Cancelled( &obj_TAI_Cancelled);

	// L:1260
	SI_S1AP_DT_TAI_Cancelled_Item * objTAI_Cancelled_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__TAI_Cancelled_Item( &objTAI_Cancelled_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_TAI_Cancelled->TAI_Cancelled_Item, (uint8_t*)objTAI_Cancelled_Item);

	*pTAI_Cancelled = obj_TAI_Cancelled;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TAI_Cancelled_Item( SI_S1AP_DT_TAI_Cancelled_Item ** pTAI_Cancelled_Item)
{
	SI_S1AP_DT_TAI_Cancelled_Item * obj_TAI_Cancelled_Item = (SI_S1AP_DT_TAI_Cancelled_Item*) __si_allocM( sizeof(SI_S1AP_DT_TAI_Cancelled_Item));
	memset( obj_TAI_Cancelled_Item, 0, sizeof( SI_S1AP_DT_TAI_Cancelled_Item));

	// L:486
	__si_s1ap__set_testdata__TAI( &obj_TAI_Cancelled_Item->tAI);    // L:584

	__si_s1ap__set_testdata__CancelledCellinTAI( &obj_TAI_Cancelled_Item->cancelledCellinTAI);    // L:580


	*pTAI_Cancelled_Item = obj_TAI_Cancelled_Item;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TABasedMDT( SI_S1AP_DT_TABasedMDT ** pTABasedMDT)
{
	SI_S1AP_DT_TABasedMDT * obj_TABasedMDT = (SI_S1AP_DT_TABasedMDT*) __si_allocM( sizeof(SI_S1AP_DT_TABasedMDT));
	memset( obj_TABasedMDT, 0, sizeof( SI_S1AP_DT_TABasedMDT));

	// L:486
	__si_s1ap__set_testdata__TAListforMDT( &obj_TABasedMDT->tAListforMDT);    // L:580


	*pTABasedMDT = obj_TABasedMDT;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__TAListforMDT( SI_S1AP_DT_TAListforMDT ** pTAListforMDT)
{
	SI_S1AP_DT_TAListforMDT * obj_TAListforMDT = NULL; 
	__si_s1ap_init_TAListforMDT( &obj_TAListforMDT);

	// L:1260
	SI_S1AP_DT_TAC * objTAC = NULL;

	// OCTETSTRING  , TAC  // L:1348
	__si_s1ap_init_TAC2( &objTAC, "\x08\x07", 2);


	// L:1419
	__si_linked_list_add( obj_TAListforMDT->TAC, (uint8_t*)objTAC);

	*pTAListforMDT = obj_TAListforMDT;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TABasedQMC( SI_S1AP_DT_TABasedQMC ** pTABasedQMC)
{
	SI_S1AP_DT_TABasedQMC * obj_TABasedQMC = (SI_S1AP_DT_TABasedQMC*) __si_allocM( sizeof(SI_S1AP_DT_TABasedQMC));
	memset( obj_TABasedQMC, 0, sizeof( SI_S1AP_DT_TABasedQMC));

	// L:486
	__si_s1ap__set_testdata__TAListforQMC( &obj_TABasedQMC->tAListforQMC);    // L:580


	*pTABasedQMC = obj_TABasedQMC;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__TAListforQMC( SI_S1AP_DT_TAListforQMC ** pTAListforQMC)
{
	SI_S1AP_DT_TAListforQMC * obj_TAListforQMC = NULL; 
	__si_s1ap_init_TAListforQMC( &obj_TAListforQMC);

	// L:1260
	SI_S1AP_DT_TAC * objTAC = NULL;

	// OCTETSTRING  , TAC  // L:1348
	__si_s1ap_init_TAC2( &objTAC, "\x04\x18", 2);


	// L:1419
	__si_linked_list_add( obj_TAListforQMC->TAC, (uint8_t*)objTAC);

	*pTAListforQMC = obj_TAListforQMC;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TAIBasedQMC( SI_S1AP_DT_TAIBasedQMC ** pTAIBasedQMC)
{
	SI_S1AP_DT_TAIBasedQMC * obj_TAIBasedQMC = (SI_S1AP_DT_TAIBasedQMC*) __si_allocM( sizeof(SI_S1AP_DT_TAIBasedQMC));
	memset( obj_TAIBasedQMC, 0, sizeof( SI_S1AP_DT_TAIBasedQMC));

	// L:486
	__si_s1ap__set_testdata__TAIListforQMC( &obj_TAIBasedQMC->tAIListforQMC);    // L:580


	*pTAIBasedQMC = obj_TAIBasedQMC;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__TAIListforQMC( SI_S1AP_DT_TAIListforQMC ** pTAIListforQMC)
{
	SI_S1AP_DT_TAIListforQMC * obj_TAIListforQMC = NULL; 
	__si_s1ap_init_TAIListforQMC( &obj_TAIListforQMC);

	// L:1260
	SI_S1AP_DT_TAI * objTAI = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__TAI( &objTAI);  // L:1395

	// L:1419
	__si_linked_list_add( obj_TAIListforQMC->TAI, (uint8_t*)objTAI);

	*pTAIListforQMC = obj_TAIListforQMC;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__CompletedCellinTAI( SI_S1AP_DT_CompletedCellinTAI ** pCompletedCellinTAI)
{
	SI_S1AP_DT_CompletedCellinTAI * obj_CompletedCellinTAI = NULL; 
	__si_s1ap_init_CompletedCellinTAI( &obj_CompletedCellinTAI);

	// L:1260
	SI_S1AP_DT_CompletedCellinTAI_Item * objCompletedCellinTAI_Item = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__CompletedCellinTAI_Item( &objCompletedCellinTAI_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_CompletedCellinTAI->CompletedCellinTAI_Item, (uint8_t*)objCompletedCellinTAI_Item);

	*pCompletedCellinTAI = obj_CompletedCellinTAI;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CompletedCellinTAI_Item( SI_S1AP_DT_CompletedCellinTAI_Item ** pCompletedCellinTAI_Item)
{
	SI_S1AP_DT_CompletedCellinTAI_Item * obj_CompletedCellinTAI_Item = (SI_S1AP_DT_CompletedCellinTAI_Item*) __si_allocM( sizeof(SI_S1AP_DT_CompletedCellinTAI_Item));
	memset( obj_CompletedCellinTAI_Item, 0, sizeof( SI_S1AP_DT_CompletedCellinTAI_Item));

	// L:486
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_CompletedCellinTAI_Item->eCGI);    // L:584


	*pCompletedCellinTAI_Item = obj_CompletedCellinTAI_Item;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__TargetID( SI_S1AP_DT_TargetID ** pTargetID)
{
	SI_S1AP_DT_TargetID * obj_TargetID = (SI_S1AP_DT_TargetID*) __si_allocM( sizeof(SI_S1AP_DT_TargetID));
	memset( obj_TargetID, 0, sizeof( SI_S1AP_DT_TargetID));

	obj_TargetID->SelectedChoice = 0;

	// L:2784

	switch( obj_TargetID->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__TargeteNB_ID( &obj_TargetID->u.targeteNB_ID);  // L:2910  ,  Parser:SEQUENCE, TargeteNB-ID
			break;
		case 1:
			__si_s1ap__set_testdata__TargetRNC_ID( &obj_TargetID->u.targetRNC_ID);  // L:2910  ,  Parser:SEQUENCE, TargetRNC-ID
			break;
		case 2:
			__si_s1ap__set_testdata__CGI( &obj_TargetID->u.cGI);  // L:2910  ,  Parser:SEQUENCE, CGI
			break;
		case 3:
			//__si_s1ap__set_testdata__TargetNgRanNode_ID( &obj_TargetID->u.targetgNgRanNode_ID);  // L:2910  ,  Parser:SEQUENCE, TargetNgRanNode-ID
			break;
	}

	*pTargetID = obj_TargetID;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TargeteNB_ID( SI_S1AP_DT_TargeteNB_ID ** pTargeteNB_ID)
{
	SI_S1AP_DT_TargeteNB_ID * obj_TargeteNB_ID = (SI_S1AP_DT_TargeteNB_ID*) __si_allocM( sizeof(SI_S1AP_DT_TargeteNB_ID));
	memset( obj_TargeteNB_ID, 0, sizeof( SI_S1AP_DT_TargeteNB_ID));

	// L:486
	__si_s1ap__set_testdata__Global_ENB_ID( &obj_TargeteNB_ID->global_ENB_ID);    // L:584

	__si_s1ap__set_testdata__TAI( &obj_TargeteNB_ID->selected_TAI);    // L:584


	*pTargeteNB_ID = obj_TargeteNB_ID;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TargetRNC_ID( SI_S1AP_DT_TargetRNC_ID ** pTargetRNC_ID)
{
	SI_S1AP_DT_TargetRNC_ID * obj_TargetRNC_ID = (SI_S1AP_DT_TargetRNC_ID*) __si_allocM( sizeof(SI_S1AP_DT_TargetRNC_ID));
	memset( obj_TargetRNC_ID, 0, sizeof( SI_S1AP_DT_TargetRNC_ID));

	// L:486
	__si_s1ap__set_testdata__LAI( &obj_TargetRNC_ID->lAI);    // L:584

	__si_s1ap_init_RAC2( &obj_TargetRNC_ID->rAC, "\x14", 1);    // L:545
	obj_TargetRNC_ID->isPresent_rAC = 1;

	obj_TargetRNC_ID->rNC_ID = __getTestINTEGER( 0, 4095);    // L:533

	obj_TargetRNC_ID->extendedRNC_ID = __getTestINTEGER( 4096, 65535);    // L:533
	obj_TargetRNC_ID->isPresent_extendedRNC_ID = 1;


	*pTargetRNC_ID = obj_TargetRNC_ID;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TargetNgRanNode_ID( SI_S1AP_DT_TargetNgRanNode_ID ** pTargetNgRanNode_ID)
{
	SI_S1AP_DT_TargetNgRanNode_ID * obj_TargetNgRanNode_ID = (SI_S1AP_DT_TargetNgRanNode_ID*) __si_allocM( sizeof(SI_S1AP_DT_TargetNgRanNode_ID));
	memset( obj_TargetNgRanNode_ID, 0, sizeof( SI_S1AP_DT_TargetNgRanNode_ID));

	// L:486
	__si_s1ap__set_testdata__Global_RAN_NODE_ID( &obj_TargetNgRanNode_ID->global_RAN_NODE_ID);    // L:588

	__si_s1ap__set_testdata__FiveGSTAI( &obj_TargetNgRanNode_ID->selected_TAI);    // L:584


	*pTargetNgRanNode_ID = obj_TargetNgRanNode_ID;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__Global_RAN_NODE_ID( SI_S1AP_DT_Global_RAN_NODE_ID ** pGlobal_RAN_NODE_ID)
{
	SI_S1AP_DT_Global_RAN_NODE_ID * obj_Global_RAN_NODE_ID = (SI_S1AP_DT_Global_RAN_NODE_ID*) __si_allocM( sizeof(SI_S1AP_DT_Global_RAN_NODE_ID));
	memset( obj_Global_RAN_NODE_ID, 0, sizeof( SI_S1AP_DT_Global_RAN_NODE_ID));

	obj_Global_RAN_NODE_ID->SelectedChoice = 0;

	// L:2784

	switch( obj_Global_RAN_NODE_ID->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__GNB( &obj_Global_RAN_NODE_ID->u.gNB);  // L:2910  ,  Parser:SEQUENCE, GNB
			break;
		case 1:
			__si_s1ap__set_testdata__NG_eNB( &obj_Global_RAN_NODE_ID->u.ng_eNB);  // L:2910  ,  Parser:SEQUENCE, NG-eNB
			break;
	}

	*pGlobal_RAN_NODE_ID = obj_Global_RAN_NODE_ID;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__GNB( SI_S1AP_DT_GNB ** pGNB)
{
	SI_S1AP_DT_GNB * obj_GNB = (SI_S1AP_DT_GNB*) __si_allocM( sizeof(SI_S1AP_DT_GNB));
	memset( obj_GNB, 0, sizeof( SI_S1AP_DT_GNB));

	// L:486
	__si_s1ap__set_testdata__Global_GNB_ID( &obj_GNB->global_gNB_ID);    // L:584


	*pGNB = obj_GNB;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__Global_GNB_ID( SI_S1AP_DT_Global_GNB_ID ** pGlobal_GNB_ID)
{
	SI_S1AP_DT_Global_GNB_ID * obj_Global_GNB_ID = (SI_S1AP_DT_Global_GNB_ID*) __si_allocM( sizeof(SI_S1AP_DT_Global_GNB_ID));
	memset( obj_Global_GNB_ID, 0, sizeof( SI_S1AP_DT_Global_GNB_ID));

	// L:486
	__si_s1ap_init_PLMNidentity2( &obj_Global_GNB_ID->pLMN_Identity, "\x01\x07\x02\x01\x08", 5);    // L:540

	__si_s1ap__set_testdata__GNB_Identity( &obj_Global_GNB_ID->gNB_ID);    // L:588


	*pGlobal_GNB_ID = obj_Global_GNB_ID;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__GNB_Identity( SI_S1AP_DT_GNB_Identity ** pGNB_Identity)
{
	SI_S1AP_DT_GNB_Identity * obj_GNB_Identity = (SI_S1AP_DT_GNB_Identity*) __si_allocM( sizeof(SI_S1AP_DT_GNB_Identity));
	memset( obj_GNB_Identity, 0, sizeof( SI_S1AP_DT_GNB_Identity));

	obj_GNB_Identity->SelectedChoice = 0;

	// L:2784

	switch( obj_GNB_Identity->SelectedChoice)
	{
		case 0:
				__si_s1ap_init_GNB_ID2( &obj_GNB_Identity->u.gNB_ID, "403", 3, 22);  // L:2837
				obj_GNB_Identity->u.gNB_ID->bitslen = 22; //   L:2838
			break;
	}

	*pGNB_Identity = obj_GNB_Identity;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__NG_eNB( SI_S1AP_DT_NG_eNB ** pNG_eNB)
{
	SI_S1AP_DT_NG_eNB * obj_NG_eNB = (SI_S1AP_DT_NG_eNB*) __si_allocM( sizeof(SI_S1AP_DT_NG_eNB));
	memset( obj_NG_eNB, 0, sizeof( SI_S1AP_DT_NG_eNB));

	// L:486
	__si_s1ap__set_testdata__Global_ENB_ID( &obj_NG_eNB->global_ng_eNB_ID);    // L:584


	*pNG_eNB = obj_NG_eNB;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TargeteNB_ToSourceeNB_TransparentContainer( SI_S1AP_DT_TargeteNB_ToSourceeNB_TransparentContainer ** pTargeteNB_ToSourceeNB_TransparentContainer)
{
	SI_S1AP_DT_TargeteNB_ToSourceeNB_TransparentContainer * obj_TargeteNB_ToSourceeNB_TransparentContainer = (SI_S1AP_DT_TargeteNB_ToSourceeNB_TransparentContainer*) __si_allocM( sizeof(SI_S1AP_DT_TargeteNB_ToSourceeNB_TransparentContainer));
	memset( obj_TargeteNB_ToSourceeNB_TransparentContainer, 0, sizeof( SI_S1AP_DT_TargeteNB_ToSourceeNB_TransparentContainer));

	// L:486
	__si_s1ap_init_RRC_Container2( &obj_TargeteNB_ToSourceeNB_TransparentContainer->rRC_Container, "\x09\x19\x16\x07\x15", 5);    // L:540


	*pTargeteNB_ToSourceeNB_TransparentContainer = obj_TargeteNB_ToSourceeNB_TransparentContainer;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__M1ThresholdEventA2( SI_S1AP_DT_M1ThresholdEventA2 ** pM1ThresholdEventA2)
{
	SI_S1AP_DT_M1ThresholdEventA2 * obj_M1ThresholdEventA2 = (SI_S1AP_DT_M1ThresholdEventA2*) __si_allocM( sizeof(SI_S1AP_DT_M1ThresholdEventA2));
	memset( obj_M1ThresholdEventA2, 0, sizeof( SI_S1AP_DT_M1ThresholdEventA2));

	// L:486
	__si_s1ap__set_testdata__MeasurementThresholdA2( &obj_M1ThresholdEventA2->measurementThreshold);    // L:588


	*pM1ThresholdEventA2 = obj_M1ThresholdEventA2;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TimeBasedHandoverInformation( SI_S1AP_DT_TimeBasedHandoverInformation ** pTimeBasedHandoverInformation)
{
	SI_S1AP_DT_TimeBasedHandoverInformation * obj_TimeBasedHandoverInformation = (SI_S1AP_DT_TimeBasedHandoverInformation*) __si_allocM( sizeof(SI_S1AP_DT_TimeBasedHandoverInformation));
	memset( obj_TimeBasedHandoverInformation, 0, sizeof( SI_S1AP_DT_TimeBasedHandoverInformation));

	// L:486
	obj_TimeBasedHandoverInformation->hOWindowStart = __getTestINTEGER( 0, 1048575);    // L:533

	obj_TimeBasedHandoverInformation->hOWindowDuration = __getTestINTEGER( 1, 6000);    // L:533


	*pTimeBasedHandoverInformation = obj_TimeBasedHandoverInformation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TransportInformation( SI_S1AP_DT_TransportInformation ** pTransportInformation)
{
	SI_S1AP_DT_TransportInformation * obj_TransportInformation = (SI_S1AP_DT_TransportInformation*) __si_allocM( sizeof(SI_S1AP_DT_TransportInformation));
	memset( obj_TransportInformation, 0, sizeof( SI_S1AP_DT_TransportInformation));

	// L:486
	__si_s1ap_init_TransportLayerAddress2( &obj_TransportInformation->transportLayerAddress, "0", 1, 1);  // L:574
	obj_TransportInformation->transportLayerAddress->bitslen = 1; //   L:575

	__si_s1ap_init_GTP_TEID2( &obj_TransportInformation->uL_GTP_TEID, "\x20\x07\x12\x24", 4);    // L:545


	*pTransportInformation = obj_TransportInformation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TraceActivation( SI_S1AP_DT_TraceActivation ** pTraceActivation)
{
	SI_S1AP_DT_TraceActivation * obj_TraceActivation = (SI_S1AP_DT_TraceActivation*) __si_allocM( sizeof(SI_S1AP_DT_TraceActivation));
	memset( obj_TraceActivation, 0, sizeof( SI_S1AP_DT_TraceActivation));

	// L:486
	__si_s1ap_init_E_UTRAN_Trace_ID2( &obj_TraceActivation->e_UTRAN_Trace_ID, "\x09\x07\x17\x08\x14\x13\x04\x22", 8);    // L:545

	__si_s1ap_init_InterfacesToTrace2( &obj_TraceActivation->interfacesToTrace, "9", 1, 8);  // L:574
	obj_TraceActivation->interfacesToTrace->bitslen = 8; //   L:575

	obj_TraceActivation->selected_etraceDepth = TraceDepth_minimum_val;   // L:529

	__si_s1ap_init_TransportLayerAddress2( &obj_TraceActivation->traceCollectionEntityIPAddress, "7", 1, 1);  // L:574
	obj_TraceActivation->traceCollectionEntityIPAddress->bitslen = 1; //   L:575


	*pTraceActivation = obj_TraceActivation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TunnelInformation( SI_S1AP_DT_TunnelInformation ** pTunnelInformation)
{
	SI_S1AP_DT_TunnelInformation * obj_TunnelInformation = (SI_S1AP_DT_TunnelInformation*) __si_allocM( sizeof(SI_S1AP_DT_TunnelInformation));
	memset( obj_TunnelInformation, 0, sizeof( SI_S1AP_DT_TunnelInformation));

	// L:486
	__si_s1ap_init_TransportLayerAddress2( &obj_TunnelInformation->transportLayerAddress, "8", 1, 1);  // L:574
	obj_TunnelInformation->transportLayerAddress->bitslen = 1; //   L:575

	__si_s1ap_init_Port_Number2( &obj_TunnelInformation->uDP_Port_Number, "\x22\x20", 2);    // L:545
	obj_TunnelInformation->isPresent_uDP_Port_Number = 1;


	*pTunnelInformation = obj_TunnelInformation;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__TAIListForRestart( SI_S1AP_DT_TAIListForRestart ** pTAIListForRestart)
{
	SI_S1AP_DT_TAIListForRestart * obj_TAIListForRestart = NULL; 
	__si_s1ap_init_TAIListForRestart( &obj_TAIListForRestart);

	// L:1260
	SI_S1AP_DT_TAI * objTAI = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__TAI( &objTAI);  // L:1395

	// L:1419
	__si_linked_list_add( obj_TAIListForRestart->TAI, (uint8_t*)objTAI);

	*pTAIListForRestart = obj_TAIListForRestart;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__UEAggregateMaximumBitrate( SI_S1AP_DT_UEAggregateMaximumBitrate ** pUEAggregateMaximumBitrate)
{
	SI_S1AP_DT_UEAggregateMaximumBitrate * obj_UEAggregateMaximumBitrate = (SI_S1AP_DT_UEAggregateMaximumBitrate*) __si_allocM( sizeof(SI_S1AP_DT_UEAggregateMaximumBitrate));
	memset( obj_UEAggregateMaximumBitrate, 0, sizeof( SI_S1AP_DT_UEAggregateMaximumBitrate));

	// L:486
	obj_UEAggregateMaximumBitrate->uEaggregateMaximumBitRateDL = __getTestINTEGER( 0, 10000000000);    // L:533

	obj_UEAggregateMaximumBitrate->uEaggregateMaximumBitRateUL = __getTestINTEGER( 0, 10000000000);    // L:533


	*pUEAggregateMaximumBitrate = obj_UEAggregateMaximumBitrate;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__UEAppLayerMeasConfig( SI_S1AP_DT_UEAppLayerMeasConfig ** pUEAppLayerMeasConfig)
{
	SI_S1AP_DT_UEAppLayerMeasConfig * obj_UEAppLayerMeasConfig = (SI_S1AP_DT_UEAppLayerMeasConfig*) __si_allocM( sizeof(SI_S1AP_DT_UEAppLayerMeasConfig));
	memset( obj_UEAppLayerMeasConfig, 0, sizeof( SI_S1AP_DT_UEAppLayerMeasConfig));

	// L:486
	__si_s1ap_init_UEAppLayerMeasConfig_containerForAppLayerMeasConfig2( &obj_UEAppLayerMeasConfig->containerForAppLayerMeasConfig, "\x22", 1);    // L:545

	__si_s1ap__set_testdata__AreaScopeOfQMC( &obj_UEAppLayerMeasConfig->areaScopeOfQMC);    // L:588


	*pUEAppLayerMeasConfig = obj_UEAppLayerMeasConfig;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__UE_S1AP_IDs( SI_S1AP_DT_UE_S1AP_IDs ** pUE_S1AP_IDs)
{
	SI_S1AP_DT_UE_S1AP_IDs * obj_UE_S1AP_IDs = (SI_S1AP_DT_UE_S1AP_IDs*) __si_allocM( sizeof(SI_S1AP_DT_UE_S1AP_IDs));
	memset( obj_UE_S1AP_IDs, 0, sizeof( SI_S1AP_DT_UE_S1AP_IDs));

	obj_UE_S1AP_IDs->SelectedChoice = 0;

	// L:2784

	switch( obj_UE_S1AP_IDs->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__UE_S1AP_ID_pair( &obj_UE_S1AP_IDs->u.uE_S1AP_ID_pair);  // L:2910  ,  Parser:SEQUENCE, UE-S1AP-ID-pair
			break;
		case 1:
			obj_UE_S1AP_IDs->u.mME_UE_S1AP_ID = __getTestINTEGER( 0, 4294967295);    // L:2816
			break;
	}

	*pUE_S1AP_IDs = obj_UE_S1AP_IDs;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__UE_S1AP_ID_pair( SI_S1AP_DT_UE_S1AP_ID_pair ** pUE_S1AP_ID_pair)
{
	SI_S1AP_DT_UE_S1AP_ID_pair * obj_UE_S1AP_ID_pair = (SI_S1AP_DT_UE_S1AP_ID_pair*) __si_allocM( sizeof(SI_S1AP_DT_UE_S1AP_ID_pair));
	memset( obj_UE_S1AP_ID_pair, 0, sizeof( SI_S1AP_DT_UE_S1AP_ID_pair));

	// L:486
	obj_UE_S1AP_ID_pair->mME_UE_S1AP_ID = __getTestINTEGER( 0, 4294967295);    // L:533

	obj_UE_S1AP_ID_pair->eNB_UE_S1AP_ID = __getTestINTEGER( 0, 16777215);    // L:533


	*pUE_S1AP_ID_pair = obj_UE_S1AP_ID_pair;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__UE_associatedLogicalS1_ConnectionItem( SI_S1AP_DT_UE_associatedLogicalS1_ConnectionItem ** pUE_associatedLogicalS1_ConnectionItem)
{
	SI_S1AP_DT_UE_associatedLogicalS1_ConnectionItem * obj_UE_associatedLogicalS1_ConnectionItem = (SI_S1AP_DT_UE_associatedLogicalS1_ConnectionItem*) __si_allocM( sizeof(SI_S1AP_DT_UE_associatedLogicalS1_ConnectionItem));
	memset( obj_UE_associatedLogicalS1_ConnectionItem, 0, sizeof( SI_S1AP_DT_UE_associatedLogicalS1_ConnectionItem));

	// L:486
	obj_UE_associatedLogicalS1_ConnectionItem->mME_UE_S1AP_ID = __getTestINTEGER( 0, 4294967295);    // L:533
	obj_UE_associatedLogicalS1_ConnectionItem->isPresent_mME_UE_S1AP_ID = 1;

	obj_UE_associatedLogicalS1_ConnectionItem->eNB_UE_S1AP_ID = __getTestINTEGER( 0, 16777215);    // L:533
	obj_UE_associatedLogicalS1_ConnectionItem->isPresent_eNB_UE_S1AP_ID = 1;


	*pUE_associatedLogicalS1_ConnectionItem = obj_UE_associatedLogicalS1_ConnectionItem;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__UE_HistoryInformation( SI_S1AP_DT_UE_HistoryInformation ** pUE_HistoryInformation)
{
	SI_S1AP_DT_UE_HistoryInformation * obj_UE_HistoryInformation = NULL; 
	__si_s1ap_init_UE_HistoryInformation( &obj_UE_HistoryInformation);

	// L:1260
	SI_S1AP_DT_LastVisitedCell_Item * objLastVisitedCell_Item = NULL;
	//CHOICE // L:1394
	__si_s1ap__set_testdata__LastVisitedCell_Item( &objLastVisitedCell_Item);  // L:1395

	// L:1419
	__si_linked_list_add( obj_UE_HistoryInformation->LastVisitedCell_Item, (uint8_t*)objLastVisitedCell_Item);

	*pUE_HistoryInformation = obj_UE_HistoryInformation;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__UEPagingID( SI_S1AP_DT_UEPagingID ** pUEPagingID)
{
	SI_S1AP_DT_UEPagingID * obj_UEPagingID = (SI_S1AP_DT_UEPagingID*) __si_allocM( sizeof(SI_S1AP_DT_UEPagingID));
	memset( obj_UEPagingID, 0, sizeof( SI_S1AP_DT_UEPagingID));

	obj_UEPagingID->SelectedChoice = 0;

	// L:2784

	switch( obj_UEPagingID->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__S_TMSI( &obj_UEPagingID->u.s_TMSI);  // L:2910  ,  Parser:SEQUENCE, S-TMSI
			break;
		case 1:
			__si_s1ap_init_IMSI2( &obj_UEPagingID->u.iMSI, "6zb", 3);  // L:2905  ,  Parser:OCTETSTRING, IMSI
			break;
	}

	*pUEPagingID = obj_UEPagingID;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__UESecurityCapabilities( SI_S1AP_DT_UESecurityCapabilities ** pUESecurityCapabilities)
{
	SI_S1AP_DT_UESecurityCapabilities * obj_UESecurityCapabilities = (SI_S1AP_DT_UESecurityCapabilities*) __si_allocM( sizeof(SI_S1AP_DT_UESecurityCapabilities));
	memset( obj_UESecurityCapabilities, 0, sizeof( SI_S1AP_DT_UESecurityCapabilities));

	// L:486
	__si_s1ap_init_EncryptionAlgorithms2( &obj_UESecurityCapabilities->encryptionAlgorithms, "23", 2, 16);  // L:574
	obj_UESecurityCapabilities->encryptionAlgorithms->bitslen = 16; //   L:575

	__si_s1ap_init_IntegrityProtectionAlgorithms2( &obj_UESecurityCapabilities->integrityProtectionAlgorithms, "96", 2, 16);  // L:574
	obj_UESecurityCapabilities->integrityProtectionAlgorithms->bitslen = 16; //   L:575


	*pUESecurityCapabilities = obj_UESecurityCapabilities;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__UESidelinkAggregateMaximumBitrate( SI_S1AP_DT_UESidelinkAggregateMaximumBitrate ** pUESidelinkAggregateMaximumBitrate)
{
	SI_S1AP_DT_UESidelinkAggregateMaximumBitrate * obj_UESidelinkAggregateMaximumBitrate = (SI_S1AP_DT_UESidelinkAggregateMaximumBitrate*) __si_allocM( sizeof(SI_S1AP_DT_UESidelinkAggregateMaximumBitrate));
	memset( obj_UESidelinkAggregateMaximumBitrate, 0, sizeof( SI_S1AP_DT_UESidelinkAggregateMaximumBitrate));

	// L:486
	obj_UESidelinkAggregateMaximumBitrate->uESidelinkAggregateMaximumBitRate = __getTestINTEGER( 0, 10000000000);    // L:533


	*pUESidelinkAggregateMaximumBitrate = obj_UESidelinkAggregateMaximumBitrate;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__UL_CP_SecurityInformation( SI_S1AP_DT_UL_CP_SecurityInformation ** pUL_CP_SecurityInformation)
{
	SI_S1AP_DT_UL_CP_SecurityInformation * obj_UL_CP_SecurityInformation = (SI_S1AP_DT_UL_CP_SecurityInformation*) __si_allocM( sizeof(SI_S1AP_DT_UL_CP_SecurityInformation));
	memset( obj_UL_CP_SecurityInformation, 0, sizeof( SI_S1AP_DT_UL_CP_SecurityInformation));

	// L:486
	__si_s1ap_init_UL_NAS_MAC2( &obj_UL_CP_SecurityInformation->ul_NAS_MAC, "39", 2, 16);  // L:574
	obj_UL_CP_SecurityInformation->ul_NAS_MAC->bitslen = 16; //   L:575

	__si_s1ap_init_UL_NAS_Count2( &obj_UL_CP_SecurityInformation->ul_NAS_Count, "2", 1, 5);  // L:574
	obj_UL_CP_SecurityInformation->ul_NAS_Count->bitslen = 5; //   L:575


	*pUL_CP_SecurityInformation = obj_UL_CP_SecurityInformation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__UserLocationInformation( SI_S1AP_DT_UserLocationInformation ** pUserLocationInformation)
{
	SI_S1AP_DT_UserLocationInformation * obj_UserLocationInformation = (SI_S1AP_DT_UserLocationInformation*) __si_allocM( sizeof(SI_S1AP_DT_UserLocationInformation));
	memset( obj_UserLocationInformation, 0, sizeof( SI_S1AP_DT_UserLocationInformation));

	// L:486
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_UserLocationInformation->eutran_cgi);    // L:584

	__si_s1ap__set_testdata__TAI( &obj_UserLocationInformation->tai);    // L:584


	*pUserLocationInformation = obj_UserLocationInformation;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__V2XServicesAuthorized( SI_S1AP_DT_V2XServicesAuthorized ** pV2XServicesAuthorized)
{
	SI_S1AP_DT_V2XServicesAuthorized * obj_V2XServicesAuthorized = (SI_S1AP_DT_V2XServicesAuthorized*) __si_allocM( sizeof(SI_S1AP_DT_V2XServicesAuthorized));
	memset( obj_V2XServicesAuthorized, 0, sizeof( SI_S1AP_DT_V2XServicesAuthorized));

	// L:486
	obj_V2XServicesAuthorized->selected_evehicleUE = VehicleUE_authorized_val;   // L:529
	obj_V2XServicesAuthorized->isPresent_vehicleUE = 1;

	obj_V2XServicesAuthorized->selected_epedestrianUE = PedestrianUE_authorized_val;   // L:529
	obj_V2XServicesAuthorized->isPresent_pedestrianUE = 1;


	*pV2XServicesAuthorized = obj_V2XServicesAuthorized;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__WarningAreaList( SI_S1AP_DT_WarningAreaList ** pWarningAreaList)
{
	SI_S1AP_DT_WarningAreaList * obj_WarningAreaList = (SI_S1AP_DT_WarningAreaList*) __si_allocM( sizeof(SI_S1AP_DT_WarningAreaList));
	memset( obj_WarningAreaList, 0, sizeof( SI_S1AP_DT_WarningAreaList));

	obj_WarningAreaList->SelectedChoice = 0;

	// L:2784

	switch( obj_WarningAreaList->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__ECGIList( &obj_WarningAreaList->u.cellIDList);  // L:2910  ,  Parser:SEQUENCE_OF, ECGIList
			break;
		case 1:
			__si_s1ap__set_testdata__TAIListforWarning( &obj_WarningAreaList->u.trackingAreaListforWarning);  // L:2910  ,  Parser:SEQUENCE_OF, TAIListforWarning
			break;
		case 2:
			__si_s1ap__set_testdata__EmergencyAreaIDList( &obj_WarningAreaList->u.emergencyAreaIDList);  // L:2910  ,  Parser:SEQUENCE_OF, EmergencyAreaIDList
			break;
	}

	*pWarningAreaList = obj_WarningAreaList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__WLANMeasurementConfiguration( SI_S1AP_DT_WLANMeasurementConfiguration ** pWLANMeasurementConfiguration)
{
	SI_S1AP_DT_WLANMeasurementConfiguration * obj_WLANMeasurementConfiguration = (SI_S1AP_DT_WLANMeasurementConfiguration*) __si_allocM( sizeof(SI_S1AP_DT_WLANMeasurementConfiguration));
	memset( obj_WLANMeasurementConfiguration, 0, sizeof( SI_S1AP_DT_WLANMeasurementConfiguration));

	// L:486
	obj_WLANMeasurementConfiguration->selected_ewlanMeasConfig = WLANMeasConfig_setup_val;   // L:529

	__si_s1ap__set_testdata__WLANMeasConfigNameList( &obj_WLANMeasurementConfiguration->wlanMeasConfigNameList);    // L:580
	obj_WLANMeasurementConfiguration->isPresent_wlanMeasConfigNameList = 1;

	obj_WLANMeasurementConfiguration->selected_ewlan_rssi = WLANMeasurementConfiguration_wlan_rssi_true_val;   // L:529
	obj_WLANMeasurementConfiguration->isPresent_wlan_rssi = 1;

	obj_WLANMeasurementConfiguration->selected_ewlan_rtt = WLANMeasurementConfiguration_wlan_rtt_true_val;   // L:529
	obj_WLANMeasurementConfiguration->isPresent_wlan_rtt = 1;


	*pWLANMeasurementConfiguration = obj_WLANMeasurementConfiguration;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__WLANMeasConfigNameList( SI_S1AP_DT_WLANMeasConfigNameList ** pWLANMeasConfigNameList)
{
	SI_S1AP_DT_WLANMeasConfigNameList * obj_WLANMeasConfigNameList = NULL; 
	__si_s1ap_init_WLANMeasConfigNameList( &obj_WLANMeasConfigNameList);

	// L:1260
	SI_S1AP_DT_WLANName * objWLANName = NULL;

	// OCTETSTRING  , WLANName  // L:1348
	__si_s1ap_init_WLANName2( &objWLANName, "\x06", 1);


	// L:1419
	__si_linked_list_add( obj_WLANMeasConfigNameList->WLANName, (uint8_t*)objWLANName);

	*pWLANMeasConfigNameList = obj_WLANMeasConfigNameList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__WUS_Assistance_Information( SI_S1AP_DT_WUS_Assistance_Information ** pWUS_Assistance_Information)
{
	SI_S1AP_DT_WUS_Assistance_Information * obj_WUS_Assistance_Information = (SI_S1AP_DT_WUS_Assistance_Information*) __si_allocM( sizeof(SI_S1AP_DT_WUS_Assistance_Information));
	memset( obj_WUS_Assistance_Information, 0, sizeof( SI_S1AP_DT_WUS_Assistance_Information));

	// L:486
	obj_WUS_Assistance_Information->selected_epagingProbabilityInformation = PagingProbabilityInformation_p00_val;   // L:529


	*pWUS_Assistance_Information = obj_WUS_Assistance_Information;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__X2TNLConfigurationInfo( SI_S1AP_DT_X2TNLConfigurationInfo ** pX2TNLConfigurationInfo)
{
	SI_S1AP_DT_X2TNLConfigurationInfo * obj_X2TNLConfigurationInfo = (SI_S1AP_DT_X2TNLConfigurationInfo*) __si_allocM( sizeof(SI_S1AP_DT_X2TNLConfigurationInfo));
	memset( obj_X2TNLConfigurationInfo, 0, sizeof( SI_S1AP_DT_X2TNLConfigurationInfo));

	// L:486
	__si_s1ap__set_testdata__ENBX2TLAs( &obj_X2TNLConfigurationInfo->eNBX2TransportLayerAddresses);    // L:580


	*pX2TNLConfigurationInfo = obj_X2TNLConfigurationInfo;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ENBX2ExtTLAs( SI_S1AP_DT_ENBX2ExtTLAs ** pENBX2ExtTLAs)
{
	SI_S1AP_DT_ENBX2ExtTLAs * obj_ENBX2ExtTLAs = NULL; 
	__si_s1ap_init_ENBX2ExtTLAs( &obj_ENBX2ExtTLAs);

	// L:1260
	SI_S1AP_DT_ENBX2ExtTLA * objENBX2ExtTLA = NULL;
	//SEQUENCE // L:1394
	__si_s1ap__set_testdata__ENBX2ExtTLA( &objENBX2ExtTLA);  // L:1395

	// L:1419
	__si_linked_list_add( obj_ENBX2ExtTLAs->ENBX2ExtTLA, (uint8_t*)objENBX2ExtTLA);

	*pENBX2ExtTLAs = obj_ENBX2ExtTLAs;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__ENBX2ExtTLA( SI_S1AP_DT_ENBX2ExtTLA ** pENBX2ExtTLA)
{
	SI_S1AP_DT_ENBX2ExtTLA * obj_ENBX2ExtTLA = (SI_S1AP_DT_ENBX2ExtTLA*) __si_allocM( sizeof(SI_S1AP_DT_ENBX2ExtTLA));
	memset( obj_ENBX2ExtTLA, 0, sizeof( SI_S1AP_DT_ENBX2ExtTLA));

	// L:486
	__si_s1ap_init_TransportLayerAddress2( &obj_ENBX2ExtTLA->iPsecTLA, "3", 1, 1);  // L:574
	obj_ENBX2ExtTLA->iPsecTLA->bitslen = 1; //   L:575
	obj_ENBX2ExtTLA->isPresent_iPsecTLA = 1;

	__si_s1ap__set_testdata__ENBX2GTPTLAs( &obj_ENBX2ExtTLA->gTPTLAa);    // L:580
	obj_ENBX2ExtTLA->isPresent_gTPTLAa = 1;


	*pENBX2ExtTLA = obj_ENBX2ExtTLA;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ENBX2GTPTLAs( SI_S1AP_DT_ENBX2GTPTLAs ** pENBX2GTPTLAs)
{
	SI_S1AP_DT_ENBX2GTPTLAs * obj_ENBX2GTPTLAs = NULL; 
	__si_s1ap_init_ENBX2GTPTLAs( &obj_ENBX2GTPTLAs);

	// L:1260
	SI_S1AP_DT_TransportLayerAddress * objTransportLayerAddress = NULL;

	// BITSTRING  , TransportLayerAddress  // L:1327
	__si_s1ap_init_TransportLayerAddress2( &objTransportLayerAddress, "9", 1, 1);


	// L:1419
	__si_linked_list_add( obj_ENBX2GTPTLAs->TransportLayerAddress, (uint8_t*)objTransportLayerAddress);

	*pENBX2GTPTLAs = obj_ENBX2GTPTLAs;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__ENBIndirectX2TransportLayerAddresses( SI_S1AP_DT_ENBIndirectX2TransportLayerAddresses ** pENBIndirectX2TransportLayerAddresses)
{
	SI_S1AP_DT_ENBIndirectX2TransportLayerAddresses * obj_ENBIndirectX2TransportLayerAddresses = NULL; 
	__si_s1ap_init_ENBIndirectX2TransportLayerAddresses( &obj_ENBIndirectX2TransportLayerAddresses);

	// L:1260
	SI_S1AP_DT_TransportLayerAddress * objTransportLayerAddress = NULL;

	// BITSTRING  , TransportLayerAddress  // L:1327
	__si_s1ap_init_TransportLayerAddress2( &objTransportLayerAddress, "3", 1, 1);


	// L:1419
	__si_linked_list_add( obj_ENBIndirectX2TransportLayerAddresses->TransportLayerAddress, (uint8_t*)objTransportLayerAddress);

	*pENBIndirectX2TransportLayerAddresses = obj_ENBIndirectX2TransportLayerAddresses;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__ResetType( SI_S1AP_DT_ResetType ** pResetType)
{
	SI_S1AP_DT_ResetType * obj_ResetType = (SI_S1AP_DT_ResetType*) __si_allocM( sizeof(SI_S1AP_DT_ResetType));
	memset( obj_ResetType, 0, sizeof( SI_S1AP_DT_ResetType));

	obj_ResetType->SelectedChoice = 0;

	// L:2784

	switch( obj_ResetType->SelectedChoice)
	{
		case 0:
			obj_ResetType->u.s1_Interface = ResetAll_reset_all_val;  // TODO: set enum   L:2894  ,  Parser:ENUMERATED, ResetAll
			break;
		case 1:
			__si_s1ap__set_testdata__UE_associatedLogicalS1_ConnectionListRes( &obj_ResetType->u.partOfS1_Interface);  // L:2910  ,  Parser:SEQUENCE_OF, UE-associatedLogicalS1-ConnectionListRes
			break;
	}

	*pResetType = obj_ResetType;
}


// CHOICE  L:11217
void __si_s1ap__set_testdata__Inter_SystemInformationTransferType( SI_S1AP_DT_Inter_SystemInformationTransferType ** pInter_SystemInformationTransferType)
{
	SI_S1AP_DT_Inter_SystemInformationTransferType * obj_Inter_SystemInformationTransferType = (SI_S1AP_DT_Inter_SystemInformationTransferType*) __si_allocM( sizeof(SI_S1AP_DT_Inter_SystemInformationTransferType));
	memset( obj_Inter_SystemInformationTransferType, 0, sizeof( SI_S1AP_DT_Inter_SystemInformationTransferType));

	obj_Inter_SystemInformationTransferType->SelectedChoice = 0;

	// L:2784

	switch( obj_Inter_SystemInformationTransferType->SelectedChoice)
	{
		case 0:
			__si_s1ap__set_testdata__RIMTransfer( &obj_Inter_SystemInformationTransferType->u.rIMTransfer);  // L:2910  ,  Parser:SEQUENCE, RIMTransfer
			break;
	}

	*pInter_SystemInformationTransferType = obj_Inter_SystemInformationTransferType;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABDataForwardingItem( SI_S1AP_DT_E_RABDataForwardingItem ** pE_RABDataForwardingItem)
{
	SI_S1AP_DT_E_RABDataForwardingItem * obj_E_RABDataForwardingItem = (SI_S1AP_DT_E_RABDataForwardingItem*) __si_allocM( sizeof(SI_S1AP_DT_E_RABDataForwardingItem));
	memset( obj_E_RABDataForwardingItem, 0, sizeof( SI_S1AP_DT_E_RABDataForwardingItem));

	// L:486
	obj_E_RABDataForwardingItem->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABDataForwardingItem->dL_transportLayerAddress, "3", 1, 1);  // L:574
	obj_E_RABDataForwardingItem->dL_transportLayerAddress->bitslen = 1; //   L:575
	obj_E_RABDataForwardingItem->isPresent_dL_transportLayerAddress = 1;

	__si_s1ap_init_GTP_TEID2( &obj_E_RABDataForwardingItem->dL_gTP_TEID, "\x03\x16\x11\x12", 4);    // L:545
	obj_E_RABDataForwardingItem->isPresent_dL_gTP_TEID = 1;

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABDataForwardingItem->uL_TransportLayerAddress, "6", 1, 1);  // L:574
	obj_E_RABDataForwardingItem->uL_TransportLayerAddress->bitslen = 1; //   L:575
	obj_E_RABDataForwardingItem->isPresent_uL_TransportLayerAddress = 1;

	__si_s1ap_init_GTP_TEID2( &obj_E_RABDataForwardingItem->uL_GTP_TEID, "\x06\x13\x10\x13", 4);    // L:545
	obj_E_RABDataForwardingItem->isPresent_uL_GTP_TEID = 1;


	*pE_RABDataForwardingItem = obj_E_RABDataForwardingItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABToBeSetupItemHOReq( SI_S1AP_DT_E_RABToBeSetupItemHOReq ** pE_RABToBeSetupItemHOReq)
{
	SI_S1AP_DT_E_RABToBeSetupItemHOReq * obj_E_RABToBeSetupItemHOReq = (SI_S1AP_DT_E_RABToBeSetupItemHOReq*) __si_allocM( sizeof(SI_S1AP_DT_E_RABToBeSetupItemHOReq));
	memset( obj_E_RABToBeSetupItemHOReq, 0, sizeof( SI_S1AP_DT_E_RABToBeSetupItemHOReq));

	// L:486
	obj_E_RABToBeSetupItemHOReq->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABToBeSetupItemHOReq->transportLayerAddress, "7", 1, 1);  // L:574
	obj_E_RABToBeSetupItemHOReq->transportLayerAddress->bitslen = 1; //   L:575

	__si_s1ap_init_GTP_TEID2( &obj_E_RABToBeSetupItemHOReq->gTP_TEID, "\x09\x12\x15\x04", 4);    // L:545

	__si_s1ap__set_testdata__E_RABLevelQoSParameters( &obj_E_RABToBeSetupItemHOReq->e_RABlevelQosParameters);    // L:584


	*pE_RABToBeSetupItemHOReq = obj_E_RABToBeSetupItemHOReq;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABAdmittedItem( SI_S1AP_DT_E_RABAdmittedItem ** pE_RABAdmittedItem)
{
	SI_S1AP_DT_E_RABAdmittedItem * obj_E_RABAdmittedItem = (SI_S1AP_DT_E_RABAdmittedItem*) __si_allocM( sizeof(SI_S1AP_DT_E_RABAdmittedItem));
	memset( obj_E_RABAdmittedItem, 0, sizeof( SI_S1AP_DT_E_RABAdmittedItem));

	// L:486
	obj_E_RABAdmittedItem->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABAdmittedItem->transportLayerAddress, "6", 1, 1);  // L:574
	obj_E_RABAdmittedItem->transportLayerAddress->bitslen = 1; //   L:575

	__si_s1ap_init_GTP_TEID2( &obj_E_RABAdmittedItem->gTP_TEID, "\x11\x23\x03\x23", 4);    // L:545

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABAdmittedItem->dL_transportLayerAddress, "7", 1, 1);  // L:574
	obj_E_RABAdmittedItem->dL_transportLayerAddress->bitslen = 1; //   L:575
	obj_E_RABAdmittedItem->isPresent_dL_transportLayerAddress = 1;

	__si_s1ap_init_GTP_TEID2( &obj_E_RABAdmittedItem->dL_gTP_TEID, "\x14\x04\x18\x05", 4);    // L:545
	obj_E_RABAdmittedItem->isPresent_dL_gTP_TEID = 1;

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABAdmittedItem->uL_TransportLayerAddress, "0", 1, 1);  // L:574
	obj_E_RABAdmittedItem->uL_TransportLayerAddress->bitslen = 1; //   L:575
	obj_E_RABAdmittedItem->isPresent_uL_TransportLayerAddress = 1;

	__si_s1ap_init_GTP_TEID2( &obj_E_RABAdmittedItem->uL_GTP_TEID, "\x17\x24\x01\x15", 4);    // L:545
	obj_E_RABAdmittedItem->isPresent_uL_GTP_TEID = 1;


	*pE_RABAdmittedItem = obj_E_RABAdmittedItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABFailedToSetupItemHOReqAck( SI_S1AP_DT_E_RABFailedToSetupItemHOReqAck ** pE_RABFailedToSetupItemHOReqAck)
{
	SI_S1AP_DT_E_RABFailedToSetupItemHOReqAck * obj_E_RABFailedToSetupItemHOReqAck = (SI_S1AP_DT_E_RABFailedToSetupItemHOReqAck*) __si_allocM( sizeof(SI_S1AP_DT_E_RABFailedToSetupItemHOReqAck));
	memset( obj_E_RABFailedToSetupItemHOReqAck, 0, sizeof( SI_S1AP_DT_E_RABFailedToSetupItemHOReqAck));

	// L:486
	obj_E_RABFailedToSetupItemHOReqAck->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap__set_testdata__Cause( &obj_E_RABFailedToSetupItemHOReqAck->cause);    // L:588


	*pE_RABFailedToSetupItemHOReqAck = obj_E_RABFailedToSetupItemHOReqAck;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABToBeSwitchedDLItem( SI_S1AP_DT_E_RABToBeSwitchedDLItem ** pE_RABToBeSwitchedDLItem)
{
	SI_S1AP_DT_E_RABToBeSwitchedDLItem * obj_E_RABToBeSwitchedDLItem = (SI_S1AP_DT_E_RABToBeSwitchedDLItem*) __si_allocM( sizeof(SI_S1AP_DT_E_RABToBeSwitchedDLItem));
	memset( obj_E_RABToBeSwitchedDLItem, 0, sizeof( SI_S1AP_DT_E_RABToBeSwitchedDLItem));

	// L:486
	obj_E_RABToBeSwitchedDLItem->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABToBeSwitchedDLItem->transportLayerAddress, "0", 1, 1);  // L:574
	obj_E_RABToBeSwitchedDLItem->transportLayerAddress->bitslen = 1; //   L:575

	__si_s1ap_init_GTP_TEID2( &obj_E_RABToBeSwitchedDLItem->gTP_TEID, "\x24\x17\x01\x13", 4);    // L:545


	*pE_RABToBeSwitchedDLItem = obj_E_RABToBeSwitchedDLItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABToBeSwitchedULItem( SI_S1AP_DT_E_RABToBeSwitchedULItem ** pE_RABToBeSwitchedULItem)
{
	SI_S1AP_DT_E_RABToBeSwitchedULItem * obj_E_RABToBeSwitchedULItem = (SI_S1AP_DT_E_RABToBeSwitchedULItem*) __si_allocM( sizeof(SI_S1AP_DT_E_RABToBeSwitchedULItem));
	memset( obj_E_RABToBeSwitchedULItem, 0, sizeof( SI_S1AP_DT_E_RABToBeSwitchedULItem));

	// L:486
	obj_E_RABToBeSwitchedULItem->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABToBeSwitchedULItem->transportLayerAddress, "0", 1, 1);  // L:574
	obj_E_RABToBeSwitchedULItem->transportLayerAddress->bitslen = 1; //   L:575

	__si_s1ap_init_GTP_TEID2( &obj_E_RABToBeSwitchedULItem->gTP_TEID, "\x02\x01\x23\x23", 4);    // L:545


	*pE_RABToBeSwitchedULItem = obj_E_RABToBeSwitchedULItem;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABToBeUpdatedItem( SI_S1AP_DT_E_RABToBeUpdatedItem ** pE_RABToBeUpdatedItem)
{
	SI_S1AP_DT_E_RABToBeUpdatedItem * obj_E_RABToBeUpdatedItem = (SI_S1AP_DT_E_RABToBeUpdatedItem*) __si_allocM( sizeof(SI_S1AP_DT_E_RABToBeUpdatedItem));
	memset( obj_E_RABToBeUpdatedItem, 0, sizeof( SI_S1AP_DT_E_RABToBeUpdatedItem));

	// L:486
	obj_E_RABToBeUpdatedItem->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap__set_testdata__SecurityIndication( &obj_E_RABToBeUpdatedItem->securityIndication);    // L:584
	obj_E_RABToBeUpdatedItem->isPresent_securityIndication = 1;


	*pE_RABToBeUpdatedItem = obj_E_RABToBeUpdatedItem;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__E_RABToBeSetupListBearerSUReq( SI_S1AP_DT_E_RABToBeSetupListBearerSUReq ** pE_RABToBeSetupListBearerSUReq)
{
	SI_S1AP_DT_E_RABToBeSetupListBearerSUReq * obj_E_RABToBeSetupListBearerSUReq = NULL; 
	__si_s1ap_init_E_RABToBeSetupListBearerSUReq( &obj_E_RABToBeSetupListBearerSUReq);

	// L:1260
	SI_S1AP_DT_PDU_E_RABToBeSetupItemBearerSUReqIEs * objE_RABToBeSetupItemBearerSUReqIEs = NULL;
	__si_s1ap__set_testdata__PDU_E_RABToBeSetupItemBearerSUReqIEs( &objE_RABToBeSetupItemBearerSUReqIEs);
	// L:1419
	__si_linked_list_add( obj_E_RABToBeSetupListBearerSUReq->E_RABToBeSetupItemBearerSUReqIEs, (uint8_t*)objE_RABToBeSetupItemBearerSUReqIEs);

	*pE_RABToBeSetupListBearerSUReq = obj_E_RABToBeSetupListBearerSUReq;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABToBeSetupItemBearerSUReq( SI_S1AP_DT_E_RABToBeSetupItemBearerSUReq ** pE_RABToBeSetupItemBearerSUReq)
{
	SI_S1AP_DT_E_RABToBeSetupItemBearerSUReq * obj_E_RABToBeSetupItemBearerSUReq = (SI_S1AP_DT_E_RABToBeSetupItemBearerSUReq*) __si_allocM( sizeof(SI_S1AP_DT_E_RABToBeSetupItemBearerSUReq));
	memset( obj_E_RABToBeSetupItemBearerSUReq, 0, sizeof( SI_S1AP_DT_E_RABToBeSetupItemBearerSUReq));

	// L:486
	obj_E_RABToBeSetupItemBearerSUReq->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap__set_testdata__E_RABLevelQoSParameters( &obj_E_RABToBeSetupItemBearerSUReq->e_RABlevelQoSParameters);    // L:584

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABToBeSetupItemBearerSUReq->transportLayerAddress, "2", 1, 1);  // L:574
	obj_E_RABToBeSetupItemBearerSUReq->transportLayerAddress->bitslen = 1; //   L:575

	__si_s1ap_init_GTP_TEID2( &obj_E_RABToBeSetupItemBearerSUReq->gTP_TEID, "\x17\x07\x02\x24", 4);    // L:545

	__si_s1ap_init_NAS_PDU2( &obj_E_RABToBeSetupItemBearerSUReq->nAS_PDU, "\x12\x02\x05\x04\x21", 5);    // L:540


	*pE_RABToBeSetupItemBearerSUReq = obj_E_RABToBeSetupItemBearerSUReq;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__E_RABSetupListBearerSURes( SI_S1AP_DT_E_RABSetupListBearerSURes ** pE_RABSetupListBearerSURes)
{
	SI_S1AP_DT_E_RABSetupListBearerSURes * obj_E_RABSetupListBearerSURes = NULL; 
	__si_s1ap_init_E_RABSetupListBearerSURes( &obj_E_RABSetupListBearerSURes);

	// L:1260
	SI_S1AP_DT_PDU_E_RABSetupItemBearerSUResIEs * objE_RABSetupItemBearerSUResIEs = NULL;
	__si_s1ap__set_testdata__PDU_E_RABSetupItemBearerSUResIEs( &objE_RABSetupItemBearerSUResIEs);
	// L:1419
	__si_linked_list_add( obj_E_RABSetupListBearerSURes->E_RABSetupItemBearerSUResIEs, (uint8_t*)objE_RABSetupItemBearerSUResIEs);

	*pE_RABSetupListBearerSURes = obj_E_RABSetupListBearerSURes;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABSetupItemBearerSURes( SI_S1AP_DT_E_RABSetupItemBearerSURes ** pE_RABSetupItemBearerSURes)
{
	SI_S1AP_DT_E_RABSetupItemBearerSURes * obj_E_RABSetupItemBearerSURes = (SI_S1AP_DT_E_RABSetupItemBearerSURes*) __si_allocM( sizeof(SI_S1AP_DT_E_RABSetupItemBearerSURes));
	memset( obj_E_RABSetupItemBearerSURes, 0, sizeof( SI_S1AP_DT_E_RABSetupItemBearerSURes));

	// L:486
	obj_E_RABSetupItemBearerSURes->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABSetupItemBearerSURes->transportLayerAddress, "1", 1, 1);  // L:574
	obj_E_RABSetupItemBearerSURes->transportLayerAddress->bitslen = 1; //   L:575

	__si_s1ap_init_GTP_TEID2( &obj_E_RABSetupItemBearerSURes->gTP_TEID, "\x15\x21\x23\x04", 4);    // L:545


	*pE_RABSetupItemBearerSURes = obj_E_RABSetupItemBearerSURes;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__E_RABToBeModifiedListBearerModReq( SI_S1AP_DT_E_RABToBeModifiedListBearerModReq ** pE_RABToBeModifiedListBearerModReq)
{
	SI_S1AP_DT_E_RABToBeModifiedListBearerModReq * obj_E_RABToBeModifiedListBearerModReq = NULL; 
	__si_s1ap_init_E_RABToBeModifiedListBearerModReq( &obj_E_RABToBeModifiedListBearerModReq);

	// L:1260
	SI_S1AP_DT_PDU_E_RABToBeModifiedItemBearerModReqIEs * objE_RABToBeModifiedItemBearerModReqIEs = NULL;
	__si_s1ap__set_testdata__PDU_E_RABToBeModifiedItemBearerModReqIEs( &objE_RABToBeModifiedItemBearerModReqIEs);
	// L:1419
	__si_linked_list_add( obj_E_RABToBeModifiedListBearerModReq->E_RABToBeModifiedItemBearerModReqIEs, (uint8_t*)objE_RABToBeModifiedItemBearerModReqIEs);

	*pE_RABToBeModifiedListBearerModReq = obj_E_RABToBeModifiedListBearerModReq;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABToBeModifiedItemBearerModReq( SI_S1AP_DT_E_RABToBeModifiedItemBearerModReq ** pE_RABToBeModifiedItemBearerModReq)
{
	SI_S1AP_DT_E_RABToBeModifiedItemBearerModReq * obj_E_RABToBeModifiedItemBearerModReq = (SI_S1AP_DT_E_RABToBeModifiedItemBearerModReq*) __si_allocM( sizeof(SI_S1AP_DT_E_RABToBeModifiedItemBearerModReq));
	memset( obj_E_RABToBeModifiedItemBearerModReq, 0, sizeof( SI_S1AP_DT_E_RABToBeModifiedItemBearerModReq));

	// L:486
	obj_E_RABToBeModifiedItemBearerModReq->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap__set_testdata__E_RABLevelQoSParameters( &obj_E_RABToBeModifiedItemBearerModReq->e_RABLevelQoSParameters);    // L:584

	__si_s1ap_init_NAS_PDU2( &obj_E_RABToBeModifiedItemBearerModReq->nAS_PDU, "\x06\x02\x12\x06\x20", 5);    // L:540


	*pE_RABToBeModifiedItemBearerModReq = obj_E_RABToBeModifiedItemBearerModReq;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__E_RABModifyListBearerModRes( SI_S1AP_DT_E_RABModifyListBearerModRes ** pE_RABModifyListBearerModRes)
{
	SI_S1AP_DT_E_RABModifyListBearerModRes * obj_E_RABModifyListBearerModRes = NULL; 
	__si_s1ap_init_E_RABModifyListBearerModRes( &obj_E_RABModifyListBearerModRes);

	// L:1260
	SI_S1AP_DT_PDU_E_RABModifyItemBearerModResIEs * objE_RABModifyItemBearerModResIEs = NULL;
	__si_s1ap__set_testdata__PDU_E_RABModifyItemBearerModResIEs( &objE_RABModifyItemBearerModResIEs);
	// L:1419
	__si_linked_list_add( obj_E_RABModifyListBearerModRes->E_RABModifyItemBearerModResIEs, (uint8_t*)objE_RABModifyItemBearerModResIEs);

	*pE_RABModifyListBearerModRes = obj_E_RABModifyListBearerModRes;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABModifyItemBearerModRes( SI_S1AP_DT_E_RABModifyItemBearerModRes ** pE_RABModifyItemBearerModRes)
{
	SI_S1AP_DT_E_RABModifyItemBearerModRes * obj_E_RABModifyItemBearerModRes = (SI_S1AP_DT_E_RABModifyItemBearerModRes*) __si_allocM( sizeof(SI_S1AP_DT_E_RABModifyItemBearerModRes));
	memset( obj_E_RABModifyItemBearerModRes, 0, sizeof( SI_S1AP_DT_E_RABModifyItemBearerModRes));

	// L:486
	obj_E_RABModifyItemBearerModRes->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533


	*pE_RABModifyItemBearerModRes = obj_E_RABModifyItemBearerModRes;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__E_RABReleaseListBearerRelComp( SI_S1AP_DT_E_RABReleaseListBearerRelComp ** pE_RABReleaseListBearerRelComp)
{
	SI_S1AP_DT_E_RABReleaseListBearerRelComp * obj_E_RABReleaseListBearerRelComp = NULL; 
	__si_s1ap_init_E_RABReleaseListBearerRelComp( &obj_E_RABReleaseListBearerRelComp);

	// L:1260
	SI_S1AP_DT_PDU_E_RABReleaseItemBearerRelCompIEs * objE_RABReleaseItemBearerRelCompIEs = NULL;
	__si_s1ap__set_testdata__PDU_E_RABReleaseItemBearerRelCompIEs( &objE_RABReleaseItemBearerRelCompIEs);
	// L:1419
	__si_linked_list_add( obj_E_RABReleaseListBearerRelComp->E_RABReleaseItemBearerRelCompIEs, (uint8_t*)objE_RABReleaseItemBearerRelCompIEs);

	*pE_RABReleaseListBearerRelComp = obj_E_RABReleaseListBearerRelComp;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABReleaseItemBearerRelComp( SI_S1AP_DT_E_RABReleaseItemBearerRelComp ** pE_RABReleaseItemBearerRelComp)
{
	SI_S1AP_DT_E_RABReleaseItemBearerRelComp * obj_E_RABReleaseItemBearerRelComp = (SI_S1AP_DT_E_RABReleaseItemBearerRelComp*) __si_allocM( sizeof(SI_S1AP_DT_E_RABReleaseItemBearerRelComp));
	memset( obj_E_RABReleaseItemBearerRelComp, 0, sizeof( SI_S1AP_DT_E_RABReleaseItemBearerRelComp));

	// L:486
	obj_E_RABReleaseItemBearerRelComp->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533


	*pE_RABReleaseItemBearerRelComp = obj_E_RABReleaseItemBearerRelComp;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__E_RABToBeSetupListCtxtSUReq( SI_S1AP_DT_E_RABToBeSetupListCtxtSUReq ** pE_RABToBeSetupListCtxtSUReq)
{
	SI_S1AP_DT_E_RABToBeSetupListCtxtSUReq * obj_E_RABToBeSetupListCtxtSUReq = NULL; 
	__si_s1ap_init_E_RABToBeSetupListCtxtSUReq( &obj_E_RABToBeSetupListCtxtSUReq);

	// L:1260
	SI_S1AP_DT_PDU_E_RABToBeSetupItemCtxtSUReqIEs * objE_RABToBeSetupItemCtxtSUReqIEs = NULL;
	__si_s1ap__set_testdata__PDU_E_RABToBeSetupItemCtxtSUReqIEs( &objE_RABToBeSetupItemCtxtSUReqIEs);
	// L:1419
	__si_linked_list_add( obj_E_RABToBeSetupListCtxtSUReq->E_RABToBeSetupItemCtxtSUReqIEs, (uint8_t*)objE_RABToBeSetupItemCtxtSUReqIEs);

	*pE_RABToBeSetupListCtxtSUReq = obj_E_RABToBeSetupListCtxtSUReq;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABToBeSetupItemCtxtSUReq( SI_S1AP_DT_E_RABToBeSetupItemCtxtSUReq ** pE_RABToBeSetupItemCtxtSUReq)
{
	SI_S1AP_DT_E_RABToBeSetupItemCtxtSUReq * obj_E_RABToBeSetupItemCtxtSUReq = (SI_S1AP_DT_E_RABToBeSetupItemCtxtSUReq*) __si_allocM( sizeof(SI_S1AP_DT_E_RABToBeSetupItemCtxtSUReq));
	memset( obj_E_RABToBeSetupItemCtxtSUReq, 0, sizeof( SI_S1AP_DT_E_RABToBeSetupItemCtxtSUReq));

	// L:486
	obj_E_RABToBeSetupItemCtxtSUReq->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap__set_testdata__E_RABLevelQoSParameters( &obj_E_RABToBeSetupItemCtxtSUReq->e_RABlevelQoSParameters);    // L:584

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABToBeSetupItemCtxtSUReq->transportLayerAddress, "2", 1, 1);  // L:574
	obj_E_RABToBeSetupItemCtxtSUReq->transportLayerAddress->bitslen = 1; //   L:575

	__si_s1ap_init_GTP_TEID2( &obj_E_RABToBeSetupItemCtxtSUReq->gTP_TEID, "\x21\x06\x03\x09", 4);    // L:545

	__si_s1ap_init_NAS_PDU2( &obj_E_RABToBeSetupItemCtxtSUReq->nAS_PDU, "\x17\x12\x08\x11\x21", 5);    // L:540
	obj_E_RABToBeSetupItemCtxtSUReq->isPresent_nAS_PDU = 1;


	*pE_RABToBeSetupItemCtxtSUReq = obj_E_RABToBeSetupItemCtxtSUReq;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__E_RABSetupListCtxtSURes( SI_S1AP_DT_E_RABSetupListCtxtSURes ** pE_RABSetupListCtxtSURes)
{
	SI_S1AP_DT_E_RABSetupListCtxtSURes * obj_E_RABSetupListCtxtSURes = NULL; 
	__si_s1ap_init_E_RABSetupListCtxtSURes( &obj_E_RABSetupListCtxtSURes);

	// L:1260
	SI_S1AP_DT_PDU_E_RABSetupItemCtxtSUResIEs * objE_RABSetupItemCtxtSUResIEs = NULL;
	__si_s1ap__set_testdata__PDU_E_RABSetupItemCtxtSUResIEs( &objE_RABSetupItemCtxtSUResIEs);
	// L:1419
	__si_linked_list_add( obj_E_RABSetupListCtxtSURes->E_RABSetupItemCtxtSUResIEs, (uint8_t*)objE_RABSetupItemCtxtSUResIEs);

	*pE_RABSetupListCtxtSURes = obj_E_RABSetupListCtxtSURes;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABSetupItemCtxtSURes( SI_S1AP_DT_E_RABSetupItemCtxtSURes ** pE_RABSetupItemCtxtSURes)
{
	SI_S1AP_DT_E_RABSetupItemCtxtSURes * obj_E_RABSetupItemCtxtSURes = (SI_S1AP_DT_E_RABSetupItemCtxtSURes*) __si_allocM( sizeof(SI_S1AP_DT_E_RABSetupItemCtxtSURes));
	memset( obj_E_RABSetupItemCtxtSURes, 0, sizeof( SI_S1AP_DT_E_RABSetupItemCtxtSURes));

	// L:486
	obj_E_RABSetupItemCtxtSURes->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABSetupItemCtxtSURes->transportLayerAddress, "0", 1, 1);  // L:574
	obj_E_RABSetupItemCtxtSURes->transportLayerAddress->bitslen = 1; //   L:575

	__si_s1ap_init_GTP_TEID2( &obj_E_RABSetupItemCtxtSURes->gTP_TEID, "\x13\x09\x02\x10", 4);    // L:545


	*pE_RABSetupItemCtxtSURes = obj_E_RABSetupItemCtxtSURes;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__TAIList( SI_S1AP_DT_TAIList ** pTAIList)
{
	SI_S1AP_DT_TAIList * obj_TAIList = NULL; 
	__si_s1ap_init_TAIList( &obj_TAIList);

	// L:1260
	SI_S1AP_DT_PDU_TAIItemIEs * objTAIItemIEs = NULL;
	__si_s1ap__set_testdata__PDU_TAIItemIEs( &objTAIItemIEs);
	// L:1419
	__si_linked_list_add( obj_TAIList->TAIItemIEs, (uint8_t*)objTAIItemIEs);

	*pTAIList = obj_TAIList;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__TAIItem( SI_S1AP_DT_TAIItem ** pTAIItem)
{
	SI_S1AP_DT_TAIItem * obj_TAIItem = (SI_S1AP_DT_TAIItem*) __si_allocM( sizeof(SI_S1AP_DT_TAIItem));
	memset( obj_TAIItem, 0, sizeof( SI_S1AP_DT_TAIItem));

	// L:486
	__si_s1ap__set_testdata__TAI( &obj_TAIItem->tAI);    // L:584


	*pTAIItem = obj_TAIItem;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__UE_associatedLogicalS1_ConnectionListRes( SI_S1AP_DT_UE_associatedLogicalS1_ConnectionListRes ** pUE_associatedLogicalS1_ConnectionListRes)
{
	SI_S1AP_DT_UE_associatedLogicalS1_ConnectionListRes * obj_UE_associatedLogicalS1_ConnectionListRes = NULL; 
	__si_s1ap_init_UE_associatedLogicalS1_ConnectionListRes( &obj_UE_associatedLogicalS1_ConnectionListRes);

	// L:1260
	SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemRes * objUE_associatedLogicalS1_ConnectionItemRes = NULL;
	__si_s1ap__set_testdata__PDU_UE_associatedLogicalS1_ConnectionItemRes( &objUE_associatedLogicalS1_ConnectionItemRes);
	// L:1419
	__si_linked_list_add( obj_UE_associatedLogicalS1_ConnectionListRes->UE_associatedLogicalS1_ConnectionItemRes, (uint8_t*)objUE_associatedLogicalS1_ConnectionItemRes);

	*pUE_associatedLogicalS1_ConnectionListRes = obj_UE_associatedLogicalS1_ConnectionListRes;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__UE_associatedLogicalS1_ConnectionListResAck( SI_S1AP_DT_UE_associatedLogicalS1_ConnectionListResAck ** pUE_associatedLogicalS1_ConnectionListResAck)
{
	SI_S1AP_DT_UE_associatedLogicalS1_ConnectionListResAck * obj_UE_associatedLogicalS1_ConnectionListResAck = NULL; 
	__si_s1ap_init_UE_associatedLogicalS1_ConnectionListResAck( &obj_UE_associatedLogicalS1_ConnectionListResAck);

	// L:1260
	SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemResAck * objUE_associatedLogicalS1_ConnectionItemResAck = NULL;
	__si_s1ap__set_testdata__PDU_UE_associatedLogicalS1_ConnectionItemResAck( &objUE_associatedLogicalS1_ConnectionItemResAck);
	// L:1419
	__si_linked_list_add( obj_UE_associatedLogicalS1_ConnectionListResAck->UE_associatedLogicalS1_ConnectionItemResAck, (uint8_t*)objUE_associatedLogicalS1_ConnectionItemResAck);

	*pUE_associatedLogicalS1_ConnectionListResAck = obj_UE_associatedLogicalS1_ConnectionListResAck;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABToBeModifiedItemBearerModInd( SI_S1AP_DT_E_RABToBeModifiedItemBearerModInd ** pE_RABToBeModifiedItemBearerModInd)
{
	SI_S1AP_DT_E_RABToBeModifiedItemBearerModInd * obj_E_RABToBeModifiedItemBearerModInd = (SI_S1AP_DT_E_RABToBeModifiedItemBearerModInd*) __si_allocM( sizeof(SI_S1AP_DT_E_RABToBeModifiedItemBearerModInd));
	memset( obj_E_RABToBeModifiedItemBearerModInd, 0, sizeof( SI_S1AP_DT_E_RABToBeModifiedItemBearerModInd));

	// L:486
	obj_E_RABToBeModifiedItemBearerModInd->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABToBeModifiedItemBearerModInd->transportLayerAddress, "8", 1, 1);  // L:574
	obj_E_RABToBeModifiedItemBearerModInd->transportLayerAddress->bitslen = 1; //   L:575

	__si_s1ap_init_GTP_TEID2( &obj_E_RABToBeModifiedItemBearerModInd->dL_GTP_TEID, "\x13\x11\x03\x09", 4);    // L:545


	*pE_RABToBeModifiedItemBearerModInd = obj_E_RABToBeModifiedItemBearerModInd;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABNotToBeModifiedItemBearerModInd( SI_S1AP_DT_E_RABNotToBeModifiedItemBearerModInd ** pE_RABNotToBeModifiedItemBearerModInd)
{
	SI_S1AP_DT_E_RABNotToBeModifiedItemBearerModInd * obj_E_RABNotToBeModifiedItemBearerModInd = (SI_S1AP_DT_E_RABNotToBeModifiedItemBearerModInd*) __si_allocM( sizeof(SI_S1AP_DT_E_RABNotToBeModifiedItemBearerModInd));
	memset( obj_E_RABNotToBeModifiedItemBearerModInd, 0, sizeof( SI_S1AP_DT_E_RABNotToBeModifiedItemBearerModInd));

	// L:486
	obj_E_RABNotToBeModifiedItemBearerModInd->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABNotToBeModifiedItemBearerModInd->transportLayerAddress, "8", 1, 1);  // L:574
	obj_E_RABNotToBeModifiedItemBearerModInd->transportLayerAddress->bitslen = 1; //   L:575

	__si_s1ap_init_GTP_TEID2( &obj_E_RABNotToBeModifiedItemBearerModInd->dL_GTP_TEID, "\x16\x05\x16\x03", 4);    // L:545


	*pE_RABNotToBeModifiedItemBearerModInd = obj_E_RABNotToBeModifiedItemBearerModInd;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__CSGMembershipInfo( SI_S1AP_DT_CSGMembershipInfo ** pCSGMembershipInfo)
{
	SI_S1AP_DT_CSGMembershipInfo * obj_CSGMembershipInfo = (SI_S1AP_DT_CSGMembershipInfo*) __si_allocM( sizeof(SI_S1AP_DT_CSGMembershipInfo));
	memset( obj_CSGMembershipInfo, 0, sizeof( SI_S1AP_DT_CSGMembershipInfo));

	// L:486
	obj_CSGMembershipInfo->selected_ecSGMembershipStatus = CSGMembershipStatus_member_val;   // L:529

	__si_s1ap_init_CSG_Id2( &obj_CSGMembershipInfo->cSG_Id, "4086", 4, 27);  // L:574
	obj_CSGMembershipInfo->cSG_Id->bitslen = 27; //   L:575

	obj_CSGMembershipInfo->selected_ecellAccessMode = CellAccessMode_hybrid_val;   // L:529
	obj_CSGMembershipInfo->isPresent_cellAccessMode = 1;

	__si_s1ap_init_PLMNidentity2( &obj_CSGMembershipInfo->pLMNidentity, "\x04\x24\x20\x14\x02", 5);    // L:540
	obj_CSGMembershipInfo->isPresent_pLMNidentity = 1;


	*pCSGMembershipInfo = obj_CSGMembershipInfo;
}


// SEQUENCE_OF  L:11217
void __si_s1ap__set_testdata__E_RABModifyListBearerModConf( SI_S1AP_DT_E_RABModifyListBearerModConf ** pE_RABModifyListBearerModConf)
{
	SI_S1AP_DT_E_RABModifyListBearerModConf * obj_E_RABModifyListBearerModConf = NULL; 
	__si_s1ap_init_E_RABModifyListBearerModConf( &obj_E_RABModifyListBearerModConf);

	// L:1260
	SI_S1AP_DT_PDU_E_RABModifyItemBearerModConfIEs * objE_RABModifyItemBearerModConfIEs = NULL;
	__si_s1ap__set_testdata__PDU_E_RABModifyItemBearerModConfIEs( &objE_RABModifyItemBearerModConfIEs);
	// L:1419
	__si_linked_list_add( obj_E_RABModifyListBearerModConf->E_RABModifyItemBearerModConfIEs, (uint8_t*)objE_RABModifyItemBearerModConfIEs);

	*pE_RABModifyListBearerModConf = obj_E_RABModifyListBearerModConf;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABModifyItemBearerModConf( SI_S1AP_DT_E_RABModifyItemBearerModConf ** pE_RABModifyItemBearerModConf)
{
	SI_S1AP_DT_E_RABModifyItemBearerModConf * obj_E_RABModifyItemBearerModConf = (SI_S1AP_DT_E_RABModifyItemBearerModConf*) __si_allocM( sizeof(SI_S1AP_DT_E_RABModifyItemBearerModConf));
	memset( obj_E_RABModifyItemBearerModConf, 0, sizeof( SI_S1AP_DT_E_RABModifyItemBearerModConf));

	// L:486
	obj_E_RABModifyItemBearerModConf->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533


	*pE_RABModifyItemBearerModConf = obj_E_RABModifyItemBearerModConf;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABFailedToResumeItemResumeReq( SI_S1AP_DT_E_RABFailedToResumeItemResumeReq ** pE_RABFailedToResumeItemResumeReq)
{
	SI_S1AP_DT_E_RABFailedToResumeItemResumeReq * obj_E_RABFailedToResumeItemResumeReq = (SI_S1AP_DT_E_RABFailedToResumeItemResumeReq*) __si_allocM( sizeof(SI_S1AP_DT_E_RABFailedToResumeItemResumeReq));
	memset( obj_E_RABFailedToResumeItemResumeReq, 0, sizeof( SI_S1AP_DT_E_RABFailedToResumeItemResumeReq));

	// L:486
	obj_E_RABFailedToResumeItemResumeReq->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap__set_testdata__Cause( &obj_E_RABFailedToResumeItemResumeReq->cause);    // L:588


	*pE_RABFailedToResumeItemResumeReq = obj_E_RABFailedToResumeItemResumeReq;
}


// SEQUENCE  L:11217
void __si_s1ap__set_testdata__E_RABFailedToResumeItemResumeRes( SI_S1AP_DT_E_RABFailedToResumeItemResumeRes ** pE_RABFailedToResumeItemResumeRes)
{
	SI_S1AP_DT_E_RABFailedToResumeItemResumeRes * obj_E_RABFailedToResumeItemResumeRes = (SI_S1AP_DT_E_RABFailedToResumeItemResumeRes*) __si_allocM( sizeof(SI_S1AP_DT_E_RABFailedToResumeItemResumeRes));
	memset( obj_E_RABFailedToResumeItemResumeRes, 0, sizeof( SI_S1AP_DT_E_RABFailedToResumeItemResumeRes));

	// L:486
	obj_E_RABFailedToResumeItemResumeRes->e_RAB_ID = __getTestINTEGER( 0, 15);    // L:533

	__si_s1ap__set_testdata__Cause( &obj_E_RABFailedToResumeItemResumeRes->cause);    // L:588


	*pE_RABFailedToResumeItemResumeRes = obj_E_RABFailedToResumeItemResumeRes;
}




//  L:11326
void __si_s1ap__set_testdata__PDU_Additional_GUTI_ExtIEs( SI_S1AP_DT_PDU_Additional_GUTI_ExtIEs ** pAdditional_GUTI_ExtIEs)
{
	SI_S1AP_DT_PDU_Additional_GUTI_ExtIEs * obj_Additional_GUTI_ExtIEs = (SI_S1AP_DT_PDU_Additional_GUTI_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Additional_GUTI_ExtIEs));
	memset( obj_Additional_GUTI_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_Additional_GUTI_ExtIEs));


	*pAdditional_GUTI_ExtIEs = obj_Additional_GUTI_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_AllocationAndRetentionPriority_ExtIEs( SI_S1AP_DT_PDU_AllocationAndRetentionPriority_ExtIEs ** pAllocationAndRetentionPriority_ExtIEs)
{
	SI_S1AP_DT_PDU_AllocationAndRetentionPriority_ExtIEs * obj_AllocationAndRetentionPriority_ExtIEs = (SI_S1AP_DT_PDU_AllocationAndRetentionPriority_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_AllocationAndRetentionPriority_ExtIEs));
	memset( obj_AllocationAndRetentionPriority_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_AllocationAndRetentionPriority_ExtIEs));


	*pAllocationAndRetentionPriority_ExtIEs = obj_AllocationAndRetentionPriority_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_InformationForCECapableUEs_ExtIEs( SI_S1AP_DT_PDU_InformationForCECapableUEs_ExtIEs ** pInformationForCECapableUEs_ExtIEs)
{
	SI_S1AP_DT_PDU_InformationForCECapableUEs_ExtIEs * obj_InformationForCECapableUEs_ExtIEs = (SI_S1AP_DT_PDU_InformationForCECapableUEs_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_InformationForCECapableUEs_ExtIEs));
	memset( obj_InformationForCECapableUEs_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_InformationForCECapableUEs_ExtIEs));


	*pInformationForCECapableUEs_ExtIEs = obj_InformationForCECapableUEs_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_AssistanceDataForPaging_ExtIEs( SI_S1AP_DT_PDU_AssistanceDataForPaging_ExtIEs ** pAssistanceDataForPaging_ExtIEs)
{
	SI_S1AP_DT_PDU_AssistanceDataForPaging_ExtIEs * obj_AssistanceDataForPaging_ExtIEs = (SI_S1AP_DT_PDU_AssistanceDataForPaging_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_AssistanceDataForPaging_ExtIEs));
	memset( obj_AssistanceDataForPaging_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_AssistanceDataForPaging_ExtIEs));


	*pAssistanceDataForPaging_ExtIEs = obj_AssistanceDataForPaging_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_AssistanceDataForRecommendedCells_ExtIEs( SI_S1AP_DT_PDU_AssistanceDataForRecommendedCells_ExtIEs ** pAssistanceDataForRecommendedCells_ExtIEs)
{
	SI_S1AP_DT_PDU_AssistanceDataForRecommendedCells_ExtIEs * obj_AssistanceDataForRecommendedCells_ExtIEs = (SI_S1AP_DT_PDU_AssistanceDataForRecommendedCells_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_AssistanceDataForRecommendedCells_ExtIEs));
	memset( obj_AssistanceDataForRecommendedCells_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_AssistanceDataForRecommendedCells_ExtIEs));


	*pAssistanceDataForRecommendedCells_ExtIEs = obj_AssistanceDataForRecommendedCells_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_Bearers_SubjectToStatusTransfer_ItemIEs( SI_S1AP_DT_PDU_Bearers_SubjectToStatusTransfer_ItemIEs ** pBearers_SubjectToStatusTransfer_ItemIEs)
{
	SI_S1AP_DT_PDU_Bearers_SubjectToStatusTransfer_ItemIEs * obj_Bearers_SubjectToStatusTransfer_ItemIEs = (SI_S1AP_DT_PDU_Bearers_SubjectToStatusTransfer_ItemIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Bearers_SubjectToStatusTransfer_ItemIEs));
	memset( obj_Bearers_SubjectToStatusTransfer_ItemIEs, 0, sizeof( SI_S1AP_DT_PDU_Bearers_SubjectToStatusTransfer_ItemIEs));

	// Bearers-SubjectToStatusTransfer-Item , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__Bearers_SubjectToStatusTransfer_Item( &obj_Bearers_SubjectToStatusTransfer_ItemIEs->bearersSubjectToStatusTransferItem);
	obj_Bearers_SubjectToStatusTransfer_ItemIEs->bearersSubjectToStatusTransferItem_isset = 1;



	*pBearers_SubjectToStatusTransfer_ItemIEs = obj_Bearers_SubjectToStatusTransfer_ItemIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_Bearers_SubjectToStatusTransfer_ItemExtIEs( SI_S1AP_DT_PDU_Bearers_SubjectToStatusTransfer_ItemExtIEs ** pBearers_SubjectToStatusTransfer_ItemExtIEs)
{
	SI_S1AP_DT_PDU_Bearers_SubjectToStatusTransfer_ItemExtIEs * obj_Bearers_SubjectToStatusTransfer_ItemExtIEs = (SI_S1AP_DT_PDU_Bearers_SubjectToStatusTransfer_ItemExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Bearers_SubjectToStatusTransfer_ItemExtIEs));
	memset( obj_Bearers_SubjectToStatusTransfer_ItemExtIEs, 0, sizeof( SI_S1AP_DT_PDU_Bearers_SubjectToStatusTransfer_ItemExtIEs));

	// COUNTValueExtended , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__COUNTValueExtended( &obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->uLCOUNTValueExtended);
	obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->uLCOUNTValueExtended_isset = 1;


	// COUNTValueExtended , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__COUNTValueExtended( &obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->dLCOUNTValueExtended);
	obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->dLCOUNTValueExtended_isset = 1;


	// ReceiveStatusOfULPDCPSDUsExtended , PRESENCE = optional   BITSTRING , MIN=1, MAX=16384
	__si_s1ap_init_ReceiveStatusOfULPDCPSDUsExtended2( &obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->receiveStatusOfULPDCPSDUsExtended, "5", 1, 1);
	obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->receiveStatusOfULPDCPSDUsExtended->bitslen = 1;
	obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->receiveStatusOfULPDCPSDUsExtended_isset = 1;


	// COUNTvaluePDCP-SNlength18 , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__COUNTvaluePDCP_SNlength18( &obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->uLCOUNTValuePDCPSNlength18);
	obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->uLCOUNTValuePDCPSNlength18_isset = 1;


	// COUNTvaluePDCP-SNlength18 , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__COUNTvaluePDCP_SNlength18( &obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->dLCOUNTValuePDCPSNlength18);
	obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->dLCOUNTValuePDCPSNlength18_isset = 1;


	// ReceiveStatusOfULPDCPSDUsPDCP-SNlength18 , PRESENCE = optional   BITSTRING , MIN=1, MAX=131072
	__si_s1ap_init_ReceiveStatusOfULPDCPSDUsPDCP_SNlength182( &obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->receiveStatusOfULPDCPSDUsPDCPSNlength18, "6", 1, 1);
	obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->receiveStatusOfULPDCPSDUsPDCPSNlength18->bitslen = 1;
	obj_Bearers_SubjectToStatusTransfer_ItemExtIEs->receiveStatusOfULPDCPSDUsPDCPSNlength18_isset = 1;



	*pBearers_SubjectToStatusTransfer_ItemExtIEs = obj_Bearers_SubjectToStatusTransfer_ItemExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_Bearers_SubjectToEarlyStatusTransfer_ItemIEs( SI_S1AP_DT_PDU_Bearers_SubjectToEarlyStatusTransfer_ItemIEs ** pBearers_SubjectToEarlyStatusTransfer_ItemIEs)
{
	SI_S1AP_DT_PDU_Bearers_SubjectToEarlyStatusTransfer_ItemIEs * obj_Bearers_SubjectToEarlyStatusTransfer_ItemIEs = (SI_S1AP_DT_PDU_Bearers_SubjectToEarlyStatusTransfer_ItemIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Bearers_SubjectToEarlyStatusTransfer_ItemIEs));
	memset( obj_Bearers_SubjectToEarlyStatusTransfer_ItemIEs, 0, sizeof( SI_S1AP_DT_PDU_Bearers_SubjectToEarlyStatusTransfer_ItemIEs));

	// Bearers-SubjectToEarlyStatusTransfer-Item , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__Bearers_SubjectToEarlyStatusTransfer_Item( &obj_Bearers_SubjectToEarlyStatusTransfer_ItemIEs->bearersSubjectToEarlyStatusTransferItem);
	obj_Bearers_SubjectToEarlyStatusTransfer_ItemIEs->bearersSubjectToEarlyStatusTransferItem_isset = 1;



	*pBearers_SubjectToEarlyStatusTransfer_ItemIEs = obj_Bearers_SubjectToEarlyStatusTransfer_ItemIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_Bearers_SubjectToEarlyStatusTransfer_ItemExtIEs( SI_S1AP_DT_PDU_Bearers_SubjectToEarlyStatusTransfer_ItemExtIEs ** pBearers_SubjectToEarlyStatusTransfer_ItemExtIEs)
{
	SI_S1AP_DT_PDU_Bearers_SubjectToEarlyStatusTransfer_ItemExtIEs * obj_Bearers_SubjectToEarlyStatusTransfer_ItemExtIEs = (SI_S1AP_DT_PDU_Bearers_SubjectToEarlyStatusTransfer_ItemExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Bearers_SubjectToEarlyStatusTransfer_ItemExtIEs));
	memset( obj_Bearers_SubjectToEarlyStatusTransfer_ItemExtIEs, 0, sizeof( SI_S1AP_DT_PDU_Bearers_SubjectToEarlyStatusTransfer_ItemExtIEs));


	*pBearers_SubjectToEarlyStatusTransfer_ItemExtIEs = obj_Bearers_SubjectToEarlyStatusTransfer_ItemExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_Bearers_SubjectToDLDiscarding_ItemIEs( SI_S1AP_DT_PDU_Bearers_SubjectToDLDiscarding_ItemIEs ** pBearers_SubjectToDLDiscarding_ItemIEs)
{
	SI_S1AP_DT_PDU_Bearers_SubjectToDLDiscarding_ItemIEs * obj_Bearers_SubjectToDLDiscarding_ItemIEs = (SI_S1AP_DT_PDU_Bearers_SubjectToDLDiscarding_ItemIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Bearers_SubjectToDLDiscarding_ItemIEs));
	memset( obj_Bearers_SubjectToDLDiscarding_ItemIEs, 0, sizeof( SI_S1AP_DT_PDU_Bearers_SubjectToDLDiscarding_ItemIEs));

	// Bearers-SubjectToDLDiscarding-Item , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__Bearers_SubjectToDLDiscarding_Item( &obj_Bearers_SubjectToDLDiscarding_ItemIEs->bearersSubjectToDLDiscardingItem);
	obj_Bearers_SubjectToDLDiscarding_ItemIEs->bearersSubjectToDLDiscardingItem_isset = 1;



	*pBearers_SubjectToDLDiscarding_ItemIEs = obj_Bearers_SubjectToDLDiscarding_ItemIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_Bearers_SubjectToDLDiscarding_ItemExtIEs( SI_S1AP_DT_PDU_Bearers_SubjectToDLDiscarding_ItemExtIEs ** pBearers_SubjectToDLDiscarding_ItemExtIEs)
{
	SI_S1AP_DT_PDU_Bearers_SubjectToDLDiscarding_ItemExtIEs * obj_Bearers_SubjectToDLDiscarding_ItemExtIEs = (SI_S1AP_DT_PDU_Bearers_SubjectToDLDiscarding_ItemExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Bearers_SubjectToDLDiscarding_ItemExtIEs));
	memset( obj_Bearers_SubjectToDLDiscarding_ItemExtIEs, 0, sizeof( SI_S1AP_DT_PDU_Bearers_SubjectToDLDiscarding_ItemExtIEs));


	*pBearers_SubjectToDLDiscarding_ItemExtIEs = obj_Bearers_SubjectToDLDiscarding_ItemExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_BluetoothMeasurementConfiguration_ExtIEs( SI_S1AP_DT_PDU_BluetoothMeasurementConfiguration_ExtIEs ** pBluetoothMeasurementConfiguration_ExtIEs)
{
	SI_S1AP_DT_PDU_BluetoothMeasurementConfiguration_ExtIEs * obj_BluetoothMeasurementConfiguration_ExtIEs = (SI_S1AP_DT_PDU_BluetoothMeasurementConfiguration_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_BluetoothMeasurementConfiguration_ExtIEs));
	memset( obj_BluetoothMeasurementConfiguration_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_BluetoothMeasurementConfiguration_ExtIEs));


	*pBluetoothMeasurementConfiguration_ExtIEs = obj_BluetoothMeasurementConfiguration_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CancelledCellinEAI_Item_ExtIEs( SI_S1AP_DT_PDU_CancelledCellinEAI_Item_ExtIEs ** pCancelledCellinEAI_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_CancelledCellinEAI_Item_ExtIEs * obj_CancelledCellinEAI_Item_ExtIEs = (SI_S1AP_DT_PDU_CancelledCellinEAI_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CancelledCellinEAI_Item_ExtIEs));
	memset( obj_CancelledCellinEAI_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CancelledCellinEAI_Item_ExtIEs));


	*pCancelledCellinEAI_Item_ExtIEs = obj_CancelledCellinEAI_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CancelledCellinTAI_Item_ExtIEs( SI_S1AP_DT_PDU_CancelledCellinTAI_Item_ExtIEs ** pCancelledCellinTAI_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_CancelledCellinTAI_Item_ExtIEs * obj_CancelledCellinTAI_Item_ExtIEs = (SI_S1AP_DT_PDU_CancelledCellinTAI_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CancelledCellinTAI_Item_ExtIEs));
	memset( obj_CancelledCellinTAI_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CancelledCellinTAI_Item_ExtIEs));


	*pCancelledCellinTAI_Item_ExtIEs = obj_CancelledCellinTAI_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CellIdentifierAndCELevelForCECapableUEs_ExtIEs( SI_S1AP_DT_PDU_CellIdentifierAndCELevelForCECapableUEs_ExtIEs ** pCellIdentifierAndCELevelForCECapableUEs_ExtIEs)
{
	SI_S1AP_DT_PDU_CellIdentifierAndCELevelForCECapableUEs_ExtIEs * obj_CellIdentifierAndCELevelForCECapableUEs_ExtIEs = (SI_S1AP_DT_PDU_CellIdentifierAndCELevelForCECapableUEs_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CellIdentifierAndCELevelForCECapableUEs_ExtIEs));
	memset( obj_CellIdentifierAndCELevelForCECapableUEs_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CellIdentifierAndCELevelForCECapableUEs_ExtIEs));


	*pCellIdentifierAndCELevelForCECapableUEs_ExtIEs = obj_CellIdentifierAndCELevelForCECapableUEs_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CellID_Broadcast_Item_ExtIEs( SI_S1AP_DT_PDU_CellID_Broadcast_Item_ExtIEs ** pCellID_Broadcast_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_CellID_Broadcast_Item_ExtIEs * obj_CellID_Broadcast_Item_ExtIEs = (SI_S1AP_DT_PDU_CellID_Broadcast_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CellID_Broadcast_Item_ExtIEs));
	memset( obj_CellID_Broadcast_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CellID_Broadcast_Item_ExtIEs));


	*pCellID_Broadcast_Item_ExtIEs = obj_CellID_Broadcast_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CellID_Cancelled_Item_ExtIEs( SI_S1AP_DT_PDU_CellID_Cancelled_Item_ExtIEs ** pCellID_Cancelled_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_CellID_Cancelled_Item_ExtIEs * obj_CellID_Cancelled_Item_ExtIEs = (SI_S1AP_DT_PDU_CellID_Cancelled_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CellID_Cancelled_Item_ExtIEs));
	memset( obj_CellID_Cancelled_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CellID_Cancelled_Item_ExtIEs));


	*pCellID_Cancelled_Item_ExtIEs = obj_CellID_Cancelled_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CellBasedMDT_ExtIEs( SI_S1AP_DT_PDU_CellBasedMDT_ExtIEs ** pCellBasedMDT_ExtIEs)
{
	SI_S1AP_DT_PDU_CellBasedMDT_ExtIEs * obj_CellBasedMDT_ExtIEs = (SI_S1AP_DT_PDU_CellBasedMDT_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CellBasedMDT_ExtIEs));
	memset( obj_CellBasedMDT_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CellBasedMDT_ExtIEs));


	*pCellBasedMDT_ExtIEs = obj_CellBasedMDT_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CellBasedQMC_ExtIEs( SI_S1AP_DT_PDU_CellBasedQMC_ExtIEs ** pCellBasedQMC_ExtIEs)
{
	SI_S1AP_DT_PDU_CellBasedQMC_ExtIEs * obj_CellBasedQMC_ExtIEs = (SI_S1AP_DT_PDU_CellBasedQMC_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CellBasedQMC_ExtIEs));
	memset( obj_CellBasedQMC_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CellBasedQMC_ExtIEs));


	*pCellBasedQMC_ExtIEs = obj_CellBasedQMC_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_Cdma2000OneXSRVCCInfo_ExtIEs( SI_S1AP_DT_PDU_Cdma2000OneXSRVCCInfo_ExtIEs ** pCdma2000OneXSRVCCInfo_ExtIEs)
{
	SI_S1AP_DT_PDU_Cdma2000OneXSRVCCInfo_ExtIEs * obj_Cdma2000OneXSRVCCInfo_ExtIEs = (SI_S1AP_DT_PDU_Cdma2000OneXSRVCCInfo_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Cdma2000OneXSRVCCInfo_ExtIEs));
	memset( obj_Cdma2000OneXSRVCCInfo_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_Cdma2000OneXSRVCCInfo_ExtIEs));


	*pCdma2000OneXSRVCCInfo_ExtIEs = obj_Cdma2000OneXSRVCCInfo_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CellType_ExtIEs( SI_S1AP_DT_PDU_CellType_ExtIEs ** pCellType_ExtIEs)
{
	SI_S1AP_DT_PDU_CellType_ExtIEs * obj_CellType_ExtIEs = (SI_S1AP_DT_PDU_CellType_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CellType_ExtIEs));
	memset( obj_CellType_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CellType_ExtIEs));


	*pCellType_ExtIEs = obj_CellType_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CGI_ExtIEs( SI_S1AP_DT_PDU_CGI_ExtIEs ** pCGI_ExtIEs)
{
	SI_S1AP_DT_PDU_CGI_ExtIEs * obj_CGI_ExtIEs = (SI_S1AP_DT_PDU_CGI_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CGI_ExtIEs));
	memset( obj_CGI_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CGI_ExtIEs));


	*pCGI_ExtIEs = obj_CGI_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CNTypeRestrictions_Item_ExtIEs( SI_S1AP_DT_PDU_CNTypeRestrictions_Item_ExtIEs ** pCNTypeRestrictions_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_CNTypeRestrictions_Item_ExtIEs * obj_CNTypeRestrictions_Item_ExtIEs = (SI_S1AP_DT_PDU_CNTypeRestrictions_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CNTypeRestrictions_Item_ExtIEs));
	memset( obj_CNTypeRestrictions_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CNTypeRestrictions_Item_ExtIEs));


	*pCNTypeRestrictions_Item_ExtIEs = obj_CNTypeRestrictions_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ConnectedengNBItem_ExtIEs( SI_S1AP_DT_PDU_ConnectedengNBItem_ExtIEs ** pConnectedengNBItem_ExtIEs)
{
	SI_S1AP_DT_PDU_ConnectedengNBItem_ExtIEs * obj_ConnectedengNBItem_ExtIEs = (SI_S1AP_DT_PDU_ConnectedengNBItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ConnectedengNBItem_ExtIEs));
	memset( obj_ConnectedengNBItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ConnectedengNBItem_ExtIEs));


	*pConnectedengNBItem_ExtIEs = obj_ConnectedengNBItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ContextatSource_ExtIEs( SI_S1AP_DT_PDU_ContextatSource_ExtIEs ** pContextatSource_ExtIEs)
{
	SI_S1AP_DT_PDU_ContextatSource_ExtIEs * obj_ContextatSource_ExtIEs = (SI_S1AP_DT_PDU_ContextatSource_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ContextatSource_ExtIEs));
	memset( obj_ContextatSource_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ContextatSource_ExtIEs));


	*pContextatSource_ExtIEs = obj_ContextatSource_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CSG_IdList_Item_ExtIEs( SI_S1AP_DT_PDU_CSG_IdList_Item_ExtIEs ** pCSG_IdList_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_CSG_IdList_Item_ExtIEs * obj_CSG_IdList_Item_ExtIEs = (SI_S1AP_DT_PDU_CSG_IdList_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CSG_IdList_Item_ExtIEs));
	memset( obj_CSG_IdList_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CSG_IdList_Item_ExtIEs));


	*pCSG_IdList_Item_ExtIEs = obj_CSG_IdList_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_COUNTvalue_ExtIEs( SI_S1AP_DT_PDU_COUNTvalue_ExtIEs ** pCOUNTvalue_ExtIEs)
{
	SI_S1AP_DT_PDU_COUNTvalue_ExtIEs * obj_COUNTvalue_ExtIEs = (SI_S1AP_DT_PDU_COUNTvalue_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_COUNTvalue_ExtIEs));
	memset( obj_COUNTvalue_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_COUNTvalue_ExtIEs));


	*pCOUNTvalue_ExtIEs = obj_COUNTvalue_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_COUNTValueExtended_ExtIEs( SI_S1AP_DT_PDU_COUNTValueExtended_ExtIEs ** pCOUNTValueExtended_ExtIEs)
{
	SI_S1AP_DT_PDU_COUNTValueExtended_ExtIEs * obj_COUNTValueExtended_ExtIEs = (SI_S1AP_DT_PDU_COUNTValueExtended_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_COUNTValueExtended_ExtIEs));
	memset( obj_COUNTValueExtended_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_COUNTValueExtended_ExtIEs));


	*pCOUNTValueExtended_ExtIEs = obj_COUNTValueExtended_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_COUNTvaluePDCP_SNlength18_ExtIEs( SI_S1AP_DT_PDU_COUNTvaluePDCP_SNlength18_ExtIEs ** pCOUNTvaluePDCP_SNlength18_ExtIEs)
{
	SI_S1AP_DT_PDU_COUNTvaluePDCP_SNlength18_ExtIEs * obj_COUNTvaluePDCP_SNlength18_ExtIEs = (SI_S1AP_DT_PDU_COUNTvaluePDCP_SNlength18_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_COUNTvaluePDCP_SNlength18_ExtIEs));
	memset( obj_COUNTvaluePDCP_SNlength18_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_COUNTvaluePDCP_SNlength18_ExtIEs));


	*pCOUNTvaluePDCP_SNlength18_ExtIEs = obj_COUNTvaluePDCP_SNlength18_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CriticalityDiagnostics_ExtIEs( SI_S1AP_DT_PDU_CriticalityDiagnostics_ExtIEs ** pCriticalityDiagnostics_ExtIEs)
{
	SI_S1AP_DT_PDU_CriticalityDiagnostics_ExtIEs * obj_CriticalityDiagnostics_ExtIEs = (SI_S1AP_DT_PDU_CriticalityDiagnostics_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CriticalityDiagnostics_ExtIEs));
	memset( obj_CriticalityDiagnostics_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CriticalityDiagnostics_ExtIEs));


	*pCriticalityDiagnostics_ExtIEs = obj_CriticalityDiagnostics_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CriticalityDiagnostics_IE_Item_ExtIEs( SI_S1AP_DT_PDU_CriticalityDiagnostics_IE_Item_ExtIEs ** pCriticalityDiagnostics_IE_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_CriticalityDiagnostics_IE_Item_ExtIEs * obj_CriticalityDiagnostics_IE_Item_ExtIEs = (SI_S1AP_DT_PDU_CriticalityDiagnostics_IE_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CriticalityDiagnostics_IE_Item_ExtIEs));
	memset( obj_CriticalityDiagnostics_IE_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CriticalityDiagnostics_IE_Item_ExtIEs));


	*pCriticalityDiagnostics_IE_Item_ExtIEs = obj_CriticalityDiagnostics_IE_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_DAPSRequestInfo_ExtIEs( SI_S1AP_DT_PDU_DAPSRequestInfo_ExtIEs ** pDAPSRequestInfo_ExtIEs)
{
	SI_S1AP_DT_PDU_DAPSRequestInfo_ExtIEs * obj_DAPSRequestInfo_ExtIEs = (SI_S1AP_DT_PDU_DAPSRequestInfo_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_DAPSRequestInfo_ExtIEs));
	memset( obj_DAPSRequestInfo_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_DAPSRequestInfo_ExtIEs));


	*pDAPSRequestInfo_ExtIEs = obj_DAPSRequestInfo_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_DAPSResponseInfoItem_ExtIEs( SI_S1AP_DT_PDU_DAPSResponseInfoItem_ExtIEs ** pDAPSResponseInfoItem_ExtIEs)
{
	SI_S1AP_DT_PDU_DAPSResponseInfoItem_ExtIEs * obj_DAPSResponseInfoItem_ExtIEs = (SI_S1AP_DT_PDU_DAPSResponseInfoItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_DAPSResponseInfoItem_ExtIEs));
	memset( obj_DAPSResponseInfoItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_DAPSResponseInfoItem_ExtIEs));


	*pDAPSResponseInfoItem_ExtIEs = obj_DAPSResponseInfoItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_DAPSResponseInfo_ExtIEs( SI_S1AP_DT_PDU_DAPSResponseInfo_ExtIEs ** pDAPSResponseInfo_ExtIEs)
{
	SI_S1AP_DT_PDU_DAPSResponseInfo_ExtIEs * obj_DAPSResponseInfo_ExtIEs = (SI_S1AP_DT_PDU_DAPSResponseInfo_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_DAPSResponseInfo_ExtIEs));
	memset( obj_DAPSResponseInfo_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_DAPSResponseInfo_ExtIEs));


	*pDAPSResponseInfo_ExtIEs = obj_DAPSResponseInfo_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ServedDCNsItem_ExtIEs( SI_S1AP_DT_PDU_ServedDCNsItem_ExtIEs ** pServedDCNsItem_ExtIEs)
{
	SI_S1AP_DT_PDU_ServedDCNsItem_ExtIEs * obj_ServedDCNsItem_ExtIEs = (SI_S1AP_DT_PDU_ServedDCNsItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ServedDCNsItem_ExtIEs));
	memset( obj_ServedDCNsItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ServedDCNsItem_ExtIEs));


	*pServedDCNsItem_ExtIEs = obj_ServedDCNsItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_DL_CP_SecurityInformation_ExtIEs( SI_S1AP_DT_PDU_DL_CP_SecurityInformation_ExtIEs ** pDL_CP_SecurityInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_DL_CP_SecurityInformation_ExtIEs * obj_DL_CP_SecurityInformation_ExtIEs = (SI_S1AP_DT_PDU_DL_CP_SecurityInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_DL_CP_SecurityInformation_ExtIEs));
	memset( obj_DL_CP_SecurityInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_DL_CP_SecurityInformation_ExtIEs));


	*pDL_CP_SecurityInformation_ExtIEs = obj_DL_CP_SecurityInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_EmergencyAreaID_Broadcast_Item_ExtIEs( SI_S1AP_DT_PDU_EmergencyAreaID_Broadcast_Item_ExtIEs ** pEmergencyAreaID_Broadcast_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_EmergencyAreaID_Broadcast_Item_ExtIEs * obj_EmergencyAreaID_Broadcast_Item_ExtIEs = (SI_S1AP_DT_PDU_EmergencyAreaID_Broadcast_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_EmergencyAreaID_Broadcast_Item_ExtIEs));
	memset( obj_EmergencyAreaID_Broadcast_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_EmergencyAreaID_Broadcast_Item_ExtIEs));


	*pEmergencyAreaID_Broadcast_Item_ExtIEs = obj_EmergencyAreaID_Broadcast_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_EmergencyAreaID_Cancelled_Item_ExtIEs( SI_S1AP_DT_PDU_EmergencyAreaID_Cancelled_Item_ExtIEs ** pEmergencyAreaID_Cancelled_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_EmergencyAreaID_Cancelled_Item_ExtIEs * obj_EmergencyAreaID_Cancelled_Item_ExtIEs = (SI_S1AP_DT_PDU_EmergencyAreaID_Cancelled_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_EmergencyAreaID_Cancelled_Item_ExtIEs));
	memset( obj_EmergencyAreaID_Cancelled_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_EmergencyAreaID_Cancelled_Item_ExtIEs));


	*pEmergencyAreaID_Cancelled_Item_ExtIEs = obj_EmergencyAreaID_Cancelled_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CompletedCellinEAI_Item_ExtIEs( SI_S1AP_DT_PDU_CompletedCellinEAI_Item_ExtIEs ** pCompletedCellinEAI_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_CompletedCellinEAI_Item_ExtIEs * obj_CompletedCellinEAI_Item_ExtIEs = (SI_S1AP_DT_PDU_CompletedCellinEAI_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CompletedCellinEAI_Item_ExtIEs));
	memset( obj_CompletedCellinEAI_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CompletedCellinEAI_Item_ExtIEs));


	*pCompletedCellinEAI_Item_ExtIEs = obj_CompletedCellinEAI_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ENB_EarlyStatusTransfer_TransparentContainer_ExtIEs( SI_S1AP_DT_PDU_ENB_EarlyStatusTransfer_TransparentContainer_ExtIEs ** pENB_EarlyStatusTransfer_TransparentContainer_ExtIEs)
{
	SI_S1AP_DT_PDU_ENB_EarlyStatusTransfer_TransparentContainer_ExtIEs * obj_ENB_EarlyStatusTransfer_TransparentContainer_ExtIEs = (SI_S1AP_DT_PDU_ENB_EarlyStatusTransfer_TransparentContainer_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ENB_EarlyStatusTransfer_TransparentContainer_ExtIEs));
	memset( obj_ENB_EarlyStatusTransfer_TransparentContainer_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ENB_EarlyStatusTransfer_TransparentContainer_ExtIEs));

	// Bearers-SubjectToDLDiscardingList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__Bearers_SubjectToDLDiscardingList( &obj_ENB_EarlyStatusTransfer_TransparentContainer_ExtIEs->bearersSubjectToDLDiscardingList);
	obj_ENB_EarlyStatusTransfer_TransparentContainer_ExtIEs->bearersSubjectToDLDiscardingList_isset = 1;



	*pENB_EarlyStatusTransfer_TransparentContainer_ExtIEs = obj_ENB_EarlyStatusTransfer_TransparentContainer_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_GERAN_Cell_ID_ExtIEs( SI_S1AP_DT_PDU_GERAN_Cell_ID_ExtIEs ** pGERAN_Cell_ID_ExtIEs)
{
	SI_S1AP_DT_PDU_GERAN_Cell_ID_ExtIEs * obj_GERAN_Cell_ID_ExtIEs = (SI_S1AP_DT_PDU_GERAN_Cell_ID_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_GERAN_Cell_ID_ExtIEs));
	memset( obj_GERAN_Cell_ID_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_GERAN_Cell_ID_ExtIEs));


	*pGERAN_Cell_ID_ExtIEs = obj_GERAN_Cell_ID_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_GlobalENB_ID_ExtIEs( SI_S1AP_DT_PDU_GlobalENB_ID_ExtIEs ** pGlobalENB_ID_ExtIEs)
{
	SI_S1AP_DT_PDU_GlobalENB_ID_ExtIEs * obj_GlobalENB_ID_ExtIEs = (SI_S1AP_DT_PDU_GlobalENB_ID_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_GlobalENB_ID_ExtIEs));
	memset( obj_GlobalENB_ID_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_GlobalENB_ID_ExtIEs));


	*pGlobalENB_ID_ExtIEs = obj_GlobalENB_ID_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_Global_en_gNB_ID_ExtIEs( SI_S1AP_DT_PDU_Global_en_gNB_ID_ExtIEs ** pGlobal_en_gNB_ID_ExtIEs)
{
	SI_S1AP_DT_PDU_Global_en_gNB_ID_ExtIEs * obj_Global_en_gNB_ID_ExtIEs = (SI_S1AP_DT_PDU_Global_en_gNB_ID_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Global_en_gNB_ID_ExtIEs));
	memset( obj_Global_en_gNB_ID_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_Global_en_gNB_ID_ExtIEs));


	*pGlobal_en_gNB_ID_ExtIEs = obj_Global_en_gNB_ID_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ENB_StatusTransfer_TransparentContainer_ExtIEs( SI_S1AP_DT_PDU_ENB_StatusTransfer_TransparentContainer_ExtIEs ** pENB_StatusTransfer_TransparentContainer_ExtIEs)
{
	SI_S1AP_DT_PDU_ENB_StatusTransfer_TransparentContainer_ExtIEs * obj_ENB_StatusTransfer_TransparentContainer_ExtIEs = (SI_S1AP_DT_PDU_ENB_StatusTransfer_TransparentContainer_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ENB_StatusTransfer_TransparentContainer_ExtIEs));
	memset( obj_ENB_StatusTransfer_TransparentContainer_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ENB_StatusTransfer_TransparentContainer_ExtIEs));


	*pENB_StatusTransfer_TransparentContainer_ExtIEs = obj_ENB_StatusTransfer_TransparentContainer_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_EN_DCSONConfigurationTransfer_ExtIEs( SI_S1AP_DT_PDU_EN_DCSONConfigurationTransfer_ExtIEs ** pEN_DCSONConfigurationTransfer_ExtIEs)
{
	SI_S1AP_DT_PDU_EN_DCSONConfigurationTransfer_ExtIEs * obj_EN_DCSONConfigurationTransfer_ExtIEs = (SI_S1AP_DT_PDU_EN_DCSONConfigurationTransfer_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_EN_DCSONConfigurationTransfer_ExtIEs));
	memset( obj_EN_DCSONConfigurationTransfer_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_EN_DCSONConfigurationTransfer_ExtIEs));


	*pEN_DCSONConfigurationTransfer_ExtIEs = obj_EN_DCSONConfigurationTransfer_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_EN_DCTransferTypeRequest_ExtIEs( SI_S1AP_DT_PDU_EN_DCTransferTypeRequest_ExtIEs ** pEN_DCTransferTypeRequest_ExtIEs)
{
	SI_S1AP_DT_PDU_EN_DCTransferTypeRequest_ExtIEs * obj_EN_DCTransferTypeRequest_ExtIEs = (SI_S1AP_DT_PDU_EN_DCTransferTypeRequest_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_EN_DCTransferTypeRequest_ExtIEs));
	memset( obj_EN_DCTransferTypeRequest_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_EN_DCTransferTypeRequest_ExtIEs));


	*pEN_DCTransferTypeRequest_ExtIEs = obj_EN_DCTransferTypeRequest_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_EN_DCTransferTypeReply_ExtIEs( SI_S1AP_DT_PDU_EN_DCTransferTypeReply_ExtIEs ** pEN_DCTransferTypeReply_ExtIEs)
{
	SI_S1AP_DT_PDU_EN_DCTransferTypeReply_ExtIEs * obj_EN_DCTransferTypeReply_ExtIEs = (SI_S1AP_DT_PDU_EN_DCTransferTypeReply_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_EN_DCTransferTypeReply_ExtIEs));
	memset( obj_EN_DCTransferTypeReply_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_EN_DCTransferTypeReply_ExtIEs));


	*pEN_DCTransferTypeReply_ExtIEs = obj_EN_DCTransferTypeReply_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_EN_DCSONeNBIdentification_ExtIEs( SI_S1AP_DT_PDU_EN_DCSONeNBIdentification_ExtIEs ** pEN_DCSONeNBIdentification_ExtIEs)
{
	SI_S1AP_DT_PDU_EN_DCSONeNBIdentification_ExtIEs * obj_EN_DCSONeNBIdentification_ExtIEs = (SI_S1AP_DT_PDU_EN_DCSONeNBIdentification_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_EN_DCSONeNBIdentification_ExtIEs));
	memset( obj_EN_DCSONeNBIdentification_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_EN_DCSONeNBIdentification_ExtIEs));


	*pEN_DCSONeNBIdentification_ExtIEs = obj_EN_DCSONeNBIdentification_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_EN_DCSONengNBIdentification_ExtIEs( SI_S1AP_DT_PDU_EN_DCSONengNBIdentification_ExtIEs ** pEN_DCSONengNBIdentification_ExtIEs)
{
	SI_S1AP_DT_PDU_EN_DCSONengNBIdentification_ExtIEs * obj_EN_DCSONengNBIdentification_ExtIEs = (SI_S1AP_DT_PDU_EN_DCSONengNBIdentification_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_EN_DCSONengNBIdentification_ExtIEs));
	memset( obj_EN_DCSONengNBIdentification_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_EN_DCSONengNBIdentification_ExtIEs));


	*pEN_DCSONengNBIdentification_ExtIEs = obj_EN_DCSONengNBIdentification_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABInformationListItem_ExtIEs( SI_S1AP_DT_PDU_E_RABInformationListItem_ExtIEs ** pE_RABInformationListItem_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABInformationListItem_ExtIEs * obj_E_RABInformationListItem_ExtIEs = (SI_S1AP_DT_PDU_E_RABInformationListItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABInformationListItem_ExtIEs));
	memset( obj_E_RABInformationListItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABInformationListItem_ExtIEs));

	// DAPSRequestInfo , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__DAPSRequestInfo( &obj_E_RABInformationListItem_ExtIEs->dAPSRequestInfo);
	obj_E_RABInformationListItem_ExtIEs->dAPSRequestInfo_isset = 1;


	// TransportLayerAddress , PRESENCE = optional   BITSTRING , MIN=1, MAX=160
	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABInformationListItem_ExtIEs->sourceTransportLayerAddress, "7", 1, 1);
	obj_E_RABInformationListItem_ExtIEs->sourceTransportLayerAddress->bitslen = 1;
	obj_E_RABInformationListItem_ExtIEs->sourceTransportLayerAddress_isset = 1;


	// SecurityIndication , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__SecurityIndication( &obj_E_RABInformationListItem_ExtIEs->securityIndication);
	obj_E_RABInformationListItem_ExtIEs->securityIndication_isset = 1;


	// TransportLayerAddress , PRESENCE = optional   BITSTRING , MIN=1, MAX=160
	__si_s1ap_init_TransportLayerAddress2( &obj_E_RABInformationListItem_ExtIEs->sourceNodeTransportLayerAddress, "3", 1, 1);
	obj_E_RABInformationListItem_ExtIEs->sourceNodeTransportLayerAddress->bitslen = 1;
	obj_E_RABInformationListItem_ExtIEs->sourceNodeTransportLayerAddress_isset = 1;



	*pE_RABInformationListItem_ExtIEs = obj_E_RABInformationListItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABItemIEs( SI_S1AP_DT_PDU_E_RABItemIEs ** pE_RABItemIEs)
{
	SI_S1AP_DT_PDU_E_RABItemIEs * obj_E_RABItemIEs = (SI_S1AP_DT_PDU_E_RABItemIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABItemIEs));
	memset( obj_E_RABItemIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABItemIEs));

	// E-RABItem , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__E_RABItem( &obj_E_RABItemIEs->eRABItem);
	obj_E_RABItemIEs->eRABItem_isset = 1;



	*pE_RABItemIEs = obj_E_RABItemIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABItem_ExtIEs( SI_S1AP_DT_PDU_E_RABItem_ExtIEs ** pE_RABItem_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABItem_ExtIEs * obj_E_RABItem_ExtIEs = (SI_S1AP_DT_PDU_E_RABItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABItem_ExtIEs));
	memset( obj_E_RABItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABItem_ExtIEs));


	*pE_RABItem_ExtIEs = obj_E_RABItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABSecurityResultItem_ExtIEs( SI_S1AP_DT_PDU_E_RABSecurityResultItem_ExtIEs ** pE_RABSecurityResultItem_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABSecurityResultItem_ExtIEs * obj_E_RABSecurityResultItem_ExtIEs = (SI_S1AP_DT_PDU_E_RABSecurityResultItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABSecurityResultItem_ExtIEs));
	memset( obj_E_RABSecurityResultItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABSecurityResultItem_ExtIEs));


	*pE_RABSecurityResultItem_ExtIEs = obj_E_RABSecurityResultItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABUsageReportItemIEs( SI_S1AP_DT_PDU_E_RABUsageReportItemIEs ** pE_RABUsageReportItemIEs)
{
	SI_S1AP_DT_PDU_E_RABUsageReportItemIEs * obj_E_RABUsageReportItemIEs = (SI_S1AP_DT_PDU_E_RABUsageReportItemIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABUsageReportItemIEs));
	memset( obj_E_RABUsageReportItemIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABUsageReportItemIEs));

	// E-RABUsageReportItem , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__E_RABUsageReportItem( &obj_E_RABUsageReportItemIEs->eRABUsageReportItem);
	obj_E_RABUsageReportItemIEs->eRABUsageReportItem_isset = 1;



	*pE_RABUsageReportItemIEs = obj_E_RABUsageReportItemIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABUsageReportItem_ExtIEs( SI_S1AP_DT_PDU_E_RABUsageReportItem_ExtIEs ** pE_RABUsageReportItem_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABUsageReportItem_ExtIEs * obj_E_RABUsageReportItem_ExtIEs = (SI_S1AP_DT_PDU_E_RABUsageReportItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABUsageReportItem_ExtIEs));
	memset( obj_E_RABUsageReportItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABUsageReportItem_ExtIEs));


	*pE_RABUsageReportItem_ExtIEs = obj_E_RABUsageReportItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABQoSParameters_ExtIEs( SI_S1AP_DT_PDU_E_RABQoSParameters_ExtIEs ** pE_RABQoSParameters_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABQoSParameters_ExtIEs * obj_E_RABQoSParameters_ExtIEs = (SI_S1AP_DT_PDU_E_RABQoSParameters_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABQoSParameters_ExtIEs));
	memset( obj_E_RABQoSParameters_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABQoSParameters_ExtIEs));

	// Packet-LossRate , PRESENCE = optional  INTEGER , MIN=0, MAX=1000
	obj_E_RABQoSParameters_ExtIEs->downlinkPacketLossRate = __getTestINTEGER( 0, 1000);
	obj_E_RABQoSParameters_ExtIEs->downlinkPacketLossRate_isset = 1;


	// Packet-LossRate , PRESENCE = optional  INTEGER , MIN=0, MAX=1000
	obj_E_RABQoSParameters_ExtIEs->uplinkPacketLossRate = __getTestINTEGER( 0, 1000);
	obj_E_RABQoSParameters_ExtIEs->uplinkPacketLossRate_isset = 1;



	*pE_RABQoSParameters_ExtIEs = obj_E_RABQoSParameters_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_EUTRAN_CGI_ExtIEs( SI_S1AP_DT_PDU_EUTRAN_CGI_ExtIEs ** pEUTRAN_CGI_ExtIEs)
{
	SI_S1AP_DT_PDU_EUTRAN_CGI_ExtIEs * obj_EUTRAN_CGI_ExtIEs = (SI_S1AP_DT_PDU_EUTRAN_CGI_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_EUTRAN_CGI_ExtIEs));
	memset( obj_EUTRAN_CGI_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_EUTRAN_CGI_ExtIEs));


	*pEUTRAN_CGI_ExtIEs = obj_EUTRAN_CGI_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_EventL1LoggedMDTConfig_ExtIEs( SI_S1AP_DT_PDU_EventL1LoggedMDTConfig_ExtIEs ** pEventL1LoggedMDTConfig_ExtIEs)
{
	SI_S1AP_DT_PDU_EventL1LoggedMDTConfig_ExtIEs * obj_EventL1LoggedMDTConfig_ExtIEs = (SI_S1AP_DT_PDU_EventL1LoggedMDTConfig_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_EventL1LoggedMDTConfig_ExtIEs));
	memset( obj_EventL1LoggedMDTConfig_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_EventL1LoggedMDTConfig_ExtIEs));


	*pEventL1LoggedMDTConfig_ExtIEs = obj_EventL1LoggedMDTConfig_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_EventTrigger_ExtIEs( SI_S1AP_DT_PDU_EventTrigger_ExtIEs ** pEventTrigger_ExtIEs)
{
	SI_S1AP_DT_PDU_EventTrigger_ExtIEs * obj_EventTrigger_ExtIEs = (SI_S1AP_DT_PDU_EventTrigger_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_EventTrigger_ExtIEs));
	memset( obj_EventTrigger_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_EventTrigger_ExtIEs));


	*pEventTrigger_ExtIEs = obj_EventTrigger_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ExpectedUEBehaviour_ExtIEs( SI_S1AP_DT_PDU_ExpectedUEBehaviour_ExtIEs ** pExpectedUEBehaviour_ExtIEs)
{
	SI_S1AP_DT_PDU_ExpectedUEBehaviour_ExtIEs * obj_ExpectedUEBehaviour_ExtIEs = (SI_S1AP_DT_PDU_ExpectedUEBehaviour_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ExpectedUEBehaviour_ExtIEs));
	memset( obj_ExpectedUEBehaviour_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ExpectedUEBehaviour_ExtIEs));


	*pExpectedUEBehaviour_ExtIEs = obj_ExpectedUEBehaviour_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ExpectedUEActivityBehaviour_ExtIEs( SI_S1AP_DT_PDU_ExpectedUEActivityBehaviour_ExtIEs ** pExpectedUEActivityBehaviour_ExtIEs)
{
	SI_S1AP_DT_PDU_ExpectedUEActivityBehaviour_ExtIEs * obj_ExpectedUEActivityBehaviour_ExtIEs = (SI_S1AP_DT_PDU_ExpectedUEActivityBehaviour_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ExpectedUEActivityBehaviour_ExtIEs));
	memset( obj_ExpectedUEActivityBehaviour_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ExpectedUEActivityBehaviour_ExtIEs));


	*pExpectedUEActivityBehaviour_ExtIEs = obj_ExpectedUEActivityBehaviour_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_FiveGSTAI_ExtIEs( SI_S1AP_DT_PDU_FiveGSTAI_ExtIEs ** pFiveGSTAI_ExtIEs)
{
	SI_S1AP_DT_PDU_FiveGSTAI_ExtIEs * obj_FiveGSTAI_ExtIEs = (SI_S1AP_DT_PDU_FiveGSTAI_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_FiveGSTAI_ExtIEs));
	memset( obj_FiveGSTAI_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_FiveGSTAI_ExtIEs));


	*pFiveGSTAI_ExtIEs = obj_FiveGSTAI_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ForbiddenTAs_Item_ExtIEs( SI_S1AP_DT_PDU_ForbiddenTAs_Item_ExtIEs ** pForbiddenTAs_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_ForbiddenTAs_Item_ExtIEs * obj_ForbiddenTAs_Item_ExtIEs = (SI_S1AP_DT_PDU_ForbiddenTAs_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ForbiddenTAs_Item_ExtIEs));
	memset( obj_ForbiddenTAs_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ForbiddenTAs_Item_ExtIEs));


	*pForbiddenTAs_Item_ExtIEs = obj_ForbiddenTAs_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ForbiddenLAs_Item_ExtIEs( SI_S1AP_DT_PDU_ForbiddenLAs_Item_ExtIEs ** pForbiddenLAs_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_ForbiddenLAs_Item_ExtIEs * obj_ForbiddenLAs_Item_ExtIEs = (SI_S1AP_DT_PDU_ForbiddenLAs_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ForbiddenLAs_Item_ExtIEs));
	memset( obj_ForbiddenLAs_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ForbiddenLAs_Item_ExtIEs));


	*pForbiddenLAs_Item_ExtIEs = obj_ForbiddenLAs_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_GBR_QosInformation_ExtIEs( SI_S1AP_DT_PDU_GBR_QosInformation_ExtIEs ** pGBR_QosInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_GBR_QosInformation_ExtIEs * obj_GBR_QosInformation_ExtIEs = (SI_S1AP_DT_PDU_GBR_QosInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_GBR_QosInformation_ExtIEs));
	memset( obj_GBR_QosInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_GBR_QosInformation_ExtIEs));

	// ExtendedBitRate , PRESENCE = optional  INTEGER , MIN=10000000001, MAX=4000000000000
	obj_GBR_QosInformation_ExtIEs->extendedeRABMaximumBitrateDL = __getTestINTEGER( 10000000001, 4000000000000);
	obj_GBR_QosInformation_ExtIEs->extendedeRABMaximumBitrateDL_isset = 1;


	// ExtendedBitRate , PRESENCE = optional  INTEGER , MIN=10000000001, MAX=4000000000000
	obj_GBR_QosInformation_ExtIEs->extendedeRABMaximumBitrateUL = __getTestINTEGER( 10000000001, 4000000000000);
	obj_GBR_QosInformation_ExtIEs->extendedeRABMaximumBitrateUL_isset = 1;


	// ExtendedBitRate , PRESENCE = optional  INTEGER , MIN=10000000001, MAX=4000000000000
	obj_GBR_QosInformation_ExtIEs->extendedeRABGuaranteedBitrateDL = __getTestINTEGER( 10000000001, 4000000000000);
	obj_GBR_QosInformation_ExtIEs->extendedeRABGuaranteedBitrateDL_isset = 1;


	// ExtendedBitRate , PRESENCE = optional  INTEGER , MIN=10000000001, MAX=4000000000000
	obj_GBR_QosInformation_ExtIEs->extendedeRABGuaranteedBitrateUL = __getTestINTEGER( 10000000001, 4000000000000);
	obj_GBR_QosInformation_ExtIEs->extendedeRABGuaranteedBitrateUL_isset = 1;



	*pGBR_QosInformation_ExtIEs = obj_GBR_QosInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_GUMMEI_ExtIEs( SI_S1AP_DT_PDU_GUMMEI_ExtIEs ** pGUMMEI_ExtIEs)
{
	SI_S1AP_DT_PDU_GUMMEI_ExtIEs * obj_GUMMEI_ExtIEs = (SI_S1AP_DT_PDU_GUMMEI_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_GUMMEI_ExtIEs));
	memset( obj_GUMMEI_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_GUMMEI_ExtIEs));


	*pGUMMEI_ExtIEs = obj_GUMMEI_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_HandoverRestrictionList_ExtIEs( SI_S1AP_DT_PDU_HandoverRestrictionList_ExtIEs ** pHandoverRestrictionList_ExtIEs)
{
	SI_S1AP_DT_PDU_HandoverRestrictionList_ExtIEs * obj_HandoverRestrictionList_ExtIEs = (SI_S1AP_DT_PDU_HandoverRestrictionList_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_HandoverRestrictionList_ExtIEs));
	memset( obj_HandoverRestrictionList_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_HandoverRestrictionList_ExtIEs));

	// NRrestrictioninEPSasSecondaryRAT , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRestrictionList_ExtIEs->nRrestrictioninEPSasSecondaryRAT = NRrestrictioninEPSasSecondaryRAT_nRrestrictedinEPSasSecondaryRAT_val;
	obj_HandoverRestrictionList_ExtIEs->nRrestrictioninEPSasSecondaryRAT_isset = 1;


	// UnlicensedSpectrumRestriction , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRestrictionList_ExtIEs->unlicensedSpectrumRestriction = UnlicensedSpectrumRestriction_unlicensed_restricted_val;
	obj_HandoverRestrictionList_ExtIEs->unlicensedSpectrumRestriction_isset = 1;


	// CNTypeRestrictions, PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__CNTypeRestrictions( &obj_HandoverRestrictionList_ExtIEs->cNTypeRestrictions);
	obj_HandoverRestrictionList_ExtIEs->cNTypeRestrictions_isset = 1;


	// NRrestrictionin5GS , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRestrictionList_ExtIEs->nRrestrictionin5GS = NRrestrictionin5GS_nRrestrictedin5GS_val;
	obj_HandoverRestrictionList_ExtIEs->nRrestrictionin5GS_isset = 1;


	// PLMNidentity    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_PLMNidentity2( &obj_HandoverRestrictionList_ExtIEs->lastNGRANPLMNIdentity, "\x15\x09\x03\x13\x24", 5);
	obj_HandoverRestrictionList_ExtIEs->lastNGRANPLMNIdentity_isset = 1;


	// RAT-Restrictions , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__RAT_Restrictions( &obj_HandoverRestrictionList_ExtIEs->rATRestrictions);
	obj_HandoverRestrictionList_ExtIEs->rATRestrictions_isset = 1;



	*pHandoverRestrictionList_ExtIEs = obj_HandoverRestrictionList_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ImmediateMDT_ExtIEs( SI_S1AP_DT_PDU_ImmediateMDT_ExtIEs ** pImmediateMDT_ExtIEs)
{
	SI_S1AP_DT_PDU_ImmediateMDT_ExtIEs * obj_ImmediateMDT_ExtIEs = (SI_S1AP_DT_PDU_ImmediateMDT_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ImmediateMDT_ExtIEs));
	memset( obj_ImmediateMDT_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ImmediateMDT_ExtIEs));

	// M3Configuration , PRESENCE = conditional   SEQUENCE
	__si_s1ap__set_testdata__M3Configuration( &obj_ImmediateMDT_ExtIEs->m3Configuration);
	obj_ImmediateMDT_ExtIEs->m3Configuration_isset = 1;


	// M4Configuration , PRESENCE = conditional   SEQUENCE
	__si_s1ap__set_testdata__M4Configuration( &obj_ImmediateMDT_ExtIEs->m4Configuration);
	obj_ImmediateMDT_ExtIEs->m4Configuration_isset = 1;


	// M5Configuration , PRESENCE = conditional   SEQUENCE
	__si_s1ap__set_testdata__M5Configuration( &obj_ImmediateMDT_ExtIEs->m5Configuration);
	obj_ImmediateMDT_ExtIEs->m5Configuration_isset = 1;


	// MDT-Location-Info , PRESENCE = optional   BITSTRING , MIN=8, MAX=8
	__si_s1ap_init_MDT_Location_Info2( &obj_ImmediateMDT_ExtIEs->mDTLocationInfo, "2", 1, 8);
	obj_ImmediateMDT_ExtIEs->mDTLocationInfo->bitslen = 8;
	obj_ImmediateMDT_ExtIEs->mDTLocationInfo_isset = 1;


	// M6Configuration , PRESENCE = conditional   SEQUENCE
	__si_s1ap__set_testdata__M6Configuration( &obj_ImmediateMDT_ExtIEs->m6Configuration);
	obj_ImmediateMDT_ExtIEs->m6Configuration_isset = 1;


	// M7Configuration , PRESENCE = conditional   SEQUENCE
	__si_s1ap__set_testdata__M7Configuration( &obj_ImmediateMDT_ExtIEs->m7Configuration);
	obj_ImmediateMDT_ExtIEs->m7Configuration_isset = 1;


	// BluetoothMeasurementConfiguration , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__BluetoothMeasurementConfiguration( &obj_ImmediateMDT_ExtIEs->bluetoothMeasurementConfiguration);
	obj_ImmediateMDT_ExtIEs->bluetoothMeasurementConfiguration_isset = 1;


	// WLANMeasurementConfiguration , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__WLANMeasurementConfiguration( &obj_ImmediateMDT_ExtIEs->wLANMeasurementConfiguration);
	obj_ImmediateMDT_ExtIEs->wLANMeasurementConfiguration_isset = 1;


	// SensorMeasurementConfiguration , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__SensorMeasurementConfiguration( &obj_ImmediateMDT_ExtIEs->sensorMeasurementConfiguration);
	obj_ImmediateMDT_ExtIEs->sensorMeasurementConfiguration_isset = 1;



	*pImmediateMDT_ExtIEs = obj_ImmediateMDT_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_InformationOnRecommendedCellsAndENBsForPaging_ExtIEs( SI_S1AP_DT_PDU_InformationOnRecommendedCellsAndENBsForPaging_ExtIEs ** pInformationOnRecommendedCellsAndENBsForPaging_ExtIEs)
{
	SI_S1AP_DT_PDU_InformationOnRecommendedCellsAndENBsForPaging_ExtIEs * obj_InformationOnRecommendedCellsAndENBsForPaging_ExtIEs = (SI_S1AP_DT_PDU_InformationOnRecommendedCellsAndENBsForPaging_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_InformationOnRecommendedCellsAndENBsForPaging_ExtIEs));
	memset( obj_InformationOnRecommendedCellsAndENBsForPaging_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_InformationOnRecommendedCellsAndENBsForPaging_ExtIEs));


	*pInformationOnRecommendedCellsAndENBsForPaging_ExtIEs = obj_InformationOnRecommendedCellsAndENBsForPaging_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_IntersystemMeasurementConfiguration_ExtIEs( SI_S1AP_DT_PDU_IntersystemMeasurementConfiguration_ExtIEs ** pIntersystemMeasurementConfiguration_ExtIEs)
{
	SI_S1AP_DT_PDU_IntersystemMeasurementConfiguration_ExtIEs * obj_IntersystemMeasurementConfiguration_ExtIEs = (SI_S1AP_DT_PDU_IntersystemMeasurementConfiguration_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_IntersystemMeasurementConfiguration_ExtIEs));
	memset( obj_IntersystemMeasurementConfiguration_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_IntersystemMeasurementConfiguration_ExtIEs));


	*pIntersystemMeasurementConfiguration_ExtIEs = obj_IntersystemMeasurementConfiguration_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_InterSystemMeasurementParameters_ExtIEs( SI_S1AP_DT_PDU_InterSystemMeasurementParameters_ExtIEs ** pInterSystemMeasurementParameters_ExtIEs)
{
	SI_S1AP_DT_PDU_InterSystemMeasurementParameters_ExtIEs * obj_InterSystemMeasurementParameters_ExtIEs = (SI_S1AP_DT_PDU_InterSystemMeasurementParameters_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_InterSystemMeasurementParameters_ExtIEs));
	memset( obj_InterSystemMeasurementParameters_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_InterSystemMeasurementParameters_ExtIEs));


	*pInterSystemMeasurementParameters_ExtIEs = obj_InterSystemMeasurementParameters_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_InterSystemMeasurementItem_ExtIEs( SI_S1AP_DT_PDU_InterSystemMeasurementItem_ExtIEs ** pInterSystemMeasurementItem_ExtIEs)
{
	SI_S1AP_DT_PDU_InterSystemMeasurementItem_ExtIEs * obj_InterSystemMeasurementItem_ExtIEs = (SI_S1AP_DT_PDU_InterSystemMeasurementItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_InterSystemMeasurementItem_ExtIEs));
	memset( obj_InterSystemMeasurementItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_InterSystemMeasurementItem_ExtIEs));


	*pInterSystemMeasurementItem_ExtIEs = obj_InterSystemMeasurementItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_LAI_ExtIEs( SI_S1AP_DT_PDU_LAI_ExtIEs ** pLAI_ExtIEs)
{
	SI_S1AP_DT_PDU_LAI_ExtIEs * obj_LAI_ExtIEs = (SI_S1AP_DT_PDU_LAI_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_LAI_ExtIEs));
	memset( obj_LAI_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_LAI_ExtIEs));


	*pLAI_ExtIEs = obj_LAI_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_LastVisitedEUTRANCellInformation_ExtIEs( SI_S1AP_DT_PDU_LastVisitedEUTRANCellInformation_ExtIEs ** pLastVisitedEUTRANCellInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_LastVisitedEUTRANCellInformation_ExtIEs * obj_LastVisitedEUTRANCellInformation_ExtIEs = (SI_S1AP_DT_PDU_LastVisitedEUTRANCellInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_LastVisitedEUTRANCellInformation_ExtIEs));
	memset( obj_LastVisitedEUTRANCellInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_LastVisitedEUTRANCellInformation_ExtIEs));

	// Time-UE-StayedInCell-EnhancedGranularity , PRESENCE = optional  INTEGER , MIN=0, MAX=40950
	obj_LastVisitedEUTRANCellInformation_ExtIEs->timeUEStayedInCellEnhancedGranularity = __getTestINTEGER( 0, 40950);
	obj_LastVisitedEUTRANCellInformation_ExtIEs->timeUEStayedInCellEnhancedGranularity_isset = 1;


	// Cause , PRESENCE = optional   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_LastVisitedEUTRANCellInformation_ExtIEs->hOCause);
	obj_LastVisitedEUTRANCellInformation_ExtIEs->hOCause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_LastVisitedEUTRANCellInformation_ExtIEs->hOCause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_LastVisitedEUTRANCellInformation_ExtIEs->hOCause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_LastVisitedEUTRANCellInformation_ExtIEs->hOCause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_LastVisitedEUTRANCellInformation_ExtIEs->hOCause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_LastVisitedEUTRANCellInformation_ExtIEs->hOCause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_LastVisitedEUTRANCellInformation_ExtIEs->hOCause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_LastVisitedEUTRANCellInformation_ExtIEs->hOCause_isset = 1;


	// LastVisitedPSCellList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__LastVisitedPSCellList( &obj_LastVisitedEUTRANCellInformation_ExtIEs->lastVisitedPSCellList);
	obj_LastVisitedEUTRANCellInformation_ExtIEs->lastVisitedPSCellList_isset = 1;



	*pLastVisitedEUTRANCellInformation_ExtIEs = obj_LastVisitedEUTRANCellInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_LastVisitedPSCellInformation_ExtIEs( SI_S1AP_DT_PDU_LastVisitedPSCellInformation_ExtIEs ** pLastVisitedPSCellInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_LastVisitedPSCellInformation_ExtIEs * obj_LastVisitedPSCellInformation_ExtIEs = (SI_S1AP_DT_PDU_LastVisitedPSCellInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_LastVisitedPSCellInformation_ExtIEs));
	memset( obj_LastVisitedPSCellInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_LastVisitedPSCellInformation_ExtIEs));


	*pLastVisitedPSCellInformation_ExtIEs = obj_LastVisitedPSCellInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ListeningSubframePattern_ExtIEs( SI_S1AP_DT_PDU_ListeningSubframePattern_ExtIEs ** pListeningSubframePattern_ExtIEs)
{
	SI_S1AP_DT_PDU_ListeningSubframePattern_ExtIEs * obj_ListeningSubframePattern_ExtIEs = (SI_S1AP_DT_PDU_ListeningSubframePattern_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ListeningSubframePattern_ExtIEs));
	memset( obj_ListeningSubframePattern_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ListeningSubframePattern_ExtIEs));


	*pListeningSubframePattern_ExtIEs = obj_ListeningSubframePattern_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_LoggedMDT_ExtIEs( SI_S1AP_DT_PDU_LoggedMDT_ExtIEs ** pLoggedMDT_ExtIEs)
{
	SI_S1AP_DT_PDU_LoggedMDT_ExtIEs * obj_LoggedMDT_ExtIEs = (SI_S1AP_DT_PDU_LoggedMDT_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_LoggedMDT_ExtIEs));
	memset( obj_LoggedMDT_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_LoggedMDT_ExtIEs));

	// BluetoothMeasurementConfiguration , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__BluetoothMeasurementConfiguration( &obj_LoggedMDT_ExtIEs->bluetoothMeasurementConfiguration);
	obj_LoggedMDT_ExtIEs->bluetoothMeasurementConfiguration_isset = 1;


	// WLANMeasurementConfiguration , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__WLANMeasurementConfiguration( &obj_LoggedMDT_ExtIEs->wLANMeasurementConfiguration);
	obj_LoggedMDT_ExtIEs->wLANMeasurementConfiguration_isset = 1;


	// LoggedMDTTrigger , PRESENCE = optional   CHOICE
	__si_s1ap__set_testdata__LoggedMDTTrigger( &obj_LoggedMDT_ExtIEs->loggedMDTTrigger);
	obj_LoggedMDT_ExtIEs->loggedMDTTrigger->SelectedChoice = LoggedMDTTrigger_periodical_val;

	switch( obj_LoggedMDT_ExtIEs->loggedMDTTrigger->SelectedChoice)
	{
		case LoggedMDTTrigger_periodical_val:  // L:11581
			{
				//__si_s1ap__set_testdata__NULL( &obj_LoggedMDT_ExtIEs->loggedMDTTrigger->u.periodical);   // L:11607
			}
			break;
		case LoggedMDTTrigger_eventTrigger_val:
			// CHOICE      L:11571
			break;
		default:
			break;
	}

	obj_LoggedMDT_ExtIEs->loggedMDTTrigger_isset = 1;


	// SensorMeasurementConfiguration , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__SensorMeasurementConfiguration( &obj_LoggedMDT_ExtIEs->sensorMeasurementConfiguration);
	obj_LoggedMDT_ExtIEs->sensorMeasurementConfiguration_isset = 1;



	*pLoggedMDT_ExtIEs = obj_LoggedMDT_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_LoggedMBSFNMDT_ExtIEs( SI_S1AP_DT_PDU_LoggedMBSFNMDT_ExtIEs ** pLoggedMBSFNMDT_ExtIEs)
{
	SI_S1AP_DT_PDU_LoggedMBSFNMDT_ExtIEs * obj_LoggedMBSFNMDT_ExtIEs = (SI_S1AP_DT_PDU_LoggedMBSFNMDT_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_LoggedMBSFNMDT_ExtIEs));
	memset( obj_LoggedMBSFNMDT_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_LoggedMBSFNMDT_ExtIEs));


	*pLoggedMBSFNMDT_ExtIEs = obj_LoggedMBSFNMDT_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_LTE_NTN_TAI_Information_ExtIEs( SI_S1AP_DT_PDU_LTE_NTN_TAI_Information_ExtIEs ** pLTE_NTN_TAI_Information_ExtIEs)
{
	SI_S1AP_DT_PDU_LTE_NTN_TAI_Information_ExtIEs * obj_LTE_NTN_TAI_Information_ExtIEs = (SI_S1AP_DT_PDU_LTE_NTN_TAI_Information_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_LTE_NTN_TAI_Information_ExtIEs));
	memset( obj_LTE_NTN_TAI_Information_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_LTE_NTN_TAI_Information_ExtIEs));


	*pLTE_NTN_TAI_Information_ExtIEs = obj_LTE_NTN_TAI_Information_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_M3Configuration_ExtIEs( SI_S1AP_DT_PDU_M3Configuration_ExtIEs ** pM3Configuration_ExtIEs)
{
	SI_S1AP_DT_PDU_M3Configuration_ExtIEs * obj_M3Configuration_ExtIEs = (SI_S1AP_DT_PDU_M3Configuration_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_M3Configuration_ExtIEs));
	memset( obj_M3Configuration_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_M3Configuration_ExtIEs));


	*pM3Configuration_ExtIEs = obj_M3Configuration_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_M4Configuration_ExtIEs( SI_S1AP_DT_PDU_M4Configuration_ExtIEs ** pM4Configuration_ExtIEs)
{
	SI_S1AP_DT_PDU_M4Configuration_ExtIEs * obj_M4Configuration_ExtIEs = (SI_S1AP_DT_PDU_M4Configuration_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_M4Configuration_ExtIEs));
	memset( obj_M4Configuration_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_M4Configuration_ExtIEs));

	// M4ReportAmountMDT , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_M4Configuration_ExtIEs->m4ReportAmount = M4ReportAmountMDT_r1_val;
	obj_M4Configuration_ExtIEs->m4ReportAmount_isset = 1;



	*pM4Configuration_ExtIEs = obj_M4Configuration_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_M5Configuration_ExtIEs( SI_S1AP_DT_PDU_M5Configuration_ExtIEs ** pM5Configuration_ExtIEs)
{
	SI_S1AP_DT_PDU_M5Configuration_ExtIEs * obj_M5Configuration_ExtIEs = (SI_S1AP_DT_PDU_M5Configuration_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_M5Configuration_ExtIEs));
	memset( obj_M5Configuration_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_M5Configuration_ExtIEs));

	// M5ReportAmountMDT , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_M5Configuration_ExtIEs->m5ReportAmount = M5ReportAmountMDT_r1_val;
	obj_M5Configuration_ExtIEs->m5ReportAmount_isset = 1;



	*pM5Configuration_ExtIEs = obj_M5Configuration_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_M6Configuration_ExtIEs( SI_S1AP_DT_PDU_M6Configuration_ExtIEs ** pM6Configuration_ExtIEs)
{
	SI_S1AP_DT_PDU_M6Configuration_ExtIEs * obj_M6Configuration_ExtIEs = (SI_S1AP_DT_PDU_M6Configuration_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_M6Configuration_ExtIEs));
	memset( obj_M6Configuration_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_M6Configuration_ExtIEs));

	// M6ReportAmountMDT , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_M6Configuration_ExtIEs->m6ReportAmount = M6ReportAmountMDT_r1_val;
	obj_M6Configuration_ExtIEs->m6ReportAmount_isset = 1;



	*pM6Configuration_ExtIEs = obj_M6Configuration_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_M7Configuration_ExtIEs( SI_S1AP_DT_PDU_M7Configuration_ExtIEs ** pM7Configuration_ExtIEs)
{
	SI_S1AP_DT_PDU_M7Configuration_ExtIEs * obj_M7Configuration_ExtIEs = (SI_S1AP_DT_PDU_M7Configuration_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_M7Configuration_ExtIEs));
	memset( obj_M7Configuration_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_M7Configuration_ExtIEs));

	// M7ReportAmountMDT , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_M7Configuration_ExtIEs->m7ReportAmount = M7ReportAmountMDT_r1_val;
	obj_M7Configuration_ExtIEs->m7ReportAmount_isset = 1;



	*pM7Configuration_ExtIEs = obj_M7Configuration_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_MDT_Configuration_ExtIEs( SI_S1AP_DT_PDU_MDT_Configuration_ExtIEs ** pMDT_Configuration_ExtIEs)
{
	SI_S1AP_DT_PDU_MDT_Configuration_ExtIEs * obj_MDT_Configuration_ExtIEs = (SI_S1AP_DT_PDU_MDT_Configuration_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_MDT_Configuration_ExtIEs));
	memset( obj_MDT_Configuration_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_MDT_Configuration_ExtIEs));

	// MDTPLMNList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__MDTPLMNList( &obj_MDT_Configuration_ExtIEs->signallingBasedMDTPLMNList);
	obj_MDT_Configuration_ExtIEs->signallingBasedMDTPLMNList_isset = 1;



	*pMDT_Configuration_ExtIEs = obj_MDT_Configuration_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_MBSFN_ResultToLogInfo_ExtIEs( SI_S1AP_DT_PDU_MBSFN_ResultToLogInfo_ExtIEs ** pMBSFN_ResultToLogInfo_ExtIEs)
{
	SI_S1AP_DT_PDU_MBSFN_ResultToLogInfo_ExtIEs * obj_MBSFN_ResultToLogInfo_ExtIEs = (SI_S1AP_DT_PDU_MBSFN_ResultToLogInfo_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_MBSFN_ResultToLogInfo_ExtIEs));
	memset( obj_MBSFN_ResultToLogInfo_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_MBSFN_ResultToLogInfo_ExtIEs));


	*pMBSFN_ResultToLogInfo_ExtIEs = obj_MBSFN_ResultToLogInfo_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_MDTMode_ExtensionIE( SI_S1AP_DT_PDU_MDTMode_ExtensionIE ** pMDTMode_ExtensionIE)
{
	SI_S1AP_DT_PDU_MDTMode_ExtensionIE * obj_MDTMode_ExtensionIE = (SI_S1AP_DT_PDU_MDTMode_ExtensionIE*) __si_allocM( sizeof(SI_S1AP_DT_PDU_MDTMode_ExtensionIE));
	memset( obj_MDTMode_ExtensionIE, 0, sizeof( SI_S1AP_DT_PDU_MDTMode_ExtensionIE));

	// LoggedMBSFNMDT , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__LoggedMBSFNMDT( &obj_MDTMode_ExtensionIE->loggedMBSFNMDT);
	obj_MDTMode_ExtensionIE->loggedMBSFNMDT_isset = 1;



	*pMDTMode_ExtensionIE = obj_MDTMode_ExtensionIE;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_MeasurementThresholdL1LoggedMDT_ExtIEs( SI_S1AP_DT_PDU_MeasurementThresholdL1LoggedMDT_ExtIEs ** pMeasurementThresholdL1LoggedMDT_ExtIEs)
{
	SI_S1AP_DT_PDU_MeasurementThresholdL1LoggedMDT_ExtIEs * obj_MeasurementThresholdL1LoggedMDT_ExtIEs = (SI_S1AP_DT_PDU_MeasurementThresholdL1LoggedMDT_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_MeasurementThresholdL1LoggedMDT_ExtIEs));
	memset( obj_MeasurementThresholdL1LoggedMDT_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_MeasurementThresholdL1LoggedMDT_ExtIEs));


	*pMeasurementThresholdL1LoggedMDT_ExtIEs = obj_MeasurementThresholdL1LoggedMDT_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_MutingPatternInformation_ExtIEs( SI_S1AP_DT_PDU_MutingPatternInformation_ExtIEs ** pMutingPatternInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_MutingPatternInformation_ExtIEs * obj_MutingPatternInformation_ExtIEs = (SI_S1AP_DT_PDU_MutingPatternInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_MutingPatternInformation_ExtIEs));
	memset( obj_MutingPatternInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_MutingPatternInformation_ExtIEs));


	*pMutingPatternInformation_ExtIEs = obj_MutingPatternInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_NB_IoT_Paging_eDRXInformation_ExtIEs( SI_S1AP_DT_PDU_NB_IoT_Paging_eDRXInformation_ExtIEs ** pNB_IoT_Paging_eDRXInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_NB_IoT_Paging_eDRXInformation_ExtIEs * obj_NB_IoT_Paging_eDRXInformation_ExtIEs = (SI_S1AP_DT_PDU_NB_IoT_Paging_eDRXInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_NB_IoT_Paging_eDRXInformation_ExtIEs));
	memset( obj_NB_IoT_Paging_eDRXInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_NB_IoT_Paging_eDRXInformation_ExtIEs));


	*pNB_IoT_Paging_eDRXInformation_ExtIEs = obj_NB_IoT_Paging_eDRXInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_NR_CGI_ExtIEs( SI_S1AP_DT_PDU_NR_CGI_ExtIEs ** pNR_CGI_ExtIEs)
{
	SI_S1AP_DT_PDU_NR_CGI_ExtIEs * obj_NR_CGI_ExtIEs = (SI_S1AP_DT_PDU_NR_CGI_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_NR_CGI_ExtIEs));
	memset( obj_NR_CGI_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_NR_CGI_ExtIEs));


	*pNR_CGI_ExtIEs = obj_NR_CGI_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_NRUESecurityCapabilities_ExtIEs( SI_S1AP_DT_PDU_NRUESecurityCapabilities_ExtIEs ** pNRUESecurityCapabilities_ExtIEs)
{
	SI_S1AP_DT_PDU_NRUESecurityCapabilities_ExtIEs * obj_NRUESecurityCapabilities_ExtIEs = (SI_S1AP_DT_PDU_NRUESecurityCapabilities_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_NRUESecurityCapabilities_ExtIEs));
	memset( obj_NRUESecurityCapabilities_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_NRUESecurityCapabilities_ExtIEs));


	*pNRUESecurityCapabilities_ExtIEs = obj_NRUESecurityCapabilities_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_NRV2XServicesAuthorized_ExtIEs( SI_S1AP_DT_PDU_NRV2XServicesAuthorized_ExtIEs ** pNRV2XServicesAuthorized_ExtIEs)
{
	SI_S1AP_DT_PDU_NRV2XServicesAuthorized_ExtIEs * obj_NRV2XServicesAuthorized_ExtIEs = (SI_S1AP_DT_PDU_NRV2XServicesAuthorized_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_NRV2XServicesAuthorized_ExtIEs));
	memset( obj_NRV2XServicesAuthorized_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_NRV2XServicesAuthorized_ExtIEs));


	*pNRV2XServicesAuthorized_ExtIEs = obj_NRV2XServicesAuthorized_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_NRUESidelinkAggregateMaximumBitrate_ExtIEs( SI_S1AP_DT_PDU_NRUESidelinkAggregateMaximumBitrate_ExtIEs ** pNRUESidelinkAggregateMaximumBitrate_ExtIEs)
{
	SI_S1AP_DT_PDU_NRUESidelinkAggregateMaximumBitrate_ExtIEs * obj_NRUESidelinkAggregateMaximumBitrate_ExtIEs = (SI_S1AP_DT_PDU_NRUESidelinkAggregateMaximumBitrate_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_NRUESidelinkAggregateMaximumBitrate_ExtIEs));
	memset( obj_NRUESidelinkAggregateMaximumBitrate_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_NRUESidelinkAggregateMaximumBitrate_ExtIEs));


	*pNRUESidelinkAggregateMaximumBitrate_ExtIEs = obj_NRUESidelinkAggregateMaximumBitrate_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_PagingAttemptInformation_ExtIEs( SI_S1AP_DT_PDU_PagingAttemptInformation_ExtIEs ** pPagingAttemptInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_PagingAttemptInformation_ExtIEs * obj_PagingAttemptInformation_ExtIEs = (SI_S1AP_DT_PDU_PagingAttemptInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_PagingAttemptInformation_ExtIEs));
	memset( obj_PagingAttemptInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_PagingAttemptInformation_ExtIEs));


	*pPagingAttemptInformation_ExtIEs = obj_PagingAttemptInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_Paging_eDRXInformation_ExtIEs( SI_S1AP_DT_PDU_Paging_eDRXInformation_ExtIEs ** pPaging_eDRXInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_Paging_eDRXInformation_ExtIEs * obj_Paging_eDRXInformation_ExtIEs = (SI_S1AP_DT_PDU_Paging_eDRXInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Paging_eDRXInformation_ExtIEs));
	memset( obj_Paging_eDRXInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_Paging_eDRXInformation_ExtIEs));


	*pPaging_eDRXInformation_ExtIEs = obj_Paging_eDRXInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_PC5QoSParameters_ExtIEs( SI_S1AP_DT_PDU_PC5QoSParameters_ExtIEs ** pPC5QoSParameters_ExtIEs)
{
	SI_S1AP_DT_PDU_PC5QoSParameters_ExtIEs * obj_PC5QoSParameters_ExtIEs = (SI_S1AP_DT_PDU_PC5QoSParameters_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_PC5QoSParameters_ExtIEs));
	memset( obj_PC5QoSParameters_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_PC5QoSParameters_ExtIEs));


	*pPC5QoSParameters_ExtIEs = obj_PC5QoSParameters_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_PC5QoSFlowItem_ExtIEs( SI_S1AP_DT_PDU_PC5QoSFlowItem_ExtIEs ** pPC5QoSFlowItem_ExtIEs)
{
	SI_S1AP_DT_PDU_PC5QoSFlowItem_ExtIEs * obj_PC5QoSFlowItem_ExtIEs = (SI_S1AP_DT_PDU_PC5QoSFlowItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_PC5QoSFlowItem_ExtIEs));
	memset( obj_PC5QoSFlowItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_PC5QoSFlowItem_ExtIEs));


	*pPC5QoSFlowItem_ExtIEs = obj_PC5QoSFlowItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_PC5FlowBitRates_ExtIEs( SI_S1AP_DT_PDU_PC5FlowBitRates_ExtIEs ** pPC5FlowBitRates_ExtIEs)
{
	SI_S1AP_DT_PDU_PC5FlowBitRates_ExtIEs * obj_PC5FlowBitRates_ExtIEs = (SI_S1AP_DT_PDU_PC5FlowBitRates_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_PC5FlowBitRates_ExtIEs));
	memset( obj_PC5FlowBitRates_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_PC5FlowBitRates_ExtIEs));


	*pPC5FlowBitRates_ExtIEs = obj_PC5FlowBitRates_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_M1PeriodicReporting_ExtIEs( SI_S1AP_DT_PDU_M1PeriodicReporting_ExtIEs ** pM1PeriodicReporting_ExtIEs)
{
	SI_S1AP_DT_PDU_M1PeriodicReporting_ExtIEs * obj_M1PeriodicReporting_ExtIEs = (SI_S1AP_DT_PDU_M1PeriodicReporting_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_M1PeriodicReporting_ExtIEs));
	memset( obj_M1PeriodicReporting_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_M1PeriodicReporting_ExtIEs));


	*pM1PeriodicReporting_ExtIEs = obj_M1PeriodicReporting_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_PLMNAreaBasedQMC_ExtIEs( SI_S1AP_DT_PDU_PLMNAreaBasedQMC_ExtIEs ** pPLMNAreaBasedQMC_ExtIEs)
{
	SI_S1AP_DT_PDU_PLMNAreaBasedQMC_ExtIEs * obj_PLMNAreaBasedQMC_ExtIEs = (SI_S1AP_DT_PDU_PLMNAreaBasedQMC_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_PLMNAreaBasedQMC_ExtIEs));
	memset( obj_PLMNAreaBasedQMC_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_PLMNAreaBasedQMC_ExtIEs));


	*pPLMNAreaBasedQMC_ExtIEs = obj_PLMNAreaBasedQMC_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ProSeAuthorized_ExtIEs( SI_S1AP_DT_PDU_ProSeAuthorized_ExtIEs ** pProSeAuthorized_ExtIEs)
{
	SI_S1AP_DT_PDU_ProSeAuthorized_ExtIEs * obj_ProSeAuthorized_ExtIEs = (SI_S1AP_DT_PDU_ProSeAuthorized_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ProSeAuthorized_ExtIEs));
	memset( obj_ProSeAuthorized_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ProSeAuthorized_ExtIEs));

	// ProSeUEtoNetworkRelaying , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_ProSeAuthorized_ExtIEs->proSeUEtoNetworkRelaying = ProSeUEtoNetworkRelaying_authorized_val;
	obj_ProSeAuthorized_ExtIEs->proSeUEtoNetworkRelaying_isset = 1;



	*pProSeAuthorized_ExtIEs = obj_ProSeAuthorized_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_PSCellInformation_ExtIEs( SI_S1AP_DT_PDU_PSCellInformation_ExtIEs ** pPSCellInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_PSCellInformation_ExtIEs * obj_PSCellInformation_ExtIEs = (SI_S1AP_DT_PDU_PSCellInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_PSCellInformation_ExtIEs));
	memset( obj_PSCellInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_PSCellInformation_ExtIEs));


	*pPSCellInformation_ExtIEs = obj_PSCellInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_RecommendedCellsForPaging_ExtIEs( SI_S1AP_DT_PDU_RecommendedCellsForPaging_ExtIEs ** pRecommendedCellsForPaging_ExtIEs)
{
	SI_S1AP_DT_PDU_RecommendedCellsForPaging_ExtIEs * obj_RecommendedCellsForPaging_ExtIEs = (SI_S1AP_DT_PDU_RecommendedCellsForPaging_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_RecommendedCellsForPaging_ExtIEs));
	memset( obj_RecommendedCellsForPaging_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_RecommendedCellsForPaging_ExtIEs));


	*pRecommendedCellsForPaging_ExtIEs = obj_RecommendedCellsForPaging_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_RecommendedCellItemIEs( SI_S1AP_DT_PDU_RecommendedCellItemIEs ** pRecommendedCellItemIEs)
{
	SI_S1AP_DT_PDU_RecommendedCellItemIEs * obj_RecommendedCellItemIEs = (SI_S1AP_DT_PDU_RecommendedCellItemIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_RecommendedCellItemIEs));
	memset( obj_RecommendedCellItemIEs, 0, sizeof( SI_S1AP_DT_PDU_RecommendedCellItemIEs));

	// RecommendedCellItem, PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__RecommendedCellItem( &obj_RecommendedCellItemIEs->recommendedCellItem);
	obj_RecommendedCellItemIEs->recommendedCellItem_isset = 1;



	*pRecommendedCellItemIEs = obj_RecommendedCellItemIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_RecommendedCellsForPagingItem_ExtIEs( SI_S1AP_DT_PDU_RecommendedCellsForPagingItem_ExtIEs ** pRecommendedCellsForPagingItem_ExtIEs)
{
	SI_S1AP_DT_PDU_RecommendedCellsForPagingItem_ExtIEs * obj_RecommendedCellsForPagingItem_ExtIEs = (SI_S1AP_DT_PDU_RecommendedCellsForPagingItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_RecommendedCellsForPagingItem_ExtIEs));
	memset( obj_RecommendedCellsForPagingItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_RecommendedCellsForPagingItem_ExtIEs));


	*pRecommendedCellsForPagingItem_ExtIEs = obj_RecommendedCellsForPagingItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_RecommendedENBsForPaging_ExtIEs( SI_S1AP_DT_PDU_RecommendedENBsForPaging_ExtIEs ** pRecommendedENBsForPaging_ExtIEs)
{
	SI_S1AP_DT_PDU_RecommendedENBsForPaging_ExtIEs * obj_RecommendedENBsForPaging_ExtIEs = (SI_S1AP_DT_PDU_RecommendedENBsForPaging_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_RecommendedENBsForPaging_ExtIEs));
	memset( obj_RecommendedENBsForPaging_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_RecommendedENBsForPaging_ExtIEs));


	*pRecommendedENBsForPaging_ExtIEs = obj_RecommendedENBsForPaging_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_RecommendedENBItemIEs( SI_S1AP_DT_PDU_RecommendedENBItemIEs ** pRecommendedENBItemIEs)
{
	SI_S1AP_DT_PDU_RecommendedENBItemIEs * obj_RecommendedENBItemIEs = (SI_S1AP_DT_PDU_RecommendedENBItemIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_RecommendedENBItemIEs));
	memset( obj_RecommendedENBItemIEs, 0, sizeof( SI_S1AP_DT_PDU_RecommendedENBItemIEs));

	// RecommendedENBItem , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__RecommendedENBItem( &obj_RecommendedENBItemIEs->recommendedENBItem);
	obj_RecommendedENBItemIEs->recommendedENBItem_isset = 1;



	*pRecommendedENBItemIEs = obj_RecommendedENBItemIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_RecommendedENBItem_ExtIEs( SI_S1AP_DT_PDU_RecommendedENBItem_ExtIEs ** pRecommendedENBItem_ExtIEs)
{
	SI_S1AP_DT_PDU_RecommendedENBItem_ExtIEs * obj_RecommendedENBItem_ExtIEs = (SI_S1AP_DT_PDU_RecommendedENBItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_RecommendedENBItem_ExtIEs));
	memset( obj_RecommendedENBItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_RecommendedENBItem_ExtIEs));


	*pRecommendedENBItem_ExtIEs = obj_RecommendedENBItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_RAT_RestrictionsItem_ExtIEs( SI_S1AP_DT_PDU_RAT_RestrictionsItem_ExtIEs ** pRAT_RestrictionsItem_ExtIEs)
{
	SI_S1AP_DT_PDU_RAT_RestrictionsItem_ExtIEs * obj_RAT_RestrictionsItem_ExtIEs = (SI_S1AP_DT_PDU_RAT_RestrictionsItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_RAT_RestrictionsItem_ExtIEs));
	memset( obj_RAT_RestrictionsItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_RAT_RestrictionsItem_ExtIEs));


	*pRAT_RestrictionsItem_ExtIEs = obj_RAT_RestrictionsItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_RequestType_ExtIEs( SI_S1AP_DT_PDU_RequestType_ExtIEs ** pRequestType_ExtIEs)
{
	SI_S1AP_DT_PDU_RequestType_ExtIEs * obj_RequestType_ExtIEs = (SI_S1AP_DT_PDU_RequestType_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_RequestType_ExtIEs));
	memset( obj_RequestType_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_RequestType_ExtIEs));

	// RequestTypeAdditionalInfo , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_RequestType_ExtIEs->requestTypeAdditionalInfo = RequestTypeAdditionalInfo_includePSCell_val;
	obj_RequestType_ExtIEs->requestTypeAdditionalInfo_isset = 1;



	*pRequestType_ExtIEs = obj_RequestType_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_RIMTransfer_ExtIEs( SI_S1AP_DT_PDU_RIMTransfer_ExtIEs ** pRIMTransfer_ExtIEs)
{
	SI_S1AP_DT_PDU_RIMTransfer_ExtIEs * obj_RIMTransfer_ExtIEs = (SI_S1AP_DT_PDU_RIMTransfer_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_RIMTransfer_ExtIEs));
	memset( obj_RIMTransfer_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_RIMTransfer_ExtIEs));


	*pRIMTransfer_ExtIEs = obj_RIMTransfer_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_RLFReportInformation_ExtIEs( SI_S1AP_DT_PDU_RLFReportInformation_ExtIEs ** pRLFReportInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_RLFReportInformation_ExtIEs * obj_RLFReportInformation_ExtIEs = (SI_S1AP_DT_PDU_RLFReportInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_RLFReportInformation_ExtIEs));
	memset( obj_RLFReportInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_RLFReportInformation_ExtIEs));

	// NB-IoT-RLF-Report-Container    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_NB_IoT_RLF_Report_Container2( &obj_RLFReportInformation_ExtIEs->nBIoTRLFReportContainer, "\x15\x22\x11\x05\x07", 5);
	obj_RLFReportInformation_ExtIEs->nBIoTRLFReportContainer_isset = 1;



	*pRLFReportInformation_ExtIEs = obj_RLFReportInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SecurityContext_ExtIEs( SI_S1AP_DT_PDU_SecurityContext_ExtIEs ** pSecurityContext_ExtIEs)
{
	SI_S1AP_DT_PDU_SecurityContext_ExtIEs * obj_SecurityContext_ExtIEs = (SI_S1AP_DT_PDU_SecurityContext_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SecurityContext_ExtIEs));
	memset( obj_SecurityContext_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SecurityContext_ExtIEs));


	*pSecurityContext_ExtIEs = obj_SecurityContext_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SecondaryRATDataUsageReportItemIEs( SI_S1AP_DT_PDU_SecondaryRATDataUsageReportItemIEs ** pSecondaryRATDataUsageReportItemIEs)
{
	SI_S1AP_DT_PDU_SecondaryRATDataUsageReportItemIEs * obj_SecondaryRATDataUsageReportItemIEs = (SI_S1AP_DT_PDU_SecondaryRATDataUsageReportItemIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SecondaryRATDataUsageReportItemIEs));
	memset( obj_SecondaryRATDataUsageReportItemIEs, 0, sizeof( SI_S1AP_DT_PDU_SecondaryRATDataUsageReportItemIEs));

	// SecondaryRATDataUsageReportItem , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__SecondaryRATDataUsageReportItem( &obj_SecondaryRATDataUsageReportItemIEs->secondaryRATDataUsageReportItem);
	obj_SecondaryRATDataUsageReportItemIEs->secondaryRATDataUsageReportItem_isset = 1;



	*pSecondaryRATDataUsageReportItemIEs = obj_SecondaryRATDataUsageReportItemIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SecondaryRATDataUsageReportItem_ExtIEs( SI_S1AP_DT_PDU_SecondaryRATDataUsageReportItem_ExtIEs ** pSecondaryRATDataUsageReportItem_ExtIEs)
{
	SI_S1AP_DT_PDU_SecondaryRATDataUsageReportItem_ExtIEs * obj_SecondaryRATDataUsageReportItem_ExtIEs = (SI_S1AP_DT_PDU_SecondaryRATDataUsageReportItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SecondaryRATDataUsageReportItem_ExtIEs));
	memset( obj_SecondaryRATDataUsageReportItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SecondaryRATDataUsageReportItem_ExtIEs));


	*pSecondaryRATDataUsageReportItem_ExtIEs = obj_SecondaryRATDataUsageReportItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SecurityIndication_ExtIEs( SI_S1AP_DT_PDU_SecurityIndication_ExtIEs ** pSecurityIndication_ExtIEs)
{
	SI_S1AP_DT_PDU_SecurityIndication_ExtIEs * obj_SecurityIndication_ExtIEs = (SI_S1AP_DT_PDU_SecurityIndication_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SecurityIndication_ExtIEs));
	memset( obj_SecurityIndication_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SecurityIndication_ExtIEs));


	*pSecurityIndication_ExtIEs = obj_SecurityIndication_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SecurityResult_ExtIEs( SI_S1AP_DT_PDU_SecurityResult_ExtIEs ** pSecurityResult_ExtIEs)
{
	SI_S1AP_DT_PDU_SecurityResult_ExtIEs * obj_SecurityResult_ExtIEs = (SI_S1AP_DT_PDU_SecurityResult_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SecurityResult_ExtIEs));
	memset( obj_SecurityResult_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SecurityResult_ExtIEs));


	*pSecurityResult_ExtIEs = obj_SecurityResult_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SensorMeasConfigNameItem_ExtIEs( SI_S1AP_DT_PDU_SensorMeasConfigNameItem_ExtIEs ** pSensorMeasConfigNameItem_ExtIEs)
{
	SI_S1AP_DT_PDU_SensorMeasConfigNameItem_ExtIEs * obj_SensorMeasConfigNameItem_ExtIEs = (SI_S1AP_DT_PDU_SensorMeasConfigNameItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SensorMeasConfigNameItem_ExtIEs));
	memset( obj_SensorMeasConfigNameItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SensorMeasConfigNameItem_ExtIEs));


	*pSensorMeasConfigNameItem_ExtIEs = obj_SensorMeasConfigNameItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SensorMeasurementConfiguration_ExtIEs( SI_S1AP_DT_PDU_SensorMeasurementConfiguration_ExtIEs ** pSensorMeasurementConfiguration_ExtIEs)
{
	SI_S1AP_DT_PDU_SensorMeasurementConfiguration_ExtIEs * obj_SensorMeasurementConfiguration_ExtIEs = (SI_S1AP_DT_PDU_SensorMeasurementConfiguration_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SensorMeasurementConfiguration_ExtIEs));
	memset( obj_SensorMeasurementConfiguration_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SensorMeasurementConfiguration_ExtIEs));


	*pSensorMeasurementConfiguration_ExtIEs = obj_SensorMeasurementConfiguration_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SensorNameConfig_ExtIEs( SI_S1AP_DT_PDU_SensorNameConfig_ExtIEs ** pSensorNameConfig_ExtIEs)
{
	SI_S1AP_DT_PDU_SensorNameConfig_ExtIEs * obj_SensorNameConfig_ExtIEs = (SI_S1AP_DT_PDU_SensorNameConfig_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SensorNameConfig_ExtIEs));
	memset( obj_SensorNameConfig_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SensorNameConfig_ExtIEs));


	*pSensorNameConfig_ExtIEs = obj_SensorNameConfig_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SONInformation_ExtensionIE( SI_S1AP_DT_PDU_SONInformation_ExtensionIE ** pSONInformation_ExtensionIE)
{
	SI_S1AP_DT_PDU_SONInformation_ExtensionIE * obj_SONInformation_ExtensionIE = (SI_S1AP_DT_PDU_SONInformation_ExtensionIE*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SONInformation_ExtensionIE));
	memset( obj_SONInformation_ExtensionIE, 0, sizeof( SI_S1AP_DT_PDU_SONInformation_ExtensionIE));

	// SONInformationReport , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__SONInformationReport( &obj_SONInformation_ExtensionIE->sONInformationReport);
	obj_SONInformation_ExtensionIE->sONInformationReport->SelectedChoice = SONInformationReport_rLFReportInformation_val;

	switch( obj_SONInformation_ExtensionIE->sONInformationReport->SelectedChoice)
	{
		case SONInformationReport_rLFReportInformation_val:
			__si_s1ap__set_testdata__RLFReportInformation( &obj_SONInformation_ExtensionIE->sONInformationReport->u.rLFReportInformation); //   L:11488
			break;
		default:
			break;
	}

	obj_SONInformation_ExtensionIE->sONInformationReport_isset = 1;



	*pSONInformation_ExtensionIE = obj_SONInformation_ExtensionIE;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SONInformationReply_ExtIEs( SI_S1AP_DT_PDU_SONInformationReply_ExtIEs ** pSONInformationReply_ExtIEs)
{
	SI_S1AP_DT_PDU_SONInformationReply_ExtIEs * obj_SONInformationReply_ExtIEs = (SI_S1AP_DT_PDU_SONInformationReply_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SONInformationReply_ExtIEs));
	memset( obj_SONInformationReply_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SONInformationReply_ExtIEs));

	// TimeSynchronisationInfo , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__TimeSynchronisationInfo( &obj_SONInformationReply_ExtIEs->timeSynchronisationInfo);
	obj_SONInformationReply_ExtIEs->timeSynchronisationInfo_isset = 1;


	// MutingPatternInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__MutingPatternInformation( &obj_SONInformationReply_ExtIEs->mutingPatternInformation);
	obj_SONInformationReply_ExtIEs->mutingPatternInformation_isset = 1;



	*pSONInformationReply_ExtIEs = obj_SONInformationReply_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SONConfigurationTransfer_ExtIEs( SI_S1AP_DT_PDU_SONConfigurationTransfer_ExtIEs ** pSONConfigurationTransfer_ExtIEs)
{
	SI_S1AP_DT_PDU_SONConfigurationTransfer_ExtIEs * obj_SONConfigurationTransfer_ExtIEs = (SI_S1AP_DT_PDU_SONConfigurationTransfer_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SONConfigurationTransfer_ExtIEs));
	memset( obj_SONConfigurationTransfer_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SONConfigurationTransfer_ExtIEs));

	// X2TNLConfigurationInfo , PRESENCE = conditional   SEQUENCE
	__si_s1ap__set_testdata__X2TNLConfigurationInfo( &obj_SONConfigurationTransfer_ExtIEs->x2TNLConfigurationInfo);
	obj_SONConfigurationTransfer_ExtIEs->x2TNLConfigurationInfo_isset = 1;


	// SynchronisationInformation , PRESENCE = conditional   SEQUENCE
	__si_s1ap__set_testdata__SynchronisationInformation( &obj_SONConfigurationTransfer_ExtIEs->synchronisationInformation);
	obj_SONConfigurationTransfer_ExtIEs->synchronisationInformation_isset = 1;



	*pSONConfigurationTransfer_ExtIEs = obj_SONConfigurationTransfer_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SynchronisationInformation_ExtIEs( SI_S1AP_DT_PDU_SynchronisationInformation_ExtIEs ** pSynchronisationInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_SynchronisationInformation_ExtIEs * obj_SynchronisationInformation_ExtIEs = (SI_S1AP_DT_PDU_SynchronisationInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SynchronisationInformation_ExtIEs));
	memset( obj_SynchronisationInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SynchronisationInformation_ExtIEs));


	*pSynchronisationInformation_ExtIEs = obj_SynchronisationInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SourceeNB_ID_ExtIEs( SI_S1AP_DT_PDU_SourceeNB_ID_ExtIEs ** pSourceeNB_ID_ExtIEs)
{
	SI_S1AP_DT_PDU_SourceeNB_ID_ExtIEs * obj_SourceeNB_ID_ExtIEs = (SI_S1AP_DT_PDU_SourceeNB_ID_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SourceeNB_ID_ExtIEs));
	memset( obj_SourceeNB_ID_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SourceeNB_ID_ExtIEs));


	*pSourceeNB_ID_ExtIEs = obj_SourceeNB_ID_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SourceNodeID_ExtensionIE( SI_S1AP_DT_PDU_SourceNodeID_ExtensionIE ** pSourceNodeID_ExtensionIE)
{
	SI_S1AP_DT_PDU_SourceNodeID_ExtensionIE * obj_SourceNodeID_ExtensionIE = (SI_S1AP_DT_PDU_SourceNodeID_ExtensionIE*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SourceNodeID_ExtensionIE));
	memset( obj_SourceNodeID_ExtensionIE, 0, sizeof( SI_S1AP_DT_PDU_SourceNodeID_ExtensionIE));


	*pSourceNodeID_ExtensionIE = obj_SourceNodeID_ExtensionIE;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs( SI_S1AP_DT_PDU_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs ** pSourceeNB_ToTargeteNB_TransparentContainer_ExtIEs)
{
	SI_S1AP_DT_PDU_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs * obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs = (SI_S1AP_DT_PDU_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs));
	memset( obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs));

	// MobilityInformation , PRESENCE = optional   BITSTRING , MIN=32, MAX=32
	__si_s1ap_init_MobilityInformation2( &obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->mobilityInformation, "2792", 4, 32);
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->mobilityInformation->bitslen = 32;
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->mobilityInformation_isset = 1;


	// UE-HistoryInformationFromTheUE    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UE_HistoryInformationFromTheUE2( &obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->uEHistoryInformationFromTheUE, "\x12\x11\x19\x21\x23", 5);
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->uEHistoryInformationFromTheUE_isset = 1;


	// IMSvoiceEPSfallbackfrom5G , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->iMSvoiceEPSfallbackfrom5G = IMSvoiceEPSfallbackfrom5G_true_val;
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->iMSvoiceEPSfallbackfrom5G_isset = 1;


	// AdditionalRRMPriorityIndex , PRESENCE = optional   BITSTRING , MIN=32, MAX=32
	__si_s1ap_init_AdditionalRRMPriorityIndex2( &obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->additionalRRMPriorityIndex, "2212", 4, 32);
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->additionalRRMPriorityIndex->bitslen = 32;
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->additionalRRMPriorityIndex_isset = 1;


	// ContextatSource , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__ContextatSource( &obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->contextatSource);
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->contextatSource_isset = 1;


	// IntersystemMeasurementConfiguration , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__IntersystemMeasurementConfiguration( &obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->intersystemMeasurementConfiguration);
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->intersystemMeasurementConfiguration_isset = 1;


	// SourceNodeID , PRESENCE = optional   CHOICE
	__si_s1ap__set_testdata__SourceNodeID( &obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->sourceNodeID);
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->sourceNodeID->SelectedChoice = SourceNodeID_sourceNgRanNode_ID_val;

	switch( obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->sourceNodeID->SelectedChoice)
	{
		case SourceNodeID_sourceNgRanNode_ID_val:
			__si_s1ap__set_testdata__SourceNgRanNode_ID( &obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->sourceNodeID->u.sourceNgRanNode_ID); //   L:11488
			break;
		case SourceNodeID_sourceNodeID_Extension_val:
			// CONTAINER      L:11571
			break;
		default:
			break;
	}

	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->sourceNodeID_isset = 1;


	// EmergencyIndicator , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->emergencyIndicator = EmergencyIndicator_true_val;
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->emergencyIndicator_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = optional  INTEGER , MIN=0, MAX=16777215
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->uEContextReferenceatSourceeNB = __getTestINTEGER( 0, 16777215);
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->uEContextReferenceatSourceeNB_isset = 1;


	// Global-RAN-NODE-ID, PRESENCE = optional   CHOICE
	__si_s1ap__set_testdata__Global_RAN_NODE_ID( &obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->sourceSNID);
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->sourceSNID->SelectedChoice = Global_RAN_NODE_ID_gNB_val;

	switch( obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->sourceSNID->SelectedChoice)
	{
		case Global_RAN_NODE_ID_gNB_val:
			__si_s1ap__set_testdata__GNB( &obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->sourceSNID->u.gNB); //   L:11488
			break;
		case Global_RAN_NODE_ID_ng_eNB_val:
			__si_s1ap__set_testdata__NG_eNB( &obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->sourceSNID->u.ng_eNB); //   L:11488
			break;
		default:
			break;
	}

	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->sourceSNID_isset = 1;


	// Direct-Forwarding-Path-Availability , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->directForwardingPathAvailability = Direct_Forwarding_Path_Availability_directPathAvailable_val;
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->directForwardingPathAvailability_isset = 1;


	// TimeBasedHandoverInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__TimeBasedHandoverInformation( &obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->timeBasedHandoverInformation);
	obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs->timeBasedHandoverInformation_isset = 1;



	*pSourceeNB_ToTargeteNB_TransparentContainer_ExtIEs = obj_SourceeNB_ToTargeteNB_TransparentContainer_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SourceNgRanNode_ID_ExtIEs( SI_S1AP_DT_PDU_SourceNgRanNode_ID_ExtIEs ** pSourceNgRanNode_ID_ExtIEs)
{
	SI_S1AP_DT_PDU_SourceNgRanNode_ID_ExtIEs * obj_SourceNgRanNode_ID_ExtIEs = (SI_S1AP_DT_PDU_SourceNgRanNode_ID_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SourceNgRanNode_ID_ExtIEs));
	memset( obj_SourceNgRanNode_ID_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SourceNgRanNode_ID_ExtIEs));


	*pSourceNgRanNode_ID_ExtIEs = obj_SourceNgRanNode_ID_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ServedGUMMEIsItem_ExtIEs( SI_S1AP_DT_PDU_ServedGUMMEIsItem_ExtIEs ** pServedGUMMEIsItem_ExtIEs)
{
	SI_S1AP_DT_PDU_ServedGUMMEIsItem_ExtIEs * obj_ServedGUMMEIsItem_ExtIEs = (SI_S1AP_DT_PDU_ServedGUMMEIsItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ServedGUMMEIsItem_ExtIEs));
	memset( obj_ServedGUMMEIsItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ServedGUMMEIsItem_ExtIEs));

	// GUMMEIType , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_ServedGUMMEIsItem_ExtIEs->gUMMEIType = GUMMEIType_native_val;
	obj_ServedGUMMEIsItem_ExtIEs->gUMMEIType_isset = 1;



	*pServedGUMMEIsItem_ExtIEs = obj_ServedGUMMEIsItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_Subscription_Based_UE_DifferentiationInfo_ExtIEs( SI_S1AP_DT_PDU_Subscription_Based_UE_DifferentiationInfo_ExtIEs ** pSubscription_Based_UE_DifferentiationInfo_ExtIEs)
{
	SI_S1AP_DT_PDU_Subscription_Based_UE_DifferentiationInfo_ExtIEs * obj_Subscription_Based_UE_DifferentiationInfo_ExtIEs = (SI_S1AP_DT_PDU_Subscription_Based_UE_DifferentiationInfo_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Subscription_Based_UE_DifferentiationInfo_ExtIEs));
	memset( obj_Subscription_Based_UE_DifferentiationInfo_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_Subscription_Based_UE_DifferentiationInfo_ExtIEs));


	*pSubscription_Based_UE_DifferentiationInfo_ExtIEs = obj_Subscription_Based_UE_DifferentiationInfo_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ScheduledCommunicationTime_ExtIEs( SI_S1AP_DT_PDU_ScheduledCommunicationTime_ExtIEs ** pScheduledCommunicationTime_ExtIEs)
{
	SI_S1AP_DT_PDU_ScheduledCommunicationTime_ExtIEs * obj_ScheduledCommunicationTime_ExtIEs = (SI_S1AP_DT_PDU_ScheduledCommunicationTime_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ScheduledCommunicationTime_ExtIEs));
	memset( obj_ScheduledCommunicationTime_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ScheduledCommunicationTime_ExtIEs));


	*pScheduledCommunicationTime_ExtIEs = obj_ScheduledCommunicationTime_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_SupportedTAs_Item_ExtIEs( SI_S1AP_DT_PDU_SupportedTAs_Item_ExtIEs ** pSupportedTAs_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_SupportedTAs_Item_ExtIEs * obj_SupportedTAs_Item_ExtIEs = (SI_S1AP_DT_PDU_SupportedTAs_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SupportedTAs_Item_ExtIEs));
	memset( obj_SupportedTAs_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_SupportedTAs_Item_ExtIEs));

	// RAT-Type , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_SupportedTAs_Item_ExtIEs->rATType = RAT_Type_nbiot_val;
	obj_SupportedTAs_Item_ExtIEs->rATType_isset = 1;



	*pSupportedTAs_Item_ExtIEs = obj_SupportedTAs_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TimeSynchronisationInfo_ExtIEs( SI_S1AP_DT_PDU_TimeSynchronisationInfo_ExtIEs ** pTimeSynchronisationInfo_ExtIEs)
{
	SI_S1AP_DT_PDU_TimeSynchronisationInfo_ExtIEs * obj_TimeSynchronisationInfo_ExtIEs = (SI_S1AP_DT_PDU_TimeSynchronisationInfo_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TimeSynchronisationInfo_ExtIEs));
	memset( obj_TimeSynchronisationInfo_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TimeSynchronisationInfo_ExtIEs));

	// MutingAvailabilityIndication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_TimeSynchronisationInfo_ExtIEs->mutingAvailabilityIndication = MutingAvailabilityIndication_available_val;
	obj_TimeSynchronisationInfo_ExtIEs->mutingAvailabilityIndication_isset = 1;



	*pTimeSynchronisationInfo_ExtIEs = obj_TimeSynchronisationInfo_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_S_TMSI_ExtIEs( SI_S1AP_DT_PDU_S_TMSI_ExtIEs ** pS_TMSI_ExtIEs)
{
	SI_S1AP_DT_PDU_S_TMSI_ExtIEs * obj_S_TMSI_ExtIEs = (SI_S1AP_DT_PDU_S_TMSI_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_S_TMSI_ExtIEs));
	memset( obj_S_TMSI_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_S_TMSI_ExtIEs));


	*pS_TMSI_ExtIEs = obj_S_TMSI_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TAIBasedMDT_ExtIEs( SI_S1AP_DT_PDU_TAIBasedMDT_ExtIEs ** pTAIBasedMDT_ExtIEs)
{
	SI_S1AP_DT_PDU_TAIBasedMDT_ExtIEs * obj_TAIBasedMDT_ExtIEs = (SI_S1AP_DT_PDU_TAIBasedMDT_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TAIBasedMDT_ExtIEs));
	memset( obj_TAIBasedMDT_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TAIBasedMDT_ExtIEs));


	*pTAIBasedMDT_ExtIEs = obj_TAIBasedMDT_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TAI_ExtIEs( SI_S1AP_DT_PDU_TAI_ExtIEs ** pTAI_ExtIEs)
{
	SI_S1AP_DT_PDU_TAI_ExtIEs * obj_TAI_ExtIEs = (SI_S1AP_DT_PDU_TAI_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TAI_ExtIEs));
	memset( obj_TAI_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TAI_ExtIEs));


	*pTAI_ExtIEs = obj_TAI_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TAI_Broadcast_Item_ExtIEs( SI_S1AP_DT_PDU_TAI_Broadcast_Item_ExtIEs ** pTAI_Broadcast_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_TAI_Broadcast_Item_ExtIEs * obj_TAI_Broadcast_Item_ExtIEs = (SI_S1AP_DT_PDU_TAI_Broadcast_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TAI_Broadcast_Item_ExtIEs));
	memset( obj_TAI_Broadcast_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TAI_Broadcast_Item_ExtIEs));


	*pTAI_Broadcast_Item_ExtIEs = obj_TAI_Broadcast_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TAI_Cancelled_Item_ExtIEs( SI_S1AP_DT_PDU_TAI_Cancelled_Item_ExtIEs ** pTAI_Cancelled_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_TAI_Cancelled_Item_ExtIEs * obj_TAI_Cancelled_Item_ExtIEs = (SI_S1AP_DT_PDU_TAI_Cancelled_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TAI_Cancelled_Item_ExtIEs));
	memset( obj_TAI_Cancelled_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TAI_Cancelled_Item_ExtIEs));


	*pTAI_Cancelled_Item_ExtIEs = obj_TAI_Cancelled_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TABasedMDT_ExtIEs( SI_S1AP_DT_PDU_TABasedMDT_ExtIEs ** pTABasedMDT_ExtIEs)
{
	SI_S1AP_DT_PDU_TABasedMDT_ExtIEs * obj_TABasedMDT_ExtIEs = (SI_S1AP_DT_PDU_TABasedMDT_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TABasedMDT_ExtIEs));
	memset( obj_TABasedMDT_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TABasedMDT_ExtIEs));


	*pTABasedMDT_ExtIEs = obj_TABasedMDT_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TABasedQMC_ExtIEs( SI_S1AP_DT_PDU_TABasedQMC_ExtIEs ** pTABasedQMC_ExtIEs)
{
	SI_S1AP_DT_PDU_TABasedQMC_ExtIEs * obj_TABasedQMC_ExtIEs = (SI_S1AP_DT_PDU_TABasedQMC_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TABasedQMC_ExtIEs));
	memset( obj_TABasedQMC_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TABasedQMC_ExtIEs));


	*pTABasedQMC_ExtIEs = obj_TABasedQMC_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TAIBasedQMC_ExtIEs( SI_S1AP_DT_PDU_TAIBasedQMC_ExtIEs ** pTAIBasedQMC_ExtIEs)
{
	SI_S1AP_DT_PDU_TAIBasedQMC_ExtIEs * obj_TAIBasedQMC_ExtIEs = (SI_S1AP_DT_PDU_TAIBasedQMC_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TAIBasedQMC_ExtIEs));
	memset( obj_TAIBasedQMC_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TAIBasedQMC_ExtIEs));


	*pTAIBasedQMC_ExtIEs = obj_TAIBasedQMC_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CompletedCellinTAI_Item_ExtIEs( SI_S1AP_DT_PDU_CompletedCellinTAI_Item_ExtIEs ** pCompletedCellinTAI_Item_ExtIEs)
{
	SI_S1AP_DT_PDU_CompletedCellinTAI_Item_ExtIEs * obj_CompletedCellinTAI_Item_ExtIEs = (SI_S1AP_DT_PDU_CompletedCellinTAI_Item_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CompletedCellinTAI_Item_ExtIEs));
	memset( obj_CompletedCellinTAI_Item_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CompletedCellinTAI_Item_ExtIEs));


	*pCompletedCellinTAI_Item_ExtIEs = obj_CompletedCellinTAI_Item_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TargeteNB_ID_ExtIEs( SI_S1AP_DT_PDU_TargeteNB_ID_ExtIEs ** pTargeteNB_ID_ExtIEs)
{
	SI_S1AP_DT_PDU_TargeteNB_ID_ExtIEs * obj_TargeteNB_ID_ExtIEs = (SI_S1AP_DT_PDU_TargeteNB_ID_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TargeteNB_ID_ExtIEs));
	memset( obj_TargeteNB_ID_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TargeteNB_ID_ExtIEs));


	*pTargeteNB_ID_ExtIEs = obj_TargeteNB_ID_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TargetRNC_ID_ExtIEs( SI_S1AP_DT_PDU_TargetRNC_ID_ExtIEs ** pTargetRNC_ID_ExtIEs)
{
	SI_S1AP_DT_PDU_TargetRNC_ID_ExtIEs * obj_TargetRNC_ID_ExtIEs = (SI_S1AP_DT_PDU_TargetRNC_ID_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TargetRNC_ID_ExtIEs));
	memset( obj_TargetRNC_ID_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TargetRNC_ID_ExtIEs));


	*pTargetRNC_ID_ExtIEs = obj_TargetRNC_ID_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TargetNgRanNode_ID_ExtIEs( SI_S1AP_DT_PDU_TargetNgRanNode_ID_ExtIEs ** pTargetNgRanNode_ID_ExtIEs)
{
	SI_S1AP_DT_PDU_TargetNgRanNode_ID_ExtIEs * obj_TargetNgRanNode_ID_ExtIEs = (SI_S1AP_DT_PDU_TargetNgRanNode_ID_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TargetNgRanNode_ID_ExtIEs));
	memset( obj_TargetNgRanNode_ID_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TargetNgRanNode_ID_ExtIEs));


	*pTargetNgRanNode_ID_ExtIEs = obj_TargetNgRanNode_ID_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_GNB_ExtIEs( SI_S1AP_DT_PDU_GNB_ExtIEs ** pGNB_ExtIEs)
{
	SI_S1AP_DT_PDU_GNB_ExtIEs * obj_GNB_ExtIEs = (SI_S1AP_DT_PDU_GNB_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_GNB_ExtIEs));
	memset( obj_GNB_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_GNB_ExtIEs));


	*pGNB_ExtIEs = obj_GNB_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_Global_GNB_ID_ExtIEs( SI_S1AP_DT_PDU_Global_GNB_ID_ExtIEs ** pGlobal_GNB_ID_ExtIEs)
{
	SI_S1AP_DT_PDU_Global_GNB_ID_ExtIEs * obj_Global_GNB_ID_ExtIEs = (SI_S1AP_DT_PDU_Global_GNB_ID_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Global_GNB_ID_ExtIEs));
	memset( obj_Global_GNB_ID_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_Global_GNB_ID_ExtIEs));


	*pGlobal_GNB_ID_ExtIEs = obj_Global_GNB_ID_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_NG_eNB_ExtIEs( SI_S1AP_DT_PDU_NG_eNB_ExtIEs ** pNG_eNB_ExtIEs)
{
	SI_S1AP_DT_PDU_NG_eNB_ExtIEs * obj_NG_eNB_ExtIEs = (SI_S1AP_DT_PDU_NG_eNB_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_NG_eNB_ExtIEs));
	memset( obj_NG_eNB_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_NG_eNB_ExtIEs));


	*pNG_eNB_ExtIEs = obj_NG_eNB_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs( SI_S1AP_DT_PDU_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs ** pTargeteNB_ToSourceeNB_TransparentContainer_ExtIEs)
{
	SI_S1AP_DT_PDU_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs * obj_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs = (SI_S1AP_DT_PDU_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs));
	memset( obj_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs));

	// DAPSResponseInfoList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__DAPSResponseInfoList( &obj_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs->dAPSResponseInfoList);
	obj_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs->dAPSResponseInfoList_isset = 1;


	// RACSIndication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs->rACSIndication = RACSIndication_true_val;
	obj_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs->rACSIndication_isset = 1;


	// E-RABSecurityResultList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABSecurityResultList( &obj_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs->eRABSecurityResultList);
	obj_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs->eRABSecurityResultList_isset = 1;


	// Direct-Forwarding-Path-Availability , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs->directForwardingPathAvailability = Direct_Forwarding_Path_Availability_directPathAvailable_val;
	obj_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs->directForwardingPathAvailability_isset = 1;



	*pTargeteNB_ToSourceeNB_TransparentContainer_ExtIEs = obj_TargeteNB_ToSourceeNB_TransparentContainer_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_M1ThresholdEventA2_ExtIEs( SI_S1AP_DT_PDU_M1ThresholdEventA2_ExtIEs ** pM1ThresholdEventA2_ExtIEs)
{
	SI_S1AP_DT_PDU_M1ThresholdEventA2_ExtIEs * obj_M1ThresholdEventA2_ExtIEs = (SI_S1AP_DT_PDU_M1ThresholdEventA2_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_M1ThresholdEventA2_ExtIEs));
	memset( obj_M1ThresholdEventA2_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_M1ThresholdEventA2_ExtIEs));


	*pM1ThresholdEventA2_ExtIEs = obj_M1ThresholdEventA2_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TimeBasedHandoverInformation_ExtIEs( SI_S1AP_DT_PDU_TimeBasedHandoverInformation_ExtIEs ** pTimeBasedHandoverInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_TimeBasedHandoverInformation_ExtIEs * obj_TimeBasedHandoverInformation_ExtIEs = (SI_S1AP_DT_PDU_TimeBasedHandoverInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TimeBasedHandoverInformation_ExtIEs));
	memset( obj_TimeBasedHandoverInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TimeBasedHandoverInformation_ExtIEs));


	*pTimeBasedHandoverInformation_ExtIEs = obj_TimeBasedHandoverInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TraceActivation_ExtIEs( SI_S1AP_DT_PDU_TraceActivation_ExtIEs ** pTraceActivation_ExtIEs)
{
	SI_S1AP_DT_PDU_TraceActivation_ExtIEs * obj_TraceActivation_ExtIEs = (SI_S1AP_DT_PDU_TraceActivation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TraceActivation_ExtIEs));
	memset( obj_TraceActivation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TraceActivation_ExtIEs));

	// MDT-Configuration , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__MDT_Configuration( &obj_TraceActivation_ExtIEs->mDTConfiguration);
	obj_TraceActivation_ExtIEs->mDTConfiguration_isset = 1;


	// UEAppLayerMeasConfig , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UEAppLayerMeasConfig( &obj_TraceActivation_ExtIEs->uEAppLayerMeasConfig);
	obj_TraceActivation_ExtIEs->uEAppLayerMeasConfig_isset = 1;


	// MDT-ConfigurationNR    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_MDT_ConfigurationNR2( &obj_TraceActivation_ExtIEs->mDTConfigurationNR, "\x18\x22\x24\x02\x07", 5);
	obj_TraceActivation_ExtIEs->mDTConfigurationNR_isset = 1;


	// URI-Address    PrintableString, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_URI_Address2( &obj_TraceActivation_ExtIEs->traceCollectionEntityURI, "aeiou", 5);
	obj_TraceActivation_ExtIEs->traceCollectionEntityURI_isset = 1;



	*pTraceActivation_ExtIEs = obj_TraceActivation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_Tunnel_Information_ExtIEs( SI_S1AP_DT_PDU_Tunnel_Information_ExtIEs ** pTunnel_Information_ExtIEs)
{
	SI_S1AP_DT_PDU_Tunnel_Information_ExtIEs * obj_Tunnel_Information_ExtIEs = (SI_S1AP_DT_PDU_Tunnel_Information_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Tunnel_Information_ExtIEs));
	memset( obj_Tunnel_Information_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_Tunnel_Information_ExtIEs));


	*pTunnel_Information_ExtIEs = obj_Tunnel_Information_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_UEAggregate_MaximumBitrates_ExtIEs( SI_S1AP_DT_PDU_UEAggregate_MaximumBitrates_ExtIEs ** pUEAggregate_MaximumBitrates_ExtIEs)
{
	SI_S1AP_DT_PDU_UEAggregate_MaximumBitrates_ExtIEs * obj_UEAggregate_MaximumBitrates_ExtIEs = (SI_S1AP_DT_PDU_UEAggregate_MaximumBitrates_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEAggregate_MaximumBitrates_ExtIEs));
	memset( obj_UEAggregate_MaximumBitrates_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_UEAggregate_MaximumBitrates_ExtIEs));

	// ExtendedBitRate , PRESENCE = optional  INTEGER , MIN=10000000001, MAX=4000000000000
	obj_UEAggregate_MaximumBitrates_ExtIEs->extendeduEaggregateMaximumBitRateDL = __getTestINTEGER( 10000000001, 4000000000000);
	obj_UEAggregate_MaximumBitrates_ExtIEs->extendeduEaggregateMaximumBitRateDL_isset = 1;


	// ExtendedBitRate , PRESENCE = optional  INTEGER , MIN=10000000001, MAX=4000000000000
	obj_UEAggregate_MaximumBitrates_ExtIEs->extendeduEaggregateMaximumBitRateUL = __getTestINTEGER( 10000000001, 4000000000000);
	obj_UEAggregate_MaximumBitrates_ExtIEs->extendeduEaggregateMaximumBitRateUL_isset = 1;



	*pUEAggregate_MaximumBitrates_ExtIEs = obj_UEAggregate_MaximumBitrates_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_UEAppLayerMeasConfig_ExtIEs( SI_S1AP_DT_PDU_UEAppLayerMeasConfig_ExtIEs ** pUEAppLayerMeasConfig_ExtIEs)
{
	SI_S1AP_DT_PDU_UEAppLayerMeasConfig_ExtIEs * obj_UEAppLayerMeasConfig_ExtIEs = (SI_S1AP_DT_PDU_UEAppLayerMeasConfig_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEAppLayerMeasConfig_ExtIEs));
	memset( obj_UEAppLayerMeasConfig_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_UEAppLayerMeasConfig_ExtIEs));

	// ServiceType , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UEAppLayerMeasConfig_ExtIEs->serviceType = ServiceType_qMC_for_streaming_service_val;
	obj_UEAppLayerMeasConfig_ExtIEs->serviceType_isset = 1;



	*pUEAppLayerMeasConfig_ExtIEs = obj_UEAppLayerMeasConfig_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_UE_S1AP_ID_pair_ExtIEs( SI_S1AP_DT_PDU_UE_S1AP_ID_pair_ExtIEs ** pUE_S1AP_ID_pair_ExtIEs)
{
	SI_S1AP_DT_PDU_UE_S1AP_ID_pair_ExtIEs * obj_UE_S1AP_ID_pair_ExtIEs = (SI_S1AP_DT_PDU_UE_S1AP_ID_pair_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UE_S1AP_ID_pair_ExtIEs));
	memset( obj_UE_S1AP_ID_pair_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_UE_S1AP_ID_pair_ExtIEs));


	*pUE_S1AP_ID_pair_ExtIEs = obj_UE_S1AP_ID_pair_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_UE_associatedLogicalS1_ConnectionItemExtIEs( SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemExtIEs ** pUE_associatedLogicalS1_ConnectionItemExtIEs)
{
	SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemExtIEs * obj_UE_associatedLogicalS1_ConnectionItemExtIEs = (SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemExtIEs));
	memset( obj_UE_associatedLogicalS1_ConnectionItemExtIEs, 0, sizeof( SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemExtIEs));


	*pUE_associatedLogicalS1_ConnectionItemExtIEs = obj_UE_associatedLogicalS1_ConnectionItemExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_UESecurityCapabilities_ExtIEs( SI_S1AP_DT_PDU_UESecurityCapabilities_ExtIEs ** pUESecurityCapabilities_ExtIEs)
{
	SI_S1AP_DT_PDU_UESecurityCapabilities_ExtIEs * obj_UESecurityCapabilities_ExtIEs = (SI_S1AP_DT_PDU_UESecurityCapabilities_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UESecurityCapabilities_ExtIEs));
	memset( obj_UESecurityCapabilities_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_UESecurityCapabilities_ExtIEs));


	*pUESecurityCapabilities_ExtIEs = obj_UESecurityCapabilities_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_UE_Sidelink_Aggregate_MaximumBitrates_ExtIEs( SI_S1AP_DT_PDU_UE_Sidelink_Aggregate_MaximumBitrates_ExtIEs ** pUE_Sidelink_Aggregate_MaximumBitrates_ExtIEs)
{
	SI_S1AP_DT_PDU_UE_Sidelink_Aggregate_MaximumBitrates_ExtIEs * obj_UE_Sidelink_Aggregate_MaximumBitrates_ExtIEs = (SI_S1AP_DT_PDU_UE_Sidelink_Aggregate_MaximumBitrates_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UE_Sidelink_Aggregate_MaximumBitrates_ExtIEs));
	memset( obj_UE_Sidelink_Aggregate_MaximumBitrates_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_UE_Sidelink_Aggregate_MaximumBitrates_ExtIEs));


	*pUE_Sidelink_Aggregate_MaximumBitrates_ExtIEs = obj_UE_Sidelink_Aggregate_MaximumBitrates_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_UL_CP_SecurityInformation_ExtIEs( SI_S1AP_DT_PDU_UL_CP_SecurityInformation_ExtIEs ** pUL_CP_SecurityInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_UL_CP_SecurityInformation_ExtIEs * obj_UL_CP_SecurityInformation_ExtIEs = (SI_S1AP_DT_PDU_UL_CP_SecurityInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UL_CP_SecurityInformation_ExtIEs));
	memset( obj_UL_CP_SecurityInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_UL_CP_SecurityInformation_ExtIEs));


	*pUL_CP_SecurityInformation_ExtIEs = obj_UL_CP_SecurityInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_UserLocationInformation_ExtIEs( SI_S1AP_DT_PDU_UserLocationInformation_ExtIEs ** pUserLocationInformation_ExtIEs)
{
	SI_S1AP_DT_PDU_UserLocationInformation_ExtIEs * obj_UserLocationInformation_ExtIEs = (SI_S1AP_DT_PDU_UserLocationInformation_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UserLocationInformation_ExtIEs));
	memset( obj_UserLocationInformation_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_UserLocationInformation_ExtIEs));

	// PSCellInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__PSCellInformation( &obj_UserLocationInformation_ExtIEs->pSCellInformation);
	obj_UserLocationInformation_ExtIEs->pSCellInformation_isset = 1;


	// LTE-NTN-TAI-Information , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__LTE_NTN_TAI_Information( &obj_UserLocationInformation_ExtIEs->lTENTNTAIInformation);
	obj_UserLocationInformation_ExtIEs->lTENTNTAIInformation_isset = 1;



	*pUserLocationInformation_ExtIEs = obj_UserLocationInformation_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_V2XServicesAuthorized_ExtIEs( SI_S1AP_DT_PDU_V2XServicesAuthorized_ExtIEs ** pV2XServicesAuthorized_ExtIEs)
{
	SI_S1AP_DT_PDU_V2XServicesAuthorized_ExtIEs * obj_V2XServicesAuthorized_ExtIEs = (SI_S1AP_DT_PDU_V2XServicesAuthorized_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_V2XServicesAuthorized_ExtIEs));
	memset( obj_V2XServicesAuthorized_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_V2XServicesAuthorized_ExtIEs));


	*pV2XServicesAuthorized_ExtIEs = obj_V2XServicesAuthorized_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_WLANMeasurementConfiguration_ExtIEs( SI_S1AP_DT_PDU_WLANMeasurementConfiguration_ExtIEs ** pWLANMeasurementConfiguration_ExtIEs)
{
	SI_S1AP_DT_PDU_WLANMeasurementConfiguration_ExtIEs * obj_WLANMeasurementConfiguration_ExtIEs = (SI_S1AP_DT_PDU_WLANMeasurementConfiguration_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_WLANMeasurementConfiguration_ExtIEs));
	memset( obj_WLANMeasurementConfiguration_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_WLANMeasurementConfiguration_ExtIEs));


	*pWLANMeasurementConfiguration_ExtIEs = obj_WLANMeasurementConfiguration_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_WUS_Assistance_Information_ExtIEs( SI_S1AP_DT_PDU_WUS_Assistance_Information_ExtIEs ** pWUS_Assistance_Information_ExtIEs)
{
	SI_S1AP_DT_PDU_WUS_Assistance_Information_ExtIEs * obj_WUS_Assistance_Information_ExtIEs = (SI_S1AP_DT_PDU_WUS_Assistance_Information_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_WUS_Assistance_Information_ExtIEs));
	memset( obj_WUS_Assistance_Information_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_WUS_Assistance_Information_ExtIEs));


	*pWUS_Assistance_Information_ExtIEs = obj_WUS_Assistance_Information_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_X2TNLConfigurationInfo_ExtIEs( SI_S1AP_DT_PDU_X2TNLConfigurationInfo_ExtIEs ** pX2TNLConfigurationInfo_ExtIEs)
{
	SI_S1AP_DT_PDU_X2TNLConfigurationInfo_ExtIEs * obj_X2TNLConfigurationInfo_ExtIEs = (SI_S1AP_DT_PDU_X2TNLConfigurationInfo_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_X2TNLConfigurationInfo_ExtIEs));
	memset( obj_X2TNLConfigurationInfo_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_X2TNLConfigurationInfo_ExtIEs));

	// ENBX2ExtTLAs , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__ENBX2ExtTLAs( &obj_X2TNLConfigurationInfo_ExtIEs->eNBX2ExtendedTransportLayerAddresses);
	obj_X2TNLConfigurationInfo_ExtIEs->eNBX2ExtendedTransportLayerAddresses_isset = 1;


	// ENBIndirectX2TransportLayerAddresses , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__ENBIndirectX2TransportLayerAddresses( &obj_X2TNLConfigurationInfo_ExtIEs->eNBIndirectX2TransportLayerAddresses);
	obj_X2TNLConfigurationInfo_ExtIEs->eNBIndirectX2TransportLayerAddresses_isset = 1;



	*pX2TNLConfigurationInfo_ExtIEs = obj_X2TNLConfigurationInfo_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_ENBX2ExtTLA_ExtIEs( SI_S1AP_DT_PDU_ENBX2ExtTLA_ExtIEs ** pENBX2ExtTLA_ExtIEs)
{
	SI_S1AP_DT_PDU_ENBX2ExtTLA_ExtIEs * obj_ENBX2ExtTLA_ExtIEs = (SI_S1AP_DT_PDU_ENBX2ExtTLA_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ENBX2ExtTLA_ExtIEs));
	memset( obj_ENBX2ExtTLA_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_ENBX2ExtTLA_ExtIEs));


	*pENBX2ExtTLA_ExtIEs = obj_ENBX2ExtTLA_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABDataForwardingItem_ExtIEs( SI_S1AP_DT_PDU_E_RABDataForwardingItem_ExtIEs ** pE_RABDataForwardingItem_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABDataForwardingItem_ExtIEs * obj_E_RABDataForwardingItem_ExtIEs = (SI_S1AP_DT_PDU_E_RABDataForwardingItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABDataForwardingItem_ExtIEs));
	memset( obj_E_RABDataForwardingItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABDataForwardingItem_ExtIEs));


	*pE_RABDataForwardingItem_ExtIEs = obj_E_RABDataForwardingItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABToBeSetupItemHOReq_ExtIEs( SI_S1AP_DT_PDU_E_RABToBeSetupItemHOReq_ExtIEs ** pE_RABToBeSetupItemHOReq_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABToBeSetupItemHOReq_ExtIEs * obj_E_RABToBeSetupItemHOReq_ExtIEs = (SI_S1AP_DT_PDU_E_RABToBeSetupItemHOReq_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABToBeSetupItemHOReq_ExtIEs));
	memset( obj_E_RABToBeSetupItemHOReq_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABToBeSetupItemHOReq_ExtIEs));

	// Data-Forwarding-Not-Possible , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_E_RABToBeSetupItemHOReq_ExtIEs->dataForwardingNotPossible = Data_Forwarding_Not_Possible_data_Forwarding_not_Possible_val;
	obj_E_RABToBeSetupItemHOReq_ExtIEs->dataForwardingNotPossible_isset = 1;


	// BearerType , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_E_RABToBeSetupItemHOReq_ExtIEs->bearerType = BearerType_non_IP_val;
	obj_E_RABToBeSetupItemHOReq_ExtIEs->bearerType_isset = 1;


	// Ethernet-Type , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_E_RABToBeSetupItemHOReq_ExtIEs->ethernetType = Ethernet_Type_true_val;
	obj_E_RABToBeSetupItemHOReq_ExtIEs->ethernetType_isset = 1;


	// SecurityIndication , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__SecurityIndication( &obj_E_RABToBeSetupItemHOReq_ExtIEs->securityIndication);
	obj_E_RABToBeSetupItemHOReq_ExtIEs->securityIndication_isset = 1;



	*pE_RABToBeSetupItemHOReq_ExtIEs = obj_E_RABToBeSetupItemHOReq_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABAdmittedItem_ExtIEs( SI_S1AP_DT_PDU_E_RABAdmittedItem_ExtIEs ** pE_RABAdmittedItem_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABAdmittedItem_ExtIEs * obj_E_RABAdmittedItem_ExtIEs = (SI_S1AP_DT_PDU_E_RABAdmittedItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABAdmittedItem_ExtIEs));
	memset( obj_E_RABAdmittedItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABAdmittedItem_ExtIEs));


	*pE_RABAdmittedItem_ExtIEs = obj_E_RABAdmittedItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABFailedToSetupItemHOReqAckExtIEs( SI_S1AP_DT_PDU_E_RABFailedToSetupItemHOReqAckExtIEs ** pE_RABFailedToSetupItemHOReqAckExtIEs)
{
	SI_S1AP_DT_PDU_E_RABFailedToSetupItemHOReqAckExtIEs * obj_E_RABFailedToSetupItemHOReqAckExtIEs = (SI_S1AP_DT_PDU_E_RABFailedToSetupItemHOReqAckExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABFailedToSetupItemHOReqAckExtIEs));
	memset( obj_E_RABFailedToSetupItemHOReqAckExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABFailedToSetupItemHOReqAckExtIEs));


	*pE_RABFailedToSetupItemHOReqAckExtIEs = obj_E_RABFailedToSetupItemHOReqAckExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABToBeSwitchedDLItem_ExtIEs( SI_S1AP_DT_PDU_E_RABToBeSwitchedDLItem_ExtIEs ** pE_RABToBeSwitchedDLItem_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABToBeSwitchedDLItem_ExtIEs * obj_E_RABToBeSwitchedDLItem_ExtIEs = (SI_S1AP_DT_PDU_E_RABToBeSwitchedDLItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABToBeSwitchedDLItem_ExtIEs));
	memset( obj_E_RABToBeSwitchedDLItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABToBeSwitchedDLItem_ExtIEs));

	// SecurityIndication , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__SecurityIndication( &obj_E_RABToBeSwitchedDLItem_ExtIEs->securityIndication);
	obj_E_RABToBeSwitchedDLItem_ExtIEs->securityIndication_isset = 1;



	*pE_RABToBeSwitchedDLItem_ExtIEs = obj_E_RABToBeSwitchedDLItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABToBeSwitchedULItem_ExtIEs( SI_S1AP_DT_PDU_E_RABToBeSwitchedULItem_ExtIEs ** pE_RABToBeSwitchedULItem_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABToBeSwitchedULItem_ExtIEs * obj_E_RABToBeSwitchedULItem_ExtIEs = (SI_S1AP_DT_PDU_E_RABToBeSwitchedULItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABToBeSwitchedULItem_ExtIEs));
	memset( obj_E_RABToBeSwitchedULItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABToBeSwitchedULItem_ExtIEs));


	*pE_RABToBeSwitchedULItem_ExtIEs = obj_E_RABToBeSwitchedULItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABToBeUpdatedItem_ExtIEs( SI_S1AP_DT_PDU_E_RABToBeUpdatedItem_ExtIEs ** pE_RABToBeUpdatedItem_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABToBeUpdatedItem_ExtIEs * obj_E_RABToBeUpdatedItem_ExtIEs = (SI_S1AP_DT_PDU_E_RABToBeUpdatedItem_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABToBeUpdatedItem_ExtIEs));
	memset( obj_E_RABToBeUpdatedItem_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABToBeUpdatedItem_ExtIEs));


	*pE_RABToBeUpdatedItem_ExtIEs = obj_E_RABToBeUpdatedItem_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABToBeSetupItemBearerSUReqIEs( SI_S1AP_DT_PDU_E_RABToBeSetupItemBearerSUReqIEs ** pE_RABToBeSetupItemBearerSUReqIEs)
{
	SI_S1AP_DT_PDU_E_RABToBeSetupItemBearerSUReqIEs * obj_E_RABToBeSetupItemBearerSUReqIEs = (SI_S1AP_DT_PDU_E_RABToBeSetupItemBearerSUReqIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABToBeSetupItemBearerSUReqIEs));
	memset( obj_E_RABToBeSetupItemBearerSUReqIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABToBeSetupItemBearerSUReqIEs));

	// E-RABToBeSetupItemBearerSUReq , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__E_RABToBeSetupItemBearerSUReq( &obj_E_RABToBeSetupItemBearerSUReqIEs->eRABToBeSetupItemBearerSUReq);
	obj_E_RABToBeSetupItemBearerSUReqIEs->eRABToBeSetupItemBearerSUReq_isset = 1;



	*pE_RABToBeSetupItemBearerSUReqIEs = obj_E_RABToBeSetupItemBearerSUReqIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABToBeSetupItemBearerSUReqExtIEs( SI_S1AP_DT_PDU_E_RABToBeSetupItemBearerSUReqExtIEs ** pE_RABToBeSetupItemBearerSUReqExtIEs)
{
	SI_S1AP_DT_PDU_E_RABToBeSetupItemBearerSUReqExtIEs * obj_E_RABToBeSetupItemBearerSUReqExtIEs = (SI_S1AP_DT_PDU_E_RABToBeSetupItemBearerSUReqExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABToBeSetupItemBearerSUReqExtIEs));
	memset( obj_E_RABToBeSetupItemBearerSUReqExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABToBeSetupItemBearerSUReqExtIEs));

	// Correlation-ID    OCTETSTRING, PRESENCE = optional , MIN=4, MAX=4
	__si_s1ap_init_Correlation_ID2( &obj_E_RABToBeSetupItemBearerSUReqExtIEs->correlationID, "\x16\x08\x04\x18", 4);
	obj_E_RABToBeSetupItemBearerSUReqExtIEs->correlationID_isset = 1;


	// Correlation-ID    OCTETSTRING, PRESENCE = optional , MIN=4, MAX=4
	__si_s1ap_init_Correlation_ID2( &obj_E_RABToBeSetupItemBearerSUReqExtIEs->sIPTOCorrelationID, "\x16\x08\x18\x08", 4);
	obj_E_RABToBeSetupItemBearerSUReqExtIEs->sIPTOCorrelationID_isset = 1;


	// BearerType , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_E_RABToBeSetupItemBearerSUReqExtIEs->bearerType = BearerType_non_IP_val;
	obj_E_RABToBeSetupItemBearerSUReqExtIEs->bearerType_isset = 1;


	// Ethernet-Type , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_E_RABToBeSetupItemBearerSUReqExtIEs->ethernetType = Ethernet_Type_true_val;
	obj_E_RABToBeSetupItemBearerSUReqExtIEs->ethernetType_isset = 1;


	// SecurityIndication , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__SecurityIndication( &obj_E_RABToBeSetupItemBearerSUReqExtIEs->securityIndication);
	obj_E_RABToBeSetupItemBearerSUReqExtIEs->securityIndication_isset = 1;



	*pE_RABToBeSetupItemBearerSUReqExtIEs = obj_E_RABToBeSetupItemBearerSUReqExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABSetupItemBearerSUResIEs( SI_S1AP_DT_PDU_E_RABSetupItemBearerSUResIEs ** pE_RABSetupItemBearerSUResIEs)
{
	SI_S1AP_DT_PDU_E_RABSetupItemBearerSUResIEs * obj_E_RABSetupItemBearerSUResIEs = (SI_S1AP_DT_PDU_E_RABSetupItemBearerSUResIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABSetupItemBearerSUResIEs));
	memset( obj_E_RABSetupItemBearerSUResIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABSetupItemBearerSUResIEs));

	// E-RABSetupItemBearerSURes , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__E_RABSetupItemBearerSURes( &obj_E_RABSetupItemBearerSUResIEs->eRABSetupItemBearerSURes);
	obj_E_RABSetupItemBearerSUResIEs->eRABSetupItemBearerSURes_isset = 1;



	*pE_RABSetupItemBearerSUResIEs = obj_E_RABSetupItemBearerSUResIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABSetupItemBearerSUResExtIEs( SI_S1AP_DT_PDU_E_RABSetupItemBearerSUResExtIEs ** pE_RABSetupItemBearerSUResExtIEs)
{
	SI_S1AP_DT_PDU_E_RABSetupItemBearerSUResExtIEs * obj_E_RABSetupItemBearerSUResExtIEs = (SI_S1AP_DT_PDU_E_RABSetupItemBearerSUResExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABSetupItemBearerSUResExtIEs));
	memset( obj_E_RABSetupItemBearerSUResExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABSetupItemBearerSUResExtIEs));


	*pE_RABSetupItemBearerSUResExtIEs = obj_E_RABSetupItemBearerSUResExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABToBeModifiedItemBearerModReqIEs( SI_S1AP_DT_PDU_E_RABToBeModifiedItemBearerModReqIEs ** pE_RABToBeModifiedItemBearerModReqIEs)
{
	SI_S1AP_DT_PDU_E_RABToBeModifiedItemBearerModReqIEs * obj_E_RABToBeModifiedItemBearerModReqIEs = (SI_S1AP_DT_PDU_E_RABToBeModifiedItemBearerModReqIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABToBeModifiedItemBearerModReqIEs));
	memset( obj_E_RABToBeModifiedItemBearerModReqIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABToBeModifiedItemBearerModReqIEs));

	// E-RABToBeModifiedItemBearerModReq , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__E_RABToBeModifiedItemBearerModReq( &obj_E_RABToBeModifiedItemBearerModReqIEs->eRABToBeModifiedItemBearerModReq);
	obj_E_RABToBeModifiedItemBearerModReqIEs->eRABToBeModifiedItemBearerModReq_isset = 1;



	*pE_RABToBeModifiedItemBearerModReqIEs = obj_E_RABToBeModifiedItemBearerModReqIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABToBeModifyItemBearerModReqExtIEs( SI_S1AP_DT_PDU_E_RABToBeModifyItemBearerModReqExtIEs ** pE_RABToBeModifyItemBearerModReqExtIEs)
{
	SI_S1AP_DT_PDU_E_RABToBeModifyItemBearerModReqExtIEs * obj_E_RABToBeModifyItemBearerModReqExtIEs = (SI_S1AP_DT_PDU_E_RABToBeModifyItemBearerModReqExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABToBeModifyItemBearerModReqExtIEs));
	memset( obj_E_RABToBeModifyItemBearerModReqExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABToBeModifyItemBearerModReqExtIEs));

	// TransportInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__TransportInformation( &obj_E_RABToBeModifyItemBearerModReqExtIEs->transportInformation);
	obj_E_RABToBeModifyItemBearerModReqExtIEs->transportInformation_isset = 1;



	*pE_RABToBeModifyItemBearerModReqExtIEs = obj_E_RABToBeModifyItemBearerModReqExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABModifyItemBearerModResIEs( SI_S1AP_DT_PDU_E_RABModifyItemBearerModResIEs ** pE_RABModifyItemBearerModResIEs)
{
	SI_S1AP_DT_PDU_E_RABModifyItemBearerModResIEs * obj_E_RABModifyItemBearerModResIEs = (SI_S1AP_DT_PDU_E_RABModifyItemBearerModResIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABModifyItemBearerModResIEs));
	memset( obj_E_RABModifyItemBearerModResIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABModifyItemBearerModResIEs));

	// E-RABModifyItemBearerModRes , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__E_RABModifyItemBearerModRes( &obj_E_RABModifyItemBearerModResIEs->eRABModifyItemBearerModRes);
	obj_E_RABModifyItemBearerModResIEs->eRABModifyItemBearerModRes_isset = 1;



	*pE_RABModifyItemBearerModResIEs = obj_E_RABModifyItemBearerModResIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABModifyItemBearerModResExtIEs( SI_S1AP_DT_PDU_E_RABModifyItemBearerModResExtIEs ** pE_RABModifyItemBearerModResExtIEs)
{
	SI_S1AP_DT_PDU_E_RABModifyItemBearerModResExtIEs * obj_E_RABModifyItemBearerModResExtIEs = (SI_S1AP_DT_PDU_E_RABModifyItemBearerModResExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABModifyItemBearerModResExtIEs));
	memset( obj_E_RABModifyItemBearerModResExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABModifyItemBearerModResExtIEs));


	*pE_RABModifyItemBearerModResExtIEs = obj_E_RABModifyItemBearerModResExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABReleaseItemBearerRelCompIEs( SI_S1AP_DT_PDU_E_RABReleaseItemBearerRelCompIEs ** pE_RABReleaseItemBearerRelCompIEs)
{
	SI_S1AP_DT_PDU_E_RABReleaseItemBearerRelCompIEs * obj_E_RABReleaseItemBearerRelCompIEs = (SI_S1AP_DT_PDU_E_RABReleaseItemBearerRelCompIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABReleaseItemBearerRelCompIEs));
	memset( obj_E_RABReleaseItemBearerRelCompIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABReleaseItemBearerRelCompIEs));

	// E-RABReleaseItemBearerRelComp , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__E_RABReleaseItemBearerRelComp( &obj_E_RABReleaseItemBearerRelCompIEs->eRABReleaseItemBearerRelComp);
	obj_E_RABReleaseItemBearerRelCompIEs->eRABReleaseItemBearerRelComp_isset = 1;



	*pE_RABReleaseItemBearerRelCompIEs = obj_E_RABReleaseItemBearerRelCompIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABReleaseItemBearerRelCompExtIEs( SI_S1AP_DT_PDU_E_RABReleaseItemBearerRelCompExtIEs ** pE_RABReleaseItemBearerRelCompExtIEs)
{
	SI_S1AP_DT_PDU_E_RABReleaseItemBearerRelCompExtIEs * obj_E_RABReleaseItemBearerRelCompExtIEs = (SI_S1AP_DT_PDU_E_RABReleaseItemBearerRelCompExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABReleaseItemBearerRelCompExtIEs));
	memset( obj_E_RABReleaseItemBearerRelCompExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABReleaseItemBearerRelCompExtIEs));


	*pE_RABReleaseItemBearerRelCompExtIEs = obj_E_RABReleaseItemBearerRelCompExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABToBeSetupItemCtxtSUReqIEs( SI_S1AP_DT_PDU_E_RABToBeSetupItemCtxtSUReqIEs ** pE_RABToBeSetupItemCtxtSUReqIEs)
{
	SI_S1AP_DT_PDU_E_RABToBeSetupItemCtxtSUReqIEs * obj_E_RABToBeSetupItemCtxtSUReqIEs = (SI_S1AP_DT_PDU_E_RABToBeSetupItemCtxtSUReqIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABToBeSetupItemCtxtSUReqIEs));
	memset( obj_E_RABToBeSetupItemCtxtSUReqIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABToBeSetupItemCtxtSUReqIEs));

	// E-RABToBeSetupItemCtxtSUReq , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__E_RABToBeSetupItemCtxtSUReq( &obj_E_RABToBeSetupItemCtxtSUReqIEs->eRABToBeSetupItemCtxtSUReq);
	obj_E_RABToBeSetupItemCtxtSUReqIEs->eRABToBeSetupItemCtxtSUReq_isset = 1;



	*pE_RABToBeSetupItemCtxtSUReqIEs = obj_E_RABToBeSetupItemCtxtSUReqIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABToBeSetupItemCtxtSUReqExtIEs( SI_S1AP_DT_PDU_E_RABToBeSetupItemCtxtSUReqExtIEs ** pE_RABToBeSetupItemCtxtSUReqExtIEs)
{
	SI_S1AP_DT_PDU_E_RABToBeSetupItemCtxtSUReqExtIEs * obj_E_RABToBeSetupItemCtxtSUReqExtIEs = (SI_S1AP_DT_PDU_E_RABToBeSetupItemCtxtSUReqExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABToBeSetupItemCtxtSUReqExtIEs));
	memset( obj_E_RABToBeSetupItemCtxtSUReqExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABToBeSetupItemCtxtSUReqExtIEs));

	// Correlation-ID    OCTETSTRING, PRESENCE = optional , MIN=4, MAX=4
	__si_s1ap_init_Correlation_ID2( &obj_E_RABToBeSetupItemCtxtSUReqExtIEs->correlationID, "\x09\x05\x11\x07", 4);
	obj_E_RABToBeSetupItemCtxtSUReqExtIEs->correlationID_isset = 1;


	// Correlation-ID    OCTETSTRING, PRESENCE = optional , MIN=4, MAX=4
	__si_s1ap_init_Correlation_ID2( &obj_E_RABToBeSetupItemCtxtSUReqExtIEs->sIPTOCorrelationID, "\x12\x06\x08\x24", 4);
	obj_E_RABToBeSetupItemCtxtSUReqExtIEs->sIPTOCorrelationID_isset = 1;


	// BearerType , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_E_RABToBeSetupItemCtxtSUReqExtIEs->bearerType = BearerType_non_IP_val;
	obj_E_RABToBeSetupItemCtxtSUReqExtIEs->bearerType_isset = 1;


	// Ethernet-Type , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_E_RABToBeSetupItemCtxtSUReqExtIEs->ethernetType = Ethernet_Type_true_val;
	obj_E_RABToBeSetupItemCtxtSUReqExtIEs->ethernetType_isset = 1;


	// SecurityIndication , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__SecurityIndication( &obj_E_RABToBeSetupItemCtxtSUReqExtIEs->securityIndication);
	obj_E_RABToBeSetupItemCtxtSUReqExtIEs->securityIndication_isset = 1;



	*pE_RABToBeSetupItemCtxtSUReqExtIEs = obj_E_RABToBeSetupItemCtxtSUReqExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABSetupItemCtxtSUResIEs( SI_S1AP_DT_PDU_E_RABSetupItemCtxtSUResIEs ** pE_RABSetupItemCtxtSUResIEs)
{
	SI_S1AP_DT_PDU_E_RABSetupItemCtxtSUResIEs * obj_E_RABSetupItemCtxtSUResIEs = (SI_S1AP_DT_PDU_E_RABSetupItemCtxtSUResIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABSetupItemCtxtSUResIEs));
	memset( obj_E_RABSetupItemCtxtSUResIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABSetupItemCtxtSUResIEs));

	// E-RABSetupItemCtxtSURes , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__E_RABSetupItemCtxtSURes( &obj_E_RABSetupItemCtxtSUResIEs->eRABSetupItemCtxtSURes);
	obj_E_RABSetupItemCtxtSUResIEs->eRABSetupItemCtxtSURes_isset = 1;



	*pE_RABSetupItemCtxtSUResIEs = obj_E_RABSetupItemCtxtSUResIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABSetupItemCtxtSUResExtIEs( SI_S1AP_DT_PDU_E_RABSetupItemCtxtSUResExtIEs ** pE_RABSetupItemCtxtSUResExtIEs)
{
	SI_S1AP_DT_PDU_E_RABSetupItemCtxtSUResExtIEs * obj_E_RABSetupItemCtxtSUResExtIEs = (SI_S1AP_DT_PDU_E_RABSetupItemCtxtSUResExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABSetupItemCtxtSUResExtIEs));
	memset( obj_E_RABSetupItemCtxtSUResExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABSetupItemCtxtSUResExtIEs));


	*pE_RABSetupItemCtxtSUResExtIEs = obj_E_RABSetupItemCtxtSUResExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TAIItemIEs( SI_S1AP_DT_PDU_TAIItemIEs ** pTAIItemIEs)
{
	SI_S1AP_DT_PDU_TAIItemIEs * obj_TAIItemIEs = (SI_S1AP_DT_PDU_TAIItemIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TAIItemIEs));
	memset( obj_TAIItemIEs, 0, sizeof( SI_S1AP_DT_PDU_TAIItemIEs));

	// TAIItem , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__TAIItem( &obj_TAIItemIEs->tAIItem);
	obj_TAIItemIEs->tAIItem_isset = 1;



	*pTAIItemIEs = obj_TAIItemIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_TAIItemExtIEs( SI_S1AP_DT_PDU_TAIItemExtIEs ** pTAIItemExtIEs)
{
	SI_S1AP_DT_PDU_TAIItemExtIEs * obj_TAIItemExtIEs = (SI_S1AP_DT_PDU_TAIItemExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TAIItemExtIEs));
	memset( obj_TAIItemExtIEs, 0, sizeof( SI_S1AP_DT_PDU_TAIItemExtIEs));


	*pTAIItemExtIEs = obj_TAIItemExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_UE_associatedLogicalS1_ConnectionItemRes( SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemRes ** pUE_associatedLogicalS1_ConnectionItemRes)
{
	SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemRes * obj_UE_associatedLogicalS1_ConnectionItemRes = (SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemRes*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemRes));
	memset( obj_UE_associatedLogicalS1_ConnectionItemRes, 0, sizeof( SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemRes));

	// UE-associatedLogicalS1-ConnectionItem , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__UE_associatedLogicalS1_ConnectionItem( &obj_UE_associatedLogicalS1_ConnectionItemRes->uEassociatedLogicalS1ConnectionItem);
	obj_UE_associatedLogicalS1_ConnectionItemRes->uEassociatedLogicalS1ConnectionItem_isset = 1;



	*pUE_associatedLogicalS1_ConnectionItemRes = obj_UE_associatedLogicalS1_ConnectionItemRes;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_UE_associatedLogicalS1_ConnectionItemResAck( SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemResAck ** pUE_associatedLogicalS1_ConnectionItemResAck)
{
	SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemResAck * obj_UE_associatedLogicalS1_ConnectionItemResAck = (SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemResAck*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemResAck));
	memset( obj_UE_associatedLogicalS1_ConnectionItemResAck, 0, sizeof( SI_S1AP_DT_PDU_UE_associatedLogicalS1_ConnectionItemResAck));

	// UE-associatedLogicalS1-ConnectionItem , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__UE_associatedLogicalS1_ConnectionItem( &obj_UE_associatedLogicalS1_ConnectionItemResAck->uEassociatedLogicalS1ConnectionItem);
	obj_UE_associatedLogicalS1_ConnectionItemResAck->uEassociatedLogicalS1ConnectionItem_isset = 1;



	*pUE_associatedLogicalS1_ConnectionItemResAck = obj_UE_associatedLogicalS1_ConnectionItemResAck;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABToBeModifiedItemBearerModInd_ExtIEs( SI_S1AP_DT_PDU_E_RABToBeModifiedItemBearerModInd_ExtIEs ** pE_RABToBeModifiedItemBearerModInd_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABToBeModifiedItemBearerModInd_ExtIEs * obj_E_RABToBeModifiedItemBearerModInd_ExtIEs = (SI_S1AP_DT_PDU_E_RABToBeModifiedItemBearerModInd_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABToBeModifiedItemBearerModInd_ExtIEs));
	memset( obj_E_RABToBeModifiedItemBearerModInd_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABToBeModifiedItemBearerModInd_ExtIEs));


	*pE_RABToBeModifiedItemBearerModInd_ExtIEs = obj_E_RABToBeModifiedItemBearerModInd_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABNotToBeModifiedItemBearerModInd_ExtIEs( SI_S1AP_DT_PDU_E_RABNotToBeModifiedItemBearerModInd_ExtIEs ** pE_RABNotToBeModifiedItemBearerModInd_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABNotToBeModifiedItemBearerModInd_ExtIEs * obj_E_RABNotToBeModifiedItemBearerModInd_ExtIEs = (SI_S1AP_DT_PDU_E_RABNotToBeModifiedItemBearerModInd_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABNotToBeModifiedItemBearerModInd_ExtIEs));
	memset( obj_E_RABNotToBeModifiedItemBearerModInd_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABNotToBeModifiedItemBearerModInd_ExtIEs));


	*pE_RABNotToBeModifiedItemBearerModInd_ExtIEs = obj_E_RABNotToBeModifiedItemBearerModInd_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_CSGMembershipInfo_ExtIEs( SI_S1AP_DT_PDU_CSGMembershipInfo_ExtIEs ** pCSGMembershipInfo_ExtIEs)
{
	SI_S1AP_DT_PDU_CSGMembershipInfo_ExtIEs * obj_CSGMembershipInfo_ExtIEs = (SI_S1AP_DT_PDU_CSGMembershipInfo_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CSGMembershipInfo_ExtIEs));
	memset( obj_CSGMembershipInfo_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_CSGMembershipInfo_ExtIEs));


	*pCSGMembershipInfo_ExtIEs = obj_CSGMembershipInfo_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABModifyItemBearerModConfIEs( SI_S1AP_DT_PDU_E_RABModifyItemBearerModConfIEs ** pE_RABModifyItemBearerModConfIEs)
{
	SI_S1AP_DT_PDU_E_RABModifyItemBearerModConfIEs * obj_E_RABModifyItemBearerModConfIEs = (SI_S1AP_DT_PDU_E_RABModifyItemBearerModConfIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABModifyItemBearerModConfIEs));
	memset( obj_E_RABModifyItemBearerModConfIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABModifyItemBearerModConfIEs));

	// E-RABModifyItemBearerModConf , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__E_RABModifyItemBearerModConf( &obj_E_RABModifyItemBearerModConfIEs->eRABModifyItemBearerModConf);
	obj_E_RABModifyItemBearerModConfIEs->eRABModifyItemBearerModConf_isset = 1;



	*pE_RABModifyItemBearerModConfIEs = obj_E_RABModifyItemBearerModConfIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABModifyItemBearerModConfExtIEs( SI_S1AP_DT_PDU_E_RABModifyItemBearerModConfExtIEs ** pE_RABModifyItemBearerModConfExtIEs)
{
	SI_S1AP_DT_PDU_E_RABModifyItemBearerModConfExtIEs * obj_E_RABModifyItemBearerModConfExtIEs = (SI_S1AP_DT_PDU_E_RABModifyItemBearerModConfExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABModifyItemBearerModConfExtIEs));
	memset( obj_E_RABModifyItemBearerModConfExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABModifyItemBearerModConfExtIEs));


	*pE_RABModifyItemBearerModConfExtIEs = obj_E_RABModifyItemBearerModConfExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABFailedToResumeItemResumeReq_ExtIEs( SI_S1AP_DT_PDU_E_RABFailedToResumeItemResumeReq_ExtIEs ** pE_RABFailedToResumeItemResumeReq_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABFailedToResumeItemResumeReq_ExtIEs * obj_E_RABFailedToResumeItemResumeReq_ExtIEs = (SI_S1AP_DT_PDU_E_RABFailedToResumeItemResumeReq_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABFailedToResumeItemResumeReq_ExtIEs));
	memset( obj_E_RABFailedToResumeItemResumeReq_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABFailedToResumeItemResumeReq_ExtIEs));


	*pE_RABFailedToResumeItemResumeReq_ExtIEs = obj_E_RABFailedToResumeItemResumeReq_ExtIEs;
}

//  L:11326
void __si_s1ap__set_testdata__PDU_E_RABFailedToResumeItemResumeRes_ExtIEs( SI_S1AP_DT_PDU_E_RABFailedToResumeItemResumeRes_ExtIEs ** pE_RABFailedToResumeItemResumeRes_ExtIEs)
{
	SI_S1AP_DT_PDU_E_RABFailedToResumeItemResumeRes_ExtIEs * obj_E_RABFailedToResumeItemResumeRes_ExtIEs = (SI_S1AP_DT_PDU_E_RABFailedToResumeItemResumeRes_ExtIEs*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABFailedToResumeItemResumeRes_ExtIEs));
	memset( obj_E_RABFailedToResumeItemResumeRes_ExtIEs, 0, sizeof( SI_S1AP_DT_PDU_E_RABFailedToResumeItemResumeRes_ExtIEs));


	*pE_RABFailedToResumeItemResumeRes_ExtIEs = obj_E_RABFailedToResumeItemResumeRes_ExtIEs;
}



void __si_s1ap__Send_HandoverRequired_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_HandoverRequired * obj_HandoverRequired = (SI_S1AP_DT_PDU_HandoverRequired*) __si_allocM( sizeof(SI_S1AP_DT_PDU_HandoverRequired));
	memset( obj_HandoverRequired, 0, sizeof( SI_S1AP_DT_PDU_HandoverRequired));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_HandoverRequired->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_HandoverRequired->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_HandoverRequired->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_HandoverRequired->eNBUES1APID_isset = 1;


	// HandoverType , PRESENCE = mandatory   ENUMERATED, PRESENCE = mandatory
	obj_HandoverRequired->handoverType = HandoverType_intralte_val;
	obj_HandoverRequired->handoverType_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_HandoverRequired->cause);
	obj_HandoverRequired->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_HandoverRequired->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_HandoverRequired->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_HandoverRequired->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_HandoverRequired->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_HandoverRequired->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_HandoverRequired->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_HandoverRequired->cause_isset = 1;


	// TargetID , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__TargetID( &obj_HandoverRequired->targetID);
	obj_HandoverRequired->targetID->SelectedChoice = TargetID_targeteNB_ID_val;

	switch( obj_HandoverRequired->targetID->SelectedChoice)
	{
		case TargetID_targeteNB_ID_val:
			__si_s1ap__set_testdata__TargeteNB_ID( &obj_HandoverRequired->targetID->u.targeteNB_ID); //   L:11816
			break;
		case TargetID_targetRNC_ID_val:
			__si_s1ap__set_testdata__TargetRNC_ID( &obj_HandoverRequired->targetID->u.targetRNC_ID); //   L:11816
			break;
		case TargetID_cGI_val:
			__si_s1ap__set_testdata__CGI( &obj_HandoverRequired->targetID->u.cGI); //   L:11816
			break;
		case TargetID_targetgNgRanNode_ID_val:
			__si_s1ap__set_testdata__TargetNgRanNode_ID( &obj_HandoverRequired->targetID->u.targetgNgRanNode_ID_ext); //   L:11816
			break;
		default:
			break;
	}

	obj_HandoverRequired->targetID_isset = 1;


	// Direct-Forwarding-Path-Availability , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequired->directForwardingPathAvailability = Direct_Forwarding_Path_Availability_directPathAvailable_val;
	obj_HandoverRequired->directForwardingPathAvailability_isset = 1;


	// SRVCCHOIndication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequired->sRVCCHOIndication = SRVCCHOIndication_pSandCS_val;
	obj_HandoverRequired->sRVCCHOIndication_isset = 1;


	// Source-ToTarget-TransparentContainer    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_Source_ToTarget_TransparentContainer2( &obj_HandoverRequired->sourceToTargetTransparentContainer, "\x22\x12\x15\x17\x08", 5);
	obj_HandoverRequired->sourceToTargetTransparentContainer_isset = 1;


	// Source-ToTarget-TransparentContainer    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_Source_ToTarget_TransparentContainer2( &obj_HandoverRequired->sourceToTargetTransparentContainerSecondary, "\x10\x08\x22\x05\x04", 5);
	obj_HandoverRequired->sourceToTargetTransparentContainerSecondary_isset = 1;


	// MSClassmark2    OCTETSTRING, PRESENCE = conditional , MIN=0, MAX=0
	__si_s1ap_init_MSClassmark22( &obj_HandoverRequired->mSClassmark2, "\x13\x08\x10\x20\x06", 5);
	obj_HandoverRequired->mSClassmark2_isset = 1;


	// dataType is NULL 
	// CSG-Id , PRESENCE = optional   BITSTRING , MIN=27, MAX=27
	__si_s1ap_init_CSG_Id2( &obj_HandoverRequired->cSGId, "6008", 4, 27);
	obj_HandoverRequired->cSGId->bitslen = 27;
	obj_HandoverRequired->cSGId_isset = 1;


	// CellAccessMode , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequired->cellAccessMode = CellAccessMode_hybrid_val;
	obj_HandoverRequired->cellAccessMode_isset = 1;


	// PS-ServiceNotAvailable , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequired->pSServiceNotAvailable = PS_ServiceNotAvailable_ps_service_not_available_val;
	obj_HandoverRequired->pSServiceNotAvailable_isset = 1;



	__si_s1ap_send_HandoverRequired( obj_HandoverRequired, node);
	__si_s1ap_memfree_pdu_HandoverRequired( obj_HandoverRequired);
}

void __si_s1ap__Send_HandoverCommand_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_HandoverCommand * obj_HandoverCommand = (SI_S1AP_DT_PDU_HandoverCommand*) __si_allocM( sizeof(SI_S1AP_DT_PDU_HandoverCommand));
	memset( obj_HandoverCommand, 0, sizeof( SI_S1AP_DT_PDU_HandoverCommand));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_HandoverCommand->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_HandoverCommand->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_HandoverCommand->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_HandoverCommand->eNBUES1APID_isset = 1;


	// HandoverType , PRESENCE = mandatory   ENUMERATED, PRESENCE = mandatory
	obj_HandoverCommand->handoverType = HandoverType_intralte_val;
	obj_HandoverCommand->handoverType_isset = 1;


	// NASSecurityParametersfromE-UTRAN    OCTETSTRING, PRESENCE = conditional , MIN=0, MAX=0
	__si_s1ap_init_NASSecurityParametersfromE_UTRAN2( &obj_HandoverCommand->nASSecurityParametersfromEUTRAN, "\x21\x23\x07\x10\x13", 5);
	obj_HandoverCommand->nASSecurityParametersfromEUTRAN_isset = 1;


	// dataType is NULL 
	// E-RABList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABList( &obj_HandoverCommand->eRABtoReleaseListHOCmd);
	obj_HandoverCommand->eRABtoReleaseListHOCmd_isset = 1;


	// Target-ToSource-TransparentContainer    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_Target_ToSource_TransparentContainer2( &obj_HandoverCommand->targetToSourceTransparentContainer, "\x23\x07\x18\x21\x15", 5);
	obj_HandoverCommand->targetToSourceTransparentContainer_isset = 1;


	// Target-ToSource-TransparentContainer    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_Target_ToSource_TransparentContainer2( &obj_HandoverCommand->targetToSourceTransparentContainerSecondary, "\x02\x21\x05\x15\x10", 5);
	obj_HandoverCommand->targetToSourceTransparentContainerSecondary_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_HandoverCommand->criticalityDiagnostics);
	obj_HandoverCommand->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_HandoverCommand( obj_HandoverCommand, node);
	__si_s1ap_memfree_pdu_HandoverCommand( obj_HandoverCommand);
}

void __si_s1ap__Send_HandoverPreparationFailure_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_HandoverPreparationFailure * obj_HandoverPreparationFailure = (SI_S1AP_DT_PDU_HandoverPreparationFailure*) __si_allocM( sizeof(SI_S1AP_DT_PDU_HandoverPreparationFailure));
	memset( obj_HandoverPreparationFailure, 0, sizeof( SI_S1AP_DT_PDU_HandoverPreparationFailure));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_HandoverPreparationFailure->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_HandoverPreparationFailure->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_HandoverPreparationFailure->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_HandoverPreparationFailure->eNBUES1APID_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_HandoverPreparationFailure->cause);
	obj_HandoverPreparationFailure->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_HandoverPreparationFailure->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_HandoverPreparationFailure->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_HandoverPreparationFailure->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_HandoverPreparationFailure->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_HandoverPreparationFailure->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_HandoverPreparationFailure->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_HandoverPreparationFailure->cause_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_HandoverPreparationFailure->criticalityDiagnostics);
	obj_HandoverPreparationFailure->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_HandoverPreparationFailure( obj_HandoverPreparationFailure, node);
	__si_s1ap_memfree_pdu_HandoverPreparationFailure( obj_HandoverPreparationFailure);
}

void __si_s1ap__Send_HandoverRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_HandoverRequest * obj_HandoverRequest = (SI_S1AP_DT_PDU_HandoverRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_HandoverRequest));
	memset( obj_HandoverRequest, 0, sizeof( SI_S1AP_DT_PDU_HandoverRequest));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_HandoverRequest->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_HandoverRequest->mMEUES1APID_isset = 1;


	// HandoverType , PRESENCE = mandatory   ENUMERATED, PRESENCE = mandatory
	obj_HandoverRequest->handoverType = HandoverType_intralte_val;
	obj_HandoverRequest->handoverType_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_HandoverRequest->cause);
	obj_HandoverRequest->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_HandoverRequest->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_HandoverRequest->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_HandoverRequest->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_HandoverRequest->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_HandoverRequest->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_HandoverRequest->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_HandoverRequest->cause_isset = 1;


	// UEAggregateMaximumBitrate , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__UEAggregateMaximumBitrate( &obj_HandoverRequest->uEaggregateMaximumBitrate);
	obj_HandoverRequest->uEaggregateMaximumBitrate_isset = 1;


	// dataType is NULL 
	// Source-ToTarget-TransparentContainer    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_Source_ToTarget_TransparentContainer2( &obj_HandoverRequest->sourceToTargetTransparentContainer, "\x17\x18\x20\x23\x07", 5);
	obj_HandoverRequest->sourceToTargetTransparentContainer_isset = 1;


	// UESecurityCapabilities , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__UESecurityCapabilities( &obj_HandoverRequest->uESecurityCapabilities);
	obj_HandoverRequest->uESecurityCapabilities_isset = 1;


	// HandoverRestrictionList , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__HandoverRestrictionList( &obj_HandoverRequest->handoverRestrictionList);
	obj_HandoverRequest->handoverRestrictionList_isset = 1;


	// TraceActivation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__TraceActivation( &obj_HandoverRequest->traceActivation);
	obj_HandoverRequest->traceActivation_isset = 1;


	// RequestType , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__RequestType( &obj_HandoverRequest->requestType);
	obj_HandoverRequest->requestType_isset = 1;


	// SRVCCOperationPossible , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequest->sRVCCOperationPossible = SRVCCOperationPossible_possible_val;
	obj_HandoverRequest->sRVCCOperationPossible_isset = 1;


	// SecurityContext , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__SecurityContext( &obj_HandoverRequest->securityContext);
	obj_HandoverRequest->securityContext_isset = 1;


	// NASSecurityParameterstoE-UTRAN    OCTETSTRING, PRESENCE = conditional , MIN=0, MAX=0
	__si_s1ap_init_NASSecurityParameterstoE_UTRAN2( &obj_HandoverRequest->nASSecurityParameterstoEUTRAN, "\x20\x03\x15\x22\x03", 5);
	obj_HandoverRequest->nASSecurityParameterstoEUTRAN_isset = 1;


	// CSG-Id , PRESENCE = optional   BITSTRING , MIN=27, MAX=27
	__si_s1ap_init_CSG_Id2( &obj_HandoverRequest->cSGId, "6299", 4, 27);
	obj_HandoverRequest->cSGId->bitslen = 27;
	obj_HandoverRequest->cSGId_isset = 1;


	// CSGMembershipStatus , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequest->cSGMembershipStatus = CSGMembershipStatus_member_val;
	obj_HandoverRequest->cSGMembershipStatus_isset = 1;


	// GUMMEI , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__GUMMEI( &obj_HandoverRequest->gUMMEIID);
	obj_HandoverRequest->gUMMEIID_isset = 1;


	// MME-UE-S1AP-ID , PRESENCE = optional  INTEGER , MIN=0, MAX=4294967295
	obj_HandoverRequest->mMEUES1APID2 = __getTestINTEGER( 0, 4294967295);
	obj_HandoverRequest->mMEUES1APID2_isset = 1;


	// ManagementBasedMDTAllowed , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequest->managementBasedMDTAllowed = ManagementBasedMDTAllowed_allowed_val;
	obj_HandoverRequest->managementBasedMDTAllowed_isset = 1;


	// MDTPLMNList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__MDTPLMNList( &obj_HandoverRequest->managementBasedMDTPLMNList);
	obj_HandoverRequest->managementBasedMDTPLMNList_isset = 1;


	// Masked-IMEISV , PRESENCE = optional   BITSTRING , MIN=64, MAX=64
	__si_s1ap_init_Masked_IMEISV2( &obj_HandoverRequest->maskedIMEISV, "64855938", 8, 64);
	obj_HandoverRequest->maskedIMEISV->bitslen = 64;
	obj_HandoverRequest->maskedIMEISV_isset = 1;


	// ExpectedUEBehaviour , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__ExpectedUEBehaviour( &obj_HandoverRequest->expectedUEBehaviour);
	obj_HandoverRequest->expectedUEBehaviour_isset = 1;


	// ProSeAuthorized , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__ProSeAuthorized( &obj_HandoverRequest->proSeAuthorized);
	obj_HandoverRequest->proSeAuthorized_isset = 1;


	// UEUserPlaneCIoTSupportIndicator , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequest->uEUserPlaneCIoTSupportIndicator = UEUserPlaneCIoTSupportIndicator_supported_val;
	obj_HandoverRequest->uEUserPlaneCIoTSupportIndicator_isset = 1;


	// V2XServicesAuthorized , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__V2XServicesAuthorized( &obj_HandoverRequest->v2XServicesAuthorized);
	obj_HandoverRequest->v2XServicesAuthorized_isset = 1;


	// UESidelinkAggregateMaximumBitrate , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UESidelinkAggregateMaximumBitrate( &obj_HandoverRequest->uESidelinkAggregateMaximumBitrate);
	obj_HandoverRequest->uESidelinkAggregateMaximumBitrate_isset = 1;


	// EnhancedCoverageRestricted , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequest->enhancedCoverageRestricted = EnhancedCoverageRestricted_restricted_val;
	obj_HandoverRequest->enhancedCoverageRestricted_isset = 1;


	// NRUESecurityCapabilities , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRUESecurityCapabilities( &obj_HandoverRequest->nRUESecurityCapabilities);
	obj_HandoverRequest->nRUESecurityCapabilities_isset = 1;


	// CE-ModeBRestricted , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequest->cEModeBRestricted = CE_ModeBRestricted_restricted_val;
	obj_HandoverRequest->cEModeBRestricted_isset = 1;


	// AerialUEsubscriptionInformation , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequest->aerialUEsubscriptionInformation = AerialUEsubscriptionInformation_allowed_val;
	obj_HandoverRequest->aerialUEsubscriptionInformation_isset = 1;


	// PendingDataIndication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequest->pendingDataIndication = PendingDataIndication_true_val;
	obj_HandoverRequest->pendingDataIndication_isset = 1;


	// Subscription-Based-UE-DifferentiationInfo , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__Subscription_Based_UE_DifferentiationInfo( &obj_HandoverRequest->subscriptionBasedUEDifferentiationInfo);
	obj_HandoverRequest->subscriptionBasedUEDifferentiationInfo_isset = 1;


	// AdditionalRRMPriorityIndex , PRESENCE = optional   BITSTRING , MIN=32, MAX=32
	__si_s1ap_init_AdditionalRRMPriorityIndex2( &obj_HandoverRequest->additionalRRMPriorityIndex, "4231", 4, 32);
	obj_HandoverRequest->additionalRRMPriorityIndex->bitslen = 32;
	obj_HandoverRequest->additionalRRMPriorityIndex_isset = 1;


	// IAB-Authorized , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequest->iABAuthorized = IAB_Authorized_authorized_val;
	obj_HandoverRequest->iABAuthorized_isset = 1;


	// NRV2XServicesAuthorized , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRV2XServicesAuthorized( &obj_HandoverRequest->nRV2XServicesAuthorized);
	obj_HandoverRequest->nRV2XServicesAuthorized_isset = 1;


	// NRUESidelinkAggregateMaximumBitrate , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRUESidelinkAggregateMaximumBitrate( &obj_HandoverRequest->nRUESidelinkAggregateMaximumBitrate);
	obj_HandoverRequest->nRUESidelinkAggregateMaximumBitrate_isset = 1;


	// PC5QoSParameters , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__PC5QoSParameters( &obj_HandoverRequest->pC5QoSParameters);
	obj_HandoverRequest->pC5QoSParameters_isset = 1;


	// UERadioCapabilityID    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapabilityID2( &obj_HandoverRequest->uERadioCapabilityID, "\x02\x10\x21\x23\x22", 5);
	obj_HandoverRequest->uERadioCapabilityID_isset = 1;



	__si_s1ap_send_HandoverRequest( obj_HandoverRequest, node);
	__si_s1ap_memfree_pdu_HandoverRequest( obj_HandoverRequest);
}

void __si_s1ap__Send_HandoverRequestAcknowledge_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_HandoverRequestAcknowledge * obj_HandoverRequestAcknowledge = (SI_S1AP_DT_PDU_HandoverRequestAcknowledge*) __si_allocM( sizeof(SI_S1AP_DT_PDU_HandoverRequestAcknowledge));
	memset( obj_HandoverRequestAcknowledge, 0, sizeof( SI_S1AP_DT_PDU_HandoverRequestAcknowledge));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_HandoverRequestAcknowledge->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_HandoverRequestAcknowledge->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_HandoverRequestAcknowledge->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_HandoverRequestAcknowledge->eNBUES1APID_isset = 1;


	// dataType is NULL 
	// dataType is NULL 
	// Target-ToSource-TransparentContainer    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_Target_ToSource_TransparentContainer2( &obj_HandoverRequestAcknowledge->targetToSourceTransparentContainer, "\x16\x22\x04\x10\x04", 5);
	obj_HandoverRequestAcknowledge->targetToSourceTransparentContainer_isset = 1;


	// CSG-Id , PRESENCE = optional   BITSTRING , MIN=27, MAX=27
	__si_s1ap_init_CSG_Id2( &obj_HandoverRequestAcknowledge->cSGId, "0266", 4, 27);
	obj_HandoverRequestAcknowledge->cSGId->bitslen = 27;
	obj_HandoverRequestAcknowledge->cSGId_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_HandoverRequestAcknowledge->criticalityDiagnostics);
	obj_HandoverRequestAcknowledge->criticalityDiagnostics_isset = 1;


	// CellAccessMode , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequestAcknowledge->cellAccessMode = CellAccessMode_hybrid_val;
	obj_HandoverRequestAcknowledge->cellAccessMode_isset = 1;


	// CE-mode-B-SupportIndicator , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverRequestAcknowledge->cEmodeBSupportIndicator = CE_mode_B_SupportIndicator_supported_val;
	obj_HandoverRequestAcknowledge->cEmodeBSupportIndicator_isset = 1;



	__si_s1ap_send_HandoverRequestAcknowledge( obj_HandoverRequestAcknowledge, node);
	__si_s1ap_memfree_pdu_HandoverRequestAcknowledge( obj_HandoverRequestAcknowledge);
}

void __si_s1ap__Send_HandoverFailure_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_HandoverFailure * obj_HandoverFailure = (SI_S1AP_DT_PDU_HandoverFailure*) __si_allocM( sizeof(SI_S1AP_DT_PDU_HandoverFailure));
	memset( obj_HandoverFailure, 0, sizeof( SI_S1AP_DT_PDU_HandoverFailure));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_HandoverFailure->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_HandoverFailure->mMEUES1APID_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_HandoverFailure->cause);
	obj_HandoverFailure->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_HandoverFailure->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_HandoverFailure->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_HandoverFailure->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_HandoverFailure->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_HandoverFailure->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_HandoverFailure->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_HandoverFailure->cause_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_HandoverFailure->criticalityDiagnostics);
	obj_HandoverFailure->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_HandoverFailure( obj_HandoverFailure, node);
	__si_s1ap_memfree_pdu_HandoverFailure( obj_HandoverFailure);
}

void __si_s1ap__Send_HandoverNotify_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_HandoverNotify * obj_HandoverNotify = (SI_S1AP_DT_PDU_HandoverNotify*) __si_allocM( sizeof(SI_S1AP_DT_PDU_HandoverNotify));
	memset( obj_HandoverNotify, 0, sizeof( SI_S1AP_DT_PDU_HandoverNotify));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_HandoverNotify->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_HandoverNotify->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_HandoverNotify->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_HandoverNotify->eNBUES1APID_isset = 1;


	// EUTRAN-CGI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_HandoverNotify->eUTRANCGI);
	obj_HandoverNotify->eUTRANCGI_isset = 1;


	// TAI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__TAI( &obj_HandoverNotify->tAI);
	obj_HandoverNotify->tAI_isset = 1;


	// TunnelInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__TunnelInformation( &obj_HandoverNotify->tunnelInformationforBBF);
	obj_HandoverNotify->tunnelInformationforBBF_isset = 1;


	// LHN-ID    OCTETSTRING, PRESENCE = optional , MIN=32, MAX=256
	__si_s1ap_init_LHN_ID2( &obj_HandoverNotify->lHNID, "\x19\x16\x05\x21\x05\x22\x12\x24\x23\x24\x16\x01\x23\x14\x22\x04\x11\x20\x17\x24\x12\x22\x12\x07\x07\x01\x12\x03\x23\x21\x19\x15", 32);
	obj_HandoverNotify->lHNID_isset = 1;


	// PSCellInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__PSCellInformation( &obj_HandoverNotify->pSCellInformation);
	obj_HandoverNotify->pSCellInformation_isset = 1;


	// NotifySourceeNB , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_HandoverNotify->notifySourceeNB = NotifySourceeNB_notifySource_val;
	obj_HandoverNotify->notifySourceeNB_isset = 1;


	// LTE-NTN-TAI-Information , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__LTE_NTN_TAI_Information( &obj_HandoverNotify->lTENTNTAIInformation);
	obj_HandoverNotify->lTENTNTAIInformation_isset = 1;



	__si_s1ap_send_HandoverNotify( obj_HandoverNotify, node);
	__si_s1ap_memfree_pdu_HandoverNotify( obj_HandoverNotify);
}

void __si_s1ap__Send_PathSwitchRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_PathSwitchRequest * obj_PathSwitchRequest = (SI_S1AP_DT_PDU_PathSwitchRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_PathSwitchRequest));
	memset( obj_PathSwitchRequest, 0, sizeof( SI_S1AP_DT_PDU_PathSwitchRequest));

	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_PathSwitchRequest->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_PathSwitchRequest->eNBUES1APID_isset = 1;


	// dataType is NULL 
	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_PathSwitchRequest->sourceMMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_PathSwitchRequest->sourceMMEUES1APID_isset = 1;


	// EUTRAN-CGI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_PathSwitchRequest->eUTRANCGI);
	obj_PathSwitchRequest->eUTRANCGI_isset = 1;


	// TAI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__TAI( &obj_PathSwitchRequest->tAI);
	obj_PathSwitchRequest->tAI_isset = 1;


	// UESecurityCapabilities , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__UESecurityCapabilities( &obj_PathSwitchRequest->uESecurityCapabilities);
	obj_PathSwitchRequest->uESecurityCapabilities_isset = 1;


	// CSG-Id , PRESENCE = optional   BITSTRING , MIN=27, MAX=27
	__si_s1ap_init_CSG_Id2( &obj_PathSwitchRequest->cSGId, "4594", 4, 27);
	obj_PathSwitchRequest->cSGId->bitslen = 27;
	obj_PathSwitchRequest->cSGId_isset = 1;


	// CellAccessMode , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_PathSwitchRequest->cellAccessMode = CellAccessMode_hybrid_val;
	obj_PathSwitchRequest->cellAccessMode_isset = 1;


	// GUMMEI , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__GUMMEI( &obj_PathSwitchRequest->sourceMMEGUMMEI);
	obj_PathSwitchRequest->sourceMMEGUMMEI_isset = 1;


	// CSGMembershipStatus , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_PathSwitchRequest->cSGMembershipStatus = CSGMembershipStatus_member_val;
	obj_PathSwitchRequest->cSGMembershipStatus_isset = 1;


	// TunnelInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__TunnelInformation( &obj_PathSwitchRequest->tunnelInformationforBBF);
	obj_PathSwitchRequest->tunnelInformationforBBF_isset = 1;


	// LHN-ID    OCTETSTRING, PRESENCE = optional , MIN=32, MAX=256
	__si_s1ap_init_LHN_ID2( &obj_PathSwitchRequest->lHNID, "\x24\x07\x20\x11\x18\x07\x02\x08\x21\x24\x18\x22\x17\x08\x20\x05\x10\x07\x01\x08\x11\x04\x21\x06\x07\x23\x07\x15\x24\x15\x24\x15", 32);
	obj_PathSwitchRequest->lHNID_isset = 1;


	// RRC-Establishment-Cause , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_PathSwitchRequest->rRCResumeCause = RRC_Establishment_Cause_emergency_val;
	obj_PathSwitchRequest->rRCResumeCause_isset = 1;


	// NRUESecurityCapabilities , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRUESecurityCapabilities( &obj_PathSwitchRequest->nRUESecurityCapabilities);
	obj_PathSwitchRequest->nRUESecurityCapabilities_isset = 1;


	// PSCellInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__PSCellInformation( &obj_PathSwitchRequest->pSCellInformation);
	obj_PathSwitchRequest->pSCellInformation_isset = 1;


	// LTE-NTN-TAI-Information , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__LTE_NTN_TAI_Information( &obj_PathSwitchRequest->lTENTNTAIInformation);
	obj_PathSwitchRequest->lTENTNTAIInformation_isset = 1;



	__si_s1ap_send_PathSwitchRequest( obj_PathSwitchRequest, node);
	__si_s1ap_memfree_pdu_PathSwitchRequest( obj_PathSwitchRequest);
}

void __si_s1ap__Send_PathSwitchRequestAcknowledge_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_PathSwitchRequestAcknowledge * obj_PathSwitchRequestAcknowledge = (SI_S1AP_DT_PDU_PathSwitchRequestAcknowledge*) __si_allocM( sizeof(SI_S1AP_DT_PDU_PathSwitchRequestAcknowledge));
	memset( obj_PathSwitchRequestAcknowledge, 0, sizeof( SI_S1AP_DT_PDU_PathSwitchRequestAcknowledge));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_PathSwitchRequestAcknowledge->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_PathSwitchRequestAcknowledge->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_PathSwitchRequestAcknowledge->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_PathSwitchRequestAcknowledge->eNBUES1APID_isset = 1;


	// UEAggregateMaximumBitrate , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UEAggregateMaximumBitrate( &obj_PathSwitchRequestAcknowledge->uEaggregateMaximumBitrate);
	obj_PathSwitchRequestAcknowledge->uEaggregateMaximumBitrate_isset = 1;


	// dataType is NULL 
	// E-RABList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABList( &obj_PathSwitchRequestAcknowledge->eRABToBeReleasedList);
	obj_PathSwitchRequestAcknowledge->eRABToBeReleasedList_isset = 1;


	// SecurityContext , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__SecurityContext( &obj_PathSwitchRequestAcknowledge->securityContext);
	obj_PathSwitchRequestAcknowledge->securityContext_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_PathSwitchRequestAcknowledge->criticalityDiagnostics);
	obj_PathSwitchRequestAcknowledge->criticalityDiagnostics_isset = 1;


	// MME-UE-S1AP-ID , PRESENCE = optional  INTEGER , MIN=0, MAX=4294967295
	obj_PathSwitchRequestAcknowledge->mMEUES1APID2 = __getTestINTEGER( 0, 4294967295);
	obj_PathSwitchRequestAcknowledge->mMEUES1APID2_isset = 1;


	// CSGMembershipStatus , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_PathSwitchRequestAcknowledge->cSGMembershipStatus = CSGMembershipStatus_member_val;
	obj_PathSwitchRequestAcknowledge->cSGMembershipStatus_isset = 1;


	// ProSeAuthorized , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__ProSeAuthorized( &obj_PathSwitchRequestAcknowledge->proSeAuthorized);
	obj_PathSwitchRequestAcknowledge->proSeAuthorized_isset = 1;


	// UEUserPlaneCIoTSupportIndicator , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_PathSwitchRequestAcknowledge->uEUserPlaneCIoTSupportIndicator = UEUserPlaneCIoTSupportIndicator_supported_val;
	obj_PathSwitchRequestAcknowledge->uEUserPlaneCIoTSupportIndicator_isset = 1;


	// V2XServicesAuthorized , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__V2XServicesAuthorized( &obj_PathSwitchRequestAcknowledge->v2XServicesAuthorized);
	obj_PathSwitchRequestAcknowledge->v2XServicesAuthorized_isset = 1;


	// UESidelinkAggregateMaximumBitrate , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UESidelinkAggregateMaximumBitrate( &obj_PathSwitchRequestAcknowledge->uESidelinkAggregateMaximumBitrate);
	obj_PathSwitchRequestAcknowledge->uESidelinkAggregateMaximumBitrate_isset = 1;


	// EnhancedCoverageRestricted , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_PathSwitchRequestAcknowledge->enhancedCoverageRestricted = EnhancedCoverageRestricted_restricted_val;
	obj_PathSwitchRequestAcknowledge->enhancedCoverageRestricted_isset = 1;


	// NRUESecurityCapabilities , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRUESecurityCapabilities( &obj_PathSwitchRequestAcknowledge->nRUESecurityCapabilities);
	obj_PathSwitchRequestAcknowledge->nRUESecurityCapabilities_isset = 1;


	// CE-ModeBRestricted , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_PathSwitchRequestAcknowledge->cEModeBRestricted = CE_ModeBRestricted_restricted_val;
	obj_PathSwitchRequestAcknowledge->cEModeBRestricted_isset = 1;


	// AerialUEsubscriptionInformation , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_PathSwitchRequestAcknowledge->aerialUEsubscriptionInformation = AerialUEsubscriptionInformation_allowed_val;
	obj_PathSwitchRequestAcknowledge->aerialUEsubscriptionInformation_isset = 1;


	// PendingDataIndication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_PathSwitchRequestAcknowledge->pendingDataIndication = PendingDataIndication_true_val;
	obj_PathSwitchRequestAcknowledge->pendingDataIndication_isset = 1;


	// Subscription-Based-UE-DifferentiationInfo , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__Subscription_Based_UE_DifferentiationInfo( &obj_PathSwitchRequestAcknowledge->subscriptionBasedUEDifferentiationInfo);
	obj_PathSwitchRequestAcknowledge->subscriptionBasedUEDifferentiationInfo_isset = 1;


	// HandoverRestrictionList , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__HandoverRestrictionList( &obj_PathSwitchRequestAcknowledge->handoverRestrictionList);
	obj_PathSwitchRequestAcknowledge->handoverRestrictionList_isset = 1;


	// AdditionalRRMPriorityIndex , PRESENCE = optional   BITSTRING , MIN=32, MAX=32
	__si_s1ap_init_AdditionalRRMPriorityIndex2( &obj_PathSwitchRequestAcknowledge->additionalRRMPriorityIndex, "4537", 4, 32);
	obj_PathSwitchRequestAcknowledge->additionalRRMPriorityIndex->bitslen = 32;
	obj_PathSwitchRequestAcknowledge->additionalRRMPriorityIndex_isset = 1;


	// NRV2XServicesAuthorized , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRV2XServicesAuthorized( &obj_PathSwitchRequestAcknowledge->nRV2XServicesAuthorized);
	obj_PathSwitchRequestAcknowledge->nRV2XServicesAuthorized_isset = 1;


	// NRUESidelinkAggregateMaximumBitrate , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRUESidelinkAggregateMaximumBitrate( &obj_PathSwitchRequestAcknowledge->nRUESidelinkAggregateMaximumBitrate);
	obj_PathSwitchRequestAcknowledge->nRUESidelinkAggregateMaximumBitrate_isset = 1;


	// PC5QoSParameters , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__PC5QoSParameters( &obj_PathSwitchRequestAcknowledge->pC5QoSParameters);
	obj_PathSwitchRequestAcknowledge->pC5QoSParameters_isset = 1;


	// UERadioCapabilityID    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapabilityID2( &obj_PathSwitchRequestAcknowledge->uERadioCapabilityID, "\x09\x22\x05\x24\x18", 5);
	obj_PathSwitchRequestAcknowledge->uERadioCapabilityID_isset = 1;


	// UESecurityCapabilities , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UESecurityCapabilities( &obj_PathSwitchRequestAcknowledge->uESecurityCapabilities);
	obj_PathSwitchRequestAcknowledge->uESecurityCapabilities_isset = 1;


	// dataType is NULL 

	__si_s1ap_send_PathSwitchRequestAcknowledge( obj_PathSwitchRequestAcknowledge, node);
	__si_s1ap_memfree_pdu_PathSwitchRequestAcknowledge( obj_PathSwitchRequestAcknowledge);
}

void __si_s1ap__Send_PathSwitchRequestFailure_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_PathSwitchRequestFailure * obj_PathSwitchRequestFailure = (SI_S1AP_DT_PDU_PathSwitchRequestFailure*) __si_allocM( sizeof(SI_S1AP_DT_PDU_PathSwitchRequestFailure));
	memset( obj_PathSwitchRequestFailure, 0, sizeof( SI_S1AP_DT_PDU_PathSwitchRequestFailure));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_PathSwitchRequestFailure->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_PathSwitchRequestFailure->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_PathSwitchRequestFailure->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_PathSwitchRequestFailure->eNBUES1APID_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_PathSwitchRequestFailure->cause);
	obj_PathSwitchRequestFailure->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_PathSwitchRequestFailure->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_PathSwitchRequestFailure->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_PathSwitchRequestFailure->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_PathSwitchRequestFailure->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_PathSwitchRequestFailure->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_PathSwitchRequestFailure->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_PathSwitchRequestFailure->cause_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_PathSwitchRequestFailure->criticalityDiagnostics);
	obj_PathSwitchRequestFailure->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_PathSwitchRequestFailure( obj_PathSwitchRequestFailure, node);
	__si_s1ap_memfree_pdu_PathSwitchRequestFailure( obj_PathSwitchRequestFailure);
}

void __si_s1ap__Send_E_RABSetupRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_E_RABSetupRequest * obj_E_RABSetupRequest = (SI_S1AP_DT_PDU_E_RABSetupRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABSetupRequest));
	memset( obj_E_RABSetupRequest, 0, sizeof( SI_S1AP_DT_PDU_E_RABSetupRequest));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_E_RABSetupRequest->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_E_RABSetupRequest->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_E_RABSetupRequest->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_E_RABSetupRequest->eNBUES1APID_isset = 1;


	// UEAggregateMaximumBitrate , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UEAggregateMaximumBitrate( &obj_E_RABSetupRequest->uEaggregateMaximumBitrate);
	obj_E_RABSetupRequest->uEaggregateMaximumBitrate_isset = 1;


	// E-RABToBeSetupListBearerSUReq , PRESENCE = mandatory   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABToBeSetupListBearerSUReq( &obj_E_RABSetupRequest->eRABToBeSetupListBearerSUReq);
	obj_E_RABSetupRequest->eRABToBeSetupListBearerSUReq_isset = 1;



	__si_s1ap_send_E_RABSetupRequest( obj_E_RABSetupRequest, node);
	__si_s1ap_memfree_pdu_E_RABSetupRequest( obj_E_RABSetupRequest);
}

void __si_s1ap__Send_E_RABSetupResponse_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_E_RABSetupResponse * obj_E_RABSetupResponse = (SI_S1AP_DT_PDU_E_RABSetupResponse*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABSetupResponse));
	memset( obj_E_RABSetupResponse, 0, sizeof( SI_S1AP_DT_PDU_E_RABSetupResponse));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_E_RABSetupResponse->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_E_RABSetupResponse->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_E_RABSetupResponse->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_E_RABSetupResponse->eNBUES1APID_isset = 1;


	// E-RABSetupListBearerSURes , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABSetupListBearerSURes( &obj_E_RABSetupResponse->eRABSetupListBearerSURes);
	obj_E_RABSetupResponse->eRABSetupListBearerSURes_isset = 1;


	// E-RABList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABList( &obj_E_RABSetupResponse->eRABFailedToSetupListBearerSURes);
	obj_E_RABSetupResponse->eRABFailedToSetupListBearerSURes_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_E_RABSetupResponse->criticalityDiagnostics);
	obj_E_RABSetupResponse->criticalityDiagnostics_isset = 1;


	// UserLocationInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UserLocationInformation( &obj_E_RABSetupResponse->userLocationInformation);
	obj_E_RABSetupResponse->userLocationInformation_isset = 1;



	__si_s1ap_send_E_RABSetupResponse( obj_E_RABSetupResponse, node);
	__si_s1ap_memfree_pdu_E_RABSetupResponse( obj_E_RABSetupResponse);
}

void __si_s1ap__Send_E_RABModifyRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_E_RABModifyRequest * obj_E_RABModifyRequest = (SI_S1AP_DT_PDU_E_RABModifyRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABModifyRequest));
	memset( obj_E_RABModifyRequest, 0, sizeof( SI_S1AP_DT_PDU_E_RABModifyRequest));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_E_RABModifyRequest->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_E_RABModifyRequest->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_E_RABModifyRequest->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_E_RABModifyRequest->eNBUES1APID_isset = 1;


	// UEAggregateMaximumBitrate , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UEAggregateMaximumBitrate( &obj_E_RABModifyRequest->uEaggregateMaximumBitrate);
	obj_E_RABModifyRequest->uEaggregateMaximumBitrate_isset = 1;


	// E-RABToBeModifiedListBearerModReq , PRESENCE = mandatory   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABToBeModifiedListBearerModReq( &obj_E_RABModifyRequest->eRABToBeModifiedListBearerModReq);
	obj_E_RABModifyRequest->eRABToBeModifiedListBearerModReq_isset = 1;


	// SecondaryRATDataUsageRequest , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_E_RABModifyRequest->secondaryRATDataUsageRequest = SecondaryRATDataUsageRequest_requested_val;
	obj_E_RABModifyRequest->secondaryRATDataUsageRequest_isset = 1;



	__si_s1ap_send_E_RABModifyRequest( obj_E_RABModifyRequest, node);
	__si_s1ap_memfree_pdu_E_RABModifyRequest( obj_E_RABModifyRequest);
}

void __si_s1ap__Send_E_RABModifyResponse_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_E_RABModifyResponse * obj_E_RABModifyResponse = (SI_S1AP_DT_PDU_E_RABModifyResponse*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABModifyResponse));
	memset( obj_E_RABModifyResponse, 0, sizeof( SI_S1AP_DT_PDU_E_RABModifyResponse));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_E_RABModifyResponse->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_E_RABModifyResponse->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_E_RABModifyResponse->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_E_RABModifyResponse->eNBUES1APID_isset = 1;


	// E-RABModifyListBearerModRes , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABModifyListBearerModRes( &obj_E_RABModifyResponse->eRABModifyListBearerModRes);
	obj_E_RABModifyResponse->eRABModifyListBearerModRes_isset = 1;


	// E-RABList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABList( &obj_E_RABModifyResponse->eRABFailedToModifyList);
	obj_E_RABModifyResponse->eRABFailedToModifyList_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_E_RABModifyResponse->criticalityDiagnostics);
	obj_E_RABModifyResponse->criticalityDiagnostics_isset = 1;


	// SecondaryRATDataUsageReportList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__SecondaryRATDataUsageReportList( &obj_E_RABModifyResponse->secondaryRATDataUsageReportList);
	obj_E_RABModifyResponse->secondaryRATDataUsageReportList_isset = 1;


	// UserLocationInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UserLocationInformation( &obj_E_RABModifyResponse->userLocationInformation);
	obj_E_RABModifyResponse->userLocationInformation_isset = 1;



	__si_s1ap_send_E_RABModifyResponse( obj_E_RABModifyResponse, node);
	__si_s1ap_memfree_pdu_E_RABModifyResponse( obj_E_RABModifyResponse);
}

void __si_s1ap__Send_E_RABReleaseCommand_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_E_RABReleaseCommand * obj_E_RABReleaseCommand = (SI_S1AP_DT_PDU_E_RABReleaseCommand*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABReleaseCommand));
	memset( obj_E_RABReleaseCommand, 0, sizeof( SI_S1AP_DT_PDU_E_RABReleaseCommand));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_E_RABReleaseCommand->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_E_RABReleaseCommand->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_E_RABReleaseCommand->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_E_RABReleaseCommand->eNBUES1APID_isset = 1;


	// UEAggregateMaximumBitrate , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UEAggregateMaximumBitrate( &obj_E_RABReleaseCommand->uEaggregateMaximumBitrate);
	obj_E_RABReleaseCommand->uEaggregateMaximumBitrate_isset = 1;


	// E-RABList , PRESENCE = mandatory   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABList( &obj_E_RABReleaseCommand->eRABToBeReleasedList);
	obj_E_RABReleaseCommand->eRABToBeReleasedList_isset = 1;


	// NAS-PDU    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_NAS_PDU2( &obj_E_RABReleaseCommand->nASPDU, "\x20\x02\x12\x12\x17", 5);
	obj_E_RABReleaseCommand->nASPDU_isset = 1;



	__si_s1ap_send_E_RABReleaseCommand( obj_E_RABReleaseCommand, node);
	__si_s1ap_memfree_pdu_E_RABReleaseCommand( obj_E_RABReleaseCommand);
}

void __si_s1ap__Send_E_RABReleaseResponse_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_E_RABReleaseResponse * obj_E_RABReleaseResponse = (SI_S1AP_DT_PDU_E_RABReleaseResponse*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABReleaseResponse));
	memset( obj_E_RABReleaseResponse, 0, sizeof( SI_S1AP_DT_PDU_E_RABReleaseResponse));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_E_RABReleaseResponse->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_E_RABReleaseResponse->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_E_RABReleaseResponse->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_E_RABReleaseResponse->eNBUES1APID_isset = 1;


	// E-RABReleaseListBearerRelComp , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABReleaseListBearerRelComp( &obj_E_RABReleaseResponse->eRABReleaseListBearerRelComp);
	obj_E_RABReleaseResponse->eRABReleaseListBearerRelComp_isset = 1;


	// E-RABList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABList( &obj_E_RABReleaseResponse->eRABFailedToReleaseList);
	obj_E_RABReleaseResponse->eRABFailedToReleaseList_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_E_RABReleaseResponse->criticalityDiagnostics);
	obj_E_RABReleaseResponse->criticalityDiagnostics_isset = 1;


	// UserLocationInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UserLocationInformation( &obj_E_RABReleaseResponse->userLocationInformation);
	obj_E_RABReleaseResponse->userLocationInformation_isset = 1;


	// SecondaryRATDataUsageReportList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__SecondaryRATDataUsageReportList( &obj_E_RABReleaseResponse->secondaryRATDataUsageReportList);
	obj_E_RABReleaseResponse->secondaryRATDataUsageReportList_isset = 1;



	__si_s1ap_send_E_RABReleaseResponse( obj_E_RABReleaseResponse, node);
	__si_s1ap_memfree_pdu_E_RABReleaseResponse( obj_E_RABReleaseResponse);
}

void __si_s1ap__Send_E_RABReleaseIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_E_RABReleaseIndication * obj_E_RABReleaseIndication = (SI_S1AP_DT_PDU_E_RABReleaseIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABReleaseIndication));
	memset( obj_E_RABReleaseIndication, 0, sizeof( SI_S1AP_DT_PDU_E_RABReleaseIndication));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_E_RABReleaseIndication->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_E_RABReleaseIndication->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_E_RABReleaseIndication->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_E_RABReleaseIndication->eNBUES1APID_isset = 1;


	// E-RABList , PRESENCE = mandatory   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABList( &obj_E_RABReleaseIndication->eRABReleasedList);
	obj_E_RABReleaseIndication->eRABReleasedList_isset = 1;


	// UserLocationInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UserLocationInformation( &obj_E_RABReleaseIndication->userLocationInformation);
	obj_E_RABReleaseIndication->userLocationInformation_isset = 1;


	// SecondaryRATDataUsageReportList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__SecondaryRATDataUsageReportList( &obj_E_RABReleaseIndication->secondaryRATDataUsageReportList);
	obj_E_RABReleaseIndication->secondaryRATDataUsageReportList_isset = 1;



	__si_s1ap_send_E_RABReleaseIndication( obj_E_RABReleaseIndication, node);
	__si_s1ap_memfree_pdu_E_RABReleaseIndication( obj_E_RABReleaseIndication);
}

void __si_s1ap__Send_InitialContextSetupRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_InitialContextSetupRequest * obj_InitialContextSetupRequest = (SI_S1AP_DT_PDU_InitialContextSetupRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_InitialContextSetupRequest));
	memset( obj_InitialContextSetupRequest, 0, sizeof( SI_S1AP_DT_PDU_InitialContextSetupRequest));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_InitialContextSetupRequest->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_InitialContextSetupRequest->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_InitialContextSetupRequest->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_InitialContextSetupRequest->eNBUES1APID_isset = 1;


	// UEAggregateMaximumBitrate , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__UEAggregateMaximumBitrate( &obj_InitialContextSetupRequest->uEaggregateMaximumBitrate);
	obj_InitialContextSetupRequest->uEaggregateMaximumBitrate_isset = 1;


	// E-RABToBeSetupListCtxtSUReq , PRESENCE = mandatory   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABToBeSetupListCtxtSUReq( &obj_InitialContextSetupRequest->eRABToBeSetupListCtxtSUReq);
	obj_InitialContextSetupRequest->eRABToBeSetupListCtxtSUReq_isset = 1;


	// UESecurityCapabilities , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__UESecurityCapabilities( &obj_InitialContextSetupRequest->uESecurityCapabilities);
	obj_InitialContextSetupRequest->uESecurityCapabilities_isset = 1;


	// SecurityKey , PRESENCE = mandatory   BITSTRING , MIN=256, MAX=256
	__si_s1ap_init_SecurityKey2( &obj_InitialContextSetupRequest->securityKey, "97330899843286346555260094368603", 32, 256);
	obj_InitialContextSetupRequest->securityKey->bitslen = 256;
	obj_InitialContextSetupRequest->securityKey_isset = 1;


	// TraceActivation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__TraceActivation( &obj_InitialContextSetupRequest->traceActivation);
	obj_InitialContextSetupRequest->traceActivation_isset = 1;


	// HandoverRestrictionList , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__HandoverRestrictionList( &obj_InitialContextSetupRequest->handoverRestrictionList);
	obj_InitialContextSetupRequest->handoverRestrictionList_isset = 1;


	// UERadioCapability    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapability2( &obj_InitialContextSetupRequest->uERadioCapability, "\x03\x02\x15\x09\x13", 5);
	obj_InitialContextSetupRequest->uERadioCapability_isset = 1;


	// SubscriberProfileIDforRFP , PRESENCE = optional  INTEGER , MIN=1, MAX=256
	obj_InitialContextSetupRequest->subscriberProfileIDforRFP = __getTestINTEGER( 1, 256);
	obj_InitialContextSetupRequest->subscriberProfileIDforRFP_isset = 1;


	// CSFallbackIndicator , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialContextSetupRequest->cSFallbackIndicator = CSFallbackIndicator_cs_fallback_required_val;
	obj_InitialContextSetupRequest->cSFallbackIndicator_isset = 1;


	// SRVCCOperationPossible , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialContextSetupRequest->sRVCCOperationPossible = SRVCCOperationPossible_possible_val;
	obj_InitialContextSetupRequest->sRVCCOperationPossible_isset = 1;


	// CSGMembershipStatus , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialContextSetupRequest->cSGMembershipStatus = CSGMembershipStatus_member_val;
	obj_InitialContextSetupRequest->cSGMembershipStatus_isset = 1;


	// LAI , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__LAI( &obj_InitialContextSetupRequest->registeredLAI);
	obj_InitialContextSetupRequest->registeredLAI_isset = 1;


	// GUMMEI , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__GUMMEI( &obj_InitialContextSetupRequest->gUMMEIID);
	obj_InitialContextSetupRequest->gUMMEIID_isset = 1;


	// MME-UE-S1AP-ID , PRESENCE = optional  INTEGER , MIN=0, MAX=4294967295
	obj_InitialContextSetupRequest->mMEUES1APID2 = __getTestINTEGER( 0, 4294967295);
	obj_InitialContextSetupRequest->mMEUES1APID2_isset = 1;


	// ManagementBasedMDTAllowed , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialContextSetupRequest->managementBasedMDTAllowed = ManagementBasedMDTAllowed_allowed_val;
	obj_InitialContextSetupRequest->managementBasedMDTAllowed_isset = 1;


	// MDTPLMNList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__MDTPLMNList( &obj_InitialContextSetupRequest->managementBasedMDTPLMNList);
	obj_InitialContextSetupRequest->managementBasedMDTPLMNList_isset = 1;


	// AdditionalCSFallbackIndicator , PRESENCE = conditional   ENUMERATED, PRESENCE = conditional
	obj_InitialContextSetupRequest->additionalCSFallbackIndicator = AdditionalCSFallbackIndicator_no_restriction_val;
	obj_InitialContextSetupRequest->additionalCSFallbackIndicator_isset = 1;


	// Masked-IMEISV , PRESENCE = optional   BITSTRING , MIN=64, MAX=64
	__si_s1ap_init_Masked_IMEISV2( &obj_InitialContextSetupRequest->maskedIMEISV, "19225753", 8, 64);
	obj_InitialContextSetupRequest->maskedIMEISV->bitslen = 64;
	obj_InitialContextSetupRequest->maskedIMEISV_isset = 1;


	// ExpectedUEBehaviour , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__ExpectedUEBehaviour( &obj_InitialContextSetupRequest->expectedUEBehaviour);
	obj_InitialContextSetupRequest->expectedUEBehaviour_isset = 1;


	// ProSeAuthorized , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__ProSeAuthorized( &obj_InitialContextSetupRequest->proSeAuthorized);
	obj_InitialContextSetupRequest->proSeAuthorized_isset = 1;


	// UEUserPlaneCIoTSupportIndicator , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialContextSetupRequest->uEUserPlaneCIoTSupportIndicator = UEUserPlaneCIoTSupportIndicator_supported_val;
	obj_InitialContextSetupRequest->uEUserPlaneCIoTSupportIndicator_isset = 1;


	// V2XServicesAuthorized , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__V2XServicesAuthorized( &obj_InitialContextSetupRequest->v2XServicesAuthorized);
	obj_InitialContextSetupRequest->v2XServicesAuthorized_isset = 1;


	// UESidelinkAggregateMaximumBitrate , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UESidelinkAggregateMaximumBitrate( &obj_InitialContextSetupRequest->uESidelinkAggregateMaximumBitrate);
	obj_InitialContextSetupRequest->uESidelinkAggregateMaximumBitrate_isset = 1;


	// EnhancedCoverageRestricted , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialContextSetupRequest->enhancedCoverageRestricted = EnhancedCoverageRestricted_restricted_val;
	obj_InitialContextSetupRequest->enhancedCoverageRestricted_isset = 1;


	// NRUESecurityCapabilities , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRUESecurityCapabilities( &obj_InitialContextSetupRequest->nRUESecurityCapabilities);
	obj_InitialContextSetupRequest->nRUESecurityCapabilities_isset = 1;


	// CE-ModeBRestricted , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialContextSetupRequest->cEModeBRestricted = CE_ModeBRestricted_restricted_val;
	obj_InitialContextSetupRequest->cEModeBRestricted_isset = 1;


	// AerialUEsubscriptionInformation , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialContextSetupRequest->aerialUEsubscriptionInformation = AerialUEsubscriptionInformation_allowed_val;
	obj_InitialContextSetupRequest->aerialUEsubscriptionInformation_isset = 1;


	// PendingDataIndication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialContextSetupRequest->pendingDataIndication = PendingDataIndication_true_val;
	obj_InitialContextSetupRequest->pendingDataIndication_isset = 1;


	// Subscription-Based-UE-DifferentiationInfo , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__Subscription_Based_UE_DifferentiationInfo( &obj_InitialContextSetupRequest->subscriptionBasedUEDifferentiationInfo);
	obj_InitialContextSetupRequest->subscriptionBasedUEDifferentiationInfo_isset = 1;


	// AdditionalRRMPriorityIndex , PRESENCE = optional   BITSTRING , MIN=32, MAX=32
	__si_s1ap_init_AdditionalRRMPriorityIndex2( &obj_InitialContextSetupRequest->additionalRRMPriorityIndex, "0645", 4, 32);
	obj_InitialContextSetupRequest->additionalRRMPriorityIndex->bitslen = 32;
	obj_InitialContextSetupRequest->additionalRRMPriorityIndex_isset = 1;


	// IAB-Authorized , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialContextSetupRequest->iABAuthorized = IAB_Authorized_authorized_val;
	obj_InitialContextSetupRequest->iABAuthorized_isset = 1;


	// NRV2XServicesAuthorized , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRV2XServicesAuthorized( &obj_InitialContextSetupRequest->nRV2XServicesAuthorized);
	obj_InitialContextSetupRequest->nRV2XServicesAuthorized_isset = 1;


	// NRUESidelinkAggregateMaximumBitrate , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRUESidelinkAggregateMaximumBitrate( &obj_InitialContextSetupRequest->nRUESidelinkAggregateMaximumBitrate);
	obj_InitialContextSetupRequest->nRUESidelinkAggregateMaximumBitrate_isset = 1;


	// PC5QoSParameters , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__PC5QoSParameters( &obj_InitialContextSetupRequest->pC5QoSParameters);
	obj_InitialContextSetupRequest->pC5QoSParameters_isset = 1;


	// UERadioCapabilityID    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapabilityID2( &obj_InitialContextSetupRequest->uERadioCapabilityID, "\x07\x09\x18\x21\x05", 5);
	obj_InitialContextSetupRequest->uERadioCapabilityID_isset = 1;


	// CoarseUELocation    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_CoarseUELocation2( &obj_InitialContextSetupRequest->coarseUELocation, "\x21\x08\x18\x16\x22", 5);
	obj_InitialContextSetupRequest->coarseUELocation_isset = 1;



	__si_s1ap_send_InitialContextSetupRequest( obj_InitialContextSetupRequest, node);
	__si_s1ap_memfree_pdu_InitialContextSetupRequest( obj_InitialContextSetupRequest);
}

void __si_s1ap__Send_InitialContextSetupResponse_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_InitialContextSetupResponse * obj_InitialContextSetupResponse = (SI_S1AP_DT_PDU_InitialContextSetupResponse*) __si_allocM( sizeof(SI_S1AP_DT_PDU_InitialContextSetupResponse));
	memset( obj_InitialContextSetupResponse, 0, sizeof( SI_S1AP_DT_PDU_InitialContextSetupResponse));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_InitialContextSetupResponse->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_InitialContextSetupResponse->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_InitialContextSetupResponse->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_InitialContextSetupResponse->eNBUES1APID_isset = 1;


	// E-RABSetupListCtxtSURes , PRESENCE = mandatory   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABSetupListCtxtSURes( &obj_InitialContextSetupResponse->eRABSetupListCtxtSURes);
	obj_InitialContextSetupResponse->eRABSetupListCtxtSURes_isset = 1;


	// E-RABList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABList( &obj_InitialContextSetupResponse->eRABFailedToSetupListCtxtSURes);
	obj_InitialContextSetupResponse->eRABFailedToSetupListCtxtSURes_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_InitialContextSetupResponse->criticalityDiagnostics);
	obj_InitialContextSetupResponse->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_InitialContextSetupResponse( obj_InitialContextSetupResponse, node);
	__si_s1ap_memfree_pdu_InitialContextSetupResponse( obj_InitialContextSetupResponse);
}

void __si_s1ap__Send_InitialContextSetupFailure_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_InitialContextSetupFailure * obj_InitialContextSetupFailure = (SI_S1AP_DT_PDU_InitialContextSetupFailure*) __si_allocM( sizeof(SI_S1AP_DT_PDU_InitialContextSetupFailure));
	memset( obj_InitialContextSetupFailure, 0, sizeof( SI_S1AP_DT_PDU_InitialContextSetupFailure));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_InitialContextSetupFailure->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_InitialContextSetupFailure->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_InitialContextSetupFailure->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_InitialContextSetupFailure->eNBUES1APID_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_InitialContextSetupFailure->cause);
	obj_InitialContextSetupFailure->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_InitialContextSetupFailure->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_InitialContextSetupFailure->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_InitialContextSetupFailure->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_InitialContextSetupFailure->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_InitialContextSetupFailure->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_InitialContextSetupFailure->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_InitialContextSetupFailure->cause_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_InitialContextSetupFailure->criticalityDiagnostics);
	obj_InitialContextSetupFailure->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_InitialContextSetupFailure( obj_InitialContextSetupFailure, node);
	__si_s1ap_memfree_pdu_InitialContextSetupFailure( obj_InitialContextSetupFailure);
}

void __si_s1ap__Send_UEContextReleaseRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEContextReleaseRequest * obj_UEContextReleaseRequest = (SI_S1AP_DT_PDU_UEContextReleaseRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEContextReleaseRequest));
	memset( obj_UEContextReleaseRequest, 0, sizeof( SI_S1AP_DT_PDU_UEContextReleaseRequest));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UEContextReleaseRequest->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UEContextReleaseRequest->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UEContextReleaseRequest->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UEContextReleaseRequest->eNBUES1APID_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_UEContextReleaseRequest->cause);
	obj_UEContextReleaseRequest->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_UEContextReleaseRequest->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_UEContextReleaseRequest->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_UEContextReleaseRequest->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_UEContextReleaseRequest->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_UEContextReleaseRequest->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_UEContextReleaseRequest->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_UEContextReleaseRequest->cause_isset = 1;


	// GWContextReleaseIndication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UEContextReleaseRequest->gWContextReleaseIndication = GWContextReleaseIndication_true_val;
	obj_UEContextReleaseRequest->gWContextReleaseIndication_isset = 1;


	// SecondaryRATDataUsageReportList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__SecondaryRATDataUsageReportList( &obj_UEContextReleaseRequest->secondaryRATDataUsageReportList);
	obj_UEContextReleaseRequest->secondaryRATDataUsageReportList_isset = 1;



	__si_s1ap_send_UEContextReleaseRequest( obj_UEContextReleaseRequest, node);
	__si_s1ap_memfree_pdu_UEContextReleaseRequest( obj_UEContextReleaseRequest);
}

void __si_s1ap__Send_Paging_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_Paging * obj_Paging = (SI_S1AP_DT_PDU_Paging*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Paging));
	memset( obj_Paging, 0, sizeof( SI_S1AP_DT_PDU_Paging));

	// UEIdentityIndexValue , PRESENCE = mandatory   BITSTRING , MIN=10, MAX=10
	__si_s1ap_init_UEIdentityIndexValue2( &obj_Paging->uEIdentityIndexValue, "29", 2, 10);
	obj_Paging->uEIdentityIndexValue->bitslen = 10;
	obj_Paging->uEIdentityIndexValue_isset = 1;


	// UEPagingID , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__UEPagingID( &obj_Paging->uEPagingID);
	obj_Paging->uEPagingID->SelectedChoice = UEPagingID_s_TMSI_val;

	switch( obj_Paging->uEPagingID->SelectedChoice)
	{
		case UEPagingID_s_TMSI_val:
			__si_s1ap__set_testdata__S_TMSI( &obj_Paging->uEPagingID->u.s_TMSI); //   L:11816
			break;
		case UEPagingID_iMSI_val:
			//__si_s1ap_init_UEPagingID2( &obj_Paging->uEPagingID->u.iMSI, "\x15\x15\x05", 3);  //   L:11834
			break;
		default:
			break;
	}

	obj_Paging->uEPagingID_isset = 1;


	// PagingDRX , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_Paging->pagingDRX = PagingDRX_v32_val;
	obj_Paging->pagingDRX_isset = 1;


	// CNDomain , PRESENCE = mandatory   ENUMERATED, PRESENCE = mandatory
	obj_Paging->cNDomain = CNDomain_ps_val;
	obj_Paging->cNDomain_isset = 1;


	// TAIList, PRESENCE = mandatory   SEQUENCE_OF
	__si_s1ap__set_testdata__TAIList( &obj_Paging->tAIList);
	obj_Paging->tAIList_isset = 1;


	// CSG-IdList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__CSG_IdList( &obj_Paging->cSGIdList);
	obj_Paging->cSGIdList_isset = 1;


	// PagingPriority , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_Paging->pagingPriority = PagingPriority_priolevel1_val;
	obj_Paging->pagingPriority_isset = 1;


	// UERadioCapabilityForPaging    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapabilityForPaging2( &obj_Paging->uERadioCapabilityForPaging, "\x21\x14\x15\x04\x07", 5);
	obj_Paging->uERadioCapabilityForPaging_isset = 1;


	// AssistanceDataForPaging , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__AssistanceDataForPaging( &obj_Paging->assistanceDataForPaging);
	obj_Paging->assistanceDataForPaging_isset = 1;


	// Paging-eDRXInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__Paging_eDRXInformation( &obj_Paging->pagingeDRXInformation);
	obj_Paging->pagingeDRXInformation_isset = 1;


	// Extended-UEIdentityIndexValue , PRESENCE = optional   BITSTRING , MIN=14, MAX=14
	__si_s1ap_init_Extended_UEIdentityIndexValue2( &obj_Paging->extendedUEIdentityIndexValue, "00", 2, 14);
	obj_Paging->extendedUEIdentityIndexValue->bitslen = 14;
	obj_Paging->extendedUEIdentityIndexValue_isset = 1;


	// NB-IoT-Paging-eDRXInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NB_IoT_Paging_eDRXInformation( &obj_Paging->nBIoTPagingeDRXInformation);
	obj_Paging->nBIoTPagingeDRXInformation_isset = 1;


	// NB-IoT-UEIdentityIndexValue , PRESENCE = optional   BITSTRING , MIN=12, MAX=12
	__si_s1ap_init_NB_IoT_UEIdentityIndexValue2( &obj_Paging->nBIoTUEIdentityIndexValue, "32", 2, 12);
	obj_Paging->nBIoTUEIdentityIndexValue->bitslen = 12;
	obj_Paging->nBIoTUEIdentityIndexValue_isset = 1;


	// EnhancedCoverageRestricted , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_Paging->enhancedCoverageRestricted = EnhancedCoverageRestricted_restricted_val;
	obj_Paging->enhancedCoverageRestricted_isset = 1;


	// CE-ModeBRestricted , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_Paging->cEModeBRestricted = CE_ModeBRestricted_restricted_val;
	obj_Paging->cEModeBRestricted_isset = 1;


	// DataSize , PRESENCE = optional  INTEGER , MIN=1, MAX=4095
	obj_Paging->dataSize = __getTestINTEGER( 1, 4095);
	obj_Paging->dataSize_isset = 1;


	// WUS-Assistance-Information , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__WUS_Assistance_Information( &obj_Paging->wUSAssistanceInformation);
	obj_Paging->wUSAssistanceInformation_isset = 1;


	// NB-IoT-PagingDRX , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_Paging->nBIoTPagingDRX = NB_IoT_PagingDRX_v32_val;
	obj_Paging->nBIoTPagingDRX_isset = 1;


	// PagingCause, PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_Paging->pagingCause = PagingCause_voice_val;
	obj_Paging->pagingCause_isset = 1;



	__si_s1ap_send_Paging( obj_Paging, node);
	__si_s1ap_memfree_pdu_Paging( obj_Paging);
}

void __si_s1ap__Send_DownlinkNASTransport_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_DownlinkNASTransport * obj_DownlinkNASTransport = (SI_S1AP_DT_PDU_DownlinkNASTransport*) __si_allocM( sizeof(SI_S1AP_DT_PDU_DownlinkNASTransport));
	memset( obj_DownlinkNASTransport, 0, sizeof( SI_S1AP_DT_PDU_DownlinkNASTransport));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_DownlinkNASTransport->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_DownlinkNASTransport->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_DownlinkNASTransport->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_DownlinkNASTransport->eNBUES1APID_isset = 1;


	// NAS-PDU    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_NAS_PDU2( &obj_DownlinkNASTransport->nASPDU, "\x11\x22\x04\x20\x04", 5);
	obj_DownlinkNASTransport->nASPDU_isset = 1;


	// HandoverRestrictionList , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__HandoverRestrictionList( &obj_DownlinkNASTransport->handoverRestrictionList);
	obj_DownlinkNASTransport->handoverRestrictionList_isset = 1;


	// SubscriberProfileIDforRFP , PRESENCE = optional  INTEGER , MIN=1, MAX=256
	obj_DownlinkNASTransport->subscriberProfileIDforRFP = __getTestINTEGER( 1, 256);
	obj_DownlinkNASTransport->subscriberProfileIDforRFP_isset = 1;


	// SRVCCOperationPossible , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_DownlinkNASTransport->sRVCCOperationPossible = SRVCCOperationPossible_possible_val;
	obj_DownlinkNASTransport->sRVCCOperationPossible_isset = 1;


	// UERadioCapability    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapability2( &obj_DownlinkNASTransport->uERadioCapability, "\x03\x18\x18\x03\x19", 5);
	obj_DownlinkNASTransport->uERadioCapability_isset = 1;


	// DLNASPDUDeliveryAckRequest , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_DownlinkNASTransport->dLNASPDUDeliveryAckRequest = DLNASPDUDeliveryAckRequest_requested_val;
	obj_DownlinkNASTransport->dLNASPDUDeliveryAckRequest_isset = 1;


	// EnhancedCoverageRestricted , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_DownlinkNASTransport->enhancedCoverageRestricted = EnhancedCoverageRestricted_restricted_val;
	obj_DownlinkNASTransport->enhancedCoverageRestricted_isset = 1;


	// NRUESecurityCapabilities , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRUESecurityCapabilities( &obj_DownlinkNASTransport->nRUESecurityCapabilities);
	obj_DownlinkNASTransport->nRUESecurityCapabilities_isset = 1;


	// CE-ModeBRestricted , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_DownlinkNASTransport->cEModeBRestricted = CE_ModeBRestricted_restricted_val;
	obj_DownlinkNASTransport->cEModeBRestricted_isset = 1;


	// UECapabilityInfoRequest , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_DownlinkNASTransport->uECapabilityInfoRequest = UECapabilityInfoRequest_requested_val;
	obj_DownlinkNASTransport->uECapabilityInfoRequest_isset = 1;


	// EndIndication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_DownlinkNASTransport->endIndication = EndIndication_no_further_data_val;
	obj_DownlinkNASTransport->endIndication_isset = 1;


	// PendingDataIndication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_DownlinkNASTransport->pendingDataIndication = PendingDataIndication_true_val;
	obj_DownlinkNASTransport->pendingDataIndication_isset = 1;


	// Subscription-Based-UE-DifferentiationInfo , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__Subscription_Based_UE_DifferentiationInfo( &obj_DownlinkNASTransport->subscriptionBasedUEDifferentiationInfo);
	obj_DownlinkNASTransport->subscriptionBasedUEDifferentiationInfo_isset = 1;


	// AdditionalRRMPriorityIndex , PRESENCE = optional   BITSTRING , MIN=32, MAX=32
	__si_s1ap_init_AdditionalRRMPriorityIndex2( &obj_DownlinkNASTransport->additionalRRMPriorityIndex, "9095", 4, 32);
	obj_DownlinkNASTransport->additionalRRMPriorityIndex->bitslen = 32;
	obj_DownlinkNASTransport->additionalRRMPriorityIndex_isset = 1;


	// UERadioCapabilityID    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapabilityID2( &obj_DownlinkNASTransport->uERadioCapabilityID, "\x11\x23\x15\x14\x12", 5);
	obj_DownlinkNASTransport->uERadioCapabilityID_isset = 1;


	// Masked-IMEISV , PRESENCE = optional   BITSTRING , MIN=64, MAX=64
	__si_s1ap_init_Masked_IMEISV2( &obj_DownlinkNASTransport->maskedIMEISV, "58307131", 8, 64);
	obj_DownlinkNASTransport->maskedIMEISV->bitslen = 64;
	obj_DownlinkNASTransport->maskedIMEISV_isset = 1;


	// CoarseUELocation    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_CoarseUELocation2( &obj_DownlinkNASTransport->coarseUELocation, "\x14\x13\x10\x14\x24", 5);
	obj_DownlinkNASTransport->coarseUELocation_isset = 1;



	__si_s1ap_send_DownlinkNASTransport( obj_DownlinkNASTransport, node);
	__si_s1ap_memfree_pdu_DownlinkNASTransport( obj_DownlinkNASTransport);
}

void __si_s1ap__Send_InitialUEMessage_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_InitialUEMessage * obj_InitialUEMessage = (SI_S1AP_DT_PDU_InitialUEMessage*) __si_allocM( sizeof(SI_S1AP_DT_PDU_InitialUEMessage));
	memset( obj_InitialUEMessage, 0, sizeof( SI_S1AP_DT_PDU_InitialUEMessage));

	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_InitialUEMessage->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_InitialUEMessage->eNBUES1APID_isset = 1;


	// NAS-PDU    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_NAS_PDU2( &obj_InitialUEMessage->nASPDU, "\x11\x14\x09\x08\x10", 5);
	obj_InitialUEMessage->nASPDU_isset = 1;


	// TAI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__TAI( &obj_InitialUEMessage->tAI);
	obj_InitialUEMessage->tAI_isset = 1;


	// EUTRAN-CGI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_InitialUEMessage->eUTRANCGI);
	obj_InitialUEMessage->eUTRANCGI_isset = 1;


	// RRC-Establishment-Cause , PRESENCE = mandatory   ENUMERATED, PRESENCE = mandatory
	obj_InitialUEMessage->rRCEstablishmentCause = RRC_Establishment_Cause_emergency_val;
	obj_InitialUEMessage->rRCEstablishmentCause_isset = 1;


	// S-TMSI , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__S_TMSI( &obj_InitialUEMessage->sTMSI);
	obj_InitialUEMessage->sTMSI_isset = 1;


	// CSG-Id , PRESENCE = optional   BITSTRING , MIN=27, MAX=27
	__si_s1ap_init_CSG_Id2( &obj_InitialUEMessage->cSGId, "7262", 4, 27);
	obj_InitialUEMessage->cSGId->bitslen = 27;
	obj_InitialUEMessage->cSGId_isset = 1;


	// GUMMEI , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__GUMMEI( &obj_InitialUEMessage->gUMMEIID);
	obj_InitialUEMessage->gUMMEIID_isset = 1;


	// CellAccessMode , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialUEMessage->cellAccessMode = CellAccessMode_hybrid_val;
	obj_InitialUEMessage->cellAccessMode_isset = 1;


	// TransportLayerAddress , PRESENCE = optional   BITSTRING , MIN=1, MAX=160
	__si_s1ap_init_TransportLayerAddress2( &obj_InitialUEMessage->gWTransportLayerAddress, "6", 1, 1);
	obj_InitialUEMessage->gWTransportLayerAddress->bitslen = 1;
	obj_InitialUEMessage->gWTransportLayerAddress_isset = 1;


	// RelayNode-Indicator , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialUEMessage->relayNodeIndicator = RelayNode_Indicator_true_val;
	obj_InitialUEMessage->relayNodeIndicator_isset = 1;


	// GUMMEIType , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialUEMessage->gUMMEIType = GUMMEIType_native_val;
	obj_InitialUEMessage->gUMMEIType_isset = 1;


	// TunnelInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__TunnelInformation( &obj_InitialUEMessage->tunnelInformationforBBF);
	obj_InitialUEMessage->tunnelInformationforBBF_isset = 1;


	// TransportLayerAddress , PRESENCE = optional   BITSTRING , MIN=1, MAX=160
	__si_s1ap_init_TransportLayerAddress2( &obj_InitialUEMessage->sIPTOLGWTransportLayerAddress, "4", 1, 1);
	obj_InitialUEMessage->sIPTOLGWTransportLayerAddress->bitslen = 1;
	obj_InitialUEMessage->sIPTOLGWTransportLayerAddress_isset = 1;


	// LHN-ID    OCTETSTRING, PRESENCE = optional , MIN=32, MAX=256
	__si_s1ap_init_LHN_ID2( &obj_InitialUEMessage->lHNID, "\x21\x16\x18\x11\x17\x22\x06\x16\x09\x10\x06\x03\x13\x04\x23\x11\x18\x22\x13\x20\x03\x18\x15\x13\x06\x21\x19\x20\x01\x20\x24\x10", 32);
	obj_InitialUEMessage->lHNID_isset = 1;


	// MME-Group-ID    OCTETSTRING, PRESENCE = optional , MIN=2, MAX=2
	__si_s1ap_init_MME_Group_ID2( &obj_InitialUEMessage->mMEGroupID, "\x01\x07", 2);
	obj_InitialUEMessage->mMEGroupID_isset = 1;


	// UE-Usage-Type , PRESENCE = optional  INTEGER , MIN=0, MAX=255
	obj_InitialUEMessage->uEUsageType = __getTestINTEGER( 0, 255);
	obj_InitialUEMessage->uEUsageType_isset = 1;


	// CE-mode-B-SupportIndicator , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialUEMessage->cEmodeBSupportIndicator = CE_mode_B_SupportIndicator_supported_val;
	obj_InitialUEMessage->cEmodeBSupportIndicator_isset = 1;


	// DCN-ID , PRESENCE = optional  INTEGER , MIN=0, MAX=65535
	obj_InitialUEMessage->dCNID = __getTestINTEGER( 0, 65535);
	obj_InitialUEMessage->dCNID_isset = 1;


	// Coverage-Level , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialUEMessage->coverageLevel = Coverage_Level_extendedcoverage_val;
	obj_InitialUEMessage->coverageLevel_isset = 1;


	// UE-Application-Layer-Measurement-Capability , PRESENCE = optional   BITSTRING , MIN=8, MAX=8
	__si_s1ap_init_UE_Application_Layer_Measurement_Capability2( &obj_InitialUEMessage->uEApplicationLayerMeasurementCapability, "7", 1, 8);
	obj_InitialUEMessage->uEApplicationLayerMeasurementCapability->bitslen = 8;
	obj_InitialUEMessage->uEApplicationLayerMeasurementCapability_isset = 1;


	// EDT-Session , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialUEMessage->eDTSession = EDT_Session_true_val;
	obj_InitialUEMessage->eDTSession_isset = 1;


	// IAB-Node-Indication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialUEMessage->iABNodeIndication = IAB_Node_Indication_true_val;
	obj_InitialUEMessage->iABNodeIndication_isset = 1;


	// LTE-NTN-TAI-Information , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__LTE_NTN_TAI_Information( &obj_InitialUEMessage->lTENTNTAIInformation);
	obj_InitialUEMessage->lTENTNTAIInformation_isset = 1;


	// CoarseUELocationRequested , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_InitialUEMessage->coarseUELocationRequested = CoarseUELocationRequested_true_val;
	obj_InitialUEMessage->coarseUELocationRequested_isset = 1;



	__si_s1ap_send_InitialUEMessage( obj_InitialUEMessage, node);
	__si_s1ap_memfree_pdu_InitialUEMessage( obj_InitialUEMessage);
}

void __si_s1ap__Send_UplinkNASTransport_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UplinkNASTransport * obj_UplinkNASTransport = (SI_S1AP_DT_PDU_UplinkNASTransport*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UplinkNASTransport));
	memset( obj_UplinkNASTransport, 0, sizeof( SI_S1AP_DT_PDU_UplinkNASTransport));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UplinkNASTransport->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UplinkNASTransport->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UplinkNASTransport->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UplinkNASTransport->eNBUES1APID_isset = 1;


	// NAS-PDU    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_NAS_PDU2( &obj_UplinkNASTransport->nASPDU, "\x13\x06\x09\x14\x17", 5);
	obj_UplinkNASTransport->nASPDU_isset = 1;


	// EUTRAN-CGI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_UplinkNASTransport->eUTRANCGI);
	obj_UplinkNASTransport->eUTRANCGI_isset = 1;


	// TAI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__TAI( &obj_UplinkNASTransport->tAI);
	obj_UplinkNASTransport->tAI_isset = 1;


	// TransportLayerAddress , PRESENCE = optional   BITSTRING , MIN=1, MAX=160
	__si_s1ap_init_TransportLayerAddress2( &obj_UplinkNASTransport->gWTransportLayerAddress, "5", 1, 1);
	obj_UplinkNASTransport->gWTransportLayerAddress->bitslen = 1;
	obj_UplinkNASTransport->gWTransportLayerAddress_isset = 1;


	// TransportLayerAddress , PRESENCE = optional   BITSTRING , MIN=1, MAX=160
	__si_s1ap_init_TransportLayerAddress2( &obj_UplinkNASTransport->sIPTOLGWTransportLayerAddress, "4", 1, 1);
	obj_UplinkNASTransport->sIPTOLGWTransportLayerAddress->bitslen = 1;
	obj_UplinkNASTransport->sIPTOLGWTransportLayerAddress_isset = 1;


	// LHN-ID    OCTETSTRING, PRESENCE = optional , MIN=32, MAX=256
	__si_s1ap_init_LHN_ID2( &obj_UplinkNASTransport->lHNID, "\x07\x04\x15\x16\x18\x11\x17\x19\x05\x05\x17\x10\x12\x20\x05\x20\x17\x18\x11\x20\x19\x14\x22\x08\x04\x14\x23\x08\x05\x09\x06\x15", 32);
	obj_UplinkNASTransport->lHNID_isset = 1;


	// PSCellInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__PSCellInformation( &obj_UplinkNASTransport->pSCellInformation);
	obj_UplinkNASTransport->pSCellInformation_isset = 1;


	// LTE-NTN-TAI-Information , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__LTE_NTN_TAI_Information( &obj_UplinkNASTransport->lTENTNTAIInformation);
	obj_UplinkNASTransport->lTENTNTAIInformation_isset = 1;



	__si_s1ap_send_UplinkNASTransport( obj_UplinkNASTransport, node);
	__si_s1ap_memfree_pdu_UplinkNASTransport( obj_UplinkNASTransport);
}

void __si_s1ap__Send_NASNonDeliveryIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_NASNonDeliveryIndication * obj_NASNonDeliveryIndication = (SI_S1AP_DT_PDU_NASNonDeliveryIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_NASNonDeliveryIndication));
	memset( obj_NASNonDeliveryIndication, 0, sizeof( SI_S1AP_DT_PDU_NASNonDeliveryIndication));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_NASNonDeliveryIndication->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_NASNonDeliveryIndication->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_NASNonDeliveryIndication->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_NASNonDeliveryIndication->eNBUES1APID_isset = 1;


	// NAS-PDU    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_NAS_PDU2( &obj_NASNonDeliveryIndication->nASPDU, "\x11\x08\x16\x04\x18", 5);
	obj_NASNonDeliveryIndication->nASPDU_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_NASNonDeliveryIndication->cause);
	obj_NASNonDeliveryIndication->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_NASNonDeliveryIndication->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_NASNonDeliveryIndication->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_NASNonDeliveryIndication->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_NASNonDeliveryIndication->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_NASNonDeliveryIndication->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_NASNonDeliveryIndication->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_NASNonDeliveryIndication->cause_isset = 1;



	__si_s1ap_send_NASNonDeliveryIndication( obj_NASNonDeliveryIndication, node);
	__si_s1ap_memfree_pdu_NASNonDeliveryIndication( obj_NASNonDeliveryIndication);
}

void __si_s1ap__Send_HandoverCancel_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_HandoverCancel * obj_HandoverCancel = (SI_S1AP_DT_PDU_HandoverCancel*) __si_allocM( sizeof(SI_S1AP_DT_PDU_HandoverCancel));
	memset( obj_HandoverCancel, 0, sizeof( SI_S1AP_DT_PDU_HandoverCancel));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_HandoverCancel->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_HandoverCancel->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_HandoverCancel->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_HandoverCancel->eNBUES1APID_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_HandoverCancel->cause);
	obj_HandoverCancel->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_HandoverCancel->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_HandoverCancel->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_HandoverCancel->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_HandoverCancel->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_HandoverCancel->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_HandoverCancel->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_HandoverCancel->cause_isset = 1;



	__si_s1ap_send_HandoverCancel( obj_HandoverCancel, node);
	__si_s1ap_memfree_pdu_HandoverCancel( obj_HandoverCancel);
}

void __si_s1ap__Send_HandoverCancelAcknowledge_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_HandoverCancelAcknowledge * obj_HandoverCancelAcknowledge = (SI_S1AP_DT_PDU_HandoverCancelAcknowledge*) __si_allocM( sizeof(SI_S1AP_DT_PDU_HandoverCancelAcknowledge));
	memset( obj_HandoverCancelAcknowledge, 0, sizeof( SI_S1AP_DT_PDU_HandoverCancelAcknowledge));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_HandoverCancelAcknowledge->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_HandoverCancelAcknowledge->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_HandoverCancelAcknowledge->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_HandoverCancelAcknowledge->eNBUES1APID_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_HandoverCancelAcknowledge->criticalityDiagnostics);
	obj_HandoverCancelAcknowledge->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_HandoverCancelAcknowledge( obj_HandoverCancelAcknowledge, node);
	__si_s1ap_memfree_pdu_HandoverCancelAcknowledge( obj_HandoverCancelAcknowledge);
}

void __si_s1ap__Send_Reset_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_Reset * obj_Reset = (SI_S1AP_DT_PDU_Reset*) __si_allocM( sizeof(SI_S1AP_DT_PDU_Reset));
	memset( obj_Reset, 0, sizeof( SI_S1AP_DT_PDU_Reset));

	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_Reset->cause);
	obj_Reset->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_Reset->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_Reset->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_Reset->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_Reset->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_Reset->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_Reset->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_Reset->cause_isset = 1;


	// ResetType , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__ResetType( &obj_Reset->resetType);
	obj_Reset->resetType->SelectedChoice = ResetType_s1_Interface_val;

	switch( obj_Reset->resetType->SelectedChoice)
	{
		case ResetType_s1_Interface_val:
			obj_Reset->resetType->u.s1_Interface = ResetAll_reset_all_val;
			break;
		case ResetType_partOfS1_Interface_val:
			__si_s1ap__set_testdata__UE_associatedLogicalS1_ConnectionListRes( &obj_Reset->resetType->u.partOfS1_Interface); //   L:11896
			break;
		default:
			break;
	}

	obj_Reset->resetType_isset = 1;



	__si_s1ap_send_Reset( obj_Reset, node);
	__si_s1ap_memfree_pdu_Reset( obj_Reset);
}

void __si_s1ap__Send_ResetAcknowledge_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_ResetAcknowledge * obj_ResetAcknowledge = (SI_S1AP_DT_PDU_ResetAcknowledge*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ResetAcknowledge));
	memset( obj_ResetAcknowledge, 0, sizeof( SI_S1AP_DT_PDU_ResetAcknowledge));

	// UE-associatedLogicalS1-ConnectionListResAck , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__UE_associatedLogicalS1_ConnectionListResAck( &obj_ResetAcknowledge->uEassociatedLogicalS1ConnectionListResAck);
	obj_ResetAcknowledge->uEassociatedLogicalS1ConnectionListResAck_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_ResetAcknowledge->criticalityDiagnostics);
	obj_ResetAcknowledge->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_ResetAcknowledge( obj_ResetAcknowledge, node);
	__si_s1ap_memfree_pdu_ResetAcknowledge( obj_ResetAcknowledge);
}

void __si_s1ap__Send_ErrorIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_ErrorIndication * obj_ErrorIndication = (SI_S1AP_DT_PDU_ErrorIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ErrorIndication));
	memset( obj_ErrorIndication, 0, sizeof( SI_S1AP_DT_PDU_ErrorIndication));

	// MME-UE-S1AP-ID , PRESENCE = optional  INTEGER , MIN=0, MAX=4294967295
	obj_ErrorIndication->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_ErrorIndication->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = optional  INTEGER , MIN=0, MAX=16777215
	obj_ErrorIndication->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_ErrorIndication->eNBUES1APID_isset = 1;


	// Cause , PRESENCE = optional   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_ErrorIndication->cause);
	obj_ErrorIndication->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_ErrorIndication->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_ErrorIndication->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_ErrorIndication->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_ErrorIndication->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_ErrorIndication->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_ErrorIndication->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_ErrorIndication->cause_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_ErrorIndication->criticalityDiagnostics);
	obj_ErrorIndication->criticalityDiagnostics_isset = 1;


	// S-TMSI , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__S_TMSI( &obj_ErrorIndication->sTMSI);
	obj_ErrorIndication->sTMSI_isset = 1;



	__si_s1ap_send_ErrorIndication( obj_ErrorIndication, node);
	__si_s1ap_memfree_pdu_ErrorIndication( obj_ErrorIndication);
}

void __si_s1ap__Send_S1SetupRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_S1SetupRequest * obj_S1SetupRequest = (SI_S1AP_DT_PDU_S1SetupRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_S1SetupRequest));
	memset( obj_S1SetupRequest, 0, sizeof( SI_S1AP_DT_PDU_S1SetupRequest));

	// Global-ENB-ID , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__Global_ENB_ID( &obj_S1SetupRequest->globalENBID);
	obj_S1SetupRequest->globalENBID_isset = 1;


	// ENBname    PrintableString, PRESENCE = optional , MIN=1, MAX=150
	__si_s1ap_init_ENBname2( &obj_S1SetupRequest->eNBname, "f", 1);
	obj_S1SetupRequest->eNBname_isset = 1;


	// SupportedTAs , PRESENCE = mandatory   SEQUENCE_OF
	__si_s1ap__set_testdata__SupportedTAs( &obj_S1SetupRequest->supportedTAs);
	obj_S1SetupRequest->supportedTAs_isset = 1;


	// PagingDRX , PRESENCE = mandatory   ENUMERATED, PRESENCE = mandatory
	obj_S1SetupRequest->defaultPagingDRX = PagingDRX_v32_val;
	obj_S1SetupRequest->defaultPagingDRX_isset = 1;


	// CSG-IdList , PRESENCE = optional   SEQUENCE_OF
	// __si_s1ap__set_testdata__CSG_IdList( &obj_S1SetupRequest->cSGIdList);
	// obj_S1SetupRequest->cSGIdList_isset = 1;


	// UE-RetentionInformation , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_S1SetupRequest->uERetentionInformation = UE_RetentionInformation_ues_retained_val;
	obj_S1SetupRequest->uERetentionInformation_isset = 1;


	// NB-IoT-DefaultPagingDRX , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_S1SetupRequest->nBIoTDefaultPagingDRX = NB_IoT_DefaultPagingDRX_v128_val;
	obj_S1SetupRequest->nBIoTDefaultPagingDRX_isset = 1;


	// ConnectedengNBList , PRESENCE = optional   SEQUENCE_OF
	// __si_s1ap__set_testdata__ConnectedengNBList( &obj_S1SetupRequest->connectedengNBList);
	// obj_S1SetupRequest->connectedengNBList_isset = 1;



	__si_s1ap_send_S1SetupRequest( obj_S1SetupRequest, node);
	__si_s1ap_memfree_pdu_S1SetupRequest( obj_S1SetupRequest);
}

void __si_s1ap__Send_S1SetupResponse_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_S1SetupResponse * obj_S1SetupResponse = (SI_S1AP_DT_PDU_S1SetupResponse*) __si_allocM( sizeof(SI_S1AP_DT_PDU_S1SetupResponse));
	memset( obj_S1SetupResponse, 0, sizeof( SI_S1AP_DT_PDU_S1SetupResponse));

	// MMEname    PrintableString, PRESENCE = optional , MIN=1, MAX=150
	__si_s1ap_init_MMEname2( &obj_S1SetupResponse->mMEname, "x", 1);
	obj_S1SetupResponse->mMEname_isset = 1;


	// ServedGUMMEIs , PRESENCE = mandatory   SEQUENCE_OF
	__si_s1ap__set_testdata__ServedGUMMEIs( &obj_S1SetupResponse->servedGUMMEIs);
	obj_S1SetupResponse->servedGUMMEIs_isset = 1;


	// RelativeMMECapacity , PRESENCE = mandatory  INTEGER , MIN=0, MAX=255
	obj_S1SetupResponse->relativeMMECapacity = __getTestINTEGER( 0, 255);
	obj_S1SetupResponse->relativeMMECapacity_isset = 1;


	// MMERelaySupportIndicator , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_S1SetupResponse->mMERelaySupportIndicator = MMERelaySupportIndicator_true_val;
	obj_S1SetupResponse->mMERelaySupportIndicator_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_S1SetupResponse->criticalityDiagnostics);
	obj_S1SetupResponse->criticalityDiagnostics_isset = 1;


	// UE-RetentionInformation , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_S1SetupResponse->uERetentionInformation = UE_RetentionInformation_ues_retained_val;
	obj_S1SetupResponse->uERetentionInformation_isset = 1;


	// ServedDCNs , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__ServedDCNs( &obj_S1SetupResponse->servedDCNs);
	obj_S1SetupResponse->servedDCNs_isset = 1;


	// IAB-Supported , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_S1SetupResponse->iABSupported = IAB_Supported_true_val;
	obj_S1SetupResponse->iABSupported_isset = 1;



	__si_s1ap_send_S1SetupResponse( obj_S1SetupResponse, node);
	__si_s1ap_memfree_pdu_S1SetupResponse( obj_S1SetupResponse);
}

void __si_s1ap__Send_S1SetupFailure_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_S1SetupFailure * obj_S1SetupFailure = (SI_S1AP_DT_PDU_S1SetupFailure*) __si_allocM( sizeof(SI_S1AP_DT_PDU_S1SetupFailure));
	memset( obj_S1SetupFailure, 0, sizeof( SI_S1AP_DT_PDU_S1SetupFailure));

	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_S1SetupFailure->cause);
	obj_S1SetupFailure->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_S1SetupFailure->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_S1SetupFailure->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_S1SetupFailure->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_S1SetupFailure->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_S1SetupFailure->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_S1SetupFailure->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_S1SetupFailure->cause_isset = 1;


	// TimeToWait , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_S1SetupFailure->timeToWait = TimeToWait_v1s_val;
	obj_S1SetupFailure->timeToWait_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_S1SetupFailure->criticalityDiagnostics);
	obj_S1SetupFailure->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_S1SetupFailure( obj_S1SetupFailure, node);
	__si_s1ap_memfree_pdu_S1SetupFailure( obj_S1SetupFailure);
}

void __si_s1ap__Send_ENBConfigurationUpdate_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_ENBConfigurationUpdate * obj_ENBConfigurationUpdate = (SI_S1AP_DT_PDU_ENBConfigurationUpdate*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ENBConfigurationUpdate));
	memset( obj_ENBConfigurationUpdate, 0, sizeof( SI_S1AP_DT_PDU_ENBConfigurationUpdate));

	// ENBname    PrintableString, PRESENCE = optional , MIN=1, MAX=150
	__si_s1ap_init_ENBname2( &obj_ENBConfigurationUpdate->eNBname, "P", 1);
	obj_ENBConfigurationUpdate->eNBname_isset = 1;


	// SupportedTAs , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__SupportedTAs( &obj_ENBConfigurationUpdate->supportedTAs);
	obj_ENBConfigurationUpdate->supportedTAs_isset = 1;


	// CSG-IdList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__CSG_IdList( &obj_ENBConfigurationUpdate->cSGIdList);
	obj_ENBConfigurationUpdate->cSGIdList_isset = 1;


	// PagingDRX , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_ENBConfigurationUpdate->defaultPagingDRX = PagingDRX_v32_val;
	obj_ENBConfigurationUpdate->defaultPagingDRX_isset = 1;


	// NB-IoT-DefaultPagingDRX , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_ENBConfigurationUpdate->nBIoTDefaultPagingDRX = NB_IoT_DefaultPagingDRX_v128_val;
	obj_ENBConfigurationUpdate->nBIoTDefaultPagingDRX_isset = 1;


	// ConnectedengNBList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__ConnectedengNBList( &obj_ENBConfigurationUpdate->connectedengNBToAddList);
	obj_ENBConfigurationUpdate->connectedengNBToAddList_isset = 1;


	// ConnectedengNBList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__ConnectedengNBList( &obj_ENBConfigurationUpdate->connectedengNBToRemoveList);
	obj_ENBConfigurationUpdate->connectedengNBToRemoveList_isset = 1;



	__si_s1ap_send_ENBConfigurationUpdate( obj_ENBConfigurationUpdate, node);
	__si_s1ap_memfree_pdu_ENBConfigurationUpdate( obj_ENBConfigurationUpdate);
}

void __si_s1ap__Send_ENBConfigurationUpdateAcknowledge_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_ENBConfigurationUpdateAcknowledge * obj_ENBConfigurationUpdateAcknowledge = (SI_S1AP_DT_PDU_ENBConfigurationUpdateAcknowledge*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ENBConfigurationUpdateAcknowledge));
	memset( obj_ENBConfigurationUpdateAcknowledge, 0, sizeof( SI_S1AP_DT_PDU_ENBConfigurationUpdateAcknowledge));

	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_ENBConfigurationUpdateAcknowledge->criticalityDiagnostics);
	obj_ENBConfigurationUpdateAcknowledge->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_ENBConfigurationUpdateAcknowledge( obj_ENBConfigurationUpdateAcknowledge, node);
	__si_s1ap_memfree_pdu_ENBConfigurationUpdateAcknowledge( obj_ENBConfigurationUpdateAcknowledge);
}

void __si_s1ap__Send_ENBConfigurationUpdateFailure_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_ENBConfigurationUpdateFailure * obj_ENBConfigurationUpdateFailure = (SI_S1AP_DT_PDU_ENBConfigurationUpdateFailure*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ENBConfigurationUpdateFailure));
	memset( obj_ENBConfigurationUpdateFailure, 0, sizeof( SI_S1AP_DT_PDU_ENBConfigurationUpdateFailure));

	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_ENBConfigurationUpdateFailure->cause);
	obj_ENBConfigurationUpdateFailure->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_ENBConfigurationUpdateFailure->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_ENBConfigurationUpdateFailure->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_ENBConfigurationUpdateFailure->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_ENBConfigurationUpdateFailure->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_ENBConfigurationUpdateFailure->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_ENBConfigurationUpdateFailure->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_ENBConfigurationUpdateFailure->cause_isset = 1;


	// TimeToWait , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_ENBConfigurationUpdateFailure->timeToWait = TimeToWait_v1s_val;
	obj_ENBConfigurationUpdateFailure->timeToWait_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_ENBConfigurationUpdateFailure->criticalityDiagnostics);
	obj_ENBConfigurationUpdateFailure->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_ENBConfigurationUpdateFailure( obj_ENBConfigurationUpdateFailure, node);
	__si_s1ap_memfree_pdu_ENBConfigurationUpdateFailure( obj_ENBConfigurationUpdateFailure);
}

void __si_s1ap__Send_MMEConfigurationUpdate_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_MMEConfigurationUpdate * obj_MMEConfigurationUpdate = (SI_S1AP_DT_PDU_MMEConfigurationUpdate*) __si_allocM( sizeof(SI_S1AP_DT_PDU_MMEConfigurationUpdate));
	memset( obj_MMEConfigurationUpdate, 0, sizeof( SI_S1AP_DT_PDU_MMEConfigurationUpdate));

	// MMEname    PrintableString, PRESENCE = optional , MIN=1, MAX=150
	__si_s1ap_init_MMEname2( &obj_MMEConfigurationUpdate->mMEname, "x", 1);
	obj_MMEConfigurationUpdate->mMEname_isset = 1;


	// ServedGUMMEIs , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__ServedGUMMEIs( &obj_MMEConfigurationUpdate->servedGUMMEIs);
	obj_MMEConfigurationUpdate->servedGUMMEIs_isset = 1;


	// RelativeMMECapacity , PRESENCE = optional  INTEGER , MIN=0, MAX=255
	obj_MMEConfigurationUpdate->relativeMMECapacity = __getTestINTEGER( 0, 255);
	obj_MMEConfigurationUpdate->relativeMMECapacity_isset = 1;


	// ServedDCNs , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__ServedDCNs( &obj_MMEConfigurationUpdate->servedDCNs);
	obj_MMEConfigurationUpdate->servedDCNs_isset = 1;



	__si_s1ap_send_MMEConfigurationUpdate( obj_MMEConfigurationUpdate, node);
	__si_s1ap_memfree_pdu_MMEConfigurationUpdate( obj_MMEConfigurationUpdate);
}

void __si_s1ap__Send_MMEConfigurationUpdateAcknowledge_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_MMEConfigurationUpdateAcknowledge * obj_MMEConfigurationUpdateAcknowledge = (SI_S1AP_DT_PDU_MMEConfigurationUpdateAcknowledge*) __si_allocM( sizeof(SI_S1AP_DT_PDU_MMEConfigurationUpdateAcknowledge));
	memset( obj_MMEConfigurationUpdateAcknowledge, 0, sizeof( SI_S1AP_DT_PDU_MMEConfigurationUpdateAcknowledge));

	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_MMEConfigurationUpdateAcknowledge->criticalityDiagnostics);
	obj_MMEConfigurationUpdateAcknowledge->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_MMEConfigurationUpdateAcknowledge( obj_MMEConfigurationUpdateAcknowledge, node);
	__si_s1ap_memfree_pdu_MMEConfigurationUpdateAcknowledge( obj_MMEConfigurationUpdateAcknowledge);
}

void __si_s1ap__Send_MMEConfigurationUpdateFailure_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_MMEConfigurationUpdateFailure * obj_MMEConfigurationUpdateFailure = (SI_S1AP_DT_PDU_MMEConfigurationUpdateFailure*) __si_allocM( sizeof(SI_S1AP_DT_PDU_MMEConfigurationUpdateFailure));
	memset( obj_MMEConfigurationUpdateFailure, 0, sizeof( SI_S1AP_DT_PDU_MMEConfigurationUpdateFailure));

	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_MMEConfigurationUpdateFailure->cause);
	obj_MMEConfigurationUpdateFailure->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_MMEConfigurationUpdateFailure->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_MMEConfigurationUpdateFailure->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_MMEConfigurationUpdateFailure->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_MMEConfigurationUpdateFailure->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_MMEConfigurationUpdateFailure->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_MMEConfigurationUpdateFailure->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_MMEConfigurationUpdateFailure->cause_isset = 1;


	// TimeToWait , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_MMEConfigurationUpdateFailure->timeToWait = TimeToWait_v1s_val;
	obj_MMEConfigurationUpdateFailure->timeToWait_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_MMEConfigurationUpdateFailure->criticalityDiagnostics);
	obj_MMEConfigurationUpdateFailure->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_MMEConfigurationUpdateFailure( obj_MMEConfigurationUpdateFailure, node);
	__si_s1ap_memfree_pdu_MMEConfigurationUpdateFailure( obj_MMEConfigurationUpdateFailure);
}

void __si_s1ap__Send_DownlinkS1cdma2000tunnelling_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_DownlinkS1cdma2000tunnelling * obj_DownlinkS1cdma2000tunnelling = (SI_S1AP_DT_PDU_DownlinkS1cdma2000tunnelling*) __si_allocM( sizeof(SI_S1AP_DT_PDU_DownlinkS1cdma2000tunnelling));
	memset( obj_DownlinkS1cdma2000tunnelling, 0, sizeof( SI_S1AP_DT_PDU_DownlinkS1cdma2000tunnelling));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_DownlinkS1cdma2000tunnelling->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_DownlinkS1cdma2000tunnelling->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_DownlinkS1cdma2000tunnelling->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_DownlinkS1cdma2000tunnelling->eNBUES1APID_isset = 1;


	// dataType is NULL 
	// Cdma2000HOStatus , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_DownlinkS1cdma2000tunnelling->cdma2000HOStatus = Cdma2000HOStatus_hOSuccess_val;
	obj_DownlinkS1cdma2000tunnelling->cdma2000HOStatus_isset = 1;


	// Cdma2000RATType , PRESENCE = mandatory   ENUMERATED, PRESENCE = mandatory
	obj_DownlinkS1cdma2000tunnelling->cdma2000RATType = Cdma2000RATType_hRPD_val;
	obj_DownlinkS1cdma2000tunnelling->cdma2000RATType_isset = 1;


	// Cdma2000PDU    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_Cdma2000PDU2( &obj_DownlinkS1cdma2000tunnelling->cdma2000PDU, "\x03\x18\x18\x18\x03", 5);
	obj_DownlinkS1cdma2000tunnelling->cdma2000PDU_isset = 1;



	__si_s1ap_send_DownlinkS1cdma2000tunnelling( obj_DownlinkS1cdma2000tunnelling, node);
	__si_s1ap_memfree_pdu_DownlinkS1cdma2000tunnelling( obj_DownlinkS1cdma2000tunnelling);
}

void __si_s1ap__Send_UplinkS1cdma2000tunnelling_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UplinkS1cdma2000tunnelling * obj_UplinkS1cdma2000tunnelling = (SI_S1AP_DT_PDU_UplinkS1cdma2000tunnelling*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UplinkS1cdma2000tunnelling));
	memset( obj_UplinkS1cdma2000tunnelling, 0, sizeof( SI_S1AP_DT_PDU_UplinkS1cdma2000tunnelling));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UplinkS1cdma2000tunnelling->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UplinkS1cdma2000tunnelling->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UplinkS1cdma2000tunnelling->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UplinkS1cdma2000tunnelling->eNBUES1APID_isset = 1;


	// Cdma2000RATType , PRESENCE = mandatory   ENUMERATED, PRESENCE = mandatory
	obj_UplinkS1cdma2000tunnelling->cdma2000RATType = Cdma2000RATType_hRPD_val;
	obj_UplinkS1cdma2000tunnelling->cdma2000RATType_isset = 1;


	// Cdma2000SectorID    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_Cdma2000SectorID2( &obj_UplinkS1cdma2000tunnelling->cdma2000SectorID, "\x02\x16\x10\x03\x13", 5);
	obj_UplinkS1cdma2000tunnelling->cdma2000SectorID_isset = 1;


	// Cdma2000HORequiredIndication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UplinkS1cdma2000tunnelling->cdma2000HORequiredIndication = Cdma2000HORequiredIndication_true_val;
	obj_UplinkS1cdma2000tunnelling->cdma2000HORequiredIndication_isset = 1;


	// Cdma2000OneXSRVCCInfo , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__Cdma2000OneXSRVCCInfo( &obj_UplinkS1cdma2000tunnelling->cdma2000OneXSRVCCInfo);
	obj_UplinkS1cdma2000tunnelling->cdma2000OneXSRVCCInfo_isset = 1;


	// Cdma2000OneXRAND    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_Cdma2000OneXRAND2( &obj_UplinkS1cdma2000tunnelling->cdma2000OneXRAND, "\x24\x15\x09\x21\x06", 5);
	obj_UplinkS1cdma2000tunnelling->cdma2000OneXRAND_isset = 1;


	// Cdma2000PDU    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_Cdma2000PDU2( &obj_UplinkS1cdma2000tunnelling->cdma2000PDU, "\x06\x24\x06\x22\x04", 5);
	obj_UplinkS1cdma2000tunnelling->cdma2000PDU_isset = 1;


	// EUTRANRoundTripDelayEstimationInfo , PRESENCE = optional  INTEGER , MIN=0, MAX=2047
	obj_UplinkS1cdma2000tunnelling->eUTRANRoundTripDelayEstimationInfo = __getTestINTEGER( 0, 2047);
	obj_UplinkS1cdma2000tunnelling->eUTRANRoundTripDelayEstimationInfo_isset = 1;



	__si_s1ap_send_UplinkS1cdma2000tunnelling( obj_UplinkS1cdma2000tunnelling, node);
	__si_s1ap_memfree_pdu_UplinkS1cdma2000tunnelling( obj_UplinkS1cdma2000tunnelling);
}

void __si_s1ap__Send_UEContextModificationRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEContextModificationRequest * obj_UEContextModificationRequest = (SI_S1AP_DT_PDU_UEContextModificationRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEContextModificationRequest));
	memset( obj_UEContextModificationRequest, 0, sizeof( SI_S1AP_DT_PDU_UEContextModificationRequest));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UEContextModificationRequest->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UEContextModificationRequest->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UEContextModificationRequest->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UEContextModificationRequest->eNBUES1APID_isset = 1;


	// SecurityKey , PRESENCE = optional   BITSTRING , MIN=256, MAX=256
	__si_s1ap_init_SecurityKey2( &obj_UEContextModificationRequest->securityKey, "43122797416307811746763302079217", 32, 256);
	obj_UEContextModificationRequest->securityKey->bitslen = 256;
	obj_UEContextModificationRequest->securityKey_isset = 1;


	// SubscriberProfileIDforRFP , PRESENCE = optional  INTEGER , MIN=1, MAX=256
	obj_UEContextModificationRequest->subscriberProfileIDforRFP = __getTestINTEGER( 1, 256);
	obj_UEContextModificationRequest->subscriberProfileIDforRFP_isset = 1;


	// UEAggregateMaximumBitrate , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UEAggregateMaximumBitrate( &obj_UEContextModificationRequest->uEaggregateMaximumBitrate);
	obj_UEContextModificationRequest->uEaggregateMaximumBitrate_isset = 1;


	// CSFallbackIndicator , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UEContextModificationRequest->cSFallbackIndicator = CSFallbackIndicator_cs_fallback_required_val;
	obj_UEContextModificationRequest->cSFallbackIndicator_isset = 1;


	// UESecurityCapabilities , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UESecurityCapabilities( &obj_UEContextModificationRequest->uESecurityCapabilities);
	obj_UEContextModificationRequest->uESecurityCapabilities_isset = 1;


	// CSGMembershipStatus , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UEContextModificationRequest->cSGMembershipStatus = CSGMembershipStatus_member_val;
	obj_UEContextModificationRequest->cSGMembershipStatus_isset = 1;


	// LAI , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__LAI( &obj_UEContextModificationRequest->registeredLAI);
	obj_UEContextModificationRequest->registeredLAI_isset = 1;


	// AdditionalCSFallbackIndicator , PRESENCE = conditional   ENUMERATED, PRESENCE = conditional
	obj_UEContextModificationRequest->additionalCSFallbackIndicator = AdditionalCSFallbackIndicator_no_restriction_val;
	obj_UEContextModificationRequest->additionalCSFallbackIndicator_isset = 1;


	// ProSeAuthorized , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__ProSeAuthorized( &obj_UEContextModificationRequest->proSeAuthorized);
	obj_UEContextModificationRequest->proSeAuthorized_isset = 1;


	// SRVCCOperationPossible , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UEContextModificationRequest->sRVCCOperationPossible = SRVCCOperationPossible_possible_val;
	obj_UEContextModificationRequest->sRVCCOperationPossible_isset = 1;


	// SRVCCOperationNotPossible , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UEContextModificationRequest->sRVCCOperationNotPossible = SRVCCOperationNotPossible_notPossible_val;
	obj_UEContextModificationRequest->sRVCCOperationNotPossible_isset = 1;


	// V2XServicesAuthorized , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__V2XServicesAuthorized( &obj_UEContextModificationRequest->v2XServicesAuthorized);
	obj_UEContextModificationRequest->v2XServicesAuthorized_isset = 1;


	// UESidelinkAggregateMaximumBitrate , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UESidelinkAggregateMaximumBitrate( &obj_UEContextModificationRequest->uESidelinkAggregateMaximumBitrate);
	obj_UEContextModificationRequest->uESidelinkAggregateMaximumBitrate_isset = 1;


	// NRUESecurityCapabilities , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRUESecurityCapabilities( &obj_UEContextModificationRequest->nRUESecurityCapabilities);
	obj_UEContextModificationRequest->nRUESecurityCapabilities_isset = 1;


	// AerialUEsubscriptionInformation , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UEContextModificationRequest->aerialUEsubscriptionInformation = AerialUEsubscriptionInformation_allowed_val;
	obj_UEContextModificationRequest->aerialUEsubscriptionInformation_isset = 1;


	// AdditionalRRMPriorityIndex , PRESENCE = optional   BITSTRING , MIN=32, MAX=32
	__si_s1ap_init_AdditionalRRMPriorityIndex2( &obj_UEContextModificationRequest->additionalRRMPriorityIndex, "1692", 4, 32);
	obj_UEContextModificationRequest->additionalRRMPriorityIndex->bitslen = 32;
	obj_UEContextModificationRequest->additionalRRMPriorityIndex_isset = 1;


	// IAB-Authorized , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UEContextModificationRequest->iABAuthorized = IAB_Authorized_authorized_val;
	obj_UEContextModificationRequest->iABAuthorized_isset = 1;


	// NRV2XServicesAuthorized , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRV2XServicesAuthorized( &obj_UEContextModificationRequest->nRV2XServicesAuthorized);
	obj_UEContextModificationRequest->nRV2XServicesAuthorized_isset = 1;


	// NRUESidelinkAggregateMaximumBitrate , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__NRUESidelinkAggregateMaximumBitrate( &obj_UEContextModificationRequest->nRUESidelinkAggregateMaximumBitrate);
	obj_UEContextModificationRequest->nRUESidelinkAggregateMaximumBitrate_isset = 1;


	// PC5QoSParameters , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__PC5QoSParameters( &obj_UEContextModificationRequest->pC5QoSParameters);
	obj_UEContextModificationRequest->pC5QoSParameters_isset = 1;


	// UERadioCapabilityID    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapabilityID2( &obj_UEContextModificationRequest->uERadioCapabilityID, "\x15\x17\x08\x16\x16", 5);
	obj_UEContextModificationRequest->uERadioCapabilityID_isset = 1;



	__si_s1ap_send_UEContextModificationRequest( obj_UEContextModificationRequest, node);
	__si_s1ap_memfree_pdu_UEContextModificationRequest( obj_UEContextModificationRequest);
}

void __si_s1ap__Send_UEContextModificationResponse_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEContextModificationResponse * obj_UEContextModificationResponse = (SI_S1AP_DT_PDU_UEContextModificationResponse*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEContextModificationResponse));
	memset( obj_UEContextModificationResponse, 0, sizeof( SI_S1AP_DT_PDU_UEContextModificationResponse));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UEContextModificationResponse->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UEContextModificationResponse->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UEContextModificationResponse->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UEContextModificationResponse->eNBUES1APID_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_UEContextModificationResponse->criticalityDiagnostics);
	obj_UEContextModificationResponse->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_UEContextModificationResponse( obj_UEContextModificationResponse, node);
	__si_s1ap_memfree_pdu_UEContextModificationResponse( obj_UEContextModificationResponse);
}

void __si_s1ap__Send_UEContextModificationFailure_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEContextModificationFailure * obj_UEContextModificationFailure = (SI_S1AP_DT_PDU_UEContextModificationFailure*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEContextModificationFailure));
	memset( obj_UEContextModificationFailure, 0, sizeof( SI_S1AP_DT_PDU_UEContextModificationFailure));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UEContextModificationFailure->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UEContextModificationFailure->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UEContextModificationFailure->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UEContextModificationFailure->eNBUES1APID_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_UEContextModificationFailure->cause);
	obj_UEContextModificationFailure->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_UEContextModificationFailure->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_UEContextModificationFailure->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_UEContextModificationFailure->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_UEContextModificationFailure->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_UEContextModificationFailure->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_UEContextModificationFailure->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_UEContextModificationFailure->cause_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_UEContextModificationFailure->criticalityDiagnostics);
	obj_UEContextModificationFailure->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_UEContextModificationFailure( obj_UEContextModificationFailure, node);
	__si_s1ap_memfree_pdu_UEContextModificationFailure( obj_UEContextModificationFailure);
}

void __si_s1ap__Send_UECapabilityInfoIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UECapabilityInfoIndication * obj_UECapabilityInfoIndication = (SI_S1AP_DT_PDU_UECapabilityInfoIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UECapabilityInfoIndication));
	memset( obj_UECapabilityInfoIndication, 0, sizeof( SI_S1AP_DT_PDU_UECapabilityInfoIndication));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UECapabilityInfoIndication->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UECapabilityInfoIndication->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UECapabilityInfoIndication->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UECapabilityInfoIndication->eNBUES1APID_isset = 1;


	// UERadioCapability    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapability2( &obj_UECapabilityInfoIndication->uERadioCapability, "\x10\x12\x08\x09\x12", 5);
	obj_UECapabilityInfoIndication->uERadioCapability_isset = 1;


	// UERadioCapabilityForPaging    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapabilityForPaging2( &obj_UECapabilityInfoIndication->uERadioCapabilityForPaging, "\x03\x22\x10\x02\x15", 5);
	obj_UECapabilityInfoIndication->uERadioCapabilityForPaging_isset = 1;


	// UE-Application-Layer-Measurement-Capability , PRESENCE = optional   BITSTRING , MIN=8, MAX=8
	__si_s1ap_init_UE_Application_Layer_Measurement_Capability2( &obj_UECapabilityInfoIndication->uEApplicationLayerMeasurementCapability, "0", 1, 8);
	obj_UECapabilityInfoIndication->uEApplicationLayerMeasurementCapability->bitslen = 8;
	obj_UECapabilityInfoIndication->uEApplicationLayerMeasurementCapability_isset = 1;


	// LTE-M-Indication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UECapabilityInfoIndication->lTEMIndication = LTE_M_Indication_lte_m_val;
	obj_UECapabilityInfoIndication->lTEMIndication_isset = 1;


	// UERadioCapability    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapability2( &obj_UECapabilityInfoIndication->uERadioCapabilityNRFormat, "\x05\x12\x21\x23\x01", 5);
	obj_UECapabilityInfoIndication->uERadioCapabilityNRFormat_isset = 1;


	// UERadioCapabilityForPaging    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapabilityForPaging2( &obj_UECapabilityInfoIndication->uERadioCapabilityForPagingNRFormat, "\x10\x01\x02\x18\x22", 5);
	obj_UECapabilityInfoIndication->uERadioCapabilityForPagingNRFormat_isset = 1;



	__si_s1ap_send_UECapabilityInfoIndication( obj_UECapabilityInfoIndication, node);
	__si_s1ap_memfree_pdu_UECapabilityInfoIndication( obj_UECapabilityInfoIndication);
}

void __si_s1ap__Send_UEContextReleaseCommand_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEContextReleaseCommand * obj_UEContextReleaseCommand = (SI_S1AP_DT_PDU_UEContextReleaseCommand*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEContextReleaseCommand));
	memset( obj_UEContextReleaseCommand, 0, sizeof( SI_S1AP_DT_PDU_UEContextReleaseCommand));

	// UE-S1AP-IDs , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__UE_S1AP_IDs( &obj_UEContextReleaseCommand->uES1APIDs);
	obj_UEContextReleaseCommand->uES1APIDs->SelectedChoice = UE_S1AP_IDs_uE_S1AP_ID_pair_val;

	switch( obj_UEContextReleaseCommand->uES1APIDs->SelectedChoice)
	{
		case UE_S1AP_IDs_uE_S1AP_ID_pair_val:
			__si_s1ap__set_testdata__UE_S1AP_ID_pair( &obj_UEContextReleaseCommand->uES1APIDs->u.uE_S1AP_ID_pair); //   L:11816
			break;
		case UE_S1AP_IDs_mME_UE_S1AP_ID_val:
			obj_UEContextReleaseCommand->uES1APIDs->u.mME_UE_S1AP_ID = __getTestINTEGER( 0, 4294967295);
			break;
		default:
			break;
	}

	obj_UEContextReleaseCommand->uES1APIDs_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_UEContextReleaseCommand->cause);
	obj_UEContextReleaseCommand->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_UEContextReleaseCommand->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_UEContextReleaseCommand->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_UEContextReleaseCommand->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_UEContextReleaseCommand->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_UEContextReleaseCommand->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_UEContextReleaseCommand->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_UEContextReleaseCommand->cause_isset = 1;



	__si_s1ap_send_UEContextReleaseCommand( obj_UEContextReleaseCommand, node);
	__si_s1ap_memfree_pdu_UEContextReleaseCommand( obj_UEContextReleaseCommand);
}

void __si_s1ap__Send_UEContextReleaseComplete_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEContextReleaseComplete * obj_UEContextReleaseComplete = (SI_S1AP_DT_PDU_UEContextReleaseComplete*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEContextReleaseComplete));
	memset( obj_UEContextReleaseComplete, 0, sizeof( SI_S1AP_DT_PDU_UEContextReleaseComplete));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UEContextReleaseComplete->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UEContextReleaseComplete->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UEContextReleaseComplete->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UEContextReleaseComplete->eNBUES1APID_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_UEContextReleaseComplete->criticalityDiagnostics);
	obj_UEContextReleaseComplete->criticalityDiagnostics_isset = 1;


	// UserLocationInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UserLocationInformation( &obj_UEContextReleaseComplete->userLocationInformation);
	obj_UEContextReleaseComplete->userLocationInformation_isset = 1;


	// InformationOnRecommendedCellsAndENBsForPaging , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__InformationOnRecommendedCellsAndENBsForPaging( &obj_UEContextReleaseComplete->informationOnRecommendedCellsAndENBsForPaging);
	obj_UEContextReleaseComplete->informationOnRecommendedCellsAndENBsForPaging_isset = 1;


	// CellIdentifierAndCELevelForCECapableUEs , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CellIdentifierAndCELevelForCECapableUEs( &obj_UEContextReleaseComplete->cellIdentifierAndCELevelForCECapableUEs);
	obj_UEContextReleaseComplete->cellIdentifierAndCELevelForCECapableUEs_isset = 1;


	// SecondaryRATDataUsageReportList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__SecondaryRATDataUsageReportList( &obj_UEContextReleaseComplete->secondaryRATDataUsageReportList);
	obj_UEContextReleaseComplete->secondaryRATDataUsageReportList_isset = 1;


	// TimeSinceSecondaryNodeRelease    OCTETSTRING, PRESENCE = optional , MIN=4, MAX=4
	__si_s1ap_init_TimeSinceSecondaryNodeRelease2( &obj_UEContextReleaseComplete->timeSinceSecondaryNodeRelease, "\x04\x11\x13\x15", 4);
	obj_UEContextReleaseComplete->timeSinceSecondaryNodeRelease_isset = 1;



	__si_s1ap_send_UEContextReleaseComplete( obj_UEContextReleaseComplete, node);
	__si_s1ap_memfree_pdu_UEContextReleaseComplete( obj_UEContextReleaseComplete);
}

void __si_s1ap__Send_ENBStatusTransfer_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_ENBStatusTransfer * obj_ENBStatusTransfer = (SI_S1AP_DT_PDU_ENBStatusTransfer*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ENBStatusTransfer));
	memset( obj_ENBStatusTransfer, 0, sizeof( SI_S1AP_DT_PDU_ENBStatusTransfer));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_ENBStatusTransfer->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_ENBStatusTransfer->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_ENBStatusTransfer->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_ENBStatusTransfer->eNBUES1APID_isset = 1;


	// ENB-StatusTransfer-TransparentContainer , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__ENB_StatusTransfer_TransparentContainer( &obj_ENBStatusTransfer->eNBStatusTransferTransparentContainer);
	obj_ENBStatusTransfer->eNBStatusTransferTransparentContainer_isset = 1;



	__si_s1ap_send_ENBStatusTransfer( obj_ENBStatusTransfer, node);
	__si_s1ap_memfree_pdu_ENBStatusTransfer( obj_ENBStatusTransfer);
}

void __si_s1ap__Send_MMEStatusTransfer_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_MMEStatusTransfer * obj_MMEStatusTransfer = (SI_S1AP_DT_PDU_MMEStatusTransfer*) __si_allocM( sizeof(SI_S1AP_DT_PDU_MMEStatusTransfer));
	memset( obj_MMEStatusTransfer, 0, sizeof( SI_S1AP_DT_PDU_MMEStatusTransfer));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_MMEStatusTransfer->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_MMEStatusTransfer->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_MMEStatusTransfer->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_MMEStatusTransfer->eNBUES1APID_isset = 1;


	// ENB-StatusTransfer-TransparentContainer , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__ENB_StatusTransfer_TransparentContainer( &obj_MMEStatusTransfer->eNBStatusTransferTransparentContainer);
	obj_MMEStatusTransfer->eNBStatusTransferTransparentContainer_isset = 1;



	__si_s1ap_send_MMEStatusTransfer( obj_MMEStatusTransfer, node);
	__si_s1ap_memfree_pdu_MMEStatusTransfer( obj_MMEStatusTransfer);
}

void __si_s1ap__Send_DeactivateTrace_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_DeactivateTrace * obj_DeactivateTrace = (SI_S1AP_DT_PDU_DeactivateTrace*) __si_allocM( sizeof(SI_S1AP_DT_PDU_DeactivateTrace));
	memset( obj_DeactivateTrace, 0, sizeof( SI_S1AP_DT_PDU_DeactivateTrace));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_DeactivateTrace->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_DeactivateTrace->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_DeactivateTrace->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_DeactivateTrace->eNBUES1APID_isset = 1;


	// E-UTRAN-Trace-ID    OCTETSTRING, PRESENCE = mandatory , MIN=8, MAX=8
	__si_s1ap_init_E_UTRAN_Trace_ID2( &obj_DeactivateTrace->eUTRANTraceID, "\x06\x14\x11\x20\x18\x07\x11\x15", 8);
	obj_DeactivateTrace->eUTRANTraceID_isset = 1;



	__si_s1ap_send_DeactivateTrace( obj_DeactivateTrace, node);
	__si_s1ap_memfree_pdu_DeactivateTrace( obj_DeactivateTrace);
}

void __si_s1ap__Send_TraceStart_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_TraceStart * obj_TraceStart = (SI_S1AP_DT_PDU_TraceStart*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TraceStart));
	memset( obj_TraceStart, 0, sizeof( SI_S1AP_DT_PDU_TraceStart));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_TraceStart->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_TraceStart->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_TraceStart->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_TraceStart->eNBUES1APID_isset = 1;


	// TraceActivation , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__TraceActivation( &obj_TraceStart->traceActivation);
	obj_TraceStart->traceActivation_isset = 1;



	__si_s1ap_send_TraceStart( obj_TraceStart, node);
	__si_s1ap_memfree_pdu_TraceStart( obj_TraceStart);
}

void __si_s1ap__Send_TraceFailureIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_TraceFailureIndication * obj_TraceFailureIndication = (SI_S1AP_DT_PDU_TraceFailureIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_TraceFailureIndication));
	memset( obj_TraceFailureIndication, 0, sizeof( SI_S1AP_DT_PDU_TraceFailureIndication));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_TraceFailureIndication->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_TraceFailureIndication->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_TraceFailureIndication->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_TraceFailureIndication->eNBUES1APID_isset = 1;


	// E-UTRAN-Trace-ID    OCTETSTRING, PRESENCE = mandatory , MIN=8, MAX=8
	__si_s1ap_init_E_UTRAN_Trace_ID2( &obj_TraceFailureIndication->eUTRANTraceID, "\x12\x06\x15\x08\x22\x17\x02\x15", 8);
	obj_TraceFailureIndication->eUTRANTraceID_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_TraceFailureIndication->cause);
	obj_TraceFailureIndication->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_TraceFailureIndication->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_TraceFailureIndication->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_TraceFailureIndication->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_TraceFailureIndication->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_TraceFailureIndication->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_TraceFailureIndication->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_TraceFailureIndication->cause_isset = 1;



	__si_s1ap_send_TraceFailureIndication( obj_TraceFailureIndication, node);
	__si_s1ap_memfree_pdu_TraceFailureIndication( obj_TraceFailureIndication);
}

void __si_s1ap__Send_CellTrafficTrace_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_CellTrafficTrace * obj_CellTrafficTrace = (SI_S1AP_DT_PDU_CellTrafficTrace*) __si_allocM( sizeof(SI_S1AP_DT_PDU_CellTrafficTrace));
	memset( obj_CellTrafficTrace, 0, sizeof( SI_S1AP_DT_PDU_CellTrafficTrace));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_CellTrafficTrace->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_CellTrafficTrace->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_CellTrafficTrace->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_CellTrafficTrace->eNBUES1APID_isset = 1;


	// E-UTRAN-Trace-ID    OCTETSTRING, PRESENCE = mandatory , MIN=8, MAX=8
	__si_s1ap_init_E_UTRAN_Trace_ID2( &obj_CellTrafficTrace->eUTRANTraceID, "\x09\x22\x23\x20\x07\x19\x03\x09", 8);
	obj_CellTrafficTrace->eUTRANTraceID_isset = 1;


	// EUTRAN-CGI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_CellTrafficTrace->eUTRANCGI);
	obj_CellTrafficTrace->eUTRANCGI_isset = 1;


	// TransportLayerAddress , PRESENCE = mandatory   BITSTRING , MIN=1, MAX=160
	__si_s1ap_init_TransportLayerAddress2( &obj_CellTrafficTrace->traceCollectionEntityIPAddress, "8", 1, 1);
	obj_CellTrafficTrace->traceCollectionEntityIPAddress->bitslen = 1;
	obj_CellTrafficTrace->traceCollectionEntityIPAddress_isset = 1;


	// PrivacyIndicator , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_CellTrafficTrace->privacyIndicator = PrivacyIndicator_immediate_MDT_val;
	obj_CellTrafficTrace->privacyIndicator_isset = 1;



	__si_s1ap_send_CellTrafficTrace( obj_CellTrafficTrace, node);
	__si_s1ap_memfree_pdu_CellTrafficTrace( obj_CellTrafficTrace);
}

void __si_s1ap__Send_LocationReportingControl_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_LocationReportingControl * obj_LocationReportingControl = (SI_S1AP_DT_PDU_LocationReportingControl*) __si_allocM( sizeof(SI_S1AP_DT_PDU_LocationReportingControl));
	memset( obj_LocationReportingControl, 0, sizeof( SI_S1AP_DT_PDU_LocationReportingControl));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_LocationReportingControl->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_LocationReportingControl->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_LocationReportingControl->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_LocationReportingControl->eNBUES1APID_isset = 1;


	// RequestType , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__RequestType( &obj_LocationReportingControl->requestType);
	obj_LocationReportingControl->requestType_isset = 1;



	__si_s1ap_send_LocationReportingControl( obj_LocationReportingControl, node);
	__si_s1ap_memfree_pdu_LocationReportingControl( obj_LocationReportingControl);
}

void __si_s1ap__Send_LocationReportingFailureIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_LocationReportingFailureIndication * obj_LocationReportingFailureIndication = (SI_S1AP_DT_PDU_LocationReportingFailureIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_LocationReportingFailureIndication));
	memset( obj_LocationReportingFailureIndication, 0, sizeof( SI_S1AP_DT_PDU_LocationReportingFailureIndication));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_LocationReportingFailureIndication->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_LocationReportingFailureIndication->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_LocationReportingFailureIndication->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_LocationReportingFailureIndication->eNBUES1APID_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_LocationReportingFailureIndication->cause);
	obj_LocationReportingFailureIndication->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_LocationReportingFailureIndication->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_LocationReportingFailureIndication->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_LocationReportingFailureIndication->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_LocationReportingFailureIndication->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_LocationReportingFailureIndication->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_LocationReportingFailureIndication->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_LocationReportingFailureIndication->cause_isset = 1;



	__si_s1ap_send_LocationReportingFailureIndication( obj_LocationReportingFailureIndication, node);
	__si_s1ap_memfree_pdu_LocationReportingFailureIndication( obj_LocationReportingFailureIndication);
}

void __si_s1ap__Send_LocationReport_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_LocationReport * obj_LocationReport = (SI_S1AP_DT_PDU_LocationReport*) __si_allocM( sizeof(SI_S1AP_DT_PDU_LocationReport));
	memset( obj_LocationReport, 0, sizeof( SI_S1AP_DT_PDU_LocationReport));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_LocationReport->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_LocationReport->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_LocationReport->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_LocationReport->eNBUES1APID_isset = 1;


	// EUTRAN-CGI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_LocationReport->eUTRANCGI);
	obj_LocationReport->eUTRANCGI_isset = 1;


	// TAI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__TAI( &obj_LocationReport->tAI);
	obj_LocationReport->tAI_isset = 1;


	// RequestType , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__RequestType( &obj_LocationReport->requestType);
	obj_LocationReport->requestType_isset = 1;


	// PSCellInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__PSCellInformation( &obj_LocationReport->pSCellInformation);
	obj_LocationReport->pSCellInformation_isset = 1;


	// LTE-NTN-TAI-Information , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__LTE_NTN_TAI_Information( &obj_LocationReport->lTENTNTAIInformation);
	obj_LocationReport->lTENTNTAIInformation_isset = 1;



	__si_s1ap_send_LocationReport( obj_LocationReport, node);
	__si_s1ap_memfree_pdu_LocationReport( obj_LocationReport);
}

void __si_s1ap__Send_OverloadStart_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_OverloadStart * obj_OverloadStart = (SI_S1AP_DT_PDU_OverloadStart*) __si_allocM( sizeof(SI_S1AP_DT_PDU_OverloadStart));
	memset( obj_OverloadStart, 0, sizeof( SI_S1AP_DT_PDU_OverloadStart));

	// OverloadResponse , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__OverloadResponse( &obj_OverloadStart->overloadResponse);
	obj_OverloadStart->overloadResponse->SelectedChoice = OverloadResponse_overloadAction_val;

	switch( obj_OverloadStart->overloadResponse->SelectedChoice)
	{
		case OverloadResponse_overloadAction_val:
			obj_OverloadStart->overloadResponse->u.overloadAction = OverloadAction_reject_non_emergency_mo_dt_val;
			break;
		default:
			break;
	}

	obj_OverloadStart->overloadResponse_isset = 1;


	// GUMMEIList, PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__GUMMEIList( &obj_OverloadStart->gUMMEIList);
	obj_OverloadStart->gUMMEIList_isset = 1;


	// TrafficLoadReductionIndication , PRESENCE = optional  INTEGER , MIN=1, MAX=99
	obj_OverloadStart->trafficLoadReductionIndication = __getTestINTEGER( 1, 99);
	obj_OverloadStart->trafficLoadReductionIndication_isset = 1;



	__si_s1ap_send_OverloadStart( obj_OverloadStart, node);
	__si_s1ap_memfree_pdu_OverloadStart( obj_OverloadStart);
}

void __si_s1ap__Send_OverloadStop_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_OverloadStop * obj_OverloadStop = (SI_S1AP_DT_PDU_OverloadStop*) __si_allocM( sizeof(SI_S1AP_DT_PDU_OverloadStop));
	memset( obj_OverloadStop, 0, sizeof( SI_S1AP_DT_PDU_OverloadStop));

	// GUMMEIList, PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__GUMMEIList( &obj_OverloadStop->gUMMEIList);
	obj_OverloadStop->gUMMEIList_isset = 1;



	__si_s1ap_send_OverloadStop( obj_OverloadStop, node);
	__si_s1ap_memfree_pdu_OverloadStop( obj_OverloadStop);
}

void __si_s1ap__Send_WriteReplaceWarningRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_WriteReplaceWarningRequest * obj_WriteReplaceWarningRequest = (SI_S1AP_DT_PDU_WriteReplaceWarningRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_WriteReplaceWarningRequest));
	memset( obj_WriteReplaceWarningRequest, 0, sizeof( SI_S1AP_DT_PDU_WriteReplaceWarningRequest));

	// MessageIdentifier , PRESENCE = mandatory   BITSTRING , MIN=16, MAX=16
	__si_s1ap_init_MessageIdentifier2( &obj_WriteReplaceWarningRequest->messageIdentifier, "17", 2, 16);
	obj_WriteReplaceWarningRequest->messageIdentifier->bitslen = 16;
	obj_WriteReplaceWarningRequest->messageIdentifier_isset = 1;


	// SerialNumber , PRESENCE = mandatory   BITSTRING , MIN=16, MAX=16
	__si_s1ap_init_SerialNumber2( &obj_WriteReplaceWarningRequest->serialNumber, "30", 2, 16);
	obj_WriteReplaceWarningRequest->serialNumber->bitslen = 16;
	obj_WriteReplaceWarningRequest->serialNumber_isset = 1;


	// WarningAreaList , PRESENCE = optional   CHOICE
	__si_s1ap__set_testdata__WarningAreaList( &obj_WriteReplaceWarningRequest->warningAreaList);
	obj_WriteReplaceWarningRequest->warningAreaList->SelectedChoice = WarningAreaList_cellIDList_val;

	switch( obj_WriteReplaceWarningRequest->warningAreaList->SelectedChoice)
	{
		case WarningAreaList_cellIDList_val:
			__si_s1ap__set_testdata__ECGIList( &obj_WriteReplaceWarningRequest->warningAreaList->u.cellIDList); //   L:11896
			break;
		case WarningAreaList_trackingAreaListforWarning_val:
			__si_s1ap__set_testdata__TAIListforWarning( &obj_WriteReplaceWarningRequest->warningAreaList->u.trackingAreaListforWarning); //   L:11896
			break;
		case WarningAreaList_emergencyAreaIDList_val:
			__si_s1ap__set_testdata__EmergencyAreaIDList( &obj_WriteReplaceWarningRequest->warningAreaList->u.emergencyAreaIDList); //   L:11896
			break;
		default:
			break;
	}

	obj_WriteReplaceWarningRequest->warningAreaList_isset = 1;


	// RepetitionPeriod , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4095
	obj_WriteReplaceWarningRequest->repetitionPeriod = __getTestINTEGER( 0, 4095);
	obj_WriteReplaceWarningRequest->repetitionPeriod_isset = 1;


	// ExtendedRepetitionPeriod , PRESENCE = optional  INTEGER , MIN=4096, MAX=131071
	obj_WriteReplaceWarningRequest->extendedRepetitionPeriod = __getTestINTEGER( 4096, 131071);
	obj_WriteReplaceWarningRequest->extendedRepetitionPeriod_isset = 1;


	// NumberofBroadcastRequest , PRESENCE = mandatory  INTEGER , MIN=0, MAX=65535
	obj_WriteReplaceWarningRequest->numberofBroadcastRequest = __getTestINTEGER( 0, 65535);
	obj_WriteReplaceWarningRequest->numberofBroadcastRequest_isset = 1;


	// WarningType    OCTETSTRING, PRESENCE = optional , MIN=2, MAX=2
	__si_s1ap_init_WarningType2( &obj_WriteReplaceWarningRequest->warningType, "\x08\x22", 2);
	obj_WriteReplaceWarningRequest->warningType_isset = 1;


	// WarningSecurityInfo    OCTETSTRING, PRESENCE = optional , MIN=50, MAX=50
	__si_s1ap_init_WarningSecurityInfo2( &obj_WriteReplaceWarningRequest->warningSecurityInfo, "\x12\x08\x18\x04\x03\x11\x07\x11\x01\x12\x03\x18\x01\x06\x16\x16\x24\x22\x17\x19\x22\x10\x20\x17\x24\x08\x13\x20\x20\x17\x23\x02\x19\x05\x10\x08\x11\x09\x17\x10\x04\x21\x14\x02\x21\x23\x08\x19\x22\x04", 50);
	obj_WriteReplaceWarningRequest->warningSecurityInfo_isset = 1;


	// DataCodingScheme , PRESENCE = optional   BITSTRING , MIN=8, MAX=8
	__si_s1ap_init_DataCodingScheme2( &obj_WriteReplaceWarningRequest->dataCodingScheme, "4", 1, 8);
	obj_WriteReplaceWarningRequest->dataCodingScheme->bitslen = 8;
	obj_WriteReplaceWarningRequest->dataCodingScheme_isset = 1;


	// WarningMessageContents    OCTETSTRING, PRESENCE = optional , MIN=1, MAX=9600
	__si_s1ap_init_WarningMessageContents2( &obj_WriteReplaceWarningRequest->warningMessageContents, "\x12", 1);
	obj_WriteReplaceWarningRequest->warningMessageContents_isset = 1;


	// ConcurrentWarningMessageIndicator , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_WriteReplaceWarningRequest->concurrentWarningMessageIndicator = ConcurrentWarningMessageIndicator_true_val;
	obj_WriteReplaceWarningRequest->concurrentWarningMessageIndicator_isset = 1;


	// WarningAreaCoordinates    OCTETSTRING, PRESENCE = optional , MIN=1, MAX=1024
	__si_s1ap_init_WarningAreaCoordinates2( &obj_WriteReplaceWarningRequest->warningAreaCoordinates, "\x10", 1);
	obj_WriteReplaceWarningRequest->warningAreaCoordinates_isset = 1;



	__si_s1ap_send_WriteReplaceWarningRequest( obj_WriteReplaceWarningRequest, node);
	__si_s1ap_memfree_pdu_WriteReplaceWarningRequest( obj_WriteReplaceWarningRequest);
}

void __si_s1ap__Send_WriteReplaceWarningResponse_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_WriteReplaceWarningResponse * obj_WriteReplaceWarningResponse = (SI_S1AP_DT_PDU_WriteReplaceWarningResponse*) __si_allocM( sizeof(SI_S1AP_DT_PDU_WriteReplaceWarningResponse));
	memset( obj_WriteReplaceWarningResponse, 0, sizeof( SI_S1AP_DT_PDU_WriteReplaceWarningResponse));

	// MessageIdentifier , PRESENCE = mandatory   BITSTRING , MIN=16, MAX=16
	__si_s1ap_init_MessageIdentifier2( &obj_WriteReplaceWarningResponse->messageIdentifier, "26", 2, 16);
	obj_WriteReplaceWarningResponse->messageIdentifier->bitslen = 16;
	obj_WriteReplaceWarningResponse->messageIdentifier_isset = 1;


	// SerialNumber , PRESENCE = mandatory   BITSTRING , MIN=16, MAX=16
	__si_s1ap_init_SerialNumber2( &obj_WriteReplaceWarningResponse->serialNumber, "25", 2, 16);
	obj_WriteReplaceWarningResponse->serialNumber->bitslen = 16;
	obj_WriteReplaceWarningResponse->serialNumber_isset = 1;


	// BroadcastCompletedAreaList , PRESENCE = optional   CHOICE
	__si_s1ap__set_testdata__BroadcastCompletedAreaList( &obj_WriteReplaceWarningResponse->broadcastCompletedAreaList);
	obj_WriteReplaceWarningResponse->broadcastCompletedAreaList->SelectedChoice = BroadcastCompletedAreaList_cellID_Broadcast_val;

	switch( obj_WriteReplaceWarningResponse->broadcastCompletedAreaList->SelectedChoice)
	{
		case BroadcastCompletedAreaList_cellID_Broadcast_val:
			__si_s1ap__set_testdata__CellID_Broadcast( &obj_WriteReplaceWarningResponse->broadcastCompletedAreaList->u.cellID_Broadcast); //   L:11896
			break;
		case BroadcastCompletedAreaList_tAI_Broadcast_val:
			__si_s1ap__set_testdata__TAI_Broadcast( &obj_WriteReplaceWarningResponse->broadcastCompletedAreaList->u.tAI_Broadcast); //   L:11896
			break;
		case BroadcastCompletedAreaList_emergencyAreaID_Broadcast_val:
			__si_s1ap__set_testdata__EmergencyAreaID_Broadcast( &obj_WriteReplaceWarningResponse->broadcastCompletedAreaList->u.emergencyAreaID_Broadcast); //   L:11896
			break;
		default:
			break;
	}

	obj_WriteReplaceWarningResponse->broadcastCompletedAreaList_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_WriteReplaceWarningResponse->criticalityDiagnostics);
	obj_WriteReplaceWarningResponse->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_WriteReplaceWarningResponse( obj_WriteReplaceWarningResponse, node);
	__si_s1ap_memfree_pdu_WriteReplaceWarningResponse( obj_WriteReplaceWarningResponse);
}

void __si_s1ap__Send_ENBDirectInformationTransfer_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_ENBDirectInformationTransfer * obj_ENBDirectInformationTransfer = (SI_S1AP_DT_PDU_ENBDirectInformationTransfer*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ENBDirectInformationTransfer));
	memset( obj_ENBDirectInformationTransfer, 0, sizeof( SI_S1AP_DT_PDU_ENBDirectInformationTransfer));

	// Inter-SystemInformationTransferType , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Inter_SystemInformationTransferType( &obj_ENBDirectInformationTransfer->interSystemInformationTransferTypeEDT);
	obj_ENBDirectInformationTransfer->interSystemInformationTransferTypeEDT->SelectedChoice = Inter_SystemInformationTransferType_rIMTransfer_val;

	switch( obj_ENBDirectInformationTransfer->interSystemInformationTransferTypeEDT->SelectedChoice)
	{
		case Inter_SystemInformationTransferType_rIMTransfer_val:
			__si_s1ap__set_testdata__RIMTransfer( &obj_ENBDirectInformationTransfer->interSystemInformationTransferTypeEDT->u.rIMTransfer); //   L:11816
			break;
		default:
			break;
	}

	obj_ENBDirectInformationTransfer->interSystemInformationTransferTypeEDT_isset = 1;



	__si_s1ap_send_ENBDirectInformationTransfer( obj_ENBDirectInformationTransfer, node);
	__si_s1ap_memfree_pdu_ENBDirectInformationTransfer( obj_ENBDirectInformationTransfer);
}

void __si_s1ap__Send_MMEDirectInformationTransfer_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_MMEDirectInformationTransfer * obj_MMEDirectInformationTransfer = (SI_S1AP_DT_PDU_MMEDirectInformationTransfer*) __si_allocM( sizeof(SI_S1AP_DT_PDU_MMEDirectInformationTransfer));
	memset( obj_MMEDirectInformationTransfer, 0, sizeof( SI_S1AP_DT_PDU_MMEDirectInformationTransfer));

	// Inter-SystemInformationTransferType , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Inter_SystemInformationTransferType( &obj_MMEDirectInformationTransfer->interSystemInformationTransferTypeMDT);
	obj_MMEDirectInformationTransfer->interSystemInformationTransferTypeMDT->SelectedChoice = Inter_SystemInformationTransferType_rIMTransfer_val;

	switch( obj_MMEDirectInformationTransfer->interSystemInformationTransferTypeMDT->SelectedChoice)
	{
		case Inter_SystemInformationTransferType_rIMTransfer_val:
			__si_s1ap__set_testdata__RIMTransfer( &obj_MMEDirectInformationTransfer->interSystemInformationTransferTypeMDT->u.rIMTransfer); //   L:11816
			break;
		default:
			break;
	}

	obj_MMEDirectInformationTransfer->interSystemInformationTransferTypeMDT_isset = 1;



	__si_s1ap_send_MMEDirectInformationTransfer( obj_MMEDirectInformationTransfer, node);
	__si_s1ap_memfree_pdu_MMEDirectInformationTransfer( obj_MMEDirectInformationTransfer);
}

void __si_s1ap__Send_ENBConfigurationTransfer_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_ENBConfigurationTransfer * obj_ENBConfigurationTransfer = (SI_S1AP_DT_PDU_ENBConfigurationTransfer*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ENBConfigurationTransfer));
	memset( obj_ENBConfigurationTransfer, 0, sizeof( SI_S1AP_DT_PDU_ENBConfigurationTransfer));

	// SONConfigurationTransfer , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__SONConfigurationTransfer( &obj_ENBConfigurationTransfer->sONConfigurationTransferECT);
	obj_ENBConfigurationTransfer->sONConfigurationTransferECT_isset = 1;


	// EN-DCSONConfigurationTransfer , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__EN_DCSONConfigurationTransfer( &obj_ENBConfigurationTransfer->eNDCSONConfigurationTransferECT);
	obj_ENBConfigurationTransfer->eNDCSONConfigurationTransferECT_isset = 1;


	// IntersystemSONConfigurationTransfer    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_IntersystemSONConfigurationTransfer2( &obj_ENBConfigurationTransfer->intersystemSONConfigurationTransferECT, "\x01\x09\x07\x14\x23", 5);
	obj_ENBConfigurationTransfer->intersystemSONConfigurationTransferECT_isset = 1;



	__si_s1ap_send_ENBConfigurationTransfer( obj_ENBConfigurationTransfer, node);
	__si_s1ap_memfree_pdu_ENBConfigurationTransfer( obj_ENBConfigurationTransfer);
}

void __si_s1ap__Send_MMEConfigurationTransfer_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_MMEConfigurationTransfer * obj_MMEConfigurationTransfer = (SI_S1AP_DT_PDU_MMEConfigurationTransfer*) __si_allocM( sizeof(SI_S1AP_DT_PDU_MMEConfigurationTransfer));
	memset( obj_MMEConfigurationTransfer, 0, sizeof( SI_S1AP_DT_PDU_MMEConfigurationTransfer));

	// SONConfigurationTransfer , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__SONConfigurationTransfer( &obj_MMEConfigurationTransfer->sONConfigurationTransferMCT);
	obj_MMEConfigurationTransfer->sONConfigurationTransferMCT_isset = 1;


	// EN-DCSONConfigurationTransfer , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__EN_DCSONConfigurationTransfer( &obj_MMEConfigurationTransfer->eNDCSONConfigurationTransferMCT);
	obj_MMEConfigurationTransfer->eNDCSONConfigurationTransferMCT_isset = 1;


	// IntersystemSONConfigurationTransfer    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_IntersystemSONConfigurationTransfer2( &obj_MMEConfigurationTransfer->intersystemSONConfigurationTransferMCT, "\x13\x11\x14\x02\x10", 5);
	obj_MMEConfigurationTransfer->intersystemSONConfigurationTransferMCT_isset = 1;



	__si_s1ap_send_MMEConfigurationTransfer( obj_MMEConfigurationTransfer, node);
	__si_s1ap_memfree_pdu_MMEConfigurationTransfer( obj_MMEConfigurationTransfer);
}

void __si_s1ap__Send_PrivateMessage_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_PrivateMessage * obj_PrivateMessage = (SI_S1AP_DT_PDU_PrivateMessage*) __si_allocM( sizeof(SI_S1AP_DT_PDU_PrivateMessage));
	memset( obj_PrivateMessage, 0, sizeof( SI_S1AP_DT_PDU_PrivateMessage));


	__si_s1ap_send_PrivateMessage( obj_PrivateMessage, node);
	__si_s1ap_memfree_pdu_PrivateMessage( obj_PrivateMessage);
}

void __si_s1ap__Send_PWSRestartIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_PWSRestartIndication * obj_PWSRestartIndication = (SI_S1AP_DT_PDU_PWSRestartIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_PWSRestartIndication));
	memset( obj_PWSRestartIndication, 0, sizeof( SI_S1AP_DT_PDU_PWSRestartIndication));

	// ECGIListForRestart , PRESENCE = mandatory   SEQUENCE_OF
	__si_s1ap__set_testdata__ECGIListForRestart( &obj_PWSRestartIndication->eCGIListForRestart);
	obj_PWSRestartIndication->eCGIListForRestart_isset = 1;


	// Global-ENB-ID , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__Global_ENB_ID( &obj_PWSRestartIndication->globalENBID);
	obj_PWSRestartIndication->globalENBID_isset = 1;


	// TAIListForRestart , PRESENCE = mandatory   SEQUENCE_OF
	__si_s1ap__set_testdata__TAIListForRestart( &obj_PWSRestartIndication->tAIListForRestart);
	obj_PWSRestartIndication->tAIListForRestart_isset = 1;


	// EmergencyAreaIDListForRestart , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__EmergencyAreaIDListForRestart( &obj_PWSRestartIndication->emergencyAreaIDListForRestart);
	obj_PWSRestartIndication->emergencyAreaIDListForRestart_isset = 1;



	__si_s1ap_send_PWSRestartIndication( obj_PWSRestartIndication, node);
	__si_s1ap_memfree_pdu_PWSRestartIndication( obj_PWSRestartIndication);
}

void __si_s1ap__Send_KillRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_KillRequest * obj_KillRequest = (SI_S1AP_DT_PDU_KillRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_KillRequest));
	memset( obj_KillRequest, 0, sizeof( SI_S1AP_DT_PDU_KillRequest));

	// MessageIdentifier , PRESENCE = mandatory   BITSTRING , MIN=16, MAX=16
	__si_s1ap_init_MessageIdentifier2( &obj_KillRequest->messageIdentifier, "67", 2, 16);
	obj_KillRequest->messageIdentifier->bitslen = 16;
	obj_KillRequest->messageIdentifier_isset = 1;


	// SerialNumber , PRESENCE = mandatory   BITSTRING , MIN=16, MAX=16
	__si_s1ap_init_SerialNumber2( &obj_KillRequest->serialNumber, "02", 2, 16);
	obj_KillRequest->serialNumber->bitslen = 16;
	obj_KillRequest->serialNumber_isset = 1;


	// WarningAreaList , PRESENCE = optional   CHOICE
	__si_s1ap__set_testdata__WarningAreaList( &obj_KillRequest->warningAreaList);
	obj_KillRequest->warningAreaList->SelectedChoice = WarningAreaList_cellIDList_val;

	switch( obj_KillRequest->warningAreaList->SelectedChoice)
	{
		case WarningAreaList_cellIDList_val:
			__si_s1ap__set_testdata__ECGIList( &obj_KillRequest->warningAreaList->u.cellIDList); //   L:11896
			break;
		case WarningAreaList_trackingAreaListforWarning_val:
			__si_s1ap__set_testdata__TAIListforWarning( &obj_KillRequest->warningAreaList->u.trackingAreaListforWarning); //   L:11896
			break;
		case WarningAreaList_emergencyAreaIDList_val:
			__si_s1ap__set_testdata__EmergencyAreaIDList( &obj_KillRequest->warningAreaList->u.emergencyAreaIDList); //   L:11896
			break;
		default:
			break;
	}

	obj_KillRequest->warningAreaList_isset = 1;


	// KillAllWarningMessages , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_KillRequest->killAllWarningMessages = KillAllWarningMessages_true_val;
	obj_KillRequest->killAllWarningMessages_isset = 1;



	__si_s1ap_send_KillRequest( obj_KillRequest, node);
	__si_s1ap_memfree_pdu_KillRequest( obj_KillRequest);
}

void __si_s1ap__Send_KillResponse_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_KillResponse * obj_KillResponse = (SI_S1AP_DT_PDU_KillResponse*) __si_allocM( sizeof(SI_S1AP_DT_PDU_KillResponse));
	memset( obj_KillResponse, 0, sizeof( SI_S1AP_DT_PDU_KillResponse));

	// MessageIdentifier , PRESENCE = mandatory   BITSTRING , MIN=16, MAX=16
	__si_s1ap_init_MessageIdentifier2( &obj_KillResponse->messageIdentifier, "23", 2, 16);
	obj_KillResponse->messageIdentifier->bitslen = 16;
	obj_KillResponse->messageIdentifier_isset = 1;


	// SerialNumber , PRESENCE = mandatory   BITSTRING , MIN=16, MAX=16
	__si_s1ap_init_SerialNumber2( &obj_KillResponse->serialNumber, "52", 2, 16);
	obj_KillResponse->serialNumber->bitslen = 16;
	obj_KillResponse->serialNumber_isset = 1;


	// BroadcastCancelledAreaList , PRESENCE = optional   CHOICE
	__si_s1ap__set_testdata__BroadcastCancelledAreaList( &obj_KillResponse->broadcastCancelledAreaList);
	obj_KillResponse->broadcastCancelledAreaList->SelectedChoice = BroadcastCancelledAreaList_cellID_Cancelled_val;

	switch( obj_KillResponse->broadcastCancelledAreaList->SelectedChoice)
	{
		case BroadcastCancelledAreaList_cellID_Cancelled_val:
			__si_s1ap__set_testdata__CellID_Cancelled( &obj_KillResponse->broadcastCancelledAreaList->u.cellID_Cancelled); //   L:11896
			break;
		case BroadcastCancelledAreaList_tAI_Cancelled_val:
			__si_s1ap__set_testdata__TAI_Cancelled( &obj_KillResponse->broadcastCancelledAreaList->u.tAI_Cancelled); //   L:11896
			break;
		case BroadcastCancelledAreaList_emergencyAreaID_Cancelled_val:
			__si_s1ap__set_testdata__EmergencyAreaID_Cancelled( &obj_KillResponse->broadcastCancelledAreaList->u.emergencyAreaID_Cancelled); //   L:11896
			break;
		default:
			break;
	}

	obj_KillResponse->broadcastCancelledAreaList_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_KillResponse->criticalityDiagnostics);
	obj_KillResponse->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_KillResponse( obj_KillResponse, node);
	__si_s1ap_memfree_pdu_KillResponse( obj_KillResponse);
}

void __si_s1ap__Send_DownlinkUEAssociatedLPPaTransport_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_DownlinkUEAssociatedLPPaTransport * obj_DownlinkUEAssociatedLPPaTransport = (SI_S1AP_DT_PDU_DownlinkUEAssociatedLPPaTransport*) __si_allocM( sizeof(SI_S1AP_DT_PDU_DownlinkUEAssociatedLPPaTransport));
	memset( obj_DownlinkUEAssociatedLPPaTransport, 0, sizeof( SI_S1AP_DT_PDU_DownlinkUEAssociatedLPPaTransport));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_DownlinkUEAssociatedLPPaTransport->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_DownlinkUEAssociatedLPPaTransport->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_DownlinkUEAssociatedLPPaTransport->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_DownlinkUEAssociatedLPPaTransport->eNBUES1APID_isset = 1;


	// Routing-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=255
	obj_DownlinkUEAssociatedLPPaTransport->routingID = __getTestINTEGER( 0, 255);
	obj_DownlinkUEAssociatedLPPaTransport->routingID_isset = 1;


	// LPPa-PDU    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_LPPa_PDU2( &obj_DownlinkUEAssociatedLPPaTransport->lPPaPDU, "\x06\x07\x21\x05\x01", 5);
	obj_DownlinkUEAssociatedLPPaTransport->lPPaPDU_isset = 1;



	__si_s1ap_send_DownlinkUEAssociatedLPPaTransport( obj_DownlinkUEAssociatedLPPaTransport, node);
	__si_s1ap_memfree_pdu_DownlinkUEAssociatedLPPaTransport( obj_DownlinkUEAssociatedLPPaTransport);
}

void __si_s1ap__Send_UplinkUEAssociatedLPPaTransport_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UplinkUEAssociatedLPPaTransport * obj_UplinkUEAssociatedLPPaTransport = (SI_S1AP_DT_PDU_UplinkUEAssociatedLPPaTransport*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UplinkUEAssociatedLPPaTransport));
	memset( obj_UplinkUEAssociatedLPPaTransport, 0, sizeof( SI_S1AP_DT_PDU_UplinkUEAssociatedLPPaTransport));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UplinkUEAssociatedLPPaTransport->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UplinkUEAssociatedLPPaTransport->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UplinkUEAssociatedLPPaTransport->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UplinkUEAssociatedLPPaTransport->eNBUES1APID_isset = 1;


	// Routing-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=255
	obj_UplinkUEAssociatedLPPaTransport->routingID = __getTestINTEGER( 0, 255);
	obj_UplinkUEAssociatedLPPaTransport->routingID_isset = 1;


	// LPPa-PDU    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_LPPa_PDU2( &obj_UplinkUEAssociatedLPPaTransport->lPPaPDU, "\x13\x12\x20\x17\x19", 5);
	obj_UplinkUEAssociatedLPPaTransport->lPPaPDU_isset = 1;



	__si_s1ap_send_UplinkUEAssociatedLPPaTransport( obj_UplinkUEAssociatedLPPaTransport, node);
	__si_s1ap_memfree_pdu_UplinkUEAssociatedLPPaTransport( obj_UplinkUEAssociatedLPPaTransport);
}

void __si_s1ap__Send_DownlinkNonUEAssociatedLPPaTransport_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_DownlinkNonUEAssociatedLPPaTransport * obj_DownlinkNonUEAssociatedLPPaTransport = (SI_S1AP_DT_PDU_DownlinkNonUEAssociatedLPPaTransport*) __si_allocM( sizeof(SI_S1AP_DT_PDU_DownlinkNonUEAssociatedLPPaTransport));
	memset( obj_DownlinkNonUEAssociatedLPPaTransport, 0, sizeof( SI_S1AP_DT_PDU_DownlinkNonUEAssociatedLPPaTransport));

	// Routing-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=255
	obj_DownlinkNonUEAssociatedLPPaTransport->routingID = __getTestINTEGER( 0, 255);
	obj_DownlinkNonUEAssociatedLPPaTransport->routingID_isset = 1;


	// LPPa-PDU    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_LPPa_PDU2( &obj_DownlinkNonUEAssociatedLPPaTransport->lPPaPDU, "\x12\x02\x03\x11\x23", 5);
	obj_DownlinkNonUEAssociatedLPPaTransport->lPPaPDU_isset = 1;



	__si_s1ap_send_DownlinkNonUEAssociatedLPPaTransport( obj_DownlinkNonUEAssociatedLPPaTransport, node);
	__si_s1ap_memfree_pdu_DownlinkNonUEAssociatedLPPaTransport( obj_DownlinkNonUEAssociatedLPPaTransport);
}

void __si_s1ap__Send_UplinkNonUEAssociatedLPPaTransport_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UplinkNonUEAssociatedLPPaTransport * obj_UplinkNonUEAssociatedLPPaTransport = (SI_S1AP_DT_PDU_UplinkNonUEAssociatedLPPaTransport*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UplinkNonUEAssociatedLPPaTransport));
	memset( obj_UplinkNonUEAssociatedLPPaTransport, 0, sizeof( SI_S1AP_DT_PDU_UplinkNonUEAssociatedLPPaTransport));

	// Routing-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=255
	obj_UplinkNonUEAssociatedLPPaTransport->routingID = __getTestINTEGER( 0, 255);
	obj_UplinkNonUEAssociatedLPPaTransport->routingID_isset = 1;


	// LPPa-PDU    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_LPPa_PDU2( &obj_UplinkNonUEAssociatedLPPaTransport->lPPaPDU, "\x19\x05\x01\x12\x12", 5);
	obj_UplinkNonUEAssociatedLPPaTransport->lPPaPDU_isset = 1;



	__si_s1ap_send_UplinkNonUEAssociatedLPPaTransport( obj_UplinkNonUEAssociatedLPPaTransport, node);
	__si_s1ap_memfree_pdu_UplinkNonUEAssociatedLPPaTransport( obj_UplinkNonUEAssociatedLPPaTransport);
}

void __si_s1ap__Send_UERadioCapabilityMatchRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UERadioCapabilityMatchRequest * obj_UERadioCapabilityMatchRequest = (SI_S1AP_DT_PDU_UERadioCapabilityMatchRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UERadioCapabilityMatchRequest));
	memset( obj_UERadioCapabilityMatchRequest, 0, sizeof( SI_S1AP_DT_PDU_UERadioCapabilityMatchRequest));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UERadioCapabilityMatchRequest->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UERadioCapabilityMatchRequest->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UERadioCapabilityMatchRequest->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UERadioCapabilityMatchRequest->eNBUES1APID_isset = 1;


	// UERadioCapability    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapability2( &obj_UERadioCapabilityMatchRequest->uERadioCapability, "\x21\x02\x19\x21\x19", 5);
	obj_UERadioCapabilityMatchRequest->uERadioCapability_isset = 1;


	// UERadioCapabilityID    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapabilityID2( &obj_UERadioCapabilityMatchRequest->uERadioCapabilityID, "\x01\x22\x09\x09\x24", 5);
	obj_UERadioCapabilityMatchRequest->uERadioCapabilityID_isset = 1;



	__si_s1ap_send_UERadioCapabilityMatchRequest( obj_UERadioCapabilityMatchRequest, node);
	__si_s1ap_memfree_pdu_UERadioCapabilityMatchRequest( obj_UERadioCapabilityMatchRequest);
}

void __si_s1ap__Send_UERadioCapabilityMatchResponse_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UERadioCapabilityMatchResponse * obj_UERadioCapabilityMatchResponse = (SI_S1AP_DT_PDU_UERadioCapabilityMatchResponse*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UERadioCapabilityMatchResponse));
	memset( obj_UERadioCapabilityMatchResponse, 0, sizeof( SI_S1AP_DT_PDU_UERadioCapabilityMatchResponse));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UERadioCapabilityMatchResponse->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UERadioCapabilityMatchResponse->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UERadioCapabilityMatchResponse->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UERadioCapabilityMatchResponse->eNBUES1APID_isset = 1;


	// VoiceSupportMatchIndicator , PRESENCE = mandatory   ENUMERATED, PRESENCE = mandatory
	obj_UERadioCapabilityMatchResponse->voiceSupportMatchIndicator = VoiceSupportMatchIndicator_supported_val;
	obj_UERadioCapabilityMatchResponse->voiceSupportMatchIndicator_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_UERadioCapabilityMatchResponse->criticalityDiagnostics);
	obj_UERadioCapabilityMatchResponse->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_UERadioCapabilityMatchResponse( obj_UERadioCapabilityMatchResponse, node);
	__si_s1ap_memfree_pdu_UERadioCapabilityMatchResponse( obj_UERadioCapabilityMatchResponse);
}

void __si_s1ap__Send_E_RABModificationIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_E_RABModificationIndication * obj_E_RABModificationIndication = (SI_S1AP_DT_PDU_E_RABModificationIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABModificationIndication));
	memset( obj_E_RABModificationIndication, 0, sizeof( SI_S1AP_DT_PDU_E_RABModificationIndication));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_E_RABModificationIndication->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_E_RABModificationIndication->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_E_RABModificationIndication->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_E_RABModificationIndication->eNBUES1APID_isset = 1;


	// dataType is NULL 
	// dataType is NULL 
	// CSGMembershipInfo , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CSGMembershipInfo( &obj_E_RABModificationIndication->cSGMembershipInfo);
	obj_E_RABModificationIndication->cSGMembershipInfo_isset = 1;


	// TunnelInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__TunnelInformation( &obj_E_RABModificationIndication->tunnelInformationforBBF);
	obj_E_RABModificationIndication->tunnelInformationforBBF_isset = 1;


	// SecondaryRATDataUsageReportList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__SecondaryRATDataUsageReportList( &obj_E_RABModificationIndication->secondaryRATDataUsageReportList);
	obj_E_RABModificationIndication->secondaryRATDataUsageReportList_isset = 1;


	// UserLocationInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UserLocationInformation( &obj_E_RABModificationIndication->userLocationInformation);
	obj_E_RABModificationIndication->userLocationInformation_isset = 1;



	__si_s1ap_send_E_RABModificationIndication( obj_E_RABModificationIndication, node);
	__si_s1ap_memfree_pdu_E_RABModificationIndication( obj_E_RABModificationIndication);
}

void __si_s1ap__Send_E_RABModificationConfirm_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_E_RABModificationConfirm * obj_E_RABModificationConfirm = (SI_S1AP_DT_PDU_E_RABModificationConfirm*) __si_allocM( sizeof(SI_S1AP_DT_PDU_E_RABModificationConfirm));
	memset( obj_E_RABModificationConfirm, 0, sizeof( SI_S1AP_DT_PDU_E_RABModificationConfirm));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_E_RABModificationConfirm->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_E_RABModificationConfirm->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_E_RABModificationConfirm->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_E_RABModificationConfirm->eNBUES1APID_isset = 1;


	// E-RABModifyListBearerModConf , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABModifyListBearerModConf( &obj_E_RABModificationConfirm->eRABModifyListBearerModConf);
	obj_E_RABModificationConfirm->eRABModifyListBearerModConf_isset = 1;


	// E-RABList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABList( &obj_E_RABModificationConfirm->eRABFailedToModifyListBearerModConf);
	obj_E_RABModificationConfirm->eRABFailedToModifyListBearerModConf_isset = 1;


	// E-RABList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__E_RABList( &obj_E_RABModificationConfirm->eRABToBeReleasedListBearerModConf);
	obj_E_RABModificationConfirm->eRABToBeReleasedListBearerModConf_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_E_RABModificationConfirm->criticalityDiagnostics);
	obj_E_RABModificationConfirm->criticalityDiagnostics_isset = 1;


	// CSGMembershipStatus , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_E_RABModificationConfirm->cSGMembershipStatus = CSGMembershipStatus_member_val;
	obj_E_RABModificationConfirm->cSGMembershipStatus_isset = 1;



	__si_s1ap_send_E_RABModificationConfirm( obj_E_RABModificationConfirm, node);
	__si_s1ap_memfree_pdu_E_RABModificationConfirm( obj_E_RABModificationConfirm);
}

void __si_s1ap__Send_UEContextModificationIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEContextModificationIndication * obj_UEContextModificationIndication = (SI_S1AP_DT_PDU_UEContextModificationIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEContextModificationIndication));
	memset( obj_UEContextModificationIndication, 0, sizeof( SI_S1AP_DT_PDU_UEContextModificationIndication));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UEContextModificationIndication->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UEContextModificationIndication->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UEContextModificationIndication->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UEContextModificationIndication->eNBUES1APID_isset = 1;


	// CSGMembershipInfo , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CSGMembershipInfo( &obj_UEContextModificationIndication->cSGMembershipInfo);
	obj_UEContextModificationIndication->cSGMembershipInfo_isset = 1;



	__si_s1ap_send_UEContextModificationIndication( obj_UEContextModificationIndication, node);
	__si_s1ap_memfree_pdu_UEContextModificationIndication( obj_UEContextModificationIndication);
}

void __si_s1ap__Send_UEContextModificationConfirm_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEContextModificationConfirm * obj_UEContextModificationConfirm = (SI_S1AP_DT_PDU_UEContextModificationConfirm*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEContextModificationConfirm));
	memset( obj_UEContextModificationConfirm, 0, sizeof( SI_S1AP_DT_PDU_UEContextModificationConfirm));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UEContextModificationConfirm->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UEContextModificationConfirm->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UEContextModificationConfirm->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UEContextModificationConfirm->eNBUES1APID_isset = 1;


	// CSGMembershipStatus , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UEContextModificationConfirm->cSGMembershipStatus = CSGMembershipStatus_member_val;
	obj_UEContextModificationConfirm->cSGMembershipStatus_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_UEContextModificationConfirm->criticalityDiagnostics);
	obj_UEContextModificationConfirm->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_UEContextModificationConfirm( obj_UEContextModificationConfirm, node);
	__si_s1ap_memfree_pdu_UEContextModificationConfirm( obj_UEContextModificationConfirm);
}

void __si_s1ap__Send_RerouteNASRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_RerouteNASRequest * obj_RerouteNASRequest = (SI_S1AP_DT_PDU_RerouteNASRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_RerouteNASRequest));
	memset( obj_RerouteNASRequest, 0, sizeof( SI_S1AP_DT_PDU_RerouteNASRequest));

	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_RerouteNASRequest->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_RerouteNASRequest->eNBUES1APID_isset = 1;


	// MME-UE-S1AP-ID , PRESENCE = optional  INTEGER , MIN=0, MAX=4294967295
	obj_RerouteNASRequest->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_RerouteNASRequest->mMEUES1APID_isset = 1;


	// dataType is NULL 
	// MME-Group-ID    OCTETSTRING, PRESENCE = mandatory , MIN=2, MAX=2
	__si_s1ap_init_MME_Group_ID2( &obj_RerouteNASRequest->mMEGroupID, "\x23\x14", 2);
	obj_RerouteNASRequest->mMEGroupID_isset = 1;


	// Additional-GUTI, PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__Additional_GUTI( &obj_RerouteNASRequest->additionalGUTI);
	obj_RerouteNASRequest->additionalGUTI_isset = 1;


	// UE-Usage-Type , PRESENCE = optional  INTEGER , MIN=0, MAX=255
	obj_RerouteNASRequest->uEUsageType = __getTestINTEGER( 0, 255);
	obj_RerouteNASRequest->uEUsageType_isset = 1;



	__si_s1ap_send_RerouteNASRequest( obj_RerouteNASRequest, node);
	__si_s1ap_memfree_pdu_RerouteNASRequest( obj_RerouteNASRequest);
}

void __si_s1ap__Send_PWSFailureIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_PWSFailureIndication * obj_PWSFailureIndication = (SI_S1AP_DT_PDU_PWSFailureIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_PWSFailureIndication));
	memset( obj_PWSFailureIndication, 0, sizeof( SI_S1AP_DT_PDU_PWSFailureIndication));

	// PWSfailedECGIList , PRESENCE = mandatory   SEQUENCE_OF
	__si_s1ap__set_testdata__PWSfailedECGIList( &obj_PWSFailureIndication->pWSfailedECGIList);
	obj_PWSFailureIndication->pWSfailedECGIList_isset = 1;


	// Global-ENB-ID , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__Global_ENB_ID( &obj_PWSFailureIndication->globalENBID);
	obj_PWSFailureIndication->globalENBID_isset = 1;



	__si_s1ap_send_PWSFailureIndication( obj_PWSFailureIndication, node);
	__si_s1ap_memfree_pdu_PWSFailureIndication( obj_PWSFailureIndication);
}

void __si_s1ap__Send_UEContextSuspendRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEContextSuspendRequest * obj_UEContextSuspendRequest = (SI_S1AP_DT_PDU_UEContextSuspendRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEContextSuspendRequest));
	memset( obj_UEContextSuspendRequest, 0, sizeof( SI_S1AP_DT_PDU_UEContextSuspendRequest));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UEContextSuspendRequest->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UEContextSuspendRequest->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UEContextSuspendRequest->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UEContextSuspendRequest->eNBUES1APID_isset = 1;


	// InformationOnRecommendedCellsAndENBsForPaging , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__InformationOnRecommendedCellsAndENBsForPaging( &obj_UEContextSuspendRequest->informationOnRecommendedCellsAndENBsForPaging);
	obj_UEContextSuspendRequest->informationOnRecommendedCellsAndENBsForPaging_isset = 1;


	// CellIdentifierAndCELevelForCECapableUEs , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CellIdentifierAndCELevelForCECapableUEs( &obj_UEContextSuspendRequest->cellIdentifierAndCELevelForCECapableUEs);
	obj_UEContextSuspendRequest->cellIdentifierAndCELevelForCECapableUEs_isset = 1;


	// SecondaryRATDataUsageReportList , PRESENCE = optional   SEQUENCE_OF
	__si_s1ap__set_testdata__SecondaryRATDataUsageReportList( &obj_UEContextSuspendRequest->secondaryRATDataUsageReportList);
	obj_UEContextSuspendRequest->secondaryRATDataUsageReportList_isset = 1;


	// UserLocationInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UserLocationInformation( &obj_UEContextSuspendRequest->userLocationInformation);
	obj_UEContextSuspendRequest->userLocationInformation_isset = 1;


	// TimeSinceSecondaryNodeRelease    OCTETSTRING, PRESENCE = optional , MIN=4, MAX=4
	__si_s1ap_init_TimeSinceSecondaryNodeRelease2( &obj_UEContextSuspendRequest->timeSinceSecondaryNodeRelease, "\x18\x05\x18\x05", 4);
	obj_UEContextSuspendRequest->timeSinceSecondaryNodeRelease_isset = 1;



	__si_s1ap_send_UEContextSuspendRequest( obj_UEContextSuspendRequest, node);
	__si_s1ap_memfree_pdu_UEContextSuspendRequest( obj_UEContextSuspendRequest);
}

void __si_s1ap__Send_UEContextSuspendResponse_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEContextSuspendResponse * obj_UEContextSuspendResponse = (SI_S1AP_DT_PDU_UEContextSuspendResponse*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEContextSuspendResponse));
	memset( obj_UEContextSuspendResponse, 0, sizeof( SI_S1AP_DT_PDU_UEContextSuspendResponse));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UEContextSuspendResponse->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UEContextSuspendResponse->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UEContextSuspendResponse->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UEContextSuspendResponse->eNBUES1APID_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_UEContextSuspendResponse->criticalityDiagnostics);
	obj_UEContextSuspendResponse->criticalityDiagnostics_isset = 1;


	// SecurityContext , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__SecurityContext( &obj_UEContextSuspendResponse->securityContext);
	obj_UEContextSuspendResponse->securityContext_isset = 1;



	__si_s1ap_send_UEContextSuspendResponse( obj_UEContextSuspendResponse, node);
	__si_s1ap_memfree_pdu_UEContextSuspendResponse( obj_UEContextSuspendResponse);
}

void __si_s1ap__Send_UEContextResumeRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEContextResumeRequest * obj_UEContextResumeRequest = (SI_S1AP_DT_PDU_UEContextResumeRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEContextResumeRequest));
	memset( obj_UEContextResumeRequest, 0, sizeof( SI_S1AP_DT_PDU_UEContextResumeRequest));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UEContextResumeRequest->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UEContextResumeRequest->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UEContextResumeRequest->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UEContextResumeRequest->eNBUES1APID_isset = 1;


	// dataType is NULL 
	// RRC-Establishment-Cause , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UEContextResumeRequest->rRCResumeCause = RRC_Establishment_Cause_emergency_val;
	obj_UEContextResumeRequest->rRCResumeCause_isset = 1;



	__si_s1ap_send_UEContextResumeRequest( obj_UEContextResumeRequest, node);
	__si_s1ap_memfree_pdu_UEContextResumeRequest( obj_UEContextResumeRequest);
}

void __si_s1ap__Send_UEContextResumeResponse_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEContextResumeResponse * obj_UEContextResumeResponse = (SI_S1AP_DT_PDU_UEContextResumeResponse*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEContextResumeResponse));
	memset( obj_UEContextResumeResponse, 0, sizeof( SI_S1AP_DT_PDU_UEContextResumeResponse));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UEContextResumeResponse->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UEContextResumeResponse->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UEContextResumeResponse->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UEContextResumeResponse->eNBUES1APID_isset = 1;


	// dataType is NULL 
	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_UEContextResumeResponse->criticalityDiagnostics);
	obj_UEContextResumeResponse->criticalityDiagnostics_isset = 1;


	// SecurityContext , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__SecurityContext( &obj_UEContextResumeResponse->securityContext);
	obj_UEContextResumeResponse->securityContext_isset = 1;


	// PendingDataIndication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UEContextResumeResponse->pendingDataIndication = PendingDataIndication_true_val;
	obj_UEContextResumeResponse->pendingDataIndication_isset = 1;



	__si_s1ap_send_UEContextResumeResponse( obj_UEContextResumeResponse, node);
	__si_s1ap_memfree_pdu_UEContextResumeResponse( obj_UEContextResumeResponse);
}

void __si_s1ap__Send_UEContextResumeFailure_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEContextResumeFailure * obj_UEContextResumeFailure = (SI_S1AP_DT_PDU_UEContextResumeFailure*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEContextResumeFailure));
	memset( obj_UEContextResumeFailure, 0, sizeof( SI_S1AP_DT_PDU_UEContextResumeFailure));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_UEContextResumeFailure->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_UEContextResumeFailure->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_UEContextResumeFailure->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_UEContextResumeFailure->eNBUES1APID_isset = 1;


	// Cause , PRESENCE = mandatory   CHOICE
	__si_s1ap__set_testdata__Cause( &obj_UEContextResumeFailure->cause);
	obj_UEContextResumeFailure->cause->SelectedChoice = Cause_radioNetwork_val;

	switch( obj_UEContextResumeFailure->cause->SelectedChoice)
	{
		case Cause_radioNetwork_val:
			obj_UEContextResumeFailure->cause->u.radioNetwork = CauseRadioNetwork_unspecified_val;
			break;
		case Cause_transport_val:
			obj_UEContextResumeFailure->cause->u.transport = CauseTransport_transport_resource_unavailable_val;
			break;
		case Cause_nas_val:
			obj_UEContextResumeFailure->cause->u.nas = CauseNas_normal_release_val;
			break;
		case Cause_protocol_val:
			obj_UEContextResumeFailure->cause->u.protocol = CauseProtocol_transfer_syntax_error_val;
			break;
		case Cause_misc_val:
			obj_UEContextResumeFailure->cause->u.misc = CauseMisc_control_processing_overload_val;
			break;
		default:
			break;
	}

	obj_UEContextResumeFailure->cause_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_UEContextResumeFailure->criticalityDiagnostics);
	obj_UEContextResumeFailure->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_UEContextResumeFailure( obj_UEContextResumeFailure, node);
	__si_s1ap_memfree_pdu_UEContextResumeFailure( obj_UEContextResumeFailure);
}

void __si_s1ap__Send_ConnectionEstablishmentIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_ConnectionEstablishmentIndication * obj_ConnectionEstablishmentIndication = (SI_S1AP_DT_PDU_ConnectionEstablishmentIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ConnectionEstablishmentIndication));
	memset( obj_ConnectionEstablishmentIndication, 0, sizeof( SI_S1AP_DT_PDU_ConnectionEstablishmentIndication));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_ConnectionEstablishmentIndication->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_ConnectionEstablishmentIndication->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_ConnectionEstablishmentIndication->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_ConnectionEstablishmentIndication->eNBUES1APID_isset = 1;


	// UERadioCapability    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapability2( &obj_ConnectionEstablishmentIndication->uERadioCapability, "\x17\x24\x06\x24\x20", 5);
	obj_ConnectionEstablishmentIndication->uERadioCapability_isset = 1;


	// EnhancedCoverageRestricted , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_ConnectionEstablishmentIndication->enhancedCoverageRestricted = EnhancedCoverageRestricted_restricted_val;
	obj_ConnectionEstablishmentIndication->enhancedCoverageRestricted_isset = 1;


	// DL-CP-SecurityInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__DL_CP_SecurityInformation( &obj_ConnectionEstablishmentIndication->dLCPSecurityInformation);
	obj_ConnectionEstablishmentIndication->dLCPSecurityInformation_isset = 1;


	// CE-ModeBRestricted , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_ConnectionEstablishmentIndication->cEModeBRestricted = CE_ModeBRestricted_restricted_val;
	obj_ConnectionEstablishmentIndication->cEModeBRestricted_isset = 1;


	// EndIndication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_ConnectionEstablishmentIndication->endIndication = EndIndication_no_further_data_val;
	obj_ConnectionEstablishmentIndication->endIndication_isset = 1;


	// Subscription-Based-UE-DifferentiationInfo , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__Subscription_Based_UE_DifferentiationInfo( &obj_ConnectionEstablishmentIndication->subscriptionBasedUEDifferentiationInfo);
	obj_ConnectionEstablishmentIndication->subscriptionBasedUEDifferentiationInfo_isset = 1;


	// E-RABLevelQoSParameters , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__E_RABLevelQoSParameters( &obj_ConnectionEstablishmentIndication->uELevelQoSParameters);
	obj_ConnectionEstablishmentIndication->uELevelQoSParameters_isset = 1;


	// UERadioCapabilityID    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapabilityID2( &obj_ConnectionEstablishmentIndication->uERadioCapabilityID, "\x01\x22\x11\x10\x20", 5);
	obj_ConnectionEstablishmentIndication->uERadioCapabilityID_isset = 1;


	// Masked-IMEISV , PRESENCE = optional   BITSTRING , MIN=64, MAX=64
	__si_s1ap_init_Masked_IMEISV2( &obj_ConnectionEstablishmentIndication->maskedIMEISV, "99776487", 8, 64);
	obj_ConnectionEstablishmentIndication->maskedIMEISV->bitslen = 64;
	obj_ConnectionEstablishmentIndication->maskedIMEISV_isset = 1;


	// CoarseUELocation    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_CoarseUELocation2( &obj_ConnectionEstablishmentIndication->coarseUELocation, "\x19\x17\x21\x14\x04", 5);
	obj_ConnectionEstablishmentIndication->coarseUELocation_isset = 1;



	__si_s1ap_send_ConnectionEstablishmentIndication( obj_ConnectionEstablishmentIndication, node);
	__si_s1ap_memfree_pdu_ConnectionEstablishmentIndication( obj_ConnectionEstablishmentIndication);
}

void __si_s1ap__Send_NASDeliveryIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_NASDeliveryIndication * obj_NASDeliveryIndication = (SI_S1AP_DT_PDU_NASDeliveryIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_NASDeliveryIndication));
	memset( obj_NASDeliveryIndication, 0, sizeof( SI_S1AP_DT_PDU_NASDeliveryIndication));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_NASDeliveryIndication->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_NASDeliveryIndication->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_NASDeliveryIndication->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_NASDeliveryIndication->eNBUES1APID_isset = 1;



	__si_s1ap_send_NASDeliveryIndication( obj_NASDeliveryIndication, node);
	__si_s1ap_memfree_pdu_NASDeliveryIndication( obj_NASDeliveryIndication);
}

void __si_s1ap__Send_RetrieveUEInformation_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_RetrieveUEInformation * obj_RetrieveUEInformation = (SI_S1AP_DT_PDU_RetrieveUEInformation*) __si_allocM( sizeof(SI_S1AP_DT_PDU_RetrieveUEInformation));
	memset( obj_RetrieveUEInformation, 0, sizeof( SI_S1AP_DT_PDU_RetrieveUEInformation));

	// S-TMSI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__S_TMSI( &obj_RetrieveUEInformation->sTMSI);
	obj_RetrieveUEInformation->sTMSI_isset = 1;



	__si_s1ap_send_RetrieveUEInformation( obj_RetrieveUEInformation, node);
	__si_s1ap_memfree_pdu_RetrieveUEInformation( obj_RetrieveUEInformation);
}

void __si_s1ap__Send_UEInformationTransfer_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UEInformationTransfer * obj_UEInformationTransfer = (SI_S1AP_DT_PDU_UEInformationTransfer*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UEInformationTransfer));
	memset( obj_UEInformationTransfer, 0, sizeof( SI_S1AP_DT_PDU_UEInformationTransfer));

	// S-TMSI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__S_TMSI( &obj_UEInformationTransfer->sTMSI);
	obj_UEInformationTransfer->sTMSI_isset = 1;


	// E-RABLevelQoSParameters , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__E_RABLevelQoSParameters( &obj_UEInformationTransfer->uELevelQoSParameters);
	obj_UEInformationTransfer->uELevelQoSParameters_isset = 1;


	// UERadioCapability    OCTETSTRING, PRESENCE = optional , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapability2( &obj_UEInformationTransfer->uERadioCapability, "\x15\x04\x06\x17\x18", 5);
	obj_UEInformationTransfer->uERadioCapability_isset = 1;


	// Subscription-Based-UE-DifferentiationInfo , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__Subscription_Based_UE_DifferentiationInfo( &obj_UEInformationTransfer->subscriptionBasedUEDifferentiationInfo);
	obj_UEInformationTransfer->subscriptionBasedUEDifferentiationInfo_isset = 1;


	// PendingDataIndication , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_UEInformationTransfer->pendingDataIndication = PendingDataIndication_true_val;
	obj_UEInformationTransfer->pendingDataIndication_isset = 1;


	// Masked-IMEISV , PRESENCE = optional   BITSTRING , MIN=64, MAX=64
	__si_s1ap_init_Masked_IMEISV2( &obj_UEInformationTransfer->maskedIMEISV, "96257913", 8, 64);
	obj_UEInformationTransfer->maskedIMEISV->bitslen = 64;
	obj_UEInformationTransfer->maskedIMEISV_isset = 1;



	__si_s1ap_send_UEInformationTransfer( obj_UEInformationTransfer, node);
	__si_s1ap_memfree_pdu_UEInformationTransfer( obj_UEInformationTransfer);
}

void __si_s1ap__Send_ENBCPRelocationIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_ENBCPRelocationIndication * obj_ENBCPRelocationIndication = (SI_S1AP_DT_PDU_ENBCPRelocationIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ENBCPRelocationIndication));
	memset( obj_ENBCPRelocationIndication, 0, sizeof( SI_S1AP_DT_PDU_ENBCPRelocationIndication));

	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_ENBCPRelocationIndication->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_ENBCPRelocationIndication->eNBUES1APID_isset = 1;


	// S-TMSI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__S_TMSI( &obj_ENBCPRelocationIndication->sTMSI);
	obj_ENBCPRelocationIndication->sTMSI_isset = 1;


	// EUTRAN-CGI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__EUTRAN_CGI( &obj_ENBCPRelocationIndication->eUTRANCGI);
	obj_ENBCPRelocationIndication->eUTRANCGI_isset = 1;


	// TAI , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__TAI( &obj_ENBCPRelocationIndication->tAI);
	obj_ENBCPRelocationIndication->tAI_isset = 1;


	// UL-CP-SecurityInformation , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__UL_CP_SecurityInformation( &obj_ENBCPRelocationIndication->uLCPSecurityInformation);
	obj_ENBCPRelocationIndication->uLCPSecurityInformation_isset = 1;


	// LTE-NTN-TAI-Information , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__LTE_NTN_TAI_Information( &obj_ENBCPRelocationIndication->lTENTNTAIInformation);
	obj_ENBCPRelocationIndication->lTENTNTAIInformation_isset = 1;



	__si_s1ap_send_ENBCPRelocationIndication( obj_ENBCPRelocationIndication, node);
	__si_s1ap_memfree_pdu_ENBCPRelocationIndication( obj_ENBCPRelocationIndication);
}

void __si_s1ap__Send_MMECPRelocationIndication_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_MMECPRelocationIndication * obj_MMECPRelocationIndication = (SI_S1AP_DT_PDU_MMECPRelocationIndication*) __si_allocM( sizeof(SI_S1AP_DT_PDU_MMECPRelocationIndication));
	memset( obj_MMECPRelocationIndication, 0, sizeof( SI_S1AP_DT_PDU_MMECPRelocationIndication));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_MMECPRelocationIndication->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_MMECPRelocationIndication->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_MMECPRelocationIndication->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_MMECPRelocationIndication->eNBUES1APID_isset = 1;



	__si_s1ap_send_MMECPRelocationIndication( obj_MMECPRelocationIndication, node);
	__si_s1ap_memfree_pdu_MMECPRelocationIndication( obj_MMECPRelocationIndication);
}

void __si_s1ap__Send_SecondaryRATDataUsageReport_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_SecondaryRATDataUsageReport * obj_SecondaryRATDataUsageReport = (SI_S1AP_DT_PDU_SecondaryRATDataUsageReport*) __si_allocM( sizeof(SI_S1AP_DT_PDU_SecondaryRATDataUsageReport));
	memset( obj_SecondaryRATDataUsageReport, 0, sizeof( SI_S1AP_DT_PDU_SecondaryRATDataUsageReport));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_SecondaryRATDataUsageReport->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_SecondaryRATDataUsageReport->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_SecondaryRATDataUsageReport->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_SecondaryRATDataUsageReport->eNBUES1APID_isset = 1;


	// SecondaryRATDataUsageReportList , PRESENCE = mandatory   SEQUENCE_OF
	__si_s1ap__set_testdata__SecondaryRATDataUsageReportList( &obj_SecondaryRATDataUsageReport->secondaryRATDataUsageReportList);
	obj_SecondaryRATDataUsageReport->secondaryRATDataUsageReportList_isset = 1;


	// HandoverFlag , PRESENCE = optional   ENUMERATED, PRESENCE = optional
	obj_SecondaryRATDataUsageReport->handoverFlag = HandoverFlag_handoverPreparation_val;
	obj_SecondaryRATDataUsageReport->handoverFlag_isset = 1;


	// UserLocationInformation , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__UserLocationInformation( &obj_SecondaryRATDataUsageReport->userLocationInformation);
	obj_SecondaryRATDataUsageReport->userLocationInformation_isset = 1;


	// TimeSinceSecondaryNodeRelease    OCTETSTRING, PRESENCE = optional , MIN=4, MAX=4
	__si_s1ap_init_TimeSinceSecondaryNodeRelease2( &obj_SecondaryRATDataUsageReport->timeSinceSecondaryNodeRelease, "\x12\x06\x19\x07", 4);
	obj_SecondaryRATDataUsageReport->timeSinceSecondaryNodeRelease_isset = 1;



	__si_s1ap_send_SecondaryRATDataUsageReport( obj_SecondaryRATDataUsageReport, node);
	__si_s1ap_memfree_pdu_SecondaryRATDataUsageReport( obj_SecondaryRATDataUsageReport);
}

void __si_s1ap__Send_UERadioCapabilityIDMappingRequest_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UERadioCapabilityIDMappingRequest * obj_UERadioCapabilityIDMappingRequest = (SI_S1AP_DT_PDU_UERadioCapabilityIDMappingRequest*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UERadioCapabilityIDMappingRequest));
	memset( obj_UERadioCapabilityIDMappingRequest, 0, sizeof( SI_S1AP_DT_PDU_UERadioCapabilityIDMappingRequest));

	// UERadioCapabilityID    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapabilityID2( &obj_UERadioCapabilityIDMappingRequest->uERadioCapabilityID, "\x16\x12\x16\x11\x07", 5);
	obj_UERadioCapabilityIDMappingRequest->uERadioCapabilityID_isset = 1;



	__si_s1ap_send_UERadioCapabilityIDMappingRequest( obj_UERadioCapabilityIDMappingRequest, node);
	__si_s1ap_memfree_pdu_UERadioCapabilityIDMappingRequest( obj_UERadioCapabilityIDMappingRequest);
}

void __si_s1ap__Send_UERadioCapabilityIDMappingResponse_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_UERadioCapabilityIDMappingResponse * obj_UERadioCapabilityIDMappingResponse = (SI_S1AP_DT_PDU_UERadioCapabilityIDMappingResponse*) __si_allocM( sizeof(SI_S1AP_DT_PDU_UERadioCapabilityIDMappingResponse));
	memset( obj_UERadioCapabilityIDMappingResponse, 0, sizeof( SI_S1AP_DT_PDU_UERadioCapabilityIDMappingResponse));

	// UERadioCapabilityID    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapabilityID2( &obj_UERadioCapabilityIDMappingResponse->uERadioCapabilityID, "\x17\x05\x23\x01\x23", 5);
	obj_UERadioCapabilityIDMappingResponse->uERadioCapabilityID_isset = 1;


	// UERadioCapability    OCTETSTRING, PRESENCE = mandatory , MIN=0, MAX=0
	__si_s1ap_init_UERadioCapability2( &obj_UERadioCapabilityIDMappingResponse->uERadioCapability, "\x20\x08\x13\x10\x06", 5);
	obj_UERadioCapabilityIDMappingResponse->uERadioCapability_isset = 1;


	// CriticalityDiagnostics , PRESENCE = optional   SEQUENCE
	__si_s1ap__set_testdata__CriticalityDiagnostics( &obj_UERadioCapabilityIDMappingResponse->criticalityDiagnostics);
	obj_UERadioCapabilityIDMappingResponse->criticalityDiagnostics_isset = 1;



	__si_s1ap_send_UERadioCapabilityIDMappingResponse( obj_UERadioCapabilityIDMappingResponse, node);
	__si_s1ap_memfree_pdu_UERadioCapabilityIDMappingResponse( obj_UERadioCapabilityIDMappingResponse);
}

void __si_s1ap__Send_HandoverSuccess_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_HandoverSuccess * obj_HandoverSuccess = (SI_S1AP_DT_PDU_HandoverSuccess*) __si_allocM( sizeof(SI_S1AP_DT_PDU_HandoverSuccess));
	memset( obj_HandoverSuccess, 0, sizeof( SI_S1AP_DT_PDU_HandoverSuccess));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_HandoverSuccess->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_HandoverSuccess->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_HandoverSuccess->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_HandoverSuccess->eNBUES1APID_isset = 1;



	__si_s1ap_send_HandoverSuccess( obj_HandoverSuccess, node);
	__si_s1ap_memfree_pdu_HandoverSuccess( obj_HandoverSuccess);
}

void __si_s1ap__Send_ENBEarlyStatusTransfer_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_ENBEarlyStatusTransfer * obj_ENBEarlyStatusTransfer = (SI_S1AP_DT_PDU_ENBEarlyStatusTransfer*) __si_allocM( sizeof(SI_S1AP_DT_PDU_ENBEarlyStatusTransfer));
	memset( obj_ENBEarlyStatusTransfer, 0, sizeof( SI_S1AP_DT_PDU_ENBEarlyStatusTransfer));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_ENBEarlyStatusTransfer->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_ENBEarlyStatusTransfer->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_ENBEarlyStatusTransfer->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_ENBEarlyStatusTransfer->eNBUES1APID_isset = 1;


	// ENB-EarlyStatusTransfer-TransparentContainer , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__ENB_EarlyStatusTransfer_TransparentContainer( &obj_ENBEarlyStatusTransfer->eNBEarlyStatusTransferTransparentContainer);
	obj_ENBEarlyStatusTransfer->eNBEarlyStatusTransferTransparentContainer_isset = 1;



	__si_s1ap_send_ENBEarlyStatusTransfer( obj_ENBEarlyStatusTransfer, node);
	__si_s1ap_memfree_pdu_ENBEarlyStatusTransfer( obj_ENBEarlyStatusTransfer);
}

void __si_s1ap__Send_MMEEarlyStatusTransfer_Prototype( SI_S1APNode * node)
{
	SI_S1AP_DT_PDU_MMEEarlyStatusTransfer * obj_MMEEarlyStatusTransfer = (SI_S1AP_DT_PDU_MMEEarlyStatusTransfer*) __si_allocM( sizeof(SI_S1AP_DT_PDU_MMEEarlyStatusTransfer));
	memset( obj_MMEEarlyStatusTransfer, 0, sizeof( SI_S1AP_DT_PDU_MMEEarlyStatusTransfer));

	// MME-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=4294967295
	obj_MMEEarlyStatusTransfer->mMEUES1APID = __getTestINTEGER( 0, 4294967295);
	obj_MMEEarlyStatusTransfer->mMEUES1APID_isset = 1;


	// ENB-UE-S1AP-ID , PRESENCE = mandatory  INTEGER , MIN=0, MAX=16777215
	obj_MMEEarlyStatusTransfer->eNBUES1APID = __getTestINTEGER( 0, 16777215);
	obj_MMEEarlyStatusTransfer->eNBUES1APID_isset = 1;


	// ENB-EarlyStatusTransfer-TransparentContainer , PRESENCE = mandatory   SEQUENCE
	__si_s1ap__set_testdata__ENB_EarlyStatusTransfer_TransparentContainer( &obj_MMEEarlyStatusTransfer->eNBEarlyStatusTransferTransparentContainer);
	obj_MMEEarlyStatusTransfer->eNBEarlyStatusTransferTransparentContainer_isset = 1;



	__si_s1ap_send_MMEEarlyStatusTransfer( obj_MMEEarlyStatusTransfer, node);
	__si_s1ap_memfree_pdu_MMEEarlyStatusTransfer( obj_MMEEarlyStatusTransfer);
}




void __si_s1ap__Handle_HandoverRequired_Prototype( SI_S1AP_DT_PDU_HandoverRequired * obj_HandoverRequired, SI_S1APNode * node)
{
	if( obj_HandoverRequired->mMEUES1APID_isset == 1)
	{
	}

	if( obj_HandoverRequired->eNBUES1APID_isset == 1)
	{
	}

	if( obj_HandoverRequired->handoverType_isset == 1)
	{
	}

	if( obj_HandoverRequired->cause_isset == 1)
	{
	}

	if( obj_HandoverRequired->targetID_isset == 1)
	{
	}

	if( obj_HandoverRequired->directForwardingPathAvailability_isset == 1)
	{
	}

	if( obj_HandoverRequired->sRVCCHOIndication_isset == 1)
	{
	}

	if( obj_HandoverRequired->sourceToTargetTransparentContainer_isset == 1)
	{
	}

	if( obj_HandoverRequired->sourceToTargetTransparentContainerSecondary_isset == 1)
	{
	}

	if( obj_HandoverRequired->mSClassmark2_isset == 1)
	{
	}

	if( obj_HandoverRequired->cSGId_isset == 1)
	{
	}

	if( obj_HandoverRequired->cellAccessMode_isset == 1)
	{
	}

	if( obj_HandoverRequired->pSServiceNotAvailable_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_HandoverRequired( obj_HandoverRequired);
}


void __si_s1ap__Handle_HandoverCommand_Prototype( SI_S1AP_DT_PDU_HandoverCommand * obj_HandoverCommand, SI_S1APNode * node)
{
	if( obj_HandoverCommand->mMEUES1APID_isset == 1)
	{
	}

	if( obj_HandoverCommand->eNBUES1APID_isset == 1)
	{
	}

	if( obj_HandoverCommand->handoverType_isset == 1)
	{
	}

	if( obj_HandoverCommand->nASSecurityParametersfromEUTRAN_isset == 1)
	{
	}

	if( obj_HandoverCommand->eRABtoReleaseListHOCmd_isset == 1)
	{
	}

	if( obj_HandoverCommand->targetToSourceTransparentContainer_isset == 1)
	{
	}

	if( obj_HandoverCommand->targetToSourceTransparentContainerSecondary_isset == 1)
	{
	}

	if( obj_HandoverCommand->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_HandoverCommand( obj_HandoverCommand);
}


void __si_s1ap__Handle_HandoverPreparationFailure_Prototype( SI_S1AP_DT_PDU_HandoverPreparationFailure * obj_HandoverPreparationFailure, SI_S1APNode * node)
{
	if( obj_HandoverPreparationFailure->mMEUES1APID_isset == 1)
	{
	}

	if( obj_HandoverPreparationFailure->eNBUES1APID_isset == 1)
	{
	}

	if( obj_HandoverPreparationFailure->cause_isset == 1)
	{
	}

	if( obj_HandoverPreparationFailure->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_HandoverPreparationFailure( obj_HandoverPreparationFailure);
}


void __si_s1ap__Handle_HandoverRequest_Prototype( SI_S1AP_DT_PDU_HandoverRequest * obj_HandoverRequest, SI_S1APNode * node)
{
	if( obj_HandoverRequest->mMEUES1APID_isset == 1)
	{
	}

	if( obj_HandoverRequest->handoverType_isset == 1)
	{
	}

	if( obj_HandoverRequest->cause_isset == 1)
	{
	}

	if( obj_HandoverRequest->uEaggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_HandoverRequest->sourceToTargetTransparentContainer_isset == 1)
	{
	}

	if( obj_HandoverRequest->uESecurityCapabilities_isset == 1)
	{
	}

	if( obj_HandoverRequest->handoverRestrictionList_isset == 1)
	{
	}

	if( obj_HandoverRequest->traceActivation_isset == 1)
	{
	}

	if( obj_HandoverRequest->requestType_isset == 1)
	{
	}

	if( obj_HandoverRequest->sRVCCOperationPossible_isset == 1)
	{
	}

	if( obj_HandoverRequest->securityContext_isset == 1)
	{
	}

	if( obj_HandoverRequest->nASSecurityParameterstoEUTRAN_isset == 1)
	{
	}

	if( obj_HandoverRequest->cSGId_isset == 1)
	{
	}

	if( obj_HandoverRequest->cSGMembershipStatus_isset == 1)
	{
	}

	if( obj_HandoverRequest->gUMMEIID_isset == 1)
	{
	}

	if( obj_HandoverRequest->mMEUES1APID2_isset == 1)
	{
	}

	if( obj_HandoverRequest->managementBasedMDTAllowed_isset == 1)
	{
	}

	if( obj_HandoverRequest->managementBasedMDTPLMNList_isset == 1)
	{
	}

	if( obj_HandoverRequest->maskedIMEISV_isset == 1)
	{
	}

	if( obj_HandoverRequest->expectedUEBehaviour_isset == 1)
	{
	}

	if( obj_HandoverRequest->proSeAuthorized_isset == 1)
	{
	}

	if( obj_HandoverRequest->uEUserPlaneCIoTSupportIndicator_isset == 1)
	{
	}

	if( obj_HandoverRequest->v2XServicesAuthorized_isset == 1)
	{
	}

	if( obj_HandoverRequest->uESidelinkAggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_HandoverRequest->enhancedCoverageRestricted_isset == 1)
	{
	}

	if( obj_HandoverRequest->nRUESecurityCapabilities_isset == 1)
	{
	}

	if( obj_HandoverRequest->cEModeBRestricted_isset == 1)
	{
	}

	if( obj_HandoverRequest->aerialUEsubscriptionInformation_isset == 1)
	{
	}

	if( obj_HandoverRequest->pendingDataIndication_isset == 1)
	{
	}

	if( obj_HandoverRequest->subscriptionBasedUEDifferentiationInfo_isset == 1)
	{
	}

	if( obj_HandoverRequest->additionalRRMPriorityIndex_isset == 1)
	{
	}

	if( obj_HandoverRequest->iABAuthorized_isset == 1)
	{
	}

	if( obj_HandoverRequest->nRV2XServicesAuthorized_isset == 1)
	{
	}

	if( obj_HandoverRequest->nRUESidelinkAggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_HandoverRequest->pC5QoSParameters_isset == 1)
	{
	}

	if( obj_HandoverRequest->uERadioCapabilityID_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_HandoverRequest( obj_HandoverRequest);
}


void __si_s1ap__Handle_HandoverRequestAcknowledge_Prototype( SI_S1AP_DT_PDU_HandoverRequestAcknowledge * obj_HandoverRequestAcknowledge, SI_S1APNode * node)
{
	if( obj_HandoverRequestAcknowledge->mMEUES1APID_isset == 1)
	{
	}

	if( obj_HandoverRequestAcknowledge->eNBUES1APID_isset == 1)
	{
	}

	if( obj_HandoverRequestAcknowledge->targetToSourceTransparentContainer_isset == 1)
	{
	}

	if( obj_HandoverRequestAcknowledge->cSGId_isset == 1)
	{
	}

	if( obj_HandoverRequestAcknowledge->criticalityDiagnostics_isset == 1)
	{
	}

	if( obj_HandoverRequestAcknowledge->cellAccessMode_isset == 1)
	{
	}

	if( obj_HandoverRequestAcknowledge->cEmodeBSupportIndicator_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_HandoverRequestAcknowledge( obj_HandoverRequestAcknowledge);
}


void __si_s1ap__Handle_HandoverFailure_Prototype( SI_S1AP_DT_PDU_HandoverFailure * obj_HandoverFailure, SI_S1APNode * node)
{
	if( obj_HandoverFailure->mMEUES1APID_isset == 1)
	{
	}

	if( obj_HandoverFailure->cause_isset == 1)
	{
	}

	if( obj_HandoverFailure->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_HandoverFailure( obj_HandoverFailure);
}


void __si_s1ap__Handle_HandoverNotify_Prototype( SI_S1AP_DT_PDU_HandoverNotify * obj_HandoverNotify, SI_S1APNode * node)
{
	if( obj_HandoverNotify->mMEUES1APID_isset == 1)
	{
	}

	if( obj_HandoverNotify->eNBUES1APID_isset == 1)
	{
	}

	if( obj_HandoverNotify->eUTRANCGI_isset == 1)
	{
	}

	if( obj_HandoverNotify->tAI_isset == 1)
	{
	}

	if( obj_HandoverNotify->tunnelInformationforBBF_isset == 1)
	{
	}

	if( obj_HandoverNotify->lHNID_isset == 1)
	{
	}

	if( obj_HandoverNotify->pSCellInformation_isset == 1)
	{
	}

	if( obj_HandoverNotify->notifySourceeNB_isset == 1)
	{
	}

	if( obj_HandoverNotify->lTENTNTAIInformation_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_HandoverNotify( obj_HandoverNotify);
}


void __si_s1ap__Handle_PathSwitchRequest_Prototype( SI_S1AP_DT_PDU_PathSwitchRequest * obj_PathSwitchRequest, SI_S1APNode * node)
{
	if( obj_PathSwitchRequest->eNBUES1APID_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->sourceMMEUES1APID_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->eUTRANCGI_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->tAI_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->uESecurityCapabilities_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->cSGId_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->cellAccessMode_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->sourceMMEGUMMEI_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->cSGMembershipStatus_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->tunnelInformationforBBF_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->lHNID_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->rRCResumeCause_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->nRUESecurityCapabilities_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->pSCellInformation_isset == 1)
	{
	}

	if( obj_PathSwitchRequest->lTENTNTAIInformation_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_PathSwitchRequest( obj_PathSwitchRequest);
}


void __si_s1ap__Handle_PathSwitchRequestAcknowledge_Prototype( SI_S1AP_DT_PDU_PathSwitchRequestAcknowledge * obj_PathSwitchRequestAcknowledge, SI_S1APNode * node)
{
	if( obj_PathSwitchRequestAcknowledge->mMEUES1APID_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->eNBUES1APID_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->uEaggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->eRABToBeReleasedList_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->securityContext_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->criticalityDiagnostics_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->mMEUES1APID2_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->cSGMembershipStatus_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->proSeAuthorized_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->uEUserPlaneCIoTSupportIndicator_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->v2XServicesAuthorized_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->uESidelinkAggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->enhancedCoverageRestricted_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->nRUESecurityCapabilities_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->cEModeBRestricted_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->aerialUEsubscriptionInformation_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->pendingDataIndication_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->subscriptionBasedUEDifferentiationInfo_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->handoverRestrictionList_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->additionalRRMPriorityIndex_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->nRV2XServicesAuthorized_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->nRUESidelinkAggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->pC5QoSParameters_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->uERadioCapabilityID_isset == 1)
	{
	}

	if( obj_PathSwitchRequestAcknowledge->uESecurityCapabilities_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_PathSwitchRequestAcknowledge( obj_PathSwitchRequestAcknowledge);
}


void __si_s1ap__Handle_PathSwitchRequestFailure_Prototype( SI_S1AP_DT_PDU_PathSwitchRequestFailure * obj_PathSwitchRequestFailure, SI_S1APNode * node)
{
	if( obj_PathSwitchRequestFailure->mMEUES1APID_isset == 1)
	{
	}

	if( obj_PathSwitchRequestFailure->eNBUES1APID_isset == 1)
	{
	}

	if( obj_PathSwitchRequestFailure->cause_isset == 1)
	{
	}

	if( obj_PathSwitchRequestFailure->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_PathSwitchRequestFailure( obj_PathSwitchRequestFailure);
}


void __si_s1ap__Handle_E_RABSetupRequest_Prototype( SI_S1AP_DT_PDU_E_RABSetupRequest * obj_E_RABSetupRequest, SI_S1APNode * node)
{
	if( obj_E_RABSetupRequest->mMEUES1APID_isset == 1)
	{
	}

	if( obj_E_RABSetupRequest->eNBUES1APID_isset == 1)
	{
	}

	if( obj_E_RABSetupRequest->uEaggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_E_RABSetupRequest->eRABToBeSetupListBearerSUReq_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_E_RABSetupRequest( obj_E_RABSetupRequest);
}


void __si_s1ap__Handle_E_RABSetupResponse_Prototype( SI_S1AP_DT_PDU_E_RABSetupResponse * obj_E_RABSetupResponse, SI_S1APNode * node)
{
	if( obj_E_RABSetupResponse->mMEUES1APID_isset == 1)
	{
	}

	if( obj_E_RABSetupResponse->eNBUES1APID_isset == 1)
	{
	}

	if( obj_E_RABSetupResponse->eRABSetupListBearerSURes_isset == 1)
	{
	}

	if( obj_E_RABSetupResponse->eRABFailedToSetupListBearerSURes_isset == 1)
	{
	}

	if( obj_E_RABSetupResponse->criticalityDiagnostics_isset == 1)
	{
	}

	if( obj_E_RABSetupResponse->userLocationInformation_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_E_RABSetupResponse( obj_E_RABSetupResponse);
}


void __si_s1ap__Handle_E_RABModifyRequest_Prototype( SI_S1AP_DT_PDU_E_RABModifyRequest * obj_E_RABModifyRequest, SI_S1APNode * node)
{
	if( obj_E_RABModifyRequest->mMEUES1APID_isset == 1)
	{
	}

	if( obj_E_RABModifyRequest->eNBUES1APID_isset == 1)
	{
	}

	if( obj_E_RABModifyRequest->uEaggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_E_RABModifyRequest->eRABToBeModifiedListBearerModReq_isset == 1)
	{
	}

	if( obj_E_RABModifyRequest->secondaryRATDataUsageRequest_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_E_RABModifyRequest( obj_E_RABModifyRequest);
}


void __si_s1ap__Handle_E_RABModifyResponse_Prototype( SI_S1AP_DT_PDU_E_RABModifyResponse * obj_E_RABModifyResponse, SI_S1APNode * node)
{
	if( obj_E_RABModifyResponse->mMEUES1APID_isset == 1)
	{
	}

	if( obj_E_RABModifyResponse->eNBUES1APID_isset == 1)
	{
	}

	if( obj_E_RABModifyResponse->eRABModifyListBearerModRes_isset == 1)
	{
	}

	if( obj_E_RABModifyResponse->eRABFailedToModifyList_isset == 1)
	{
	}

	if( obj_E_RABModifyResponse->criticalityDiagnostics_isset == 1)
	{
	}

	if( obj_E_RABModifyResponse->secondaryRATDataUsageReportList_isset == 1)
	{
	}

	if( obj_E_RABModifyResponse->userLocationInformation_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_E_RABModifyResponse( obj_E_RABModifyResponse);
}


void __si_s1ap__Handle_E_RABReleaseCommand_Prototype( SI_S1AP_DT_PDU_E_RABReleaseCommand * obj_E_RABReleaseCommand, SI_S1APNode * node)
{
	if( obj_E_RABReleaseCommand->mMEUES1APID_isset == 1)
	{
	}

	if( obj_E_RABReleaseCommand->eNBUES1APID_isset == 1)
	{
	}

	if( obj_E_RABReleaseCommand->uEaggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_E_RABReleaseCommand->eRABToBeReleasedList_isset == 1)
	{
	}

	if( obj_E_RABReleaseCommand->nASPDU_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_E_RABReleaseCommand( obj_E_RABReleaseCommand);
}


void __si_s1ap__Handle_E_RABReleaseResponse_Prototype( SI_S1AP_DT_PDU_E_RABReleaseResponse * obj_E_RABReleaseResponse, SI_S1APNode * node)
{
	if( obj_E_RABReleaseResponse->mMEUES1APID_isset == 1)
	{
	}

	if( obj_E_RABReleaseResponse->eNBUES1APID_isset == 1)
	{
	}

	if( obj_E_RABReleaseResponse->eRABReleaseListBearerRelComp_isset == 1)
	{
	}

	if( obj_E_RABReleaseResponse->eRABFailedToReleaseList_isset == 1)
	{
	}

	if( obj_E_RABReleaseResponse->criticalityDiagnostics_isset == 1)
	{
	}

	if( obj_E_RABReleaseResponse->userLocationInformation_isset == 1)
	{
	}

	if( obj_E_RABReleaseResponse->secondaryRATDataUsageReportList_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_E_RABReleaseResponse( obj_E_RABReleaseResponse);
}


void __si_s1ap__Handle_E_RABReleaseIndication_Prototype( SI_S1AP_DT_PDU_E_RABReleaseIndication * obj_E_RABReleaseIndication, SI_S1APNode * node)
{
	if( obj_E_RABReleaseIndication->mMEUES1APID_isset == 1)
	{
	}

	if( obj_E_RABReleaseIndication->eNBUES1APID_isset == 1)
	{
	}

	if( obj_E_RABReleaseIndication->eRABReleasedList_isset == 1)
	{
	}

	if( obj_E_RABReleaseIndication->userLocationInformation_isset == 1)
	{
	}

	if( obj_E_RABReleaseIndication->secondaryRATDataUsageReportList_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_E_RABReleaseIndication( obj_E_RABReleaseIndication);
}


void __si_s1ap__Handle_InitialContextSetupRequest_Prototype( SI_S1AP_DT_PDU_InitialContextSetupRequest * obj_InitialContextSetupRequest, SI_S1APNode * node)
{
	if( obj_InitialContextSetupRequest->mMEUES1APID_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->eNBUES1APID_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->uEaggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->eRABToBeSetupListCtxtSUReq_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->uESecurityCapabilities_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->securityKey_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->traceActivation_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->handoverRestrictionList_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->uERadioCapability_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->subscriberProfileIDforRFP_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->cSFallbackIndicator_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->sRVCCOperationPossible_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->cSGMembershipStatus_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->registeredLAI_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->gUMMEIID_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->mMEUES1APID2_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->managementBasedMDTAllowed_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->managementBasedMDTPLMNList_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->additionalCSFallbackIndicator_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->maskedIMEISV_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->expectedUEBehaviour_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->proSeAuthorized_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->uEUserPlaneCIoTSupportIndicator_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->v2XServicesAuthorized_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->uESidelinkAggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->enhancedCoverageRestricted_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->nRUESecurityCapabilities_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->cEModeBRestricted_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->aerialUEsubscriptionInformation_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->pendingDataIndication_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->subscriptionBasedUEDifferentiationInfo_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->additionalRRMPriorityIndex_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->iABAuthorized_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->nRV2XServicesAuthorized_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->nRUESidelinkAggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->pC5QoSParameters_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->uERadioCapabilityID_isset == 1)
	{
	}

	if( obj_InitialContextSetupRequest->coarseUELocation_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_InitialContextSetupRequest( obj_InitialContextSetupRequest);
}


void __si_s1ap__Handle_InitialContextSetupResponse_Prototype( SI_S1AP_DT_PDU_InitialContextSetupResponse * obj_InitialContextSetupResponse, SI_S1APNode * node)
{
	if( obj_InitialContextSetupResponse->mMEUES1APID_isset == 1)
	{
	}

	if( obj_InitialContextSetupResponse->eNBUES1APID_isset == 1)
	{
	}

	if( obj_InitialContextSetupResponse->eRABSetupListCtxtSURes_isset == 1)
	{
	}

	if( obj_InitialContextSetupResponse->eRABFailedToSetupListCtxtSURes_isset == 1)
	{
	}

	if( obj_InitialContextSetupResponse->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_InitialContextSetupResponse( obj_InitialContextSetupResponse);
}


void __si_s1ap__Handle_InitialContextSetupFailure_Prototype( SI_S1AP_DT_PDU_InitialContextSetupFailure * obj_InitialContextSetupFailure, SI_S1APNode * node)
{
	if( obj_InitialContextSetupFailure->mMEUES1APID_isset == 1)
	{
	}

	if( obj_InitialContextSetupFailure->eNBUES1APID_isset == 1)
	{
	}

	if( obj_InitialContextSetupFailure->cause_isset == 1)
	{
	}

	if( obj_InitialContextSetupFailure->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_InitialContextSetupFailure( obj_InitialContextSetupFailure);
}


void __si_s1ap__Handle_UEContextReleaseRequest_Prototype( SI_S1AP_DT_PDU_UEContextReleaseRequest * obj_UEContextReleaseRequest, SI_S1APNode * node)
{
	if( obj_UEContextReleaseRequest->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UEContextReleaseRequest->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UEContextReleaseRequest->cause_isset == 1)
	{
	}

	if( obj_UEContextReleaseRequest->gWContextReleaseIndication_isset == 1)
	{
	}

	if( obj_UEContextReleaseRequest->secondaryRATDataUsageReportList_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEContextReleaseRequest( obj_UEContextReleaseRequest);
}


void __si_s1ap__Handle_Paging_Prototype( SI_S1AP_DT_PDU_Paging * obj_Paging, SI_S1APNode * node)
{
	if( obj_Paging->uEIdentityIndexValue_isset == 1)
	{
	}

	if( obj_Paging->uEPagingID_isset == 1)
	{
	}

	if( obj_Paging->pagingDRX_isset == 1)
	{
	}

	if( obj_Paging->cNDomain_isset == 1)
	{
	}

	if( obj_Paging->tAIList_isset == 1)
	{
	}

	if( obj_Paging->cSGIdList_isset == 1)
	{
	}

	if( obj_Paging->pagingPriority_isset == 1)
	{
	}

	if( obj_Paging->uERadioCapabilityForPaging_isset == 1)
	{
	}

	if( obj_Paging->assistanceDataForPaging_isset == 1)
	{
	}

	if( obj_Paging->pagingeDRXInformation_isset == 1)
	{
	}

	if( obj_Paging->extendedUEIdentityIndexValue_isset == 1)
	{
	}

	if( obj_Paging->nBIoTPagingeDRXInformation_isset == 1)
	{
	}

	if( obj_Paging->nBIoTUEIdentityIndexValue_isset == 1)
	{
	}

	if( obj_Paging->enhancedCoverageRestricted_isset == 1)
	{
	}

	if( obj_Paging->cEModeBRestricted_isset == 1)
	{
	}

	if( obj_Paging->dataSize_isset == 1)
	{
	}

	if( obj_Paging->wUSAssistanceInformation_isset == 1)
	{
	}

	if( obj_Paging->nBIoTPagingDRX_isset == 1)
	{
	}

	if( obj_Paging->pagingCause_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_Paging( obj_Paging);
}


void __si_s1ap__Handle_DownlinkNASTransport_Prototype( SI_S1AP_DT_PDU_DownlinkNASTransport * obj_DownlinkNASTransport, SI_S1APNode * node)
{
	if( obj_DownlinkNASTransport->mMEUES1APID_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->eNBUES1APID_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->nASPDU_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->handoverRestrictionList_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->subscriberProfileIDforRFP_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->sRVCCOperationPossible_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->uERadioCapability_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->dLNASPDUDeliveryAckRequest_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->enhancedCoverageRestricted_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->nRUESecurityCapabilities_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->cEModeBRestricted_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->uECapabilityInfoRequest_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->endIndication_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->pendingDataIndication_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->subscriptionBasedUEDifferentiationInfo_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->additionalRRMPriorityIndex_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->uERadioCapabilityID_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->maskedIMEISV_isset == 1)
	{
	}

	if( obj_DownlinkNASTransport->coarseUELocation_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_DownlinkNASTransport( obj_DownlinkNASTransport);
}


void __si_s1ap__Handle_InitialUEMessage_Prototype( SI_S1AP_DT_PDU_InitialUEMessage * obj_InitialUEMessage, SI_S1APNode * node)
{
	if( obj_InitialUEMessage->eNBUES1APID_isset == 1)
	{
	}

	if( obj_InitialUEMessage->nASPDU_isset == 1)
	{
	}

	if( obj_InitialUEMessage->tAI_isset == 1)
	{
	}

	if( obj_InitialUEMessage->eUTRANCGI_isset == 1)
	{
	}

	if( obj_InitialUEMessage->rRCEstablishmentCause_isset == 1)
	{
	}

	if( obj_InitialUEMessage->sTMSI_isset == 1)
	{
	}

	if( obj_InitialUEMessage->cSGId_isset == 1)
	{
	}

	if( obj_InitialUEMessage->gUMMEIID_isset == 1)
	{
	}

	if( obj_InitialUEMessage->cellAccessMode_isset == 1)
	{
	}

	if( obj_InitialUEMessage->gWTransportLayerAddress_isset == 1)
	{
	}

	if( obj_InitialUEMessage->relayNodeIndicator_isset == 1)
	{
	}

	if( obj_InitialUEMessage->gUMMEIType_isset == 1)
	{
	}

	if( obj_InitialUEMessage->tunnelInformationforBBF_isset == 1)
	{
	}

	if( obj_InitialUEMessage->sIPTOLGWTransportLayerAddress_isset == 1)
	{
	}

	if( obj_InitialUEMessage->lHNID_isset == 1)
	{
	}

	if( obj_InitialUEMessage->mMEGroupID_isset == 1)
	{
	}

	if( obj_InitialUEMessage->uEUsageType_isset == 1)
	{
	}

	if( obj_InitialUEMessage->cEmodeBSupportIndicator_isset == 1)
	{
	}

	if( obj_InitialUEMessage->dCNID_isset == 1)
	{
	}

	if( obj_InitialUEMessage->coverageLevel_isset == 1)
	{
	}

	if( obj_InitialUEMessage->uEApplicationLayerMeasurementCapability_isset == 1)
	{
	}

	if( obj_InitialUEMessage->eDTSession_isset == 1)
	{
	}

	if( obj_InitialUEMessage->iABNodeIndication_isset == 1)
	{
	}

	if( obj_InitialUEMessage->lTENTNTAIInformation_isset == 1)
	{
	}

	if( obj_InitialUEMessage->coarseUELocationRequested_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_InitialUEMessage( obj_InitialUEMessage);
}


void __si_s1ap__Handle_UplinkNASTransport_Prototype( SI_S1AP_DT_PDU_UplinkNASTransport * obj_UplinkNASTransport, SI_S1APNode * node)
{
	if( obj_UplinkNASTransport->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UplinkNASTransport->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UplinkNASTransport->nASPDU_isset == 1)
	{
	}

	if( obj_UplinkNASTransport->eUTRANCGI_isset == 1)
	{
	}

	if( obj_UplinkNASTransport->tAI_isset == 1)
	{
	}

	if( obj_UplinkNASTransport->gWTransportLayerAddress_isset == 1)
	{
	}

	if( obj_UplinkNASTransport->sIPTOLGWTransportLayerAddress_isset == 1)
	{
	}

	if( obj_UplinkNASTransport->lHNID_isset == 1)
	{
	}

	if( obj_UplinkNASTransport->pSCellInformation_isset == 1)
	{
	}

	if( obj_UplinkNASTransport->lTENTNTAIInformation_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UplinkNASTransport( obj_UplinkNASTransport);
}


void __si_s1ap__Handle_NASNonDeliveryIndication_Prototype( SI_S1AP_DT_PDU_NASNonDeliveryIndication * obj_NASNonDeliveryIndication, SI_S1APNode * node)
{
	if( obj_NASNonDeliveryIndication->mMEUES1APID_isset == 1)
	{
	}

	if( obj_NASNonDeliveryIndication->eNBUES1APID_isset == 1)
	{
	}

	if( obj_NASNonDeliveryIndication->nASPDU_isset == 1)
	{
	}

	if( obj_NASNonDeliveryIndication->cause_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_NASNonDeliveryIndication( obj_NASNonDeliveryIndication);
}


void __si_s1ap__Handle_HandoverCancel_Prototype( SI_S1AP_DT_PDU_HandoverCancel * obj_HandoverCancel, SI_S1APNode * node)
{
	if( obj_HandoverCancel->mMEUES1APID_isset == 1)
	{
	}

	if( obj_HandoverCancel->eNBUES1APID_isset == 1)
	{
	}

	if( obj_HandoverCancel->cause_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_HandoverCancel( obj_HandoverCancel);
}


void __si_s1ap__Handle_HandoverCancelAcknowledge_Prototype( SI_S1AP_DT_PDU_HandoverCancelAcknowledge * obj_HandoverCancelAcknowledge, SI_S1APNode * node)
{
	if( obj_HandoverCancelAcknowledge->mMEUES1APID_isset == 1)
	{
	}

	if( obj_HandoverCancelAcknowledge->eNBUES1APID_isset == 1)
	{
	}

	if( obj_HandoverCancelAcknowledge->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_HandoverCancelAcknowledge( obj_HandoverCancelAcknowledge);
}


void __si_s1ap__Handle_Reset_Prototype( SI_S1AP_DT_PDU_Reset * obj_Reset, SI_S1APNode * node)
{
	if( obj_Reset->cause_isset == 1)
	{
	}

	if( obj_Reset->resetType_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_Reset( obj_Reset);
}


void __si_s1ap__Handle_ResetAcknowledge_Prototype( SI_S1AP_DT_PDU_ResetAcknowledge * obj_ResetAcknowledge, SI_S1APNode * node)
{
	if( obj_ResetAcknowledge->uEassociatedLogicalS1ConnectionListResAck_isset == 1)
	{
	}

	if( obj_ResetAcknowledge->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_ResetAcknowledge( obj_ResetAcknowledge);
}


void __si_s1ap__Handle_ErrorIndication_Prototype( SI_S1AP_DT_PDU_ErrorIndication * obj_ErrorIndication, SI_S1APNode * node)
{
	if( obj_ErrorIndication->mMEUES1APID_isset == 1)
	{
	}

	if( obj_ErrorIndication->eNBUES1APID_isset == 1)
	{
	}

	if( obj_ErrorIndication->cause_isset == 1)
	{
	}

	if( obj_ErrorIndication->criticalityDiagnostics_isset == 1)
	{
	}

	if( obj_ErrorIndication->sTMSI_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_ErrorIndication( obj_ErrorIndication);
}


void __si_s1ap__Handle_S1SetupRequest_Prototype( SI_S1AP_DT_PDU_S1SetupRequest * obj_S1SetupRequest, SI_S1APNode * node)
{
	if( obj_S1SetupRequest->globalENBID_isset == 1)
	{
	}

	if( obj_S1SetupRequest->eNBname_isset == 1)
	{
	}

	if( obj_S1SetupRequest->supportedTAs_isset == 1)
	{
	}

	if( obj_S1SetupRequest->defaultPagingDRX_isset == 1)
	{
	}

	if( obj_S1SetupRequest->cSGIdList_isset == 1)
	{
	}

	if( obj_S1SetupRequest->uERetentionInformation_isset == 1)
	{
	}

	if( obj_S1SetupRequest->nBIoTDefaultPagingDRX_isset == 1)
	{
	}

	if( obj_S1SetupRequest->connectedengNBList_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_S1SetupRequest( obj_S1SetupRequest);
}


void __si_s1ap__Handle_S1SetupResponse_Prototype( SI_S1AP_DT_PDU_S1SetupResponse * obj_S1SetupResponse, SI_S1APNode * node)
{
	if( obj_S1SetupResponse->mMEname_isset == 1)
	{
	}

	if( obj_S1SetupResponse->servedGUMMEIs_isset == 1)
	{
	}

	if( obj_S1SetupResponse->relativeMMECapacity_isset == 1)
	{
	}

	if( obj_S1SetupResponse->mMERelaySupportIndicator_isset == 1)
	{
	}

	if( obj_S1SetupResponse->criticalityDiagnostics_isset == 1)
	{
	}

	if( obj_S1SetupResponse->uERetentionInformation_isset == 1)
	{
	}

	if( obj_S1SetupResponse->servedDCNs_isset == 1)
	{
	}

	if( obj_S1SetupResponse->iABSupported_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_S1SetupResponse( obj_S1SetupResponse);
}


void __si_s1ap__Handle_S1SetupFailure_Prototype( SI_S1AP_DT_PDU_S1SetupFailure * obj_S1SetupFailure, SI_S1APNode * node)
{
	if( obj_S1SetupFailure->cause_isset == 1)
	{
	}

	if( obj_S1SetupFailure->timeToWait_isset == 1)
	{
	}

	if( obj_S1SetupFailure->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_S1SetupFailure( obj_S1SetupFailure);
}


void __si_s1ap__Handle_ENBConfigurationUpdate_Prototype( SI_S1AP_DT_PDU_ENBConfigurationUpdate * obj_ENBConfigurationUpdate, SI_S1APNode * node)
{
	if( obj_ENBConfigurationUpdate->eNBname_isset == 1)
	{
	}

	if( obj_ENBConfigurationUpdate->supportedTAs_isset == 1)
	{
	}

	if( obj_ENBConfigurationUpdate->cSGIdList_isset == 1)
	{
	}

	if( obj_ENBConfigurationUpdate->defaultPagingDRX_isset == 1)
	{
	}

	if( obj_ENBConfigurationUpdate->nBIoTDefaultPagingDRX_isset == 1)
	{
	}

	if( obj_ENBConfigurationUpdate->connectedengNBToAddList_isset == 1)
	{
	}

	if( obj_ENBConfigurationUpdate->connectedengNBToRemoveList_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_ENBConfigurationUpdate( obj_ENBConfigurationUpdate);
}


void __si_s1ap__Handle_ENBConfigurationUpdateAcknowledge_Prototype( SI_S1AP_DT_PDU_ENBConfigurationUpdateAcknowledge * obj_ENBConfigurationUpdateAcknowledge, SI_S1APNode * node)
{
	if( obj_ENBConfigurationUpdateAcknowledge->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_ENBConfigurationUpdateAcknowledge( obj_ENBConfigurationUpdateAcknowledge);
}


void __si_s1ap__Handle_ENBConfigurationUpdateFailure_Prototype( SI_S1AP_DT_PDU_ENBConfigurationUpdateFailure * obj_ENBConfigurationUpdateFailure, SI_S1APNode * node)
{
	if( obj_ENBConfigurationUpdateFailure->cause_isset == 1)
	{
	}

	if( obj_ENBConfigurationUpdateFailure->timeToWait_isset == 1)
	{
	}

	if( obj_ENBConfigurationUpdateFailure->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_ENBConfigurationUpdateFailure( obj_ENBConfigurationUpdateFailure);
}


void __si_s1ap__Handle_MMEConfigurationUpdate_Prototype( SI_S1AP_DT_PDU_MMEConfigurationUpdate * obj_MMEConfigurationUpdate, SI_S1APNode * node)
{
	if( obj_MMEConfigurationUpdate->mMEname_isset == 1)
	{
	}

	if( obj_MMEConfigurationUpdate->servedGUMMEIs_isset == 1)
	{
	}

	if( obj_MMEConfigurationUpdate->relativeMMECapacity_isset == 1)
	{
	}

	if( obj_MMEConfigurationUpdate->servedDCNs_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_MMEConfigurationUpdate( obj_MMEConfigurationUpdate);
}


void __si_s1ap__Handle_MMEConfigurationUpdateAcknowledge_Prototype( SI_S1AP_DT_PDU_MMEConfigurationUpdateAcknowledge * obj_MMEConfigurationUpdateAcknowledge, SI_S1APNode * node)
{
	if( obj_MMEConfigurationUpdateAcknowledge->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_MMEConfigurationUpdateAcknowledge( obj_MMEConfigurationUpdateAcknowledge);
}


void __si_s1ap__Handle_MMEConfigurationUpdateFailure_Prototype( SI_S1AP_DT_PDU_MMEConfigurationUpdateFailure * obj_MMEConfigurationUpdateFailure, SI_S1APNode * node)
{
	if( obj_MMEConfigurationUpdateFailure->cause_isset == 1)
	{
	}

	if( obj_MMEConfigurationUpdateFailure->timeToWait_isset == 1)
	{
	}

	if( obj_MMEConfigurationUpdateFailure->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_MMEConfigurationUpdateFailure( obj_MMEConfigurationUpdateFailure);
}


void __si_s1ap__Handle_DownlinkS1cdma2000tunnelling_Prototype( SI_S1AP_DT_PDU_DownlinkS1cdma2000tunnelling * obj_DownlinkS1cdma2000tunnelling, SI_S1APNode * node)
{
	if( obj_DownlinkS1cdma2000tunnelling->mMEUES1APID_isset == 1)
	{
	}

	if( obj_DownlinkS1cdma2000tunnelling->eNBUES1APID_isset == 1)
	{
	}

	if( obj_DownlinkS1cdma2000tunnelling->cdma2000HOStatus_isset == 1)
	{
	}

	if( obj_DownlinkS1cdma2000tunnelling->cdma2000RATType_isset == 1)
	{
	}

	if( obj_DownlinkS1cdma2000tunnelling->cdma2000PDU_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_DownlinkS1cdma2000tunnelling( obj_DownlinkS1cdma2000tunnelling);
}


void __si_s1ap__Handle_UplinkS1cdma2000tunnelling_Prototype( SI_S1AP_DT_PDU_UplinkS1cdma2000tunnelling * obj_UplinkS1cdma2000tunnelling, SI_S1APNode * node)
{
	if( obj_UplinkS1cdma2000tunnelling->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UplinkS1cdma2000tunnelling->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UplinkS1cdma2000tunnelling->cdma2000RATType_isset == 1)
	{
	}

	if( obj_UplinkS1cdma2000tunnelling->cdma2000SectorID_isset == 1)
	{
	}

	if( obj_UplinkS1cdma2000tunnelling->cdma2000HORequiredIndication_isset == 1)
	{
	}

	if( obj_UplinkS1cdma2000tunnelling->cdma2000OneXSRVCCInfo_isset == 1)
	{
	}

	if( obj_UplinkS1cdma2000tunnelling->cdma2000OneXRAND_isset == 1)
	{
	}

	if( obj_UplinkS1cdma2000tunnelling->cdma2000PDU_isset == 1)
	{
	}

	if( obj_UplinkS1cdma2000tunnelling->eUTRANRoundTripDelayEstimationInfo_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UplinkS1cdma2000tunnelling( obj_UplinkS1cdma2000tunnelling);
}


void __si_s1ap__Handle_UEContextModificationRequest_Prototype( SI_S1AP_DT_PDU_UEContextModificationRequest * obj_UEContextModificationRequest, SI_S1APNode * node)
{
	if( obj_UEContextModificationRequest->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->securityKey_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->subscriberProfileIDforRFP_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->uEaggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->cSFallbackIndicator_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->uESecurityCapabilities_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->cSGMembershipStatus_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->registeredLAI_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->additionalCSFallbackIndicator_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->proSeAuthorized_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->sRVCCOperationPossible_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->sRVCCOperationNotPossible_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->v2XServicesAuthorized_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->uESidelinkAggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->nRUESecurityCapabilities_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->aerialUEsubscriptionInformation_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->additionalRRMPriorityIndex_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->iABAuthorized_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->nRV2XServicesAuthorized_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->nRUESidelinkAggregateMaximumBitrate_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->pC5QoSParameters_isset == 1)
	{
	}

	if( obj_UEContextModificationRequest->uERadioCapabilityID_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEContextModificationRequest( obj_UEContextModificationRequest);
}


void __si_s1ap__Handle_UEContextModificationResponse_Prototype( SI_S1AP_DT_PDU_UEContextModificationResponse * obj_UEContextModificationResponse, SI_S1APNode * node)
{
	if( obj_UEContextModificationResponse->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UEContextModificationResponse->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UEContextModificationResponse->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEContextModificationResponse( obj_UEContextModificationResponse);
}


void __si_s1ap__Handle_UEContextModificationFailure_Prototype( SI_S1AP_DT_PDU_UEContextModificationFailure * obj_UEContextModificationFailure, SI_S1APNode * node)
{
	if( obj_UEContextModificationFailure->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UEContextModificationFailure->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UEContextModificationFailure->cause_isset == 1)
	{
	}

	if( obj_UEContextModificationFailure->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEContextModificationFailure( obj_UEContextModificationFailure);
}


void __si_s1ap__Handle_UECapabilityInfoIndication_Prototype( SI_S1AP_DT_PDU_UECapabilityInfoIndication * obj_UECapabilityInfoIndication, SI_S1APNode * node)
{
	if( obj_UECapabilityInfoIndication->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UECapabilityInfoIndication->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UECapabilityInfoIndication->uERadioCapability_isset == 1)
	{
	}

	if( obj_UECapabilityInfoIndication->uERadioCapabilityForPaging_isset == 1)
	{
	}

	if( obj_UECapabilityInfoIndication->uEApplicationLayerMeasurementCapability_isset == 1)
	{
	}

	if( obj_UECapabilityInfoIndication->lTEMIndication_isset == 1)
	{
	}

	if( obj_UECapabilityInfoIndication->uERadioCapabilityNRFormat_isset == 1)
	{
	}

	if( obj_UECapabilityInfoIndication->uERadioCapabilityForPagingNRFormat_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UECapabilityInfoIndication( obj_UECapabilityInfoIndication);
}


void __si_s1ap__Handle_UEContextReleaseCommand_Prototype( SI_S1AP_DT_PDU_UEContextReleaseCommand * obj_UEContextReleaseCommand, SI_S1APNode * node)
{
	if( obj_UEContextReleaseCommand->uES1APIDs_isset == 1)
	{
	}

	if( obj_UEContextReleaseCommand->cause_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEContextReleaseCommand( obj_UEContextReleaseCommand);
}


void __si_s1ap__Handle_UEContextReleaseComplete_Prototype( SI_S1AP_DT_PDU_UEContextReleaseComplete * obj_UEContextReleaseComplete, SI_S1APNode * node)
{
	if( obj_UEContextReleaseComplete->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UEContextReleaseComplete->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UEContextReleaseComplete->criticalityDiagnostics_isset == 1)
	{
	}

	if( obj_UEContextReleaseComplete->userLocationInformation_isset == 1)
	{
	}

	if( obj_UEContextReleaseComplete->informationOnRecommendedCellsAndENBsForPaging_isset == 1)
	{
	}

	if( obj_UEContextReleaseComplete->cellIdentifierAndCELevelForCECapableUEs_isset == 1)
	{
	}

	if( obj_UEContextReleaseComplete->secondaryRATDataUsageReportList_isset == 1)
	{
	}

	if( obj_UEContextReleaseComplete->timeSinceSecondaryNodeRelease_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEContextReleaseComplete( obj_UEContextReleaseComplete);
}


void __si_s1ap__Handle_ENBStatusTransfer_Prototype( SI_S1AP_DT_PDU_ENBStatusTransfer * obj_ENBStatusTransfer, SI_S1APNode * node)
{
	if( obj_ENBStatusTransfer->mMEUES1APID_isset == 1)
	{
	}

	if( obj_ENBStatusTransfer->eNBUES1APID_isset == 1)
	{
	}

	if( obj_ENBStatusTransfer->eNBStatusTransferTransparentContainer_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_ENBStatusTransfer( obj_ENBStatusTransfer);
}


void __si_s1ap__Handle_MMEStatusTransfer_Prototype( SI_S1AP_DT_PDU_MMEStatusTransfer * obj_MMEStatusTransfer, SI_S1APNode * node)
{
	if( obj_MMEStatusTransfer->mMEUES1APID_isset == 1)
	{
	}

	if( obj_MMEStatusTransfer->eNBUES1APID_isset == 1)
	{
	}

	if( obj_MMEStatusTransfer->eNBStatusTransferTransparentContainer_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_MMEStatusTransfer( obj_MMEStatusTransfer);
}


void __si_s1ap__Handle_DeactivateTrace_Prototype( SI_S1AP_DT_PDU_DeactivateTrace * obj_DeactivateTrace, SI_S1APNode * node)
{
	if( obj_DeactivateTrace->mMEUES1APID_isset == 1)
	{
	}

	if( obj_DeactivateTrace->eNBUES1APID_isset == 1)
	{
	}

	if( obj_DeactivateTrace->eUTRANTraceID_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_DeactivateTrace( obj_DeactivateTrace);
}


void __si_s1ap__Handle_TraceStart_Prototype( SI_S1AP_DT_PDU_TraceStart * obj_TraceStart, SI_S1APNode * node)
{
	if( obj_TraceStart->mMEUES1APID_isset == 1)
	{
	}

	if( obj_TraceStart->eNBUES1APID_isset == 1)
	{
	}

	if( obj_TraceStart->traceActivation_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_TraceStart( obj_TraceStart);
}


void __si_s1ap__Handle_TraceFailureIndication_Prototype( SI_S1AP_DT_PDU_TraceFailureIndication * obj_TraceFailureIndication, SI_S1APNode * node)
{
	if( obj_TraceFailureIndication->mMEUES1APID_isset == 1)
	{
	}

	if( obj_TraceFailureIndication->eNBUES1APID_isset == 1)
	{
	}

	if( obj_TraceFailureIndication->eUTRANTraceID_isset == 1)
	{
	}

	if( obj_TraceFailureIndication->cause_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_TraceFailureIndication( obj_TraceFailureIndication);
}


void __si_s1ap__Handle_CellTrafficTrace_Prototype( SI_S1AP_DT_PDU_CellTrafficTrace * obj_CellTrafficTrace, SI_S1APNode * node)
{
	if( obj_CellTrafficTrace->mMEUES1APID_isset == 1)
	{
	}

	if( obj_CellTrafficTrace->eNBUES1APID_isset == 1)
	{
	}

	if( obj_CellTrafficTrace->eUTRANTraceID_isset == 1)
	{
	}

	if( obj_CellTrafficTrace->eUTRANCGI_isset == 1)
	{
	}

	if( obj_CellTrafficTrace->traceCollectionEntityIPAddress_isset == 1)
	{
	}

	if( obj_CellTrafficTrace->privacyIndicator_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_CellTrafficTrace( obj_CellTrafficTrace);
}


void __si_s1ap__Handle_LocationReportingControl_Prototype( SI_S1AP_DT_PDU_LocationReportingControl * obj_LocationReportingControl, SI_S1APNode * node)
{
	if( obj_LocationReportingControl->mMEUES1APID_isset == 1)
	{
	}

	if( obj_LocationReportingControl->eNBUES1APID_isset == 1)
	{
	}

	if( obj_LocationReportingControl->requestType_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_LocationReportingControl( obj_LocationReportingControl);
}


void __si_s1ap__Handle_LocationReportingFailureIndication_Prototype( SI_S1AP_DT_PDU_LocationReportingFailureIndication * obj_LocationReportingFailureIndication, SI_S1APNode * node)
{
	if( obj_LocationReportingFailureIndication->mMEUES1APID_isset == 1)
	{
	}

	if( obj_LocationReportingFailureIndication->eNBUES1APID_isset == 1)
	{
	}

	if( obj_LocationReportingFailureIndication->cause_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_LocationReportingFailureIndication( obj_LocationReportingFailureIndication);
}


void __si_s1ap__Handle_LocationReport_Prototype( SI_S1AP_DT_PDU_LocationReport * obj_LocationReport, SI_S1APNode * node)
{
	if( obj_LocationReport->mMEUES1APID_isset == 1)
	{
	}

	if( obj_LocationReport->eNBUES1APID_isset == 1)
	{
	}

	if( obj_LocationReport->eUTRANCGI_isset == 1)
	{
	}

	if( obj_LocationReport->tAI_isset == 1)
	{
	}

	if( obj_LocationReport->requestType_isset == 1)
	{
	}

	if( obj_LocationReport->pSCellInformation_isset == 1)
	{
	}

	if( obj_LocationReport->lTENTNTAIInformation_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_LocationReport( obj_LocationReport);
}


void __si_s1ap__Handle_OverloadStart_Prototype( SI_S1AP_DT_PDU_OverloadStart * obj_OverloadStart, SI_S1APNode * node)
{
	if( obj_OverloadStart->overloadResponse_isset == 1)
	{
	}

	if( obj_OverloadStart->gUMMEIList_isset == 1)
	{
	}

	if( obj_OverloadStart->trafficLoadReductionIndication_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_OverloadStart( obj_OverloadStart);
}


void __si_s1ap__Handle_OverloadStop_Prototype( SI_S1AP_DT_PDU_OverloadStop * obj_OverloadStop, SI_S1APNode * node)
{
	if( obj_OverloadStop->gUMMEIList_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_OverloadStop( obj_OverloadStop);
}


void __si_s1ap__Handle_WriteReplaceWarningRequest_Prototype( SI_S1AP_DT_PDU_WriteReplaceWarningRequest * obj_WriteReplaceWarningRequest, SI_S1APNode * node)
{
	if( obj_WriteReplaceWarningRequest->messageIdentifier_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningRequest->serialNumber_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningRequest->warningAreaList_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningRequest->repetitionPeriod_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningRequest->extendedRepetitionPeriod_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningRequest->numberofBroadcastRequest_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningRequest->warningType_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningRequest->warningSecurityInfo_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningRequest->dataCodingScheme_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningRequest->warningMessageContents_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningRequest->concurrentWarningMessageIndicator_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningRequest->warningAreaCoordinates_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_WriteReplaceWarningRequest( obj_WriteReplaceWarningRequest);
}


void __si_s1ap__Handle_WriteReplaceWarningResponse_Prototype( SI_S1AP_DT_PDU_WriteReplaceWarningResponse * obj_WriteReplaceWarningResponse, SI_S1APNode * node)
{
	if( obj_WriteReplaceWarningResponse->messageIdentifier_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningResponse->serialNumber_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningResponse->broadcastCompletedAreaList_isset == 1)
	{
	}

	if( obj_WriteReplaceWarningResponse->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_WriteReplaceWarningResponse( obj_WriteReplaceWarningResponse);
}


void __si_s1ap__Handle_ENBDirectInformationTransfer_Prototype( SI_S1AP_DT_PDU_ENBDirectInformationTransfer * obj_ENBDirectInformationTransfer, SI_S1APNode * node)
{
	if( obj_ENBDirectInformationTransfer->interSystemInformationTransferTypeEDT_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_ENBDirectInformationTransfer( obj_ENBDirectInformationTransfer);
}


void __si_s1ap__Handle_MMEDirectInformationTransfer_Prototype( SI_S1AP_DT_PDU_MMEDirectInformationTransfer * obj_MMEDirectInformationTransfer, SI_S1APNode * node)
{
	if( obj_MMEDirectInformationTransfer->interSystemInformationTransferTypeMDT_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_MMEDirectInformationTransfer( obj_MMEDirectInformationTransfer);
}


void __si_s1ap__Handle_ENBConfigurationTransfer_Prototype( SI_S1AP_DT_PDU_ENBConfigurationTransfer * obj_ENBConfigurationTransfer, SI_S1APNode * node)
{
	if( obj_ENBConfigurationTransfer->sONConfigurationTransferECT_isset == 1)
	{
	}

	if( obj_ENBConfigurationTransfer->eNDCSONConfigurationTransferECT_isset == 1)
	{
	}

	if( obj_ENBConfigurationTransfer->intersystemSONConfigurationTransferECT_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_ENBConfigurationTransfer( obj_ENBConfigurationTransfer);
}


void __si_s1ap__Handle_MMEConfigurationTransfer_Prototype( SI_S1AP_DT_PDU_MMEConfigurationTransfer * obj_MMEConfigurationTransfer, SI_S1APNode * node)
{
	if( obj_MMEConfigurationTransfer->sONConfigurationTransferMCT_isset == 1)
	{
	}

	if( obj_MMEConfigurationTransfer->eNDCSONConfigurationTransferMCT_isset == 1)
	{
	}

	if( obj_MMEConfigurationTransfer->intersystemSONConfigurationTransferMCT_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_MMEConfigurationTransfer( obj_MMEConfigurationTransfer);
}


void __si_s1ap__Handle_PrivateMessage_Prototype( SI_S1AP_DT_PDU_PrivateMessage * obj_PrivateMessage, SI_S1APNode * node)
{
	__si_s1ap_memfree_pdu_PrivateMessage( obj_PrivateMessage);
}


void __si_s1ap__Handle_PWSRestartIndication_Prototype( SI_S1AP_DT_PDU_PWSRestartIndication * obj_PWSRestartIndication, SI_S1APNode * node)
{
	if( obj_PWSRestartIndication->eCGIListForRestart_isset == 1)
	{
	}

	if( obj_PWSRestartIndication->globalENBID_isset == 1)
	{
	}

	if( obj_PWSRestartIndication->tAIListForRestart_isset == 1)
	{
	}

	if( obj_PWSRestartIndication->emergencyAreaIDListForRestart_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_PWSRestartIndication( obj_PWSRestartIndication);
}


void __si_s1ap__Handle_KillRequest_Prototype( SI_S1AP_DT_PDU_KillRequest * obj_KillRequest, SI_S1APNode * node)
{
	if( obj_KillRequest->messageIdentifier_isset == 1)
	{
	}

	if( obj_KillRequest->serialNumber_isset == 1)
	{
	}

	if( obj_KillRequest->warningAreaList_isset == 1)
	{
	}

	if( obj_KillRequest->killAllWarningMessages_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_KillRequest( obj_KillRequest);
}


void __si_s1ap__Handle_KillResponse_Prototype( SI_S1AP_DT_PDU_KillResponse * obj_KillResponse, SI_S1APNode * node)
{
	if( obj_KillResponse->messageIdentifier_isset == 1)
	{
	}

	if( obj_KillResponse->serialNumber_isset == 1)
	{
	}

	if( obj_KillResponse->broadcastCancelledAreaList_isset == 1)
	{
	}

	if( obj_KillResponse->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_KillResponse( obj_KillResponse);
}


void __si_s1ap__Handle_DownlinkUEAssociatedLPPaTransport_Prototype( SI_S1AP_DT_PDU_DownlinkUEAssociatedLPPaTransport * obj_DownlinkUEAssociatedLPPaTransport, SI_S1APNode * node)
{
	if( obj_DownlinkUEAssociatedLPPaTransport->mMEUES1APID_isset == 1)
	{
	}

	if( obj_DownlinkUEAssociatedLPPaTransport->eNBUES1APID_isset == 1)
	{
	}

	if( obj_DownlinkUEAssociatedLPPaTransport->routingID_isset == 1)
	{
	}

	if( obj_DownlinkUEAssociatedLPPaTransport->lPPaPDU_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_DownlinkUEAssociatedLPPaTransport( obj_DownlinkUEAssociatedLPPaTransport);
}


void __si_s1ap__Handle_UplinkUEAssociatedLPPaTransport_Prototype( SI_S1AP_DT_PDU_UplinkUEAssociatedLPPaTransport * obj_UplinkUEAssociatedLPPaTransport, SI_S1APNode * node)
{
	if( obj_UplinkUEAssociatedLPPaTransport->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UplinkUEAssociatedLPPaTransport->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UplinkUEAssociatedLPPaTransport->routingID_isset == 1)
	{
	}

	if( obj_UplinkUEAssociatedLPPaTransport->lPPaPDU_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UplinkUEAssociatedLPPaTransport( obj_UplinkUEAssociatedLPPaTransport);
}


void __si_s1ap__Handle_DownlinkNonUEAssociatedLPPaTransport_Prototype( SI_S1AP_DT_PDU_DownlinkNonUEAssociatedLPPaTransport * obj_DownlinkNonUEAssociatedLPPaTransport, SI_S1APNode * node)
{
	if( obj_DownlinkNonUEAssociatedLPPaTransport->routingID_isset == 1)
	{
	}

	if( obj_DownlinkNonUEAssociatedLPPaTransport->lPPaPDU_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_DownlinkNonUEAssociatedLPPaTransport( obj_DownlinkNonUEAssociatedLPPaTransport);
}


void __si_s1ap__Handle_UplinkNonUEAssociatedLPPaTransport_Prototype( SI_S1AP_DT_PDU_UplinkNonUEAssociatedLPPaTransport * obj_UplinkNonUEAssociatedLPPaTransport, SI_S1APNode * node)
{
	if( obj_UplinkNonUEAssociatedLPPaTransport->routingID_isset == 1)
	{
	}

	if( obj_UplinkNonUEAssociatedLPPaTransport->lPPaPDU_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UplinkNonUEAssociatedLPPaTransport( obj_UplinkNonUEAssociatedLPPaTransport);
}


void __si_s1ap__Handle_UERadioCapabilityMatchRequest_Prototype( SI_S1AP_DT_PDU_UERadioCapabilityMatchRequest * obj_UERadioCapabilityMatchRequest, SI_S1APNode * node)
{
	if( obj_UERadioCapabilityMatchRequest->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UERadioCapabilityMatchRequest->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UERadioCapabilityMatchRequest->uERadioCapability_isset == 1)
	{
	}

	if( obj_UERadioCapabilityMatchRequest->uERadioCapabilityID_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UERadioCapabilityMatchRequest( obj_UERadioCapabilityMatchRequest);
}


void __si_s1ap__Handle_UERadioCapabilityMatchResponse_Prototype( SI_S1AP_DT_PDU_UERadioCapabilityMatchResponse * obj_UERadioCapabilityMatchResponse, SI_S1APNode * node)
{
	if( obj_UERadioCapabilityMatchResponse->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UERadioCapabilityMatchResponse->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UERadioCapabilityMatchResponse->voiceSupportMatchIndicator_isset == 1)
	{
	}

	if( obj_UERadioCapabilityMatchResponse->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UERadioCapabilityMatchResponse( obj_UERadioCapabilityMatchResponse);
}


void __si_s1ap__Handle_E_RABModificationIndication_Prototype( SI_S1AP_DT_PDU_E_RABModificationIndication * obj_E_RABModificationIndication, SI_S1APNode * node)
{
	if( obj_E_RABModificationIndication->mMEUES1APID_isset == 1)
	{
	}

	if( obj_E_RABModificationIndication->eNBUES1APID_isset == 1)
	{
	}

	if( obj_E_RABModificationIndication->cSGMembershipInfo_isset == 1)
	{
	}

	if( obj_E_RABModificationIndication->tunnelInformationforBBF_isset == 1)
	{
	}

	if( obj_E_RABModificationIndication->secondaryRATDataUsageReportList_isset == 1)
	{
	}

	if( obj_E_RABModificationIndication->userLocationInformation_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_E_RABModificationIndication( obj_E_RABModificationIndication);
}


void __si_s1ap__Handle_E_RABModificationConfirm_Prototype( SI_S1AP_DT_PDU_E_RABModificationConfirm * obj_E_RABModificationConfirm, SI_S1APNode * node)
{
	if( obj_E_RABModificationConfirm->mMEUES1APID_isset == 1)
	{
	}

	if( obj_E_RABModificationConfirm->eNBUES1APID_isset == 1)
	{
	}

	if( obj_E_RABModificationConfirm->eRABModifyListBearerModConf_isset == 1)
	{
	}

	if( obj_E_RABModificationConfirm->eRABFailedToModifyListBearerModConf_isset == 1)
	{
	}

	if( obj_E_RABModificationConfirm->eRABToBeReleasedListBearerModConf_isset == 1)
	{
	}

	if( obj_E_RABModificationConfirm->criticalityDiagnostics_isset == 1)
	{
	}

	if( obj_E_RABModificationConfirm->cSGMembershipStatus_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_E_RABModificationConfirm( obj_E_RABModificationConfirm);
}


void __si_s1ap__Handle_UEContextModificationIndication_Prototype( SI_S1AP_DT_PDU_UEContextModificationIndication * obj_UEContextModificationIndication, SI_S1APNode * node)
{
	if( obj_UEContextModificationIndication->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UEContextModificationIndication->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UEContextModificationIndication->cSGMembershipInfo_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEContextModificationIndication( obj_UEContextModificationIndication);
}


void __si_s1ap__Handle_UEContextModificationConfirm_Prototype( SI_S1AP_DT_PDU_UEContextModificationConfirm * obj_UEContextModificationConfirm, SI_S1APNode * node)
{
	if( obj_UEContextModificationConfirm->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UEContextModificationConfirm->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UEContextModificationConfirm->cSGMembershipStatus_isset == 1)
	{
	}

	if( obj_UEContextModificationConfirm->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEContextModificationConfirm( obj_UEContextModificationConfirm);
}


void __si_s1ap__Handle_RerouteNASRequest_Prototype( SI_S1AP_DT_PDU_RerouteNASRequest * obj_RerouteNASRequest, SI_S1APNode * node)
{
	if( obj_RerouteNASRequest->eNBUES1APID_isset == 1)
	{
	}

	if( obj_RerouteNASRequest->mMEUES1APID_isset == 1)
	{
	}

	if( obj_RerouteNASRequest->mMEGroupID_isset == 1)
	{
	}

	if( obj_RerouteNASRequest->additionalGUTI_isset == 1)
	{
	}

	if( obj_RerouteNASRequest->uEUsageType_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_RerouteNASRequest( obj_RerouteNASRequest);
}


void __si_s1ap__Handle_PWSFailureIndication_Prototype( SI_S1AP_DT_PDU_PWSFailureIndication * obj_PWSFailureIndication, SI_S1APNode * node)
{
	if( obj_PWSFailureIndication->pWSfailedECGIList_isset == 1)
	{
	}

	if( obj_PWSFailureIndication->globalENBID_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_PWSFailureIndication( obj_PWSFailureIndication);
}


void __si_s1ap__Handle_UEContextSuspendRequest_Prototype( SI_S1AP_DT_PDU_UEContextSuspendRequest * obj_UEContextSuspendRequest, SI_S1APNode * node)
{
	if( obj_UEContextSuspendRequest->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UEContextSuspendRequest->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UEContextSuspendRequest->informationOnRecommendedCellsAndENBsForPaging_isset == 1)
	{
	}

	if( obj_UEContextSuspendRequest->cellIdentifierAndCELevelForCECapableUEs_isset == 1)
	{
	}

	if( obj_UEContextSuspendRequest->secondaryRATDataUsageReportList_isset == 1)
	{
	}

	if( obj_UEContextSuspendRequest->userLocationInformation_isset == 1)
	{
	}

	if( obj_UEContextSuspendRequest->timeSinceSecondaryNodeRelease_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEContextSuspendRequest( obj_UEContextSuspendRequest);
}


void __si_s1ap__Handle_UEContextSuspendResponse_Prototype( SI_S1AP_DT_PDU_UEContextSuspendResponse * obj_UEContextSuspendResponse, SI_S1APNode * node)
{
	if( obj_UEContextSuspendResponse->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UEContextSuspendResponse->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UEContextSuspendResponse->criticalityDiagnostics_isset == 1)
	{
	}

	if( obj_UEContextSuspendResponse->securityContext_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEContextSuspendResponse( obj_UEContextSuspendResponse);
}


void __si_s1ap__Handle_UEContextResumeRequest_Prototype( SI_S1AP_DT_PDU_UEContextResumeRequest * obj_UEContextResumeRequest, SI_S1APNode * node)
{
	if( obj_UEContextResumeRequest->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UEContextResumeRequest->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UEContextResumeRequest->rRCResumeCause_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEContextResumeRequest( obj_UEContextResumeRequest);
}


void __si_s1ap__Handle_UEContextResumeResponse_Prototype( SI_S1AP_DT_PDU_UEContextResumeResponse * obj_UEContextResumeResponse, SI_S1APNode * node)
{
	if( obj_UEContextResumeResponse->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UEContextResumeResponse->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UEContextResumeResponse->criticalityDiagnostics_isset == 1)
	{
	}

	if( obj_UEContextResumeResponse->securityContext_isset == 1)
	{
	}

	if( obj_UEContextResumeResponse->pendingDataIndication_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEContextResumeResponse( obj_UEContextResumeResponse);
}


void __si_s1ap__Handle_UEContextResumeFailure_Prototype( SI_S1AP_DT_PDU_UEContextResumeFailure * obj_UEContextResumeFailure, SI_S1APNode * node)
{
	if( obj_UEContextResumeFailure->mMEUES1APID_isset == 1)
	{
	}

	if( obj_UEContextResumeFailure->eNBUES1APID_isset == 1)
	{
	}

	if( obj_UEContextResumeFailure->cause_isset == 1)
	{
	}

	if( obj_UEContextResumeFailure->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEContextResumeFailure( obj_UEContextResumeFailure);
}


void __si_s1ap__Handle_ConnectionEstablishmentIndication_Prototype( SI_S1AP_DT_PDU_ConnectionEstablishmentIndication * obj_ConnectionEstablishmentIndication, SI_S1APNode * node)
{
	if( obj_ConnectionEstablishmentIndication->mMEUES1APID_isset == 1)
	{
	}

	if( obj_ConnectionEstablishmentIndication->eNBUES1APID_isset == 1)
	{
	}

	if( obj_ConnectionEstablishmentIndication->uERadioCapability_isset == 1)
	{
	}

	if( obj_ConnectionEstablishmentIndication->enhancedCoverageRestricted_isset == 1)
	{
	}

	if( obj_ConnectionEstablishmentIndication->dLCPSecurityInformation_isset == 1)
	{
	}

	if( obj_ConnectionEstablishmentIndication->cEModeBRestricted_isset == 1)
	{
	}

	if( obj_ConnectionEstablishmentIndication->endIndication_isset == 1)
	{
	}

	if( obj_ConnectionEstablishmentIndication->subscriptionBasedUEDifferentiationInfo_isset == 1)
	{
	}

	if( obj_ConnectionEstablishmentIndication->uELevelQoSParameters_isset == 1)
	{
	}

	if( obj_ConnectionEstablishmentIndication->uERadioCapabilityID_isset == 1)
	{
	}

	if( obj_ConnectionEstablishmentIndication->maskedIMEISV_isset == 1)
	{
	}

	if( obj_ConnectionEstablishmentIndication->coarseUELocation_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_ConnectionEstablishmentIndication( obj_ConnectionEstablishmentIndication);
}


void __si_s1ap__Handle_NASDeliveryIndication_Prototype( SI_S1AP_DT_PDU_NASDeliveryIndication * obj_NASDeliveryIndication, SI_S1APNode * node)
{
	if( obj_NASDeliveryIndication->mMEUES1APID_isset == 1)
	{
	}

	if( obj_NASDeliveryIndication->eNBUES1APID_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_NASDeliveryIndication( obj_NASDeliveryIndication);
}


void __si_s1ap__Handle_RetrieveUEInformation_Prototype( SI_S1AP_DT_PDU_RetrieveUEInformation * obj_RetrieveUEInformation, SI_S1APNode * node)
{
	if( obj_RetrieveUEInformation->sTMSI_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_RetrieveUEInformation( obj_RetrieveUEInformation);
}


void __si_s1ap__Handle_UEInformationTransfer_Prototype( SI_S1AP_DT_PDU_UEInformationTransfer * obj_UEInformationTransfer, SI_S1APNode * node)
{
	if( obj_UEInformationTransfer->sTMSI_isset == 1)
	{
	}

	if( obj_UEInformationTransfer->uELevelQoSParameters_isset == 1)
	{
	}

	if( obj_UEInformationTransfer->uERadioCapability_isset == 1)
	{
	}

	if( obj_UEInformationTransfer->subscriptionBasedUEDifferentiationInfo_isset == 1)
	{
	}

	if( obj_UEInformationTransfer->pendingDataIndication_isset == 1)
	{
	}

	if( obj_UEInformationTransfer->maskedIMEISV_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UEInformationTransfer( obj_UEInformationTransfer);
}


void __si_s1ap__Handle_ENBCPRelocationIndication_Prototype( SI_S1AP_DT_PDU_ENBCPRelocationIndication * obj_ENBCPRelocationIndication, SI_S1APNode * node)
{
	if( obj_ENBCPRelocationIndication->eNBUES1APID_isset == 1)
	{
	}

	if( obj_ENBCPRelocationIndication->sTMSI_isset == 1)
	{
	}

	if( obj_ENBCPRelocationIndication->eUTRANCGI_isset == 1)
	{
	}

	if( obj_ENBCPRelocationIndication->tAI_isset == 1)
	{
	}

	if( obj_ENBCPRelocationIndication->uLCPSecurityInformation_isset == 1)
	{
	}

	if( obj_ENBCPRelocationIndication->lTENTNTAIInformation_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_ENBCPRelocationIndication( obj_ENBCPRelocationIndication);
}


void __si_s1ap__Handle_MMECPRelocationIndication_Prototype( SI_S1AP_DT_PDU_MMECPRelocationIndication * obj_MMECPRelocationIndication, SI_S1APNode * node)
{
	if( obj_MMECPRelocationIndication->mMEUES1APID_isset == 1)
	{
	}

	if( obj_MMECPRelocationIndication->eNBUES1APID_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_MMECPRelocationIndication( obj_MMECPRelocationIndication);
}


void __si_s1ap__Handle_SecondaryRATDataUsageReport_Prototype( SI_S1AP_DT_PDU_SecondaryRATDataUsageReport * obj_SecondaryRATDataUsageReport, SI_S1APNode * node)
{
	if( obj_SecondaryRATDataUsageReport->mMEUES1APID_isset == 1)
	{
	}

	if( obj_SecondaryRATDataUsageReport->eNBUES1APID_isset == 1)
	{
	}

	if( obj_SecondaryRATDataUsageReport->secondaryRATDataUsageReportList_isset == 1)
	{
	}

	if( obj_SecondaryRATDataUsageReport->handoverFlag_isset == 1)
	{
	}

	if( obj_SecondaryRATDataUsageReport->userLocationInformation_isset == 1)
	{
	}

	if( obj_SecondaryRATDataUsageReport->timeSinceSecondaryNodeRelease_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_SecondaryRATDataUsageReport( obj_SecondaryRATDataUsageReport);
}


void __si_s1ap__Handle_UERadioCapabilityIDMappingRequest_Prototype( SI_S1AP_DT_PDU_UERadioCapabilityIDMappingRequest * obj_UERadioCapabilityIDMappingRequest, SI_S1APNode * node)
{
	if( obj_UERadioCapabilityIDMappingRequest->uERadioCapabilityID_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UERadioCapabilityIDMappingRequest( obj_UERadioCapabilityIDMappingRequest);
}


void __si_s1ap__Handle_UERadioCapabilityIDMappingResponse_Prototype( SI_S1AP_DT_PDU_UERadioCapabilityIDMappingResponse * obj_UERadioCapabilityIDMappingResponse, SI_S1APNode * node)
{
	if( obj_UERadioCapabilityIDMappingResponse->uERadioCapabilityID_isset == 1)
	{
	}

	if( obj_UERadioCapabilityIDMappingResponse->uERadioCapability_isset == 1)
	{
	}

	if( obj_UERadioCapabilityIDMappingResponse->criticalityDiagnostics_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_UERadioCapabilityIDMappingResponse( obj_UERadioCapabilityIDMappingResponse);
}


void __si_s1ap__Handle_HandoverSuccess_Prototype( SI_S1AP_DT_PDU_HandoverSuccess * obj_HandoverSuccess, SI_S1APNode * node)
{
	if( obj_HandoverSuccess->mMEUES1APID_isset == 1)
	{
	}

	if( obj_HandoverSuccess->eNBUES1APID_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_HandoverSuccess( obj_HandoverSuccess);
}


void __si_s1ap__Handle_ENBEarlyStatusTransfer_Prototype( SI_S1AP_DT_PDU_ENBEarlyStatusTransfer * obj_ENBEarlyStatusTransfer, SI_S1APNode * node)
{
	if( obj_ENBEarlyStatusTransfer->mMEUES1APID_isset == 1)
	{
	}

	if( obj_ENBEarlyStatusTransfer->eNBUES1APID_isset == 1)
	{
	}

	if( obj_ENBEarlyStatusTransfer->eNBEarlyStatusTransferTransparentContainer_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_ENBEarlyStatusTransfer( obj_ENBEarlyStatusTransfer);
}


void __si_s1ap__Handle_MMEEarlyStatusTransfer_Prototype( SI_S1AP_DT_PDU_MMEEarlyStatusTransfer * obj_MMEEarlyStatusTransfer, SI_S1APNode * node)
{
	if( obj_MMEEarlyStatusTransfer->mMEUES1APID_isset == 1)
	{
	}

	if( obj_MMEEarlyStatusTransfer->eNBUES1APID_isset == 1)
	{
	}

	if( obj_MMEEarlyStatusTransfer->eNBEarlyStatusTransferTransparentContainer_isset == 1)
	{
	}

	__si_s1ap_memfree_pdu_MMEEarlyStatusTransfer( obj_MMEEarlyStatusTransfer);
}


