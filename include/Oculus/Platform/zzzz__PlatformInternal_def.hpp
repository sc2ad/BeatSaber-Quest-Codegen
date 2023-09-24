#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace Oculus::Platform {
template<typename T>
class Oculus__Platform__Message_1__Callback;
}
namespace Oculus::Platform::Models {
class HttpTransferUpdate;
}
namespace Oculus::Platform::Models {
class LinkedAccountList;
}
namespace Oculus::Platform {
struct ServiceProvider;
}
namespace Oculus::Platform {
template<typename T>
class Request_1;
}
namespace Oculus::Platform {
class Oculus__Platform__PlatformInternal__HTTP;
}
namespace Oculus::Platform {
class Message;
}
namespace Oculus::Platform {
class Oculus__Platform__PlatformInternal__Users;
}
namespace Oculus::Platform {
struct Oculus__Platform__Message__MessageType;
}
namespace Oculus::Platform::Models {
class PlatformInitialize;
}
namespace Oculus::Platform {
struct Oculus__Platform__PlatformInternal__MessageTypeInternal;
}
// Forward declare root types
namespace Oculus::Platform {
struct Oculus__Platform__PlatformInternal__MessageTypeInternal;
}
namespace Oculus::Platform {
class Oculus__Platform__PlatformInternal__HTTP;
}
namespace Oculus::Platform {
class Oculus__Platform__PlatformInternal__Users;
}
namespace Oculus::Platform {
class PlatformInternal;
}
// Type: ::MessageTypeInternal
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13341))
// CS Name: Oculus.Platform.PlatformInternal::MessageTypeInternal
struct CORDL_TYPE Oculus__Platform__PlatformInternal__MessageTypeInternal : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Oculus__Platform__PlatformInternal__MessageTypeInternal(uint32_t value__) noexcept;


                    constexpr Oculus__Platform__PlatformInternal__MessageTypeInternal(Oculus__Platform__PlatformInternal__MessageTypeInternal const&) = default;
                    constexpr Oculus__Platform__PlatformInternal__MessageTypeInternal(Oculus__Platform__PlatformInternal__MessageTypeInternal&&) = default;
                    constexpr Oculus__Platform__PlatformInternal__MessageTypeInternal& operator=(Oculus__Platform__PlatformInternal__MessageTypeInternal const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Oculus__Platform__PlatformInternal__MessageTypeInternal& operator=(Oculus__Platform__PlatformInternal__MessageTypeInternal&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__PlatformInternal__MessageTypeInternal(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __Oculus__Platform__PlatformInternal__MessageTypeInternal_Unwrapped : uint32_t {
__AbuseReport_LaunchAdvancedReportFlow = 1286683246u,
__Application_ExecuteCoordinatedLaunch = 645772532u,
__Application_GetInstalledApplications = 1376744524u,
__Avatar_UpdateMetaData = 2077219214u,
__Cal_FinalizeApplication = 497667029u,
__Cal_GetSuggestedApplications = 1450209301u,
__Cal_ProposeApplication = 1317270237u,
__Colocation_GetCurrentMapUuid = 878018226u,
__Colocation_RequestMap = 840263277u,
__Colocation_ShareMap = 409847005u,
__DeviceApplicationIntegrity_GetAttestationToken = 271557598u,
__GraphAPI_Get = 822018158u,
__GraphAPI_Post = 1990567876u,
__HTTP_Get = 1874211363u,
__HTTP_GetToFile = 1317133401u,
__HTTP_MultiPartPost = 1480774160u,
__HTTP_Post = 1798743375u,
__Livestreaming_IsAllowedForApplication = 191729014u,
__Livestreaming_StartPartyStream = 2066701532u,
__Livestreaming_StartStream = 1343932350u,
__Livestreaming_StopPartyStream = 661065560u,
__Livestreaming_StopStream = 1155796426u,
__Livestreaming_UpdateMicStatus = 475495815u,
__NetSync_Connect = 1684899167u,
__NetSync_Disconnect = 359268021u,
__NetSync_GetSessions = 1859521077u,
__NetSync_GetVoipAttenuation = 288016919u,
__NetSync_GetVoipAttenuationDefault = 1467721888u,
__NetSync_SetVoipAttenuation = 882366454u,
__NetSync_SetVoipAttenuationModel = 1788128654u,
__NetSync_SetVoipChannelCfg = 1553310963u,
__NetSync_SetVoipGroup = 1477614734u,
__NetSync_SetVoipListentoChannels = 1590749746u,
__NetSync_SetVoipMicSource = 855832432u,
__NetSync_SetVoipSessionMuted = 1434844938u,
__NetSync_SetVoipSpeaktoChannels = 766496213u,
__NetSync_SetVoipStreamMode = 1742839095u,
__Party_Create = 450042703u,
__Party_GatherInApplication = 1921499523u,
__Party_Get = 1586058173u,
__Party_GetCurrentForUser = 1489764138u,
__Party_Invite = 901104867u,
__Party_Join = 1744993395u,
__Party_Leave = 848430801u,
__RichPresence_SetDestination = 1328734477u,
__RichPresence_SetIsJoinable = 1050353505u,
__RichPresence_SetLobbySession = 1895893271u,
__RichPresence_SetMatchSession = 1675623566u,
__Room_CreateOrUpdateAndJoinNamed = 2089683601u,
__Room_GetNamedRooms = 125660812u,
__Room_GetSocialRooms = 1636310390u,
__User_CancelRecordingForReportFlow = 65065289u,
__User_GetLinkedAccounts = 1469314134u,
__User_GetUserCapabilities = 303837564u,
__User_LaunchProfile = 171537047u,
__User_LaunchReportFlow = 1449304081u,
__User_LaunchReportFlow2 = 2139314275u,
__User_NewEntitledTestUser = 292822787u,
__User_NewTestUser = 921194380u,
__User_NewTestUserFriends = 517416647u,
__User_StartRecordingForReportFlow = 1819161571u,
__User_StopRecordingAndLaunchReportFlow = 1618513035u,
__User_StopRecordingAndLaunchReportFlow2 = 432190251u,
__User_TestUserCreateDeviceManifest = 1701884605u,
__Voip_ReportAppVoipSessions = 408048078u,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __Oculus__Platform__PlatformInternal__MessageTypeInternal_Unwrapped () const noexcept {
return std::bit_cast<__Oculus__Platform__PlatformInternal__MessageTypeInternal_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = uint32_t;


// Fields

 uint32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(uint32_t value) ;

constexpr uint32_t __get_value__() const;

/// @brief Field AbuseReport_LaunchAdvancedReportFlow offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const AbuseReport_LaunchAdvancedReportFlow;

/// @brief Field Application_ExecuteCoordinatedLaunch offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Application_ExecuteCoordinatedLaunch;

/// @brief Field Application_GetInstalledApplications offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Application_GetInstalledApplications;

/// @brief Field Avatar_UpdateMetaData offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Avatar_UpdateMetaData;

/// @brief Field Cal_FinalizeApplication offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Cal_FinalizeApplication;

/// @brief Field Cal_GetSuggestedApplications offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Cal_GetSuggestedApplications;

/// @brief Field Cal_ProposeApplication offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Cal_ProposeApplication;

/// @brief Field Colocation_GetCurrentMapUuid offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Colocation_GetCurrentMapUuid;

/// @brief Field Colocation_RequestMap offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Colocation_RequestMap;

/// @brief Field Colocation_ShareMap offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Colocation_ShareMap;

/// @brief Field DeviceApplicationIntegrity_GetAttestationToken offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const DeviceApplicationIntegrity_GetAttestationToken;

/// @brief Field GraphAPI_Get offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const GraphAPI_Get;

/// @brief Field GraphAPI_Post offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const GraphAPI_Post;

/// @brief Field HTTP_Get offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const HTTP_Get;

/// @brief Field HTTP_GetToFile offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const HTTP_GetToFile;

/// @brief Field HTTP_MultiPartPost offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const HTTP_MultiPartPost;

/// @brief Field HTTP_Post offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const HTTP_Post;

/// @brief Field Livestreaming_IsAllowedForApplication offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Livestreaming_IsAllowedForApplication;

/// @brief Field Livestreaming_StartPartyStream offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Livestreaming_StartPartyStream;

/// @brief Field Livestreaming_StartStream offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Livestreaming_StartStream;

/// @brief Field Livestreaming_StopPartyStream offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Livestreaming_StopPartyStream;

/// @brief Field Livestreaming_StopStream offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Livestreaming_StopStream;

/// @brief Field Livestreaming_UpdateMicStatus offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Livestreaming_UpdateMicStatus;

/// @brief Field NetSync_Connect offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_Connect;

/// @brief Field NetSync_Disconnect offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_Disconnect;

/// @brief Field NetSync_GetSessions offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_GetSessions;

/// @brief Field NetSync_GetVoipAttenuation offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_GetVoipAttenuation;

/// @brief Field NetSync_GetVoipAttenuationDefault offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_GetVoipAttenuationDefault;

/// @brief Field NetSync_SetVoipAttenuation offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_SetVoipAttenuation;

/// @brief Field NetSync_SetVoipAttenuationModel offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_SetVoipAttenuationModel;

/// @brief Field NetSync_SetVoipChannelCfg offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_SetVoipChannelCfg;

/// @brief Field NetSync_SetVoipGroup offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_SetVoipGroup;

/// @brief Field NetSync_SetVoipListentoChannels offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_SetVoipListentoChannels;

/// @brief Field NetSync_SetVoipMicSource offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_SetVoipMicSource;

/// @brief Field NetSync_SetVoipSessionMuted offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_SetVoipSessionMuted;

/// @brief Field NetSync_SetVoipSpeaktoChannels offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_SetVoipSpeaktoChannels;

/// @brief Field NetSync_SetVoipStreamMode offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const NetSync_SetVoipStreamMode;

/// @brief Field Party_Create offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Party_Create;

/// @brief Field Party_GatherInApplication offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Party_GatherInApplication;

/// @brief Field Party_Get offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Party_Get;

/// @brief Field Party_GetCurrentForUser offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Party_GetCurrentForUser;

/// @brief Field Party_Invite offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Party_Invite;

/// @brief Field Party_Join offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Party_Join;

/// @brief Field Party_Leave offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Party_Leave;

/// @brief Field RichPresence_SetDestination offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const RichPresence_SetDestination;

/// @brief Field RichPresence_SetIsJoinable offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const RichPresence_SetIsJoinable;

/// @brief Field RichPresence_SetLobbySession offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const RichPresence_SetLobbySession;

/// @brief Field RichPresence_SetMatchSession offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const RichPresence_SetMatchSession;

/// @brief Field Room_CreateOrUpdateAndJoinNamed offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Room_CreateOrUpdateAndJoinNamed;

/// @brief Field Room_GetNamedRooms offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Room_GetNamedRooms;

/// @brief Field Room_GetSocialRooms offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Room_GetSocialRooms;

/// @brief Field User_CancelRecordingForReportFlow offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const User_CancelRecordingForReportFlow;

/// @brief Field User_GetLinkedAccounts offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const User_GetLinkedAccounts;

/// @brief Field User_GetUserCapabilities offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const User_GetUserCapabilities;

/// @brief Field User_LaunchProfile offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const User_LaunchProfile;

/// @brief Field User_LaunchReportFlow offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const User_LaunchReportFlow;

/// @brief Field User_LaunchReportFlow2 offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const User_LaunchReportFlow2;

/// @brief Field User_NewEntitledTestUser offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const User_NewEntitledTestUser;

/// @brief Field User_NewTestUser offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const User_NewTestUser;

/// @brief Field User_NewTestUserFriends offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const User_NewTestUserFriends;

/// @brief Field User_StartRecordingForReportFlow offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const User_StartRecordingForReportFlow;

/// @brief Field User_StopRecordingAndLaunchReportFlow offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const User_StopRecordingAndLaunchReportFlow;

/// @brief Field User_StopRecordingAndLaunchReportFlow2 offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const User_StopRecordingAndLaunchReportFlow2;

/// @brief Field User_TestUserCreateDeviceManifest offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const User_TestUserCreateDeviceManifest;

/// @brief Field Voip_ReportAppVoipSessions offset 0
static Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal const Voip_ReportAppVoipSessions;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::HTTP
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13342))
// CS Name: Oculus.Platform.PlatformInternal::HTTP
class CORDL_TYPE Oculus__Platform__PlatformInternal__HTTP : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Oculus__Platform__PlatformInternal__HTTP() = default;

// Ctor Parameters [CppParam { name: "", ty: "Oculus__Platform__PlatformInternal__HTTP", modifiers: " const&", def_value: None }]
constexpr Oculus__Platform__PlatformInternal__HTTP(Oculus__Platform__PlatformInternal__HTTP const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Oculus__Platform__PlatformInternal__HTTP", modifiers: "&&", def_value: None }]
constexpr Oculus__Platform__PlatformInternal__HTTP(Oculus__Platform__PlatformInternal__HTTP&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__PlatformInternal__HTTP(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Oculus__Platform__PlatformInternal__HTTP& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Oculus__Platform__PlatformInternal__HTTP& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Oculus__Platform__PlatformInternal__HTTP& operator=(Oculus__Platform__PlatformInternal__HTTP&& o) noexcept = default;
  constexpr Oculus__Platform__PlatformInternal__HTTP& operator=(Oculus__Platform__PlatformInternal__HTTP const& o) noexcept = default;
                


// Methods

/// @brief Method SetHttpTransferUpdateCallback addr 0x2598bdc size 0x74 virtual false final false
static void SetHttpTransferUpdateCallback(Oculus::Platform::Oculus__Platform__Message_1__Callback<Oculus::Platform::Models::HttpTransferUpdate> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::Users
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13343))
// CS Name: Oculus.Platform.PlatformInternal::Users
class CORDL_TYPE Oculus__Platform__PlatformInternal__Users : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Oculus__Platform__PlatformInternal__Users() = default;

// Ctor Parameters [CppParam { name: "", ty: "Oculus__Platform__PlatformInternal__Users", modifiers: " const&", def_value: None }]
constexpr Oculus__Platform__PlatformInternal__Users(Oculus__Platform__PlatformInternal__Users const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Oculus__Platform__PlatformInternal__Users", modifiers: "&&", def_value: None }]
constexpr Oculus__Platform__PlatformInternal__Users(Oculus__Platform__PlatformInternal__Users&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__PlatformInternal__Users(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Oculus__Platform__PlatformInternal__Users& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Oculus__Platform__PlatformInternal__Users& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Oculus__Platform__PlatformInternal__Users& operator=(Oculus__Platform__PlatformInternal__Users&& o) noexcept = default;
  constexpr Oculus__Platform__PlatformInternal__Users& operator=(Oculus__Platform__PlatformInternal__Users const& o) noexcept = default;
                


// Methods

/// @brief Method GetLinkedAccounts addr 0x2598c50 size 0x1b4 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::LinkedAccountList> GetLinkedAccounts(::ArrayW<Oculus::Platform::ServiceProvider> providers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::PlatformInternal
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13344))
// CS Name: Oculus.Platform.PlatformInternal
class CORDL_TYPE PlatformInternal : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Users = Oculus::Platform::Oculus__Platform__PlatformInternal__Users;

using HTTP = Oculus::Platform::Oculus__Platform__PlatformInternal__HTTP;

using MessageTypeInternal = Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PlatformInternal() = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInternal", modifiers: " const&", def_value: None }]
constexpr PlatformInternal(PlatformInternal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PlatformInternal", modifiers: "&&", def_value: None }]
constexpr PlatformInternal(PlatformInternal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PlatformInternal(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PlatformInternal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PlatformInternal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PlatformInternal& operator=(PlatformInternal&& o) noexcept = default;
  constexpr PlatformInternal& operator=(PlatformInternal const& o) noexcept = default;
                


// Methods

/// @brief Method CrashApplication addr 0x2597ec0 size 0x50 virtual false final false
static void CrashApplication() ;

/// @brief Method ParseMessageHandle addr 0x2597f10 size 0xa7c virtual false final false
static Oculus::Platform::Message ParseMessageHandle(::cordl_internals::intptr_t messageHandle, Oculus::Platform::Oculus__Platform__Message__MessageType messageType) ;

/// @brief Method InitializeStandaloneAsync addr 0x259898c size 0x158 virtual false final false
static Oculus::Platform::Request_1<Oculus::Platform::Models::PlatformInitialize> InitializeStandaloneAsync(uint64_t appID, ::StringW accessToken) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__PlatformInternal__MessageTypeInternal, "Oculus.Platform", "PlatformInternal/MessageTypeInternal");
NEED_NO_BOX(Oculus::Platform::Oculus__Platform__PlatformInternal__HTTP);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__PlatformInternal__HTTP, "Oculus.Platform", "PlatformInternal/HTTP");
NEED_NO_BOX(Oculus::Platform::Oculus__Platform__PlatformInternal__Users);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__PlatformInternal__Users, "Oculus.Platform", "PlatformInternal/Users");
NEED_NO_BOX(Oculus::Platform::PlatformInternal);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::PlatformInternal, "Oculus.Platform", "PlatformInternal");
