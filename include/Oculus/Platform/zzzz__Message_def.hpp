#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace {
namespace Oculus::Platform::Models {
class NetSyncSessionsChangedNotification;
}
namespace Oculus::Platform::Models {
class AssetDetails;
}
namespace Oculus::Platform::Models {
class CalApplicationSuggestionList;
}
namespace Oculus::Platform::Models {
class InstalledApplicationList;
}
namespace Oculus::Platform::Models {
class AssetDetailsList;
}
namespace Oculus::Platform::Models {
class LivestreamingStartResult;
}
namespace Oculus::Platform::Models {
class Party;
}
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResult;
}
namespace Oculus::Platform::Models {
class UserDataStoreUpdateResponse;
}
namespace Oculus::Platform::Models {
class AchievementDefinitionList;
}
namespace Oculus::Platform::Models {
class NetworkingPeer;
}
namespace Oculus::Platform::Models {
class UserList;
}
namespace Oculus::Platform::Models {
class RejoinDialogResult;
}
namespace Oculus::Platform::Models {
class BlockedUserList;
}
namespace Oculus::Platform::Models {
class UserCapabilityList;
}
namespace Oculus::Platform::Models {
class PingResult;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform::Models {
class AvatarEditorResult;
}
namespace Oculus::Platform::Models {
class MatchmakingStats;
}
namespace Oculus::Platform::Models {
class RoomInviteNotificationList;
}
namespace Oculus::Platform::Models {
class OrgScopedID;
}
namespace Oculus::Platform::Models {
class AssetFileDeleteResult;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadCancelResult;
}
namespace Oculus::Platform::Models {
class LinkedAccountList;
}
namespace Oculus::Platform::Models {
class LivestreamingVideoStats;
}
namespace Oculus::Platform::Models {
class InvitePanelResultInfo;
}
namespace Oculus::Platform::Models {
class LeaderboardEntryList;
}
namespace Oculus::Platform::Models {
class SystemVoipState;
}
namespace Oculus::Platform::Models {
class AchievementUpdate;
}
namespace Oculus::Platform::Models {
class CloudStorageMetadata;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Oculus::Platform::Models {
class MatchmakingAdminSnapshot;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadUpdate;
}
namespace Oculus::Platform::Models {
class ApplicationInviteList;
}
namespace Oculus::Platform::Models {
class LaunchFriendRequestFlowResult;
}
namespace Oculus::Platform::Models {
class NetSyncSessionList;
}
namespace Oculus::Platform::Models {
class PartyID;
}
namespace Oculus::Platform::Models {
class ShareMediaResult;
}
namespace Oculus::Platform::Models {
class ApplicationVersion;
}
namespace Oculus::Platform::Models {
class CalApplicationFinalized;
}
namespace Oculus::Platform::Models {
class LaunchReportFlowResult;
}
namespace Oculus::Platform::Models {
class NetSyncConnection;
}
namespace Oculus::Platform::Models {
class CloudStorageData;
}
namespace Oculus::Platform::Models {
class AchievementProgressList;
}
namespace Oculus::Platform::Models {
class AssetFileDownloadResult;
}
namespace Oculus::Platform::Models {
class PartyUpdateNotification;
}
namespace Oculus::Platform::Models {
class LaunchBlockFlowResult;
}
namespace Oculus::Platform::Models {
class ProductList;
}
namespace Oculus::Platform::Models {
class Room;
}
namespace Oculus::Platform::Models {
class LaunchInvitePanelFlowResult;
}
namespace Oculus::Platform::Models {
class Challenge;
}
namespace Oculus::Platform::Models {
class NetSyncSetSessionPropertyResult;
}
namespace Oculus::Platform::Models {
class NetSyncVoipAttenuationValueList;
}
namespace Oculus::Platform::Models {
class GroupPresenceLeaveIntent;
}
namespace Oculus::Platform::Models {
class DestinationList;
}
namespace Oculus::Platform::Models {
class LivestreamingApplicationStatus;
}
namespace Oculus::Platform::Models {
class MatchmakingEnqueueResultAndRoom;
}
namespace Oculus::Platform::Models {
class PurchaseList;
}
namespace Oculus::Platform::Models {
class UserProof;
}
namespace Oculus::Platform::Models {
class Purchase;
}
namespace Oculus::Platform::Models {
class PidList;
}
namespace Oculus::Platform::Models {
class ChallengeEntryList;
}
namespace Oculus::Platform::Models {
class LivestreamingStatus;
}
namespace Oculus::Platform::Models {
class CloudStorageConflictMetadata;
}
namespace Oculus::Platform::Models {
class AbuseReportRecording;
}
namespace Oculus::Platform::Models {
class UserAndRoomList;
}
namespace Oculus::Platform::Models {
class MicrophoneAvailabilityState;
}
namespace Oculus::Platform::Models {
class LeaderboardList;
}
namespace Oculus::Platform::Models {
class RoomList;
}
namespace Oculus::Platform::Models {
class HttpTransferUpdate;
}
namespace Oculus::Platform::Models {
class ChallengeList;
}
namespace Oculus::Platform::Models {
class Error;
}
namespace Oculus::Platform::Models {
class SdkAccountList;
}
namespace Oculus::Platform::Models {
class CalApplicationProposed;
}
namespace Oculus::Platform::Models {
class UserReportID;
}
namespace Oculus::Platform::Models {
class CloudStorageMetadataList;
}
namespace Oculus::Platform::Models {
class LaunchUnblockFlowResult;
}
namespace Oculus::Platform::Models {
class MatchmakingBrowseResult;
}
namespace Oculus::Platform::Models {
class SendInvitesResult;
}
namespace Oculus::Platform::Models {
class RoomInviteNotification;
}
namespace Oculus::Platform::Models {
class User;
}
namespace Oculus::Platform::Models {
class CloudStorageUpdateResponse;
}
namespace Oculus::Platform::Models {
class GroupPresenceJoinIntent;
}
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace Oculus::Platform {
struct ____Oculus__Platform__Message__MessageType;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class ____Oculus__Platform__Message__Callback;
}
namespace Oculus::Platform {
class ____Oculus__Platform__Message__ExtraMessageTypesHandler;
}
// Type: ::Callback
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13204))
// CS Name: Oculus.Platform.Message::Callback
class CORDL_TYPE ____Oculus__Platform__Message__Callback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____Oculus__Platform__Message__Callback() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__Message__Callback", modifiers: " const&", def_value: None }]
constexpr ____Oculus__Platform__Message__Callback(____Oculus__Platform__Message__Callback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__Message__Callback", modifiers: "&&", def_value: None }]
constexpr ____Oculus__Platform__Message__Callback(____Oculus__Platform__Message__Callback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Oculus__Platform__Message__Callback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____Oculus__Platform__Message__Callback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Oculus__Platform__Message__Callback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Oculus__Platform__Message__Callback& operator=(____Oculus__Platform__Message__Callback&& o) noexcept = default;
  constexpr ____Oculus__Platform__Message__Callback& operator=(____Oculus__Platform__Message__Callback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____Oculus__Platform__Message__Callback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x257f7fc size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x257f928 size 0x14 virtual true final false
 void Invoke(::Oculus::Platform::Message message) ;

/// @brief Method BeginInvoke addr 0x257f93c size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::Oculus::Platform::Message message, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x257f95c size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::MessageType
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13205))
// CS Name: Oculus.Platform.Message::MessageType
struct CORDL_TYPE ____Oculus__Platform__Message__MessageType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr ____Oculus__Platform__Message__MessageType(uint32_t value__) noexcept;


                    constexpr ____Oculus__Platform__Message__MessageType(____Oculus__Platform__Message__MessageType const&) = default;
                    constexpr ____Oculus__Platform__Message__MessageType(____Oculus__Platform__Message__MessageType&&) = default;
                    constexpr ____Oculus__Platform__Message__MessageType& operator=(____Oculus__Platform__Message__MessageType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____Oculus__Platform__Message__MessageType& operator=(____Oculus__Platform__Message__MessageType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____Oculus__Platform__Message__MessageType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class ______Oculus__Platform__Message__MessageType_Unwrapped : uint32_t {
__Unknown = 0u,
__AbuseReport_ReportRequestHandled = 1267661958u,
__Achievements_AddCount = 65495601u,
__Achievements_AddFields = 346693929u,
__Achievements_GetAllDefinitions = 64177549u,
__Achievements_GetAllProgress = 1335877149u,
__Achievements_GetDefinitionsByName = 1653670332u,
__Achievements_GetNextAchievementDefinitionArrayPage = 712888917u,
__Achievements_GetNextAchievementProgressArrayPage = 792913703u,
__Achievements_GetProgressByName = 354837425u,
__Achievements_Unlock = 1497156573u,
__ApplicationLifecycle_GetRegisteredPIDs = 82169698u,
__ApplicationLifecycle_GetSessionKey = 984570141u,
__ApplicationLifecycle_RegisterSessionKey = 1303818232u,
__Application_GetVersion = 1751583246u,
__Application_LaunchOtherApp = 1424151032u,
__AssetFile_Delete = 1834842246u,
__AssetFile_DeleteById = 1525206354u,
__AssetFile_DeleteByName = 1108001231u,
__AssetFile_Download = 289710021u,
__AssetFile_DownloadById = 755009938u,
__AssetFile_DownloadByName = 1664536314u,
__AssetFile_DownloadCancel = 134927303u,
__AssetFile_DownloadCancelById = 1365611796u,
__AssetFile_DownloadCancelByName = 1147858170u,
__AssetFile_GetList = 1258057588u,
__AssetFile_Status = 47394656u,
__AssetFile_StatusById = 1570069816u,
__AssetFile_StatusByName = 1104140880u,
__Avatar_LaunchAvatarEditor = 99737939u,
__Challenges_Create = 1750718017u,
__Challenges_DeclineInvite = 1452177088u,
__Challenges_Delete = 642287050u,
__Challenges_Get = 2002276083u,
__Challenges_GetEntries = 303739999u,
__Challenges_GetEntriesAfterRank = 143202943u,
__Challenges_GetEntriesByIds = 828705244u,
__Challenges_GetList = 1126581078u,
__Challenges_GetNextChallenges = 1534894518u,
__Challenges_GetNextEntries = 2135728326u,
__Challenges_GetPreviousChallenges = 246678541u,
__Challenges_GetPreviousEntries = 2026439792u,
__Challenges_Join = 556040297u,
__Challenges_Leave = 694228709u,
__Challenges_UpdateInfo = 292929120u,
__CloudStorage2_GetUserDirectoryPath = 1990471406u,
__CloudStorage_Delete = 685393261u,
__CloudStorage_GetNextCloudStorageMetadataArrayPage = 1544004335u,
__CloudStorage_Load = 1082420033u,
__CloudStorage_LoadBucketMetadata = 1931977997u,
__CloudStorage_LoadConflictMetadata = 1146770162u,
__CloudStorage_LoadHandle = 845863478u,
__CloudStorage_LoadMetadata = 65446546u,
__CloudStorage_ResolveKeepLocal = 811109637u,
__CloudStorage_ResolveKeepRemote = 1965400838u,
__CloudStorage_Save = 1270570030u,
__Entitlement_GetIsViewerEntitled = 409688241u,
__GroupPresence_Clear = 1839897795u,
__GroupPresence_GetInvitableUsers = 592167921u,
__GroupPresence_GetNextApplicationInviteArrayPage = 83411186u,
__GroupPresence_GetSentInvites = 136710833u,
__GroupPresence_LaunchInvitePanel = 262066079u,
__GroupPresence_LaunchMultiplayerErrorDialog = 693481252u,
__GroupPresence_LaunchRejoinDialog = 360121199u,
__GroupPresence_LaunchRosterPanel = 896698498u,
__GroupPresence_SendInvites = 231461732u,
__GroupPresence_Set = 1734302756u,
__GroupPresence_SetDeeplinkMessageOverride = 1377492749u,
__GroupPresence_SetDestination = 1281042058u,
__GroupPresence_SetIsJoinable = 714018901u,
__GroupPresence_SetLobbySession = 1224693182u,
__GroupPresence_SetMatchSession = 827098296u,
__IAP_ConsumePurchase = 532378329u,
__IAP_GetNextProductArrayPage = 467225263u,
__IAP_GetNextPurchaseArrayPage = 1196886677u,
__IAP_GetProductsBySKU = 2124073717u,
__IAP_GetViewerPurchases = 974095385u,
__IAP_GetViewerPurchasesDurableCache = 1666817579u,
__IAP_LaunchCheckoutFlow = 1067126029u,
__LanguagePack_GetCurrent = 529592533u,
__LanguagePack_SetCurrent = 1531952096u,
__Leaderboard_Get = 1792298744u,
__Leaderboard_GetEntries = 1572030284u,
__Leaderboard_GetEntriesAfterRank = 406293487u,
__Leaderboard_GetEntriesByIds = 962624508u,
__Leaderboard_GetNextEntries = 1310751961u,
__Leaderboard_GetNextLeaderboardArrayPage = 905344667u,
__Leaderboard_GetPreviousEntries = 1224858304u,
__Leaderboard_WriteEntry = 293587198u,
__Leaderboard_WriteEntryWithSupplementaryMetric = 1925616378u,
__Matchmaking_Browse = 509948616u,
__Matchmaking_Browse2 = 1715641947u,
__Matchmaking_Cancel = 543705519u,
__Matchmaking_Cancel2 = 285117908u,
__Matchmaking_CreateAndEnqueueRoom = 1615617480u,
__Matchmaking_CreateAndEnqueueRoom2 = 693889755u,
__Matchmaking_CreateRoom = 54203178u,
__Matchmaking_CreateRoom2 = 1231922052u,
__Matchmaking_Enqueue = 1086418033u,
__Matchmaking_Enqueue2 = 303174325u,
__Matchmaking_EnqueueRoom = 1888108644u,
__Matchmaking_EnqueueRoom2 = 1428741028u,
__Matchmaking_GetAdminSnapshot = 1008820116u,
__Matchmaking_GetStats = 1123849272u,
__Matchmaking_JoinRoom = 1295177725u,
__Matchmaking_ReportResultInsecure = 439800205u,
__Matchmaking_StartMatch = 1154746693u,
__Media_ShareToFacebook = 14912239u,
__Notification_GetNextRoomInviteNotificationArrayPage = 102890359u,
__Notification_GetRoomInvites = 1871801234u,
__Notification_MarkAsRead = 1903319523u,
__Party_GetCurrent = 1200830304u,
__RichPresence_Clear = 1471632051u,
__RichPresence_GetDestinations = 1483681044u,
__RichPresence_GetNextDestinationArrayPage = 1731624773u,
__RichPresence_Set = 1007973641u,
__Room_CreateAndJoinPrivate = 1977017207u,
__Room_CreateAndJoinPrivate2 = 1513775683u,
__Room_Get = 1704628152u,
__Room_GetCurrent = 161916164u,
__Room_GetCurrentForUser = 234887141u,
__Room_GetInvitableUsers = 506615698u,
__Room_GetInvitableUsers2 = 1330899120u,
__Room_GetModeratedRooms = 159645047u,
__Room_GetNextRoomArrayPage = 1317239238u,
__Room_InviteUser = 1093266451u,
__Room_Join = 382373641u,
__Room_Join2 = 1303059522u,
__Room_KickUser = 1233344310u,
__Room_LaunchInvitableUserFlow = 843047539u,
__Room_Leave = 1916281973u,
__Room_SetDescription = 809796911u,
__Room_UpdateDataStore = 40779816u,
__Room_UpdateMembershipLockStatus = 923514796u,
__Room_UpdateOwner = 850803997u,
__Room_UpdatePrivateRoomJoinPolicy = 289473179u,
__UserDataStore_PrivateDeleteEntryByKey = 1552510782u,
__UserDataStore_PrivateGetEntries = 1821016616u,
__UserDataStore_PrivateGetEntryByKey = 470188825u,
__UserDataStore_PrivateWriteEntry = 1104315019u,
__UserDataStore_PublicDeleteEntryByKey = 500557307u,
__UserDataStore_PublicGetEntries = 377310146u,
__UserDataStore_PublicGetEntryByKey = 425486022u,
__UserDataStore_PublicWriteEntry = 875973130u,
__User_Get = 1808768583u,
__User_GetAccessToken = 111696574u,
__User_GetBlockedUsers = 2099254614u,
__User_GetLoggedInUser = 1131361373u,
__User_GetLoggedInUserFriends = 1484532365u,
__User_GetLoggedInUserFriendsAndRooms = 1585908615u,
__User_GetLoggedInUserRecentlyMetUsersAndRooms = 694139440u,
__User_GetNextBlockedUserArrayPage = 2083192267u,
__User_GetNextUserAndRoomArrayPage = 2143146719u,
__User_GetNextUserArrayPage = 645723971u,
__User_GetNextUserCapabilityArrayPage = 587854745u,
__User_GetOrgScopedID = 418426907u,
__User_GetSdkAccounts = 1733454467u,
__User_GetUserProof = 578880643u,
__User_LaunchBlockFlow = 1876305192u,
__User_LaunchFriendRequestFlow = 151303576u,
__User_LaunchUnblockFlow = 346172055u,
__Voip_GetMicrophoneAvailability = 1951195973u,
__Voip_SetSystemVoipSuppressed = 1161808298u,
__Notification_AbuseReport_ReportButtonPressed = 608644972u,
__Notification_ApplicationLifecycle_LaunchIntentChanged = 78859427u,
__Notification_AssetFile_DownloadUpdate = 803015885u,
__Notification_Cal_FinalizeApplication = 1963741337u,
__Notification_Cal_ProposeApplication = 779375093u,
__Notification_GroupPresence_InvitationsSent = 1738179766u,
__Notification_GroupPresence_JoinIntentReceived = 2000194038u,
__Notification_GroupPresence_LeaveIntentReceived = 1194846749u,
__Notification_HTTP_Transfer = 2111073839u,
__Notification_Livestreaming_StatusChange = 575101294u,
__Notification_Matchmaking_MatchFound = 197393623u,
__Notification_NetSync_ConnectionStatusChanged = 120882378u,
__Notification_NetSync_SessionsChanged = 947814198u,
__Notification_Networking_ConnectionStateChange = 1577243802u,
__Notification_Networking_PeerConnectRequest = 1295114959u,
__Notification_Networking_PingResult = 1360343058u,
__Notification_Party_PartyUpdate = 487688882u,
__Notification_Room_InviteAccepted = 1829794225u,
__Notification_Room_InviteReceived = 1783209300u,
__Notification_Room_RoomUpdate = 1626094639u,
__Notification_Session_InvitationsSent = 133810304u,
__Notification_Voip_ConnectRequest = 908343318u,
__Notification_Voip_MicrophoneAvailabilityStateUpdate = 1042336599u,
__Notification_Voip_StateChange = 888120928u,
__Notification_Voip_SystemVoipState = 1490179237u,
__Notification_Vrcamera_GetDataChannelMessageUpdate = 1860498236u,
__Notification_Vrcamera_GetSurfaceUpdate = 938610820u,
__Platform_InitializeWithAccessToken = 896085803u,
__Platform_InitializeStandaloneOculus = 1375260172u,
__Platform_InitializeAndroidAsynchronous = 450037684u,
__Platform_InitializeWindowsAsynchronous = 1839708815u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator ______Oculus__Platform__Message__MessageType_Unwrapped () const noexcept {
return std::bit_cast<______Oculus__Platform__Message__MessageType_Unwrapped>(__instance);
}


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field Unknown offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Unknown;

/// @brief Field AbuseReport_ReportRequestHandled offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AbuseReport_ReportRequestHandled;

/// @brief Field Achievements_AddCount offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Achievements_AddCount;

/// @brief Field Achievements_AddFields offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Achievements_AddFields;

/// @brief Field Achievements_GetAllDefinitions offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Achievements_GetAllDefinitions;

/// @brief Field Achievements_GetAllProgress offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Achievements_GetAllProgress;

/// @brief Field Achievements_GetDefinitionsByName offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Achievements_GetDefinitionsByName;

/// @brief Field Achievements_GetNextAchievementDefinitionArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Achievements_GetNextAchievementDefinitionArrayPage;

/// @brief Field Achievements_GetNextAchievementProgressArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Achievements_GetNextAchievementProgressArrayPage;

/// @brief Field Achievements_GetProgressByName offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Achievements_GetProgressByName;

/// @brief Field Achievements_Unlock offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Achievements_Unlock;

/// @brief Field ApplicationLifecycle_GetRegisteredPIDs offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const ApplicationLifecycle_GetRegisteredPIDs;

/// @brief Field ApplicationLifecycle_GetSessionKey offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const ApplicationLifecycle_GetSessionKey;

/// @brief Field ApplicationLifecycle_RegisterSessionKey offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const ApplicationLifecycle_RegisterSessionKey;

/// @brief Field Application_GetVersion offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Application_GetVersion;

/// @brief Field Application_LaunchOtherApp offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Application_LaunchOtherApp;

/// @brief Field AssetFile_Delete offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AssetFile_Delete;

/// @brief Field AssetFile_DeleteById offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AssetFile_DeleteById;

/// @brief Field AssetFile_DeleteByName offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AssetFile_DeleteByName;

/// @brief Field AssetFile_Download offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AssetFile_Download;

/// @brief Field AssetFile_DownloadById offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AssetFile_DownloadById;

/// @brief Field AssetFile_DownloadByName offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AssetFile_DownloadByName;

/// @brief Field AssetFile_DownloadCancel offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AssetFile_DownloadCancel;

/// @brief Field AssetFile_DownloadCancelById offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AssetFile_DownloadCancelById;

/// @brief Field AssetFile_DownloadCancelByName offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AssetFile_DownloadCancelByName;

/// @brief Field AssetFile_GetList offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AssetFile_GetList;

/// @brief Field AssetFile_Status offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AssetFile_Status;

/// @brief Field AssetFile_StatusById offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AssetFile_StatusById;

/// @brief Field AssetFile_StatusByName offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const AssetFile_StatusByName;

/// @brief Field Avatar_LaunchAvatarEditor offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Avatar_LaunchAvatarEditor;

/// @brief Field Challenges_Create offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_Create;

/// @brief Field Challenges_DeclineInvite offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_DeclineInvite;

/// @brief Field Challenges_Delete offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_Delete;

/// @brief Field Challenges_Get offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_Get;

/// @brief Field Challenges_GetEntries offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_GetEntries;

/// @brief Field Challenges_GetEntriesAfterRank offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_GetEntriesAfterRank;

/// @brief Field Challenges_GetEntriesByIds offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_GetEntriesByIds;

/// @brief Field Challenges_GetList offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_GetList;

/// @brief Field Challenges_GetNextChallenges offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_GetNextChallenges;

/// @brief Field Challenges_GetNextEntries offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_GetNextEntries;

/// @brief Field Challenges_GetPreviousChallenges offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_GetPreviousChallenges;

/// @brief Field Challenges_GetPreviousEntries offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_GetPreviousEntries;

/// @brief Field Challenges_Join offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_Join;

/// @brief Field Challenges_Leave offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_Leave;

/// @brief Field Challenges_UpdateInfo offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Challenges_UpdateInfo;

/// @brief Field CloudStorage2_GetUserDirectoryPath offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const CloudStorage2_GetUserDirectoryPath;

/// @brief Field CloudStorage_Delete offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const CloudStorage_Delete;

/// @brief Field CloudStorage_GetNextCloudStorageMetadataArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const CloudStorage_GetNextCloudStorageMetadataArrayPage;

/// @brief Field CloudStorage_Load offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const CloudStorage_Load;

/// @brief Field CloudStorage_LoadBucketMetadata offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const CloudStorage_LoadBucketMetadata;

/// @brief Field CloudStorage_LoadConflictMetadata offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const CloudStorage_LoadConflictMetadata;

/// @brief Field CloudStorage_LoadHandle offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const CloudStorage_LoadHandle;

/// @brief Field CloudStorage_LoadMetadata offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const CloudStorage_LoadMetadata;

/// @brief Field CloudStorage_ResolveKeepLocal offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const CloudStorage_ResolveKeepLocal;

/// @brief Field CloudStorage_ResolveKeepRemote offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const CloudStorage_ResolveKeepRemote;

/// @brief Field CloudStorage_Save offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const CloudStorage_Save;

/// @brief Field Entitlement_GetIsViewerEntitled offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Entitlement_GetIsViewerEntitled;

/// @brief Field GroupPresence_Clear offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_Clear;

/// @brief Field GroupPresence_GetInvitableUsers offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_GetInvitableUsers;

/// @brief Field GroupPresence_GetNextApplicationInviteArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_GetNextApplicationInviteArrayPage;

/// @brief Field GroupPresence_GetSentInvites offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_GetSentInvites;

/// @brief Field GroupPresence_LaunchInvitePanel offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_LaunchInvitePanel;

/// @brief Field GroupPresence_LaunchMultiplayerErrorDialog offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_LaunchMultiplayerErrorDialog;

/// @brief Field GroupPresence_LaunchRejoinDialog offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_LaunchRejoinDialog;

/// @brief Field GroupPresence_LaunchRosterPanel offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_LaunchRosterPanel;

/// @brief Field GroupPresence_SendInvites offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_SendInvites;

/// @brief Field GroupPresence_Set offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_Set;

/// @brief Field GroupPresence_SetDeeplinkMessageOverride offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_SetDeeplinkMessageOverride;

/// @brief Field GroupPresence_SetDestination offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_SetDestination;

/// @brief Field GroupPresence_SetIsJoinable offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_SetIsJoinable;

/// @brief Field GroupPresence_SetLobbySession offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_SetLobbySession;

/// @brief Field GroupPresence_SetMatchSession offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const GroupPresence_SetMatchSession;

/// @brief Field IAP_ConsumePurchase offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const IAP_ConsumePurchase;

/// @brief Field IAP_GetNextProductArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const IAP_GetNextProductArrayPage;

/// @brief Field IAP_GetNextPurchaseArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const IAP_GetNextPurchaseArrayPage;

/// @brief Field IAP_GetProductsBySKU offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const IAP_GetProductsBySKU;

/// @brief Field IAP_GetViewerPurchases offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const IAP_GetViewerPurchases;

/// @brief Field IAP_GetViewerPurchasesDurableCache offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const IAP_GetViewerPurchasesDurableCache;

/// @brief Field IAP_LaunchCheckoutFlow offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const IAP_LaunchCheckoutFlow;

/// @brief Field LanguagePack_GetCurrent offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const LanguagePack_GetCurrent;

/// @brief Field LanguagePack_SetCurrent offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const LanguagePack_SetCurrent;

/// @brief Field Leaderboard_Get offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Leaderboard_Get;

/// @brief Field Leaderboard_GetEntries offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Leaderboard_GetEntries;

/// @brief Field Leaderboard_GetEntriesAfterRank offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Leaderboard_GetEntriesAfterRank;

/// @brief Field Leaderboard_GetEntriesByIds offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Leaderboard_GetEntriesByIds;

/// @brief Field Leaderboard_GetNextEntries offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Leaderboard_GetNextEntries;

/// @brief Field Leaderboard_GetNextLeaderboardArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Leaderboard_GetNextLeaderboardArrayPage;

/// @brief Field Leaderboard_GetPreviousEntries offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Leaderboard_GetPreviousEntries;

/// @brief Field Leaderboard_WriteEntry offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Leaderboard_WriteEntry;

/// @brief Field Leaderboard_WriteEntryWithSupplementaryMetric offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Leaderboard_WriteEntryWithSupplementaryMetric;

/// @brief Field Matchmaking_Browse offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_Browse;

/// @brief Field Matchmaking_Browse2 offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_Browse2;

/// @brief Field Matchmaking_Cancel offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_Cancel;

/// @brief Field Matchmaking_Cancel2 offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_Cancel2;

/// @brief Field Matchmaking_CreateAndEnqueueRoom offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_CreateAndEnqueueRoom;

/// @brief Field Matchmaking_CreateAndEnqueueRoom2 offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_CreateAndEnqueueRoom2;

/// @brief Field Matchmaking_CreateRoom offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_CreateRoom;

/// @brief Field Matchmaking_CreateRoom2 offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_CreateRoom2;

/// @brief Field Matchmaking_Enqueue offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_Enqueue;

/// @brief Field Matchmaking_Enqueue2 offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_Enqueue2;

/// @brief Field Matchmaking_EnqueueRoom offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_EnqueueRoom;

/// @brief Field Matchmaking_EnqueueRoom2 offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_EnqueueRoom2;

/// @brief Field Matchmaking_GetAdminSnapshot offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_GetAdminSnapshot;

/// @brief Field Matchmaking_GetStats offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_GetStats;

/// @brief Field Matchmaking_JoinRoom offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_JoinRoom;

/// @brief Field Matchmaking_ReportResultInsecure offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_ReportResultInsecure;

/// @brief Field Matchmaking_StartMatch offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Matchmaking_StartMatch;

/// @brief Field Media_ShareToFacebook offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Media_ShareToFacebook;

/// @brief Field Notification_GetNextRoomInviteNotificationArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_GetNextRoomInviteNotificationArrayPage;

/// @brief Field Notification_GetRoomInvites offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_GetRoomInvites;

/// @brief Field Notification_MarkAsRead offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_MarkAsRead;

/// @brief Field Party_GetCurrent offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Party_GetCurrent;

/// @brief Field RichPresence_Clear offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const RichPresence_Clear;

/// @brief Field RichPresence_GetDestinations offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const RichPresence_GetDestinations;

/// @brief Field RichPresence_GetNextDestinationArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const RichPresence_GetNextDestinationArrayPage;

/// @brief Field RichPresence_Set offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const RichPresence_Set;

/// @brief Field Room_CreateAndJoinPrivate offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_CreateAndJoinPrivate;

/// @brief Field Room_CreateAndJoinPrivate2 offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_CreateAndJoinPrivate2;

/// @brief Field Room_Get offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_Get;

/// @brief Field Room_GetCurrent offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_GetCurrent;

/// @brief Field Room_GetCurrentForUser offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_GetCurrentForUser;

/// @brief Field Room_GetInvitableUsers offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_GetInvitableUsers;

/// @brief Field Room_GetInvitableUsers2 offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_GetInvitableUsers2;

/// @brief Field Room_GetModeratedRooms offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_GetModeratedRooms;

/// @brief Field Room_GetNextRoomArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_GetNextRoomArrayPage;

/// @brief Field Room_InviteUser offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_InviteUser;

/// @brief Field Room_Join offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_Join;

/// @brief Field Room_Join2 offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_Join2;

/// @brief Field Room_KickUser offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_KickUser;

/// @brief Field Room_LaunchInvitableUserFlow offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_LaunchInvitableUserFlow;

/// @brief Field Room_Leave offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_Leave;

/// @brief Field Room_SetDescription offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_SetDescription;

/// @brief Field Room_UpdateDataStore offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_UpdateDataStore;

/// @brief Field Room_UpdateMembershipLockStatus offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_UpdateMembershipLockStatus;

/// @brief Field Room_UpdateOwner offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_UpdateOwner;

/// @brief Field Room_UpdatePrivateRoomJoinPolicy offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Room_UpdatePrivateRoomJoinPolicy;

/// @brief Field UserDataStore_PrivateDeleteEntryByKey offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const UserDataStore_PrivateDeleteEntryByKey;

/// @brief Field UserDataStore_PrivateGetEntries offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const UserDataStore_PrivateGetEntries;

/// @brief Field UserDataStore_PrivateGetEntryByKey offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const UserDataStore_PrivateGetEntryByKey;

/// @brief Field UserDataStore_PrivateWriteEntry offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const UserDataStore_PrivateWriteEntry;

/// @brief Field UserDataStore_PublicDeleteEntryByKey offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const UserDataStore_PublicDeleteEntryByKey;

/// @brief Field UserDataStore_PublicGetEntries offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const UserDataStore_PublicGetEntries;

/// @brief Field UserDataStore_PublicGetEntryByKey offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const UserDataStore_PublicGetEntryByKey;

/// @brief Field UserDataStore_PublicWriteEntry offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const UserDataStore_PublicWriteEntry;

/// @brief Field User_Get offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_Get;

/// @brief Field User_GetAccessToken offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_GetAccessToken;

/// @brief Field User_GetBlockedUsers offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_GetBlockedUsers;

/// @brief Field User_GetLoggedInUser offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_GetLoggedInUser;

/// @brief Field User_GetLoggedInUserFriends offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_GetLoggedInUserFriends;

/// @brief Field User_GetLoggedInUserFriendsAndRooms offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_GetLoggedInUserFriendsAndRooms;

/// @brief Field User_GetLoggedInUserRecentlyMetUsersAndRooms offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_GetLoggedInUserRecentlyMetUsersAndRooms;

/// @brief Field User_GetNextBlockedUserArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_GetNextBlockedUserArrayPage;

/// @brief Field User_GetNextUserAndRoomArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_GetNextUserAndRoomArrayPage;

/// @brief Field User_GetNextUserArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_GetNextUserArrayPage;

/// @brief Field User_GetNextUserCapabilityArrayPage offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_GetNextUserCapabilityArrayPage;

/// @brief Field User_GetOrgScopedID offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_GetOrgScopedID;

/// @brief Field User_GetSdkAccounts offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_GetSdkAccounts;

/// @brief Field User_GetUserProof offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_GetUserProof;

/// @brief Field User_LaunchBlockFlow offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_LaunchBlockFlow;

/// @brief Field User_LaunchFriendRequestFlow offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_LaunchFriendRequestFlow;

/// @brief Field User_LaunchUnblockFlow offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const User_LaunchUnblockFlow;

/// @brief Field Voip_GetMicrophoneAvailability offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Voip_GetMicrophoneAvailability;

/// @brief Field Voip_SetSystemVoipSuppressed offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Voip_SetSystemVoipSuppressed;

/// @brief Field Notification_AbuseReport_ReportButtonPressed offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_AbuseReport_ReportButtonPressed;

/// @brief Field Notification_ApplicationLifecycle_LaunchIntentChanged offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_ApplicationLifecycle_LaunchIntentChanged;

/// @brief Field Notification_AssetFile_DownloadUpdate offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_AssetFile_DownloadUpdate;

/// @brief Field Notification_Cal_FinalizeApplication offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Cal_FinalizeApplication;

/// @brief Field Notification_Cal_ProposeApplication offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Cal_ProposeApplication;

/// @brief Field Notification_GroupPresence_InvitationsSent offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_GroupPresence_InvitationsSent;

/// @brief Field Notification_GroupPresence_JoinIntentReceived offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_GroupPresence_JoinIntentReceived;

/// @brief Field Notification_GroupPresence_LeaveIntentReceived offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_GroupPresence_LeaveIntentReceived;

/// @brief Field Notification_HTTP_Transfer offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_HTTP_Transfer;

/// @brief Field Notification_Livestreaming_StatusChange offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Livestreaming_StatusChange;

/// @brief Field Notification_Matchmaking_MatchFound offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Matchmaking_MatchFound;

/// @brief Field Notification_NetSync_ConnectionStatusChanged offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_NetSync_ConnectionStatusChanged;

/// @brief Field Notification_NetSync_SessionsChanged offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_NetSync_SessionsChanged;

/// @brief Field Notification_Networking_ConnectionStateChange offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Networking_ConnectionStateChange;

/// @brief Field Notification_Networking_PeerConnectRequest offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Networking_PeerConnectRequest;

/// @brief Field Notification_Networking_PingResult offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Networking_PingResult;

/// @brief Field Notification_Party_PartyUpdate offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Party_PartyUpdate;

/// @brief Field Notification_Room_InviteAccepted offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Room_InviteAccepted;

/// @brief Field Notification_Room_InviteReceived offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Room_InviteReceived;

/// @brief Field Notification_Room_RoomUpdate offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Room_RoomUpdate;

/// @brief Field Notification_Session_InvitationsSent offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Session_InvitationsSent;

/// @brief Field Notification_Voip_ConnectRequest offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Voip_ConnectRequest;

/// @brief Field Notification_Voip_MicrophoneAvailabilityStateUpdate offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Voip_MicrophoneAvailabilityStateUpdate;

/// @brief Field Notification_Voip_StateChange offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Voip_StateChange;

/// @brief Field Notification_Voip_SystemVoipState offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Voip_SystemVoipState;

/// @brief Field Notification_Vrcamera_GetDataChannelMessageUpdate offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Vrcamera_GetDataChannelMessageUpdate;

/// @brief Field Notification_Vrcamera_GetSurfaceUpdate offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Notification_Vrcamera_GetSurfaceUpdate;

/// @brief Field Platform_InitializeWithAccessToken offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Platform_InitializeWithAccessToken;

/// @brief Field Platform_InitializeStandaloneOculus offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Platform_InitializeStandaloneOculus;

/// @brief Field Platform_InitializeAndroidAsynchronous offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Platform_InitializeAndroidAsynchronous;

/// @brief Field Platform_InitializeWindowsAsynchronous offset 0
static ::Oculus::Platform::____Oculus__Platform__Message__MessageType const Platform_InitializeWindowsAsynchronous;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::ExtraMessageTypesHandler
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13206))
// CS Name: Oculus.Platform.Message::ExtraMessageTypesHandler
class CORDL_TYPE ____Oculus__Platform__Message__ExtraMessageTypesHandler : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~____Oculus__Platform__Message__ExtraMessageTypesHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__Message__ExtraMessageTypesHandler", modifiers: " const&", def_value: None }]
constexpr ____Oculus__Platform__Message__ExtraMessageTypesHandler(____Oculus__Platform__Message__ExtraMessageTypesHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____Oculus__Platform__Message__ExtraMessageTypesHandler", modifiers: "&&", def_value: None }]
constexpr ____Oculus__Platform__Message__ExtraMessageTypesHandler(____Oculus__Platform__Message__ExtraMessageTypesHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____Oculus__Platform__Message__ExtraMessageTypesHandler(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr ____Oculus__Platform__Message__ExtraMessageTypesHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____Oculus__Platform__Message__ExtraMessageTypesHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____Oculus__Platform__Message__ExtraMessageTypesHandler& operator=(____Oculus__Platform__Message__ExtraMessageTypesHandler&& o) noexcept = default;
  constexpr ____Oculus__Platform__Message__ExtraMessageTypesHandler& operator=(____Oculus__Platform__Message__ExtraMessageTypesHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ____Oculus__Platform__Message__ExtraMessageTypesHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x257f968 size 0xc4 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x257fa2c size 0x14 virtual true final false
 ::Oculus::Platform::Message Invoke(::cordl_internals::intptr_t messageHandle, ::Oculus::Platform::____Oculus__Platform__Message__MessageType message_type) ;

/// @brief Method BeginInvoke addr 0x257fa40 size 0xb4 virtual true final false
 ::System::IAsyncResult BeginInvoke(::cordl_internals::intptr_t messageHandle, ::Oculus::Platform::____Oculus__Platform__Message__MessageType message_type, ::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x257faf4 size 0xc virtual true final false
 ::Oculus::Platform::Message EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::Message
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13207))
// CS Name: Oculus.Platform.Message
class CORDL_TYPE Message : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ExtraMessageTypesHandler = ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler;

using MessageType = ::Oculus::Platform::____Oculus__Platform__Message__MessageType;

using Callback = ::Oculus::Platform::____Oculus__Platform__Message__Callback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~Message() = default;

// Ctor Parameters [CppParam { name: "", ty: "Message", modifiers: " const&", def_value: None }]
constexpr Message(Message const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Message", modifiers: "&&", def_value: None }]
constexpr Message(Message&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Message(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Message& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Message& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Message& operator=(Message&& o) noexcept = default;
  constexpr Message& operator=(Message const& o) noexcept = default;
                


// Fields

 ::Oculus::Platform::____Oculus__Platform__Message__MessageType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::Oculus::Platform::____Oculus__Platform__Message__MessageType value) ;

constexpr ::Oculus::Platform::____Oculus__Platform__Message__MessageType __get_type() const;

 uint64_t __declspec(property(get=__get_requestID, put=__set_requestID))  requestID;

constexpr void __set_requestID(uint64_t value) ;

constexpr uint64_t __get_requestID() const;

 ::Oculus::Platform::Models::Error __declspec(property(get=__get_error, put=__set_error))  error;

constexpr void __set_error(::Oculus::Platform::Models::Error value) ;

constexpr ::Oculus::Platform::Models::Error __get_error() const;

static ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler __declspec(property(get=__get__HandleExtraMessageTypes_k__BackingField, put=__set__HandleExtraMessageTypes_k__BackingField))  _HandleExtraMessageTypes_k__BackingField;

static void __set__HandleExtraMessageTypes_k__BackingField(::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler value) ;

static ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler __get__HandleExtraMessageTypes_k__BackingField() ;


// Properties

 ::Oculus::Platform::____Oculus__Platform__Message__MessageType __declspec(property(get=get_Type))  Type;

 bool __declspec(property(get=get_IsError))  IsError;

 uint64_t __declspec(property(get=get_RequestID))  RequestID;

static ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler __declspec(property(get=get_HandleExtraMessageTypes, put=set_HandleExtraMessageTypes))  HandleExtraMessageTypes;


// Methods

// Ctor Parameters [CppParam { name: "c_message", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Message(::cordl_internals::intptr_t c_message) ;

/// @brief Method .ctor addr 0x257b7b8 size 0x2b0 virtual false final false
 void _ctor(::cordl_internals::intptr_t c_message) ;

/// @brief Method Finalize addr 0x257ba68 size 0x8 virtual true final false
 void Finalize() ;

/// @brief Method get_Type addr 0x257ba70 size 0x8 virtual false final false
 ::Oculus::Platform::____Oculus__Platform__Message__MessageType get_Type() ;

/// @brief Method get_IsError addr 0x257ba78 size 0x10 virtual false final false
 bool get_IsError() ;

/// @brief Method get_RequestID addr 0x257ba88 size 0x8 virtual false final false
 uint64_t get_RequestID() ;

/// @brief Method GetError addr 0x257ba90 size 0x8 virtual true final false
 ::Oculus::Platform::Models::Error GetError() ;

/// @brief Method GetPingResult addr 0x257ba98 size 0x8 virtual true final false
 ::Oculus::Platform::Models::PingResult GetPingResult() ;

/// @brief Method GetNetworkingPeer addr 0x257baa0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::NetworkingPeer GetNetworkingPeer() ;

/// @brief Method GetHttpTransferUpdate addr 0x257baa8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::HttpTransferUpdate GetHttpTransferUpdate() ;

/// @brief Method GetPlatformInitialize addr 0x257bab0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::PlatformInitialize GetPlatformInitialize() ;

/// @brief Method GetAbuseReportRecording addr 0x257bab8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::AbuseReportRecording GetAbuseReportRecording() ;

/// @brief Method GetAchievementDefinitions addr 0x257bac0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::AchievementDefinitionList GetAchievementDefinitions() ;

/// @brief Method GetAchievementProgressList addr 0x257bac8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::AchievementProgressList GetAchievementProgressList() ;

/// @brief Method GetAchievementUpdate addr 0x257bad0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::AchievementUpdate GetAchievementUpdate() ;

/// @brief Method GetApplicationInviteList addr 0x257bad8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::ApplicationInviteList GetApplicationInviteList() ;

/// @brief Method GetApplicationVersion addr 0x257bae0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::ApplicationVersion GetApplicationVersion() ;

/// @brief Method GetAssetDetails addr 0x257bae8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::AssetDetails GetAssetDetails() ;

/// @brief Method GetAssetDetailsList addr 0x257baf0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::AssetDetailsList GetAssetDetailsList() ;

/// @brief Method GetAssetFileDeleteResult addr 0x257baf8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::AssetFileDeleteResult GetAssetFileDeleteResult() ;

/// @brief Method GetAssetFileDownloadCancelResult addr 0x257bb00 size 0x8 virtual true final false
 ::Oculus::Platform::Models::AssetFileDownloadCancelResult GetAssetFileDownloadCancelResult() ;

/// @brief Method GetAssetFileDownloadResult addr 0x257bb08 size 0x8 virtual true final false
 ::Oculus::Platform::Models::AssetFileDownloadResult GetAssetFileDownloadResult() ;

/// @brief Method GetAssetFileDownloadUpdate addr 0x257bb10 size 0x8 virtual true final false
 ::Oculus::Platform::Models::AssetFileDownloadUpdate GetAssetFileDownloadUpdate() ;

/// @brief Method GetAvatarEditorResult addr 0x257bb18 size 0x8 virtual true final false
 ::Oculus::Platform::Models::AvatarEditorResult GetAvatarEditorResult() ;

/// @brief Method GetBlockedUserList addr 0x257bb20 size 0x8 virtual true final false
 ::Oculus::Platform::Models::BlockedUserList GetBlockedUserList() ;

/// @brief Method GetCalApplicationFinalized addr 0x257bb28 size 0x8 virtual true final false
 ::Oculus::Platform::Models::CalApplicationFinalized GetCalApplicationFinalized() ;

/// @brief Method GetCalApplicationProposed addr 0x257bb30 size 0x8 virtual true final false
 ::Oculus::Platform::Models::CalApplicationProposed GetCalApplicationProposed() ;

/// @brief Method GetCalApplicationSuggestionList addr 0x257bb38 size 0x8 virtual true final false
 ::Oculus::Platform::Models::CalApplicationSuggestionList GetCalApplicationSuggestionList() ;

/// @brief Method GetChallenge addr 0x257bb40 size 0x8 virtual true final false
 ::Oculus::Platform::Models::Challenge GetChallenge() ;

/// @brief Method GetChallengeEntryList addr 0x257bb48 size 0x8 virtual true final false
 ::Oculus::Platform::Models::ChallengeEntryList GetChallengeEntryList() ;

/// @brief Method GetChallengeList addr 0x257bb50 size 0x8 virtual true final false
 ::Oculus::Platform::Models::ChallengeList GetChallengeList() ;

/// @brief Method GetCloudStorageConflictMetadata addr 0x257bb58 size 0x8 virtual true final false
 ::Oculus::Platform::Models::CloudStorageConflictMetadata GetCloudStorageConflictMetadata() ;

/// @brief Method GetCloudStorageData addr 0x257bb60 size 0x8 virtual true final false
 ::Oculus::Platform::Models::CloudStorageData GetCloudStorageData() ;

/// @brief Method GetCloudStorageMetadata addr 0x257bb68 size 0x8 virtual true final false
 ::Oculus::Platform::Models::CloudStorageMetadata GetCloudStorageMetadata() ;

/// @brief Method GetCloudStorageMetadataList addr 0x257bb70 size 0x8 virtual true final false
 ::Oculus::Platform::Models::CloudStorageMetadataList GetCloudStorageMetadataList() ;

/// @brief Method GetCloudStorageUpdateResponse addr 0x257bb78 size 0x8 virtual true final false
 ::Oculus::Platform::Models::CloudStorageUpdateResponse GetCloudStorageUpdateResponse() ;

/// @brief Method GetDataStore addr 0x257bb80 size 0x8 virtual true final false
 ::System::Collections::Generic::Dictionary_2<::StringW,::StringW> GetDataStore() ;

/// @brief Method GetDestinationList addr 0x257bb88 size 0x8 virtual true final false
 ::Oculus::Platform::Models::DestinationList GetDestinationList() ;

/// @brief Method GetGroupPresenceJoinIntent addr 0x257bb90 size 0x8 virtual true final false
 ::Oculus::Platform::Models::GroupPresenceJoinIntent GetGroupPresenceJoinIntent() ;

/// @brief Method GetGroupPresenceLeaveIntent addr 0x257bb98 size 0x8 virtual true final false
 ::Oculus::Platform::Models::GroupPresenceLeaveIntent GetGroupPresenceLeaveIntent() ;

/// @brief Method GetInstalledApplicationList addr 0x257bba0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::InstalledApplicationList GetInstalledApplicationList() ;

/// @brief Method GetInvitePanelResultInfo addr 0x257bba8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::InvitePanelResultInfo GetInvitePanelResultInfo() ;

/// @brief Method GetLaunchBlockFlowResult addr 0x257bbb0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::LaunchBlockFlowResult GetLaunchBlockFlowResult() ;

/// @brief Method GetLaunchFriendRequestFlowResult addr 0x257bbb8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::LaunchFriendRequestFlowResult GetLaunchFriendRequestFlowResult() ;

/// @brief Method GetLaunchInvitePanelFlowResult addr 0x257bbc0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::LaunchInvitePanelFlowResult GetLaunchInvitePanelFlowResult() ;

/// @brief Method GetLaunchReportFlowResult addr 0x257bbc8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::LaunchReportFlowResult GetLaunchReportFlowResult() ;

/// @brief Method GetLaunchUnblockFlowResult addr 0x257bbd0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::LaunchUnblockFlowResult GetLaunchUnblockFlowResult() ;

/// @brief Method GetLeaderboardDidUpdate addr 0x257bbd8 size 0x8 virtual true final false
 bool GetLeaderboardDidUpdate() ;

/// @brief Method GetLeaderboardEntryList addr 0x257bbe0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::LeaderboardEntryList GetLeaderboardEntryList() ;

/// @brief Method GetLeaderboardList addr 0x257bbe8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::LeaderboardList GetLeaderboardList() ;

/// @brief Method GetLinkedAccountList addr 0x257bbf0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::LinkedAccountList GetLinkedAccountList() ;

/// @brief Method GetLivestreamingApplicationStatus addr 0x257bbf8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::LivestreamingApplicationStatus GetLivestreamingApplicationStatus() ;

/// @brief Method GetLivestreamingStartResult addr 0x257bc00 size 0x8 virtual true final false
 ::Oculus::Platform::Models::LivestreamingStartResult GetLivestreamingStartResult() ;

/// @brief Method GetLivestreamingStatus addr 0x257bc08 size 0x8 virtual true final false
 ::Oculus::Platform::Models::LivestreamingStatus GetLivestreamingStatus() ;

/// @brief Method GetLivestreamingVideoStats addr 0x257bc10 size 0x8 virtual true final false
 ::Oculus::Platform::Models::LivestreamingVideoStats GetLivestreamingVideoStats() ;

/// @brief Method GetMatchmakingAdminSnapshot addr 0x257bc18 size 0x8 virtual true final false
 ::Oculus::Platform::Models::MatchmakingAdminSnapshot GetMatchmakingAdminSnapshot() ;

/// @brief Method GetMatchmakingBrowseResult addr 0x257bc20 size 0x8 virtual true final false
 ::Oculus::Platform::Models::MatchmakingBrowseResult GetMatchmakingBrowseResult() ;

/// @brief Method GetMatchmakingEnqueueResult addr 0x257bc28 size 0x8 virtual true final false
 ::Oculus::Platform::Models::MatchmakingEnqueueResult GetMatchmakingEnqueueResult() ;

/// @brief Method GetMatchmakingEnqueueResultAndRoom addr 0x257bc30 size 0x8 virtual true final false
 ::Oculus::Platform::Models::MatchmakingEnqueueResultAndRoom GetMatchmakingEnqueueResultAndRoom() ;

/// @brief Method GetMatchmakingStats addr 0x257bc38 size 0x8 virtual true final false
 ::Oculus::Platform::Models::MatchmakingStats GetMatchmakingStats() ;

/// @brief Method GetMicrophoneAvailabilityState addr 0x257bc40 size 0x8 virtual true final false
 ::Oculus::Platform::Models::MicrophoneAvailabilityState GetMicrophoneAvailabilityState() ;

/// @brief Method GetNetSyncConnection addr 0x257bc48 size 0x8 virtual true final false
 ::Oculus::Platform::Models::NetSyncConnection GetNetSyncConnection() ;

/// @brief Method GetNetSyncSessionList addr 0x257bc50 size 0x8 virtual true final false
 ::Oculus::Platform::Models::NetSyncSessionList GetNetSyncSessionList() ;

/// @brief Method GetNetSyncSessionsChangedNotification addr 0x257bc58 size 0x8 virtual true final false
 ::Oculus::Platform::Models::NetSyncSessionsChangedNotification GetNetSyncSessionsChangedNotification() ;

/// @brief Method GetNetSyncSetSessionPropertyResult addr 0x257bc60 size 0x8 virtual true final false
 ::Oculus::Platform::Models::NetSyncSetSessionPropertyResult GetNetSyncSetSessionPropertyResult() ;

/// @brief Method GetNetSyncVoipAttenuationValueList addr 0x257bc68 size 0x8 virtual true final false
 ::Oculus::Platform::Models::NetSyncVoipAttenuationValueList GetNetSyncVoipAttenuationValueList() ;

/// @brief Method GetOrgScopedID addr 0x257bc70 size 0x8 virtual true final false
 ::Oculus::Platform::Models::OrgScopedID GetOrgScopedID() ;

/// @brief Method GetParty addr 0x257bc78 size 0x8 virtual true final false
 ::Oculus::Platform::Models::Party GetParty() ;

/// @brief Method GetPartyID addr 0x257bc80 size 0x8 virtual true final false
 ::Oculus::Platform::Models::PartyID GetPartyID() ;

/// @brief Method GetPartyUpdateNotification addr 0x257bc88 size 0x8 virtual true final false
 ::Oculus::Platform::Models::PartyUpdateNotification GetPartyUpdateNotification() ;

/// @brief Method GetPidList addr 0x257bc90 size 0x8 virtual true final false
 ::Oculus::Platform::Models::PidList GetPidList() ;

/// @brief Method GetProductList addr 0x257bc98 size 0x8 virtual true final false
 ::Oculus::Platform::Models::ProductList GetProductList() ;

/// @brief Method GetPurchase addr 0x257bca0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::Purchase GetPurchase() ;

/// @brief Method GetPurchaseList addr 0x257bca8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::PurchaseList GetPurchaseList() ;

/// @brief Method GetRejoinDialogResult addr 0x257bcb0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::RejoinDialogResult GetRejoinDialogResult() ;

/// @brief Method GetRoom addr 0x257bcb8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::Room GetRoom() ;

/// @brief Method GetRoomInviteNotification addr 0x257bcc0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::RoomInviteNotification GetRoomInviteNotification() ;

/// @brief Method GetRoomInviteNotificationList addr 0x257bcc8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::RoomInviteNotificationList GetRoomInviteNotificationList() ;

/// @brief Method GetRoomList addr 0x257bcd0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::RoomList GetRoomList() ;

/// @brief Method GetSdkAccountList addr 0x257bcd8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::SdkAccountList GetSdkAccountList() ;

/// @brief Method GetSendInvitesResult addr 0x257bce0 size 0x8 virtual true final false
 ::Oculus::Platform::Models::SendInvitesResult GetSendInvitesResult() ;

/// @brief Method GetShareMediaResult addr 0x257bce8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::ShareMediaResult GetShareMediaResult() ;

/// @brief Method GetString addr 0x257bcf0 size 0x8 virtual true final false
 ::StringW GetString() ;

/// @brief Method GetSystemVoipState addr 0x257bcf8 size 0x8 virtual true final false
 ::Oculus::Platform::Models::SystemVoipState GetSystemVoipState() ;

/// @brief Method GetUser addr 0x257bd00 size 0x8 virtual true final false
 ::Oculus::Platform::Models::User GetUser() ;

/// @brief Method GetUserAndRoomList addr 0x257bd08 size 0x8 virtual true final false
 ::Oculus::Platform::Models::UserAndRoomList GetUserAndRoomList() ;

/// @brief Method GetUserCapabilityList addr 0x257bd10 size 0x8 virtual true final false
 ::Oculus::Platform::Models::UserCapabilityList GetUserCapabilityList() ;

/// @brief Method GetUserDataStoreUpdateResponse addr 0x257bd18 size 0x8 virtual true final false
 ::Oculus::Platform::Models::UserDataStoreUpdateResponse GetUserDataStoreUpdateResponse() ;

/// @brief Method GetUserList addr 0x257bd20 size 0x8 virtual true final false
 ::Oculus::Platform::Models::UserList GetUserList() ;

/// @brief Method GetUserProof addr 0x257bd28 size 0x8 virtual true final false
 ::Oculus::Platform::Models::UserProof GetUserProof() ;

/// @brief Method GetUserReportID addr 0x257bd30 size 0x8 virtual true final false
 ::Oculus::Platform::Models::UserReportID GetUserReportID() ;

/// @brief Method ParseMessageHandle addr 0x257bd38 size 0x2068 virtual false final false
static ::Oculus::Platform::Message ParseMessageHandle(::cordl_internals::intptr_t messageHandle) ;

/// @brief Method PopMessage addr 0x2553de8 size 0xd4 virtual false final false
static ::Oculus::Platform::Message PopMessage() ;

/// @brief Method set_HandleExtraMessageTypes addr 0x257f768 size 0x4c virtual false final false
static void set_HandleExtraMessageTypes(::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler value) ;

/// @brief Method get_HandleExtraMessageTypes addr 0x257f7b4 size 0x48 virtual false final false
static ::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler get_HandleExtraMessageTypes() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::____Oculus__Platform__Message__MessageType, "Oculus.Platform", "Message/MessageType");
NEED_NO_BOX(::Oculus::Platform::Message);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::Message, "Oculus.Platform", "Message");
NEED_NO_BOX(::Oculus::Platform::____Oculus__Platform__Message__Callback);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::____Oculus__Platform__Message__Callback, "Oculus.Platform", "Message/Callback");
NEED_NO_BOX(::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler);
DEFINE_IL2CPP_ARG_TYPE(::Oculus::Platform::____Oculus__Platform__Message__ExtraMessageTypesHandler, "Oculus.Platform", "Message/ExtraMessageTypesHandler");
