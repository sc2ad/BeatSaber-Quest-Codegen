#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace Oculus::Platform {
struct RichPresenceExtraContext;
}
namespace Oculus::Platform {
struct AbuseReportVideoMode;
}
namespace Oculus::Platform {
struct LogEventName;
}
namespace Oculus::Platform {
struct LaunchResult;
}
namespace Oculus::Platform {
struct SystemVoipStatus;
}
namespace Oculus::Platform {
struct MediaContentType;
}
namespace Oculus::Platform {
struct VoipBitrate;
}
namespace Oculus::Platform {
struct NetSyncVoipMicSource;
}
namespace Oculus::Platform {
struct LeaderboardFilterType;
}
namespace Oculus::Platform {
struct RoomJoinPolicy;
}
namespace Oculus::Platform {
struct LivestreamingAudience;
}
namespace Oculus::Platform {
struct CloudStorageDataStatus;
}
namespace Oculus::Platform {
struct ChallengeVisibility;
}
namespace Oculus::Platform {
struct Oculus__Platform__Message__MessageType;
}
namespace Oculus::Platform {
struct NetSyncConnectionStatus;
}
namespace System {
class Array;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Oculus::Platform {
struct SendPolicy;
}
namespace Oculus::Platform {
struct RoomType;
}
namespace Oculus::Platform {
struct SdkAccountType;
}
namespace Oculus::Platform {
struct UserPresenceStatus;
}
namespace Oculus::Platform {
struct VoipSampleRate;
}
namespace Oculus::Platform {
struct LeaderboardStartAt;
}
namespace Oculus::Platform {
struct PartyUpdateAction;
}
namespace Oculus::Platform {
struct UserOrdering;
}
namespace Oculus::Platform {
struct TimeWindow;
}
namespace Oculus::Platform {
struct CloudStorageUpdateStatus;
}
namespace Oculus::Platform {
struct RoomMembershipLockStatus;
}
namespace Oculus::Platform {
struct InitConfigOptions;
}
namespace Oculus::Platform {
struct AbuseReportType;
}
namespace System {
struct DateTime;
}
namespace Oculus::Platform {
struct NetSyncVoipStreamMode;
}
namespace Oculus::Platform {
struct ReportRequestResponse;
}
namespace Oculus::Platform {
struct MatchmakingStatApproach;
}
namespace Oculus::Platform {
struct ChallengeViewerFilter;
}
namespace Oculus::Platform {
struct MultiplayerErrorErrorKey;
}
namespace Oculus::Platform {
struct LivestreamingStartStatus;
}
namespace Oculus::Platform {
struct RoomJoinability;
}
namespace Oculus::Platform {
struct LivestreamingMicrophoneStatus;
}
namespace Oculus::Platform {
struct ChallengeCreationType;
}
namespace Oculus::Platform {
struct ServiceProvider;
}
namespace Oculus::Platform {
struct NetSyncDisconnectReason;
}
namespace Oculus::Platform {
struct VoipMuteState;
}
namespace Oculus::Platform {
struct PeerConnectionState;
}
namespace Oculus::Platform {
struct ShareMediaStatus;
}
namespace Oculus::Platform {
struct AchievementType;
}
namespace System::Text {
class UTF8Encoding;
}
namespace Oculus::Platform {
struct LaunchType;
}
namespace Oculus::Platform {
struct PlatformInitializeResult;
}
namespace Oculus::Platform {
struct VoipDtxState;
}
namespace System {
class AsyncCallback;
}
namespace System {
class IAsyncResult;
}
namespace Oculus::Platform {
struct KeyValuePairType;
}
namespace Oculus::Platform {
struct MatchmakingCriterionImportance;
}
// Forward declare root types
namespace Oculus::Platform {
class CAPI;
}
namespace Oculus::Platform {
class Oculus__Platform__CAPI__FilterCallback;
}
namespace Oculus::Platform {
struct Oculus__Platform__CAPI__OculusInitParams;
}
namespace Oculus::Platform {
struct Oculus__Platform__CAPI__ovrKeyValuePair;
}
namespace Oculus::Platform {
struct Oculus__Platform__CAPI__ovrMatchmakingCriterion;
}
namespace Oculus::Platform {
struct Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData;
}
namespace Oculus::Platform {
struct Oculus__Platform__CAPI__ovrNetSyncVec3;
}
// Type: ::ovrKeyValuePair
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13170))
// CS Name: Oculus.Platform.CAPI::ovrKeyValuePair
struct CORDL_TYPE Oculus__Platform__CAPI__ovrKeyValuePair : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "key_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "valueType_", ty: "Oculus::Platform::KeyValuePairType", modifiers: "", def_value: None }, CppParam { name: "stringValue_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "intValue_", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "doubleValue_", ty: "double_t", modifiers: "", def_value: None }]
constexpr Oculus__Platform__CAPI__ovrKeyValuePair(::StringW key_, Oculus::Platform::KeyValuePairType valueType_, ::StringW stringValue_, int32_t intValue_, double_t doubleValue_) noexcept;


                    constexpr Oculus__Platform__CAPI__ovrKeyValuePair(Oculus__Platform__CAPI__ovrKeyValuePair const&) = default;
                    constexpr Oculus__Platform__CAPI__ovrKeyValuePair(Oculus__Platform__CAPI__ovrKeyValuePair&&) = default;
                    constexpr Oculus__Platform__CAPI__ovrKeyValuePair& operator=(Oculus__Platform__CAPI__ovrKeyValuePair const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Oculus__Platform__CAPI__ovrKeyValuePair& operator=(Oculus__Platform__CAPI__ovrKeyValuePair&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__CAPI__ovrKeyValuePair(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_key_, put=__set_key_))  key_;

constexpr void __set_key_(::StringW value) ;

constexpr ::StringW __get_key_() const;

 Oculus::Platform::KeyValuePairType __declspec(property(get=__get_valueType_, put=__set_valueType_))  valueType_;

constexpr void __set_valueType_(Oculus::Platform::KeyValuePairType value) ;

constexpr Oculus::Platform::KeyValuePairType __get_valueType_() const;

 ::StringW __declspec(property(get=__get_stringValue_, put=__set_stringValue_))  stringValue_;

constexpr void __set_stringValue_(::StringW value) ;

constexpr ::StringW __get_stringValue_() const;

 int32_t __declspec(property(get=__get_intValue_, put=__set_intValue_))  intValue_;

constexpr void __set_intValue_(int32_t value) ;

constexpr int32_t __get_intValue_() const;

 double_t __declspec(property(get=__get_doubleValue_, put=__set_doubleValue_))  doubleValue_;

constexpr void __set_doubleValue_(double_t value) ;

constexpr double_t __get_doubleValue_() const;


// Methods

/// @brief Method .ctor addr 0x2555168 size 0x18 virtual false final false
 void _ctor(::StringW key, ::StringW value) ;

/// @brief Method .ctor addr 0x2554c48 size 0x1c virtual false final false
 void _ctor(::StringW key, int32_t value) ;

/// @brief Method .ctor addr 0x2555180 size 0x1c virtual false final false
 void _ctor(::StringW key, double_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::ovrNetSyncVec3
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13171))
// CS Name: Oculus.Platform.CAPI::ovrNetSyncVec3
struct CORDL_TYPE Oculus__Platform__CAPI__ovrNetSyncVec3 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "x", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "y", ty: "float_t", modifiers: "", def_value: None }, CppParam { name: "z", ty: "float_t", modifiers: "", def_value: None }]
constexpr Oculus__Platform__CAPI__ovrNetSyncVec3(float_t x, float_t y, float_t z) noexcept;


                    constexpr Oculus__Platform__CAPI__ovrNetSyncVec3(Oculus__Platform__CAPI__ovrNetSyncVec3 const&) = default;
                    constexpr Oculus__Platform__CAPI__ovrNetSyncVec3(Oculus__Platform__CAPI__ovrNetSyncVec3&&) = default;
                    constexpr Oculus__Platform__CAPI__ovrNetSyncVec3& operator=(Oculus__Platform__CAPI__ovrNetSyncVec3 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Oculus__Platform__CAPI__ovrNetSyncVec3& operator=(Oculus__Platform__CAPI__ovrNetSyncVec3&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xc};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__CAPI__ovrNetSyncVec3(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 float_t __declspec(property(get=__get_x, put=__set_x))  x;

constexpr void __set_x(float_t value) ;

constexpr float_t __get_x() const;

 float_t __declspec(property(get=__get_y, put=__set_y))  y;

constexpr void __set_y(float_t value) ;

constexpr float_t __get_y() const;

 float_t __declspec(property(get=__get_z, put=__set_z))  z;

constexpr void __set_z(float_t value) ;

constexpr float_t __get_z() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::ovrMatchmakingCriterion
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13172))
// CS Name: Oculus.Platform.CAPI::ovrMatchmakingCriterion
struct CORDL_TYPE Oculus__Platform__CAPI__ovrMatchmakingCriterion : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "key_", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "importance_", ty: "Oculus::Platform::MatchmakingCriterionImportance", modifiers: "", def_value: None }, CppParam { name: "parameterArray", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "parameterArrayCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Oculus__Platform__CAPI__ovrMatchmakingCriterion(::StringW key_, Oculus::Platform::MatchmakingCriterionImportance importance_, ::cordl_internals::intptr_t parameterArray, uint32_t parameterArrayCount) noexcept;


                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCriterion(Oculus__Platform__CAPI__ovrMatchmakingCriterion const&) = default;
                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCriterion(Oculus__Platform__CAPI__ovrMatchmakingCriterion&&) = default;
                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCriterion& operator=(Oculus__Platform__CAPI__ovrMatchmakingCriterion const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCriterion& operator=(Oculus__Platform__CAPI__ovrMatchmakingCriterion&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__CAPI__ovrMatchmakingCriterion(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_key_, put=__set_key_))  key_;

constexpr void __set_key_(::StringW value) ;

constexpr ::StringW __get_key_() const;

 Oculus::Platform::MatchmakingCriterionImportance __declspec(property(get=__get_importance_, put=__set_importance_))  importance_;

constexpr void __set_importance_(Oculus::Platform::MatchmakingCriterionImportance value) ;

constexpr Oculus::Platform::MatchmakingCriterionImportance __get_importance_() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_parameterArray, put=__set_parameterArray))  parameterArray;

constexpr void __set_parameterArray(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_parameterArray() const;

 uint32_t __declspec(property(get=__get_parameterArrayCount, put=__set_parameterArrayCount))  parameterArrayCount;

constexpr void __set_parameterArrayCount(uint32_t value) ;

constexpr uint32_t __get_parameterArrayCount() const;


// Methods

/// @brief Method .ctor addr 0x257a390 size 0x6c virtual false final false
 void _ctor(::StringW key, Oculus::Platform::MatchmakingCriterionImportance importance) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::ovrMatchmakingCustomQueryData
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13173))
// CS Name: Oculus.Platform.CAPI::ovrMatchmakingCustomQueryData
struct CORDL_TYPE Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "dataArray", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "dataArrayCount", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "criterionArray", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }, CppParam { name: "criterionArrayCount", ty: "uint32_t", modifiers: "", def_value: None }]
constexpr Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData(::cordl_internals::intptr_t dataArray, uint32_t dataArrayCount, ::cordl_internals::intptr_t criterionArray, uint32_t criterionArrayCount) noexcept;


                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData(Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData const&) = default;
                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData(Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData&&) = default;
                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData& operator=(Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData& operator=(Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x20};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_dataArray, put=__set_dataArray))  dataArray;

constexpr void __set_dataArray(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_dataArray() const;

 uint32_t __declspec(property(get=__get_dataArrayCount, put=__set_dataArrayCount))  dataArrayCount;

constexpr void __set_dataArrayCount(uint32_t value) ;

constexpr uint32_t __get_dataArrayCount() const;

 ::cordl_internals::intptr_t __declspec(property(get=__get_criterionArray, put=__set_criterionArray))  criterionArray;

constexpr void __set_criterionArray(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_criterionArray() const;

 uint32_t __declspec(property(get=__get_criterionArrayCount, put=__set_criterionArrayCount))  criterionArrayCount;

constexpr void __set_criterionArrayCount(uint32_t value) ;

constexpr uint32_t __get_criterionArrayCount() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::OculusInitParams
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13174))
// CS Name: Oculus.Platform.CAPI::OculusInitParams
struct CORDL_TYPE Oculus__Platform__CAPI__OculusInitParams : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sType", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "email", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "password", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "appId", ty: "uint64_t", modifiers: "", def_value: None }, CppParam { name: "uriPrefixOverride", ty: "::StringW", modifiers: "", def_value: None }]
constexpr Oculus__Platform__CAPI__OculusInitParams(int32_t sType, ::StringW email, ::StringW password, uint64_t appId, ::StringW uriPrefixOverride) noexcept;


                    constexpr Oculus__Platform__CAPI__OculusInitParams(Oculus__Platform__CAPI__OculusInitParams const&) = default;
                    constexpr Oculus__Platform__CAPI__OculusInitParams(Oculus__Platform__CAPI__OculusInitParams&&) = default;
                    constexpr Oculus__Platform__CAPI__OculusInitParams& operator=(Oculus__Platform__CAPI__OculusInitParams const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr Oculus__Platform__CAPI__OculusInitParams& operator=(Oculus__Platform__CAPI__OculusInitParams&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x28};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__CAPI__OculusInitParams(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_sType, put=__set_sType))  sType;

constexpr void __set_sType(int32_t value) ;

constexpr int32_t __get_sType() const;

 ::StringW __declspec(property(get=__get_email, put=__set_email))  email;

constexpr void __set_email(::StringW value) ;

constexpr ::StringW __get_email() const;

 ::StringW __declspec(property(get=__get_password, put=__set_password))  password;

constexpr void __set_password(::StringW value) ;

constexpr ::StringW __get_password() const;

 uint64_t __declspec(property(get=__get_appId, put=__set_appId))  appId;

constexpr void __set_appId(uint64_t value) ;

constexpr uint64_t __get_appId() const;

 ::StringW __declspec(property(get=__get_uriPrefixOverride, put=__set_uriPrefixOverride))  uriPrefixOverride;

constexpr void __set_uriPrefixOverride(::StringW value) ;

constexpr ::StringW __get_uriPrefixOverride() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: ::FilterCallback
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13175))
// CS Name: Oculus.Platform.CAPI::FilterCallback
class CORDL_TYPE Oculus__Platform__CAPI__FilterCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~Oculus__Platform__CAPI__FilterCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "Oculus__Platform__CAPI__FilterCallback", modifiers: " const&", def_value: None }]
constexpr Oculus__Platform__CAPI__FilterCallback(Oculus__Platform__CAPI__FilterCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Oculus__Platform__CAPI__FilterCallback", modifiers: "&&", def_value: None }]
constexpr Oculus__Platform__CAPI__FilterCallback(Oculus__Platform__CAPI__FilterCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Oculus__Platform__CAPI__FilterCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr Oculus__Platform__CAPI__FilterCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Oculus__Platform__CAPI__FilterCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Oculus__Platform__CAPI__FilterCallback& operator=(Oculus__Platform__CAPI__FilterCallback&& o) noexcept = default;
  constexpr Oculus__Platform__CAPI__FilterCallback& operator=(Oculus__Platform__CAPI__FilterCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit Oculus__Platform__CAPI__FilterCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x257a3fc size 0xd8 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x257a4d4 size 0x14 virtual true final false
 void Invoke(ByRef<::ArrayW<int16_t>> pcmData, ::cordl_internals::uintptr_t pcmDataLength, int32_t frequency, int32_t numChannels) ;

/// @brief Method BeginInvoke addr 0x257a4e8 size 0xd4 virtual true final false
 System::IAsyncResult BeginInvoke(ByRef<::ArrayW<int16_t>> pcmData, ::cordl_internals::uintptr_t pcmDataLength, int32_t frequency, int32_t numChannels, System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x257a5bc size 0xc virtual true final false
 void EndInvoke(System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
// Type: Oculus.Platform::CAPI
namespace Oculus::Platform {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13176))
// CS Name: Oculus.Platform.CAPI
class CORDL_TYPE CAPI : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using FilterCallback = Oculus::Platform::Oculus__Platform__CAPI__FilterCallback;

using OculusInitParams = Oculus::Platform::Oculus__Platform__CAPI__OculusInitParams;

using ovrMatchmakingCustomQueryData = Oculus::Platform::Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData;

using ovrMatchmakingCriterion = Oculus::Platform::Oculus__Platform__CAPI__ovrMatchmakingCriterion;

using ovrNetSyncVec3 = Oculus::Platform::Oculus__Platform__CAPI__ovrNetSyncVec3;

using ovrKeyValuePair = Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CAPI() = default;

// Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: " const&", def_value: None }]
constexpr CAPI(CAPI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CAPI", modifiers: "&&", def_value: None }]
constexpr CAPI(CAPI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CAPI(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CAPI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CAPI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CAPI& operator=(CAPI&& o) noexcept = default;
  constexpr CAPI& operator=(CAPI const& o) noexcept = default;
                


// Fields

/// @brief Field DLL_NAME offset 0
static constexpr ::ConstString  DLL_NAME{u"ovrplatformloader"};

static System::Text::UTF8Encoding __declspec(property(get=__get_nativeStringEncoding, put=__set_nativeStringEncoding))  nativeStringEncoding;

static void __set_nativeStringEncoding(System::Text::UTF8Encoding value) ;

static System::Text::UTF8Encoding __get_nativeStringEncoding() ;

/// @brief Field VoipFilterBufferSize offset 0
static constexpr int32_t  VoipFilterBufferSize{480};


// Methods

/// @brief Method ArrayOfStructsToIntPtr addr 0x2554864 size 0x198 virtual false final false
static ::cordl_internals::intptr_t ArrayOfStructsToIntPtr(System::Array ar) ;

/// @brief Method DictionaryToOVRKeyValuePairs addr 0x25549fc size 0x24c virtual false final false
static ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> DictionaryToOVRKeyValuePairs(System::Collections::Generic::Dictionary_2<Oculus::Platform::InitConfigOptions,bool> dict) ;

/// @brief Method DictionaryToOVRKeyValuePairs addr 0x2554c64 size 0x504 virtual false final false
static ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> DictionaryToOVRKeyValuePairs(System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> dict) ;

/// @brief Method IntPtrToByteArray addr 0x255519c size 0xbc virtual false final false
static ::ArrayW<uint8_t> IntPtrToByteArray(::cordl_internals::intptr_t data, uint64_t size) ;

/// @brief Method DataStoreFromNative addr 0x2555258 size 0x158 virtual false final false
static System::Collections::Generic::Dictionary_2<::StringW,::StringW> DataStoreFromNative(::cordl_internals::intptr_t pointer) ;

/// @brief Method StringFromNative addr 0x2555548 size 0x134 virtual false final false
static ::StringW StringFromNative(::cordl_internals::intptr_t pointer) ;

/// @brief Method GetNativeStringLengthNotIncludingNullTerminator addr 0x255567c size 0x74 virtual false final false
static int32_t GetNativeStringLengthNotIncludingNullTerminator(::cordl_internals::intptr_t pointer) ;

/// @brief Method DateTimeFromNative addr 0x25556f0 size 0x64 virtual false final false
static System::DateTime DateTimeFromNative(uint64_t seconds_since_the_one_true_epoch) ;

/// @brief Method DateTimeToNative addr 0x2555754 size 0xe8 virtual false final false
static uint64_t DateTimeToNative(System::DateTime dt) ;

/// @brief Method BlobFromNative addr 0x255583c size 0xd8 virtual false final false
static ::ArrayW<uint8_t> BlobFromNative(uint32_t size, ::cordl_internals::intptr_t pointer) ;

/// @brief Method FiledataFromNative addr 0x2555914 size 0xa0 virtual false final false
static ::ArrayW<uint8_t> FiledataFromNative(uint32_t size, ::cordl_internals::intptr_t pointer) ;

/// @brief Method StringToNative addr 0x25559b4 size 0x180 virtual false final false
static ::cordl_internals::intptr_t StringToNative(::StringW s) ;

/// @brief Method ovr_UnityInitWrapper addr 0x2552e2c size 0x98 virtual false final false
static bool ovr_UnityInitWrapper(::StringW appId) ;

/// @brief Method ovr_UnityInitGlobals addr 0x2555b34 size 0x7c virtual false final false
static void ovr_UnityInitGlobals(::cordl_internals::intptr_t loggingCB) ;

/// @brief Method ovr_UnityInitWrapperAsynchronous addr 0x2552fcc size 0x94 virtual false final false
static uint64_t ovr_UnityInitWrapperAsynchronous(::StringW appId) ;

/// @brief Method ovr_UnityInitWrapperStandalone addr 0x2555bb0 size 0xa0 virtual false final false
static bool ovr_UnityInitWrapperStandalone(::StringW accessToken, ::cordl_internals::intptr_t loggingCB) ;

/// @brief Method ovr_Platform_InitializeStandaloneOculus addr 0x2555c50 size 0xe4 virtual false final false
static uint64_t ovr_Platform_InitializeStandaloneOculus(ByRef<Oculus::Platform::Oculus__Platform__CAPI__OculusInitParams> init) ;

/// @brief Method ovr_PlatformInitializeWithAccessToken addr 0x2555d34 size 0xa0 virtual false final false
static uint64_t ovr_PlatformInitializeWithAccessToken(uint64_t appId, ::StringW accessToken) ;

/// @brief Method ovr_PlatformInitializeWithAccessTokenAndOptions addr 0x2555dd4 size 0x1a8 virtual false final false
static uint64_t ovr_PlatformInitializeWithAccessTokenAndOptions(uint64_t appId, ::StringW accessToken, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> configOptions, ::cordl_internals::uintptr_t numOptions) ;

/// @brief Method ovr_UnityInitWrapperWindows addr 0x2555f7c size 0xa0 virtual false final false
static bool ovr_UnityInitWrapperWindows(::StringW appId, ::cordl_internals::intptr_t loggingCB) ;

/// @brief Method ovr_UnityInitWrapperWindowsAsynchronous addr 0x255601c size 0x9c virtual false final false
static uint64_t ovr_UnityInitWrapperWindowsAsynchronous(::StringW appId, ::cordl_internals::intptr_t loggingCB) ;

/// @brief Method ovr_SetDeveloperAccessToken addr 0x25560b8 size 0x98 virtual false final false
static bool ovr_SetDeveloperAccessToken(::StringW accessToken) ;

/// @brief Method ovr_GetLoggedInUserLocale addr 0x2556150 size 0x50 virtual false final false
static ::StringW ovr_GetLoggedInUserLocale() ;

/// @brief Method ovr_GetLoggedInUserLocale_Native addr 0x25561a0 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_GetLoggedInUserLocale_Native() ;

/// @brief Method ovr_PopMessage addr 0x2556208 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_PopMessage() ;

/// @brief Method ovr_FreeMessage addr 0x2556270 size 0x7c virtual false final false
static void ovr_FreeMessage(::cordl_internals::intptr_t message) ;

/// @brief Method ovr_Voip_CreateEncoder addr 0x25562ec size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_Voip_CreateEncoder() ;

/// @brief Method ovr_Voip_DestroyEncoder addr 0x2556354 size 0x7c virtual false final false
static void ovr_Voip_DestroyEncoder(::cordl_internals::intptr_t encoder) ;

/// @brief Method ovr_Voip_CreateDecoder addr 0x25563d0 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_Voip_CreateDecoder() ;

/// @brief Method ovr_Voip_DestroyDecoder addr 0x2556438 size 0x7c virtual false final false
static void ovr_Voip_DestroyDecoder(::cordl_internals::intptr_t decoder) ;

/// @brief Method ovr_VoipDecoder_Decode addr 0x25564b4 size 0x9c virtual false final false
static void ovr_VoipDecoder_Decode(::cordl_internals::intptr_t obj, ::ArrayW<uint8_t> compressedData, uint64_t compressedSize) ;

/// @brief Method ovr_Microphone_Create addr 0x2556550 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_Microphone_Create() ;

/// @brief Method ovr_Microphone_Destroy addr 0x25565b8 size 0x7c virtual false final false
static void ovr_Microphone_Destroy(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Voip_SetSystemVoipPassthrough addr 0x2556634 size 0x7c virtual false final false
static void ovr_Voip_SetSystemVoipPassthrough(bool passthrough) ;

/// @brief Method ovr_Voip_SetSystemVoipMicrophoneMuted addr 0x25566b0 size 0x7c virtual false final false
static void ovr_Voip_SetSystemVoipMicrophoneMuted(Oculus::Platform::VoipMuteState muted) ;

/// @brief Method ovr_UnityResetTestPlatform addr 0x255672c size 0x64 virtual false final false
static void ovr_UnityResetTestPlatform() ;

/// @brief Method ovr_HTTP_GetWithMessageType addr 0x2556790 size 0x9c virtual false final false
static uint64_t ovr_HTTP_GetWithMessageType(::StringW url, int32_t messageType) ;

/// @brief Method ovr_CrashApplication addr 0x255682c size 0x64 virtual false final false
static void ovr_CrashApplication() ;

/// @brief Method ovr_Voip_SetMicrophoneFilterCallback addr 0x2556890 size 0x80 virtual false final false
static void ovr_Voip_SetMicrophoneFilterCallback(Oculus::Platform::Oculus__Platform__CAPI__FilterCallback cb) ;

/// @brief Method ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer addr 0x2556910 size 0x88 virtual false final false
static void ovr_Voip_SetMicrophoneFilterCallbackWithFixedSizeBuffer(Oculus::Platform::Oculus__Platform__CAPI__FilterCallback cb, ::cordl_internals::uintptr_t bufferSizeElements) ;

/// @brief Method LogNewUnifiedEvent addr 0x2556998 size 0xa8 virtual false final false
static void LogNewUnifiedEvent(Oculus::Platform::LogEventName eventName, System::Collections::Generic::Dictionary_2<::StringW,::StringW> values) ;

/// @brief Method LogNewEvent addr 0x2556a40 size 0x354 virtual false final false
static void LogNewEvent(::StringW eventName, System::Collections::Generic::Dictionary_2<::StringW,::StringW> values) ;

/// @brief Method ovr_Log_NewEvent addr 0x2556d94 size 0x9c virtual false final false
static void ovr_Log_NewEvent(::cordl_internals::intptr_t eventName, ::ArrayW<::cordl_internals::intptr_t> values, ::cordl_internals::uintptr_t length) ;

/// @brief Method ovr_ApplicationLifecycle_GetLaunchDetails addr 0x2556e30 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationLifecycle_GetLaunchDetails() ;

/// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult addr 0x2556e98 size 0x9c virtual false final false
static void ovr_ApplicationLifecycle_LogDeeplinkResult(::StringW trackingID, Oculus::Platform::LaunchResult result) ;

/// @brief Method ovr_ApplicationLifecycle_LogDeeplinkResult_Native addr 0x2556f34 size 0x84 virtual false final false
static void ovr_ApplicationLifecycle_LogDeeplinkResult_Native(::cordl_internals::intptr_t trackingID, Oculus::Platform::LaunchResult result) ;

/// @brief Method ovr_HTTP_StartTransfer addr 0x2556fb8 size 0xec virtual false final false
static uint64_t ovr_HTTP_StartTransfer(::StringW url, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> headers) ;

/// @brief Method ovr_HTTP_StartTransfer_Native addr 0x25570a4 size 0x1a4 virtual false final false
static uint64_t ovr_HTTP_StartTransfer_Native(::cordl_internals::intptr_t url, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> headers, ::cordl_internals::uintptr_t numItems) ;

/// @brief Method ovr_HTTP_Write addr 0x2557248 size 0xa4 virtual false final false
static bool ovr_HTTP_Write(uint64_t transferId, ::ArrayW<uint8_t> bytes, ::cordl_internals::uintptr_t length) ;

/// @brief Method ovr_HTTP_WriteEOM addr 0x25572ec size 0x78 virtual false final false
static void ovr_HTTP_WriteEOM(uint64_t transferId) ;

/// @brief Method ovr_Message_GetStringForJavascript addr 0x2557364 size 0x58 virtual false final false
static ::StringW ovr_Message_GetStringForJavascript(::cordl_internals::intptr_t message) ;

/// @brief Method ovr_Message_GetStringForJavascript_Native addr 0x25573bc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetStringForJavascript_Native(::cordl_internals::intptr_t message) ;

/// @brief Method ovr_NetSync_GetAmbisonicFloatPCM addr 0x2557438 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetAmbisonicFloatPCM(int64_t connection_id, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInt16PCM addr 0x25574d4 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetAmbisonicInt16PCM(int64_t connection_id, ::ArrayW<int16_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInterleavedFloatPCM addr 0x2557570 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetAmbisonicInterleavedFloatPCM(int64_t connection_id, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetAmbisonicInterleavedInt16PCM addr 0x255760c size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetAmbisonicInterleavedInt16PCM(int64_t connection_id, ::ArrayW<int16_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetListenerPosition addr 0x25576a8 size 0x9c virtual false final false
static bool ovr_NetSync_GetListenerPosition(int64_t connection_id, uint64_t sessionId, ByRef<Oculus::Platform::Oculus__Platform__CAPI__ovrNetSyncVec3> position) ;

/// @brief Method ovr_NetSync_GetMonostreamFloatPCM addr 0x2557744 size 0xa4 virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetMonostreamFloatPCM(int64_t connection_id, uint64_t sessionId, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetMonostreamInt16PCM addr 0x25577e8 size 0xa4 virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetMonostreamInt16PCM(int64_t connection_id, uint64_t session_id, ::ArrayW<int16_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_NetSync_GetPcmBufferMaxSamples addr 0x255788c size 0x68 virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSync_GetPcmBufferMaxSamples() ;

/// @brief Method ovr_NetSync_GetVoipAmplitude addr 0x25578f4 size 0x9c virtual false final false
static bool ovr_NetSync_GetVoipAmplitude(int64_t connection_id, uint64_t sessionId, ByRef<float_t> amplitude) ;

/// @brief Method ovr_NetSync_SetListenerPosition addr 0x2557990 size 0x84 virtual false final false
static void ovr_NetSync_SetListenerPosition(int64_t connection_id, ByRef<Oculus::Platform::Oculus__Platform__CAPI__ovrNetSyncVec3> position) ;

/// @brief Method ovr_Net_Accept addr 0x2557a14 size 0x7c virtual false final false
static void ovr_Net_Accept(uint64_t peerID) ;

/// @brief Method ovr_Net_AcceptForCurrentRoom addr 0x2557a90 size 0x70 virtual false final false
static bool ovr_Net_AcceptForCurrentRoom() ;

/// @brief Method ovr_Net_Close addr 0x2557b00 size 0x7c virtual false final false
static void ovr_Net_Close(uint64_t peerID) ;

/// @brief Method ovr_Net_CloseForCurrentRoom addr 0x2557b7c size 0x64 virtual false final false
static void ovr_Net_CloseForCurrentRoom() ;

/// @brief Method ovr_Net_Connect addr 0x2557be0 size 0x7c virtual false final false
static void ovr_Net_Connect(uint64_t peerID) ;

/// @brief Method ovr_Net_IsConnected addr 0x2557c5c size 0x84 virtual false final false
static bool ovr_Net_IsConnected(uint64_t peerID) ;

/// @brief Method ovr_Net_Ping addr 0x2557ce0 size 0x7c virtual false final false
static uint64_t ovr_Net_Ping(uint64_t peerID) ;

/// @brief Method ovr_Net_ReadPacket addr 0x2557d5c size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_Net_ReadPacket() ;

/// @brief Method ovr_Net_SendPacket addr 0x2557dc4 size 0xac virtual false final false
static bool ovr_Net_SendPacket(uint64_t userID, ::cordl_internals::uintptr_t length, ::ArrayW<uint8_t> bytes, Oculus::Platform::SendPolicy policy) ;

/// @brief Method ovr_Net_SendPacketToCurrentRoom addr 0x2557e70 size 0xa4 virtual false final false
static bool ovr_Net_SendPacketToCurrentRoom(::cordl_internals::uintptr_t length, ::ArrayW<uint8_t> bytes, Oculus::Platform::SendPolicy policy) ;

/// @brief Method ovr_Party_PluginGetSharedMemHandle addr 0x2557f14 size 0x68 virtual false final false
static int32_t ovr_Party_PluginGetSharedMemHandle() ;

/// @brief Method ovr_Party_PluginGetVoipMicrophoneMuted addr 0x2557f7c size 0x68 virtual false final false
static Oculus::Platform::VoipMuteState ovr_Party_PluginGetVoipMicrophoneMuted() ;

/// @brief Method ovr_Party_PluginGetVoipPassthrough addr 0x2557fe4 size 0x70 virtual false final false
static bool ovr_Party_PluginGetVoipPassthrough() ;

/// @brief Method ovr_Party_PluginGetVoipStatus addr 0x2558054 size 0x68 virtual false final false
static Oculus::Platform::SystemVoipStatus ovr_Party_PluginGetVoipStatus() ;

/// @brief Method ovr_Voip_Accept addr 0x25580bc size 0x7c virtual false final false
static void ovr_Voip_Accept(uint64_t userID) ;

/// @brief Method ovr_Voip_GetIsConnectionUsingDtx addr 0x2558138 size 0x7c virtual false final false
static Oculus::Platform::VoipDtxState ovr_Voip_GetIsConnectionUsingDtx(uint64_t peerID) ;

/// @brief Method ovr_Voip_GetLocalBitrate addr 0x25581b4 size 0x7c virtual false final false
static Oculus::Platform::VoipBitrate ovr_Voip_GetLocalBitrate(uint64_t peerID) ;

/// @brief Method ovr_Voip_GetOutputBufferMaxSize addr 0x2558230 size 0x68 virtual false final false
static ::cordl_internals::uintptr_t ovr_Voip_GetOutputBufferMaxSize() ;

/// @brief Method ovr_Voip_GetPCM addr 0x2558298 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_Voip_GetPCM(uint64_t senderID, ::ArrayW<int16_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_Voip_GetPCMFloat addr 0x2558334 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_Voip_GetPCMFloat(uint64_t senderID, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_Voip_GetPCMSize addr 0x25583d0 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_Voip_GetPCMSize(uint64_t senderID) ;

/// @brief Method ovr_Voip_GetPCMWithTimestamp addr 0x255844c size 0xac virtual false final false
static ::cordl_internals::uintptr_t ovr_Voip_GetPCMWithTimestamp(uint64_t senderID, ::ArrayW<int16_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements, ::ArrayW<uint32_t> timestamp) ;

/// @brief Method ovr_Voip_GetPCMWithTimestampFloat addr 0x25584f8 size 0xac virtual false final false
static ::cordl_internals::uintptr_t ovr_Voip_GetPCMWithTimestampFloat(uint64_t senderID, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements, ::ArrayW<uint32_t> timestamp) ;

/// @brief Method ovr_Voip_GetRemoteBitrate addr 0x25585a4 size 0x7c virtual false final false
static Oculus::Platform::VoipBitrate ovr_Voip_GetRemoteBitrate(uint64_t peerID) ;

/// @brief Method ovr_Voip_GetSyncTimestamp addr 0x2558620 size 0x7c virtual false final false
static uint32_t ovr_Voip_GetSyncTimestamp(uint64_t userID) ;

/// @brief Method ovr_Voip_GetSyncTimestampDifference addr 0x255869c size 0x84 virtual false final false
static int64_t ovr_Voip_GetSyncTimestampDifference(uint32_t lhs, uint32_t rhs) ;

/// @brief Method ovr_Voip_GetSystemVoipMicrophoneMuted addr 0x2558720 size 0x68 virtual false final false
static Oculus::Platform::VoipMuteState ovr_Voip_GetSystemVoipMicrophoneMuted() ;

/// @brief Method ovr_Voip_GetSystemVoipStatus addr 0x2558788 size 0x68 virtual false final false
static Oculus::Platform::SystemVoipStatus ovr_Voip_GetSystemVoipStatus() ;

/// @brief Method ovr_Voip_SetMicrophoneMuted addr 0x25587f0 size 0x7c virtual false final false
static void ovr_Voip_SetMicrophoneMuted(Oculus::Platform::VoipMuteState state) ;

/// @brief Method ovr_Voip_SetNewConnectionOptions addr 0x255886c size 0x7c virtual false final false
static void ovr_Voip_SetNewConnectionOptions(::cordl_internals::intptr_t voipOptions) ;

/// @brief Method ovr_Voip_SetOutputSampleRate addr 0x25588e8 size 0x7c virtual false final false
static void ovr_Voip_SetOutputSampleRate(Oculus::Platform::VoipSampleRate rate) ;

/// @brief Method ovr_Voip_Start addr 0x2558964 size 0x7c virtual false final false
static void ovr_Voip_Start(uint64_t userID) ;

/// @brief Method ovr_Voip_Stop addr 0x25589e0 size 0x7c virtual false final false
static void ovr_Voip_Stop(uint64_t userID) ;

/// @brief Method ovr_AbuseReport_LaunchAdvancedReportFlow addr 0x2558a5c size 0x84 virtual false final false
static uint64_t ovr_AbuseReport_LaunchAdvancedReportFlow(uint64_t content_id, ::cordl_internals::intptr_t abuse_report_options) ;

/// @brief Method ovr_AbuseReport_ReportRequestHandled addr 0x2558ae0 size 0x7c virtual false final false
static uint64_t ovr_AbuseReport_ReportRequestHandled(Oculus::Platform::ReportRequestResponse response) ;

/// @brief Method ovr_Achievements_AddCount addr 0x2558b5c size 0xac virtual false final false
static uint64_t ovr_Achievements_AddCount(::StringW name, uint64_t count) ;

/// @brief Method ovr_Achievements_AddCount_Native addr 0x2558c08 size 0x84 virtual false final false
static uint64_t ovr_Achievements_AddCount_Native(::cordl_internals::intptr_t name, uint64_t count) ;

/// @brief Method ovr_Achievements_AddFields addr 0x2558c8c size 0xc8 virtual false final false
static uint64_t ovr_Achievements_AddFields(::StringW name, ::StringW fields) ;

/// @brief Method ovr_Achievements_AddFields_Native addr 0x2558d54 size 0x84 virtual false final false
static uint64_t ovr_Achievements_AddFields_Native(::cordl_internals::intptr_t name, ::cordl_internals::intptr_t fields) ;

/// @brief Method ovr_Achievements_GetAllDefinitions addr 0x2558dd8 size 0x68 virtual false final false
static uint64_t ovr_Achievements_GetAllDefinitions() ;

/// @brief Method ovr_Achievements_GetAllProgress addr 0x2558e40 size 0x68 virtual false final false
static uint64_t ovr_Achievements_GetAllProgress() ;

/// @brief Method ovr_Achievements_GetDefinitionsByName addr 0x2558ea8 size 0x148 virtual false final false
static uint64_t ovr_Achievements_GetDefinitionsByName(::ArrayW<::StringW> names, int32_t count) ;

/// @brief Method ovr_Achievements_GetProgressByName addr 0x2558ff0 size 0x148 virtual false final false
static uint64_t ovr_Achievements_GetProgressByName(::ArrayW<::StringW> names, int32_t count) ;

/// @brief Method ovr_Achievements_Unlock addr 0x2559138 size 0x9c virtual false final false
static uint64_t ovr_Achievements_Unlock(::StringW name) ;

/// @brief Method ovr_Achievements_Unlock_Native addr 0x25591d4 size 0x7c virtual false final false
static uint64_t ovr_Achievements_Unlock_Native(::cordl_internals::intptr_t name) ;

/// @brief Method ovr_Application_ExecuteCoordinatedLaunch addr 0x2559250 size 0x84 virtual false final false
static uint64_t ovr_Application_ExecuteCoordinatedLaunch(uint64_t appID, uint64_t roomID) ;

/// @brief Method ovr_Application_GetInstalledApplications addr 0x25592d4 size 0x68 virtual false final false
static uint64_t ovr_Application_GetInstalledApplications() ;

/// @brief Method ovr_Application_GetVersion addr 0x255933c size 0x68 virtual false final false
static uint64_t ovr_Application_GetVersion() ;

/// @brief Method ovr_Application_LaunchOtherApp addr 0x25593a4 size 0x84 virtual false final false
static uint64_t ovr_Application_LaunchOtherApp(uint64_t appID, ::cordl_internals::intptr_t deeplink_options) ;

/// @brief Method ovr_ApplicationLifecycle_GetRegisteredPIDs addr 0x2559428 size 0x68 virtual false final false
static uint64_t ovr_ApplicationLifecycle_GetRegisteredPIDs() ;

/// @brief Method ovr_ApplicationLifecycle_GetSessionKey addr 0x2559490 size 0x68 virtual false final false
static uint64_t ovr_ApplicationLifecycle_GetSessionKey() ;

/// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey addr 0x25594f8 size 0x9c virtual false final false
static uint64_t ovr_ApplicationLifecycle_RegisterSessionKey(::StringW sessionKey) ;

/// @brief Method ovr_ApplicationLifecycle_RegisterSessionKey_Native addr 0x2559594 size 0x7c virtual false final false
static uint64_t ovr_ApplicationLifecycle_RegisterSessionKey_Native(::cordl_internals::intptr_t sessionKey) ;

/// @brief Method ovr_AssetFile_Delete addr 0x2559610 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_Delete(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_DeleteById addr 0x255968c size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DeleteById(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_DeleteByName addr 0x2559708 size 0x9c virtual false final false
static uint64_t ovr_AssetFile_DeleteByName(::StringW assetFileName) ;

/// @brief Method ovr_AssetFile_DeleteByName_Native addr 0x25597a4 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DeleteByName_Native(::cordl_internals::intptr_t assetFileName) ;

/// @brief Method ovr_AssetFile_Download addr 0x2559820 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_Download(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadById addr 0x255989c size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DownloadById(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadByName addr 0x2559918 size 0x9c virtual false final false
static uint64_t ovr_AssetFile_DownloadByName(::StringW assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadByName_Native addr 0x25599b4 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DownloadByName_Native(::cordl_internals::intptr_t assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadCancel addr 0x2559a30 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DownloadCancel(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadCancelById addr 0x2559aac size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DownloadCancelById(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_DownloadCancelByName addr 0x2559b28 size 0x9c virtual false final false
static uint64_t ovr_AssetFile_DownloadCancelByName(::StringW assetFileName) ;

/// @brief Method ovr_AssetFile_DownloadCancelByName_Native addr 0x2559bc4 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_DownloadCancelByName_Native(::cordl_internals::intptr_t assetFileName) ;

/// @brief Method ovr_AssetFile_GetList addr 0x2559c40 size 0x68 virtual false final false
static uint64_t ovr_AssetFile_GetList() ;

/// @brief Method ovr_AssetFile_Status addr 0x2559ca8 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_Status(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_StatusById addr 0x2559d24 size 0x7c virtual false final false
static uint64_t ovr_AssetFile_StatusById(uint64_t assetFileID) ;

/// @brief Method ovr_AssetFile_StatusByName addr 0x2559da0 size 0x9c virtual false final false
static uint64_t ovr_AssetFile_StatusByName(::StringW assetFileName) ;

/// @brief Method ovr_AssetFile_StatusByName_Native addr 0x2559e3c size 0x7c virtual false final false
static uint64_t ovr_AssetFile_StatusByName_Native(::cordl_internals::intptr_t assetFileName) ;

/// @brief Method ovr_Avatar_LaunchAvatarEditor addr 0x2559eb8 size 0x7c virtual false final false
static uint64_t ovr_Avatar_LaunchAvatarEditor(::cordl_internals::intptr_t options) ;

/// @brief Method ovr_Avatar_UpdateMetaData addr 0x2559f34 size 0xc8 virtual false final false
static uint64_t ovr_Avatar_UpdateMetaData(::StringW avatarMetaData, ::StringW imageFilePath) ;

/// @brief Method ovr_Avatar_UpdateMetaData_Native addr 0x2559ffc size 0x84 virtual false final false
static uint64_t ovr_Avatar_UpdateMetaData_Native(::cordl_internals::intptr_t avatarMetaData, ::cordl_internals::intptr_t imageFilePath) ;

/// @brief Method ovr_Cal_FinalizeApplication addr 0x255a080 size 0xa4 virtual false final false
static uint64_t ovr_Cal_FinalizeApplication(uint64_t groupingObject, ::ArrayW<uint64_t> userIDs, int32_t numUserIDs, uint64_t finalized_application_ID) ;

/// @brief Method ovr_Cal_GetSuggestedApplications addr 0x255a124 size 0x9c virtual false final false
static uint64_t ovr_Cal_GetSuggestedApplications(uint64_t groupingObject, ::ArrayW<uint64_t> userIDs, int32_t numUserIDs) ;

/// @brief Method ovr_Cal_ProposeApplication addr 0x255a1c0 size 0xa4 virtual false final false
static uint64_t ovr_Cal_ProposeApplication(uint64_t groupingObject, ::ArrayW<uint64_t> userIDs, int32_t numUserIDs, uint64_t proposed_application_ID) ;

/// @brief Method ovr_Challenges_Create addr 0x255a264 size 0xac virtual false final false
static uint64_t ovr_Challenges_Create(::StringW leaderboardName, ::cordl_internals::intptr_t challengeOptions) ;

/// @brief Method ovr_Challenges_Create_Native addr 0x255a310 size 0x84 virtual false final false
static uint64_t ovr_Challenges_Create_Native(::cordl_internals::intptr_t leaderboardName, ::cordl_internals::intptr_t challengeOptions) ;

/// @brief Method ovr_Challenges_DeclineInvite addr 0x255a394 size 0x7c virtual false final false
static uint64_t ovr_Challenges_DeclineInvite(uint64_t challengeID) ;

/// @brief Method ovr_Challenges_Delete addr 0x255a410 size 0x7c virtual false final false
static uint64_t ovr_Challenges_Delete(uint64_t challengeID) ;

/// @brief Method ovr_Challenges_Get addr 0x255a48c size 0x7c virtual false final false
static uint64_t ovr_Challenges_Get(uint64_t challengeID) ;

/// @brief Method ovr_Challenges_GetEntries addr 0x255a508 size 0x9c virtual false final false
static uint64_t ovr_Challenges_GetEntries(uint64_t challengeID, int32_t limit, Oculus::Platform::LeaderboardFilterType filter, Oculus::Platform::LeaderboardStartAt startAt) ;

/// @brief Method ovr_Challenges_GetEntriesAfterRank addr 0x255a5a4 size 0x94 virtual false final false
static uint64_t ovr_Challenges_GetEntriesAfterRank(uint64_t challengeID, int32_t limit, uint64_t afterRank) ;

/// @brief Method ovr_Challenges_GetEntriesByIds addr 0x255a638 size 0xb4 virtual false final false
static uint64_t ovr_Challenges_GetEntriesByIds(uint64_t challengeID, int32_t limit, Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t> userIDs, uint32_t userIDLength) ;

/// @brief Method ovr_Challenges_GetList addr 0x255a6ec size 0x84 virtual false final false
static uint64_t ovr_Challenges_GetList(::cordl_internals::intptr_t challengeOptions, int32_t limit) ;

/// @brief Method ovr_Challenges_GetNextChallenges addr 0x255a770 size 0x7c virtual false final false
static uint64_t ovr_Challenges_GetNextChallenges(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_Challenges_GetNextEntries addr 0x255a7ec size 0x7c virtual false final false
static uint64_t ovr_Challenges_GetNextEntries(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_Challenges_GetPreviousChallenges addr 0x255a868 size 0x7c virtual false final false
static uint64_t ovr_Challenges_GetPreviousChallenges(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_Challenges_GetPreviousEntries addr 0x255a8e4 size 0x7c virtual false final false
static uint64_t ovr_Challenges_GetPreviousEntries(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_Challenges_Join addr 0x255a960 size 0x7c virtual false final false
static uint64_t ovr_Challenges_Join(uint64_t challengeID) ;

/// @brief Method ovr_Challenges_Leave addr 0x255a9dc size 0x7c virtual false final false
static uint64_t ovr_Challenges_Leave(uint64_t challengeID) ;

/// @brief Method ovr_Challenges_UpdateInfo addr 0x255aa58 size 0x84 virtual false final false
static uint64_t ovr_Challenges_UpdateInfo(uint64_t challengeID, ::cordl_internals::intptr_t challengeOptions) ;

/// @brief Method ovr_CloudStorage_Delete addr 0x255aadc size 0xc8 virtual false final false
static uint64_t ovr_CloudStorage_Delete(::StringW bucket, ::StringW key) ;

/// @brief Method ovr_CloudStorage_Delete_Native addr 0x255aba4 size 0x84 virtual false final false
static uint64_t ovr_CloudStorage_Delete_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_CloudStorage_Load addr 0x255ac28 size 0xc8 virtual false final false
static uint64_t ovr_CloudStorage_Load(::StringW bucket, ::StringW key) ;

/// @brief Method ovr_CloudStorage_Load_Native addr 0x255acf0 size 0x84 virtual false final false
static uint64_t ovr_CloudStorage_Load_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_CloudStorage_LoadBucketMetadata addr 0x255ad74 size 0x9c virtual false final false
static uint64_t ovr_CloudStorage_LoadBucketMetadata(::StringW bucket) ;

/// @brief Method ovr_CloudStorage_LoadBucketMetadata_Native addr 0x255ae10 size 0x7c virtual false final false
static uint64_t ovr_CloudStorage_LoadBucketMetadata_Native(::cordl_internals::intptr_t bucket) ;

/// @brief Method ovr_CloudStorage_LoadConflictMetadata addr 0x255ae8c size 0xc8 virtual false final false
static uint64_t ovr_CloudStorage_LoadConflictMetadata(::StringW bucket, ::StringW key) ;

/// @brief Method ovr_CloudStorage_LoadConflictMetadata_Native addr 0x255af54 size 0x84 virtual false final false
static uint64_t ovr_CloudStorage_LoadConflictMetadata_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_CloudStorage_LoadHandle addr 0x255afd8 size 0x9c virtual false final false
static uint64_t ovr_CloudStorage_LoadHandle(::StringW handle) ;

/// @brief Method ovr_CloudStorage_LoadHandle_Native addr 0x255b074 size 0x7c virtual false final false
static uint64_t ovr_CloudStorage_LoadHandle_Native(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_CloudStorage_LoadMetadata addr 0x255b0f0 size 0xc8 virtual false final false
static uint64_t ovr_CloudStorage_LoadMetadata(::StringW bucket, ::StringW key) ;

/// @brief Method ovr_CloudStorage_LoadMetadata_Native addr 0x255b1b8 size 0x84 virtual false final false
static uint64_t ovr_CloudStorage_LoadMetadata_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_CloudStorage_ResolveKeepLocal addr 0x255b23c size 0xe8 virtual false final false
static uint64_t ovr_CloudStorage_ResolveKeepLocal(::StringW bucket, ::StringW key, ::StringW remoteHandle) ;

/// @brief Method ovr_CloudStorage_ResolveKeepLocal_Native addr 0x255b324 size 0x94 virtual false final false
static uint64_t ovr_CloudStorage_ResolveKeepLocal_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t remoteHandle) ;

/// @brief Method ovr_CloudStorage_ResolveKeepRemote addr 0x255b3b8 size 0xe8 virtual false final false
static uint64_t ovr_CloudStorage_ResolveKeepRemote(::StringW bucket, ::StringW key, ::StringW remoteHandle) ;

/// @brief Method ovr_CloudStorage_ResolveKeepRemote_Native addr 0x255b4a0 size 0x94 virtual false final false
static uint64_t ovr_CloudStorage_ResolveKeepRemote_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t remoteHandle) ;

/// @brief Method ovr_CloudStorage_Save addr 0x255b534 size 0x110 virtual false final false
static uint64_t ovr_CloudStorage_Save(::StringW bucket, ::StringW key, ::ArrayW<uint8_t> data, uint32_t dataSize, int64_t counter, ::StringW extraData) ;

/// @brief Method ovr_CloudStorage_Save_Native addr 0x255b644 size 0xbc virtual false final false
static uint64_t ovr_CloudStorage_Save_Native(::cordl_internals::intptr_t bucket, ::cordl_internals::intptr_t key, ::ArrayW<uint8_t> data, uint32_t dataSize, int64_t counter, ::cordl_internals::intptr_t extraData) ;

/// @brief Method ovr_CloudStorage2_GetUserDirectoryPath addr 0x255b700 size 0x68 virtual false final false
static uint64_t ovr_CloudStorage2_GetUserDirectoryPath() ;

/// @brief Method ovr_Colocation_GetCurrentMapUuid addr 0x255b768 size 0x68 virtual false final false
static uint64_t ovr_Colocation_GetCurrentMapUuid() ;

/// @brief Method ovr_Colocation_RequestMap addr 0x255b7d0 size 0x9c virtual false final false
static uint64_t ovr_Colocation_RequestMap(::StringW uuid) ;

/// @brief Method ovr_Colocation_RequestMap_Native addr 0x255b86c size 0x7c virtual false final false
static uint64_t ovr_Colocation_RequestMap_Native(::cordl_internals::intptr_t uuid) ;

/// @brief Method ovr_Colocation_ShareMap addr 0x255b8e8 size 0x9c virtual false final false
static uint64_t ovr_Colocation_ShareMap(::StringW uuid) ;

/// @brief Method ovr_Colocation_ShareMap_Native addr 0x255b984 size 0x7c virtual false final false
static uint64_t ovr_Colocation_ShareMap_Native(::cordl_internals::intptr_t uuid) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken addr 0x255ba00 size 0x9c virtual false final false
static uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken(::StringW challenge_nonce) ;

/// @brief Method ovr_DeviceApplicationIntegrity_GetAttestationToken_Native addr 0x255ba9c size 0x7c virtual false final false
static uint64_t ovr_DeviceApplicationIntegrity_GetAttestationToken_Native(::cordl_internals::intptr_t challenge_nonce) ;

/// @brief Method ovr_Entitlement_GetIsViewerEntitled addr 0x255bb18 size 0x68 virtual false final false
static uint64_t ovr_Entitlement_GetIsViewerEntitled() ;

/// @brief Method ovr_GraphAPI_Get addr 0x255bb80 size 0x9c virtual false final false
static uint64_t ovr_GraphAPI_Get(::StringW url) ;

/// @brief Method ovr_GraphAPI_Get_Native addr 0x255bc1c size 0x7c virtual false final false
static uint64_t ovr_GraphAPI_Get_Native(::cordl_internals::intptr_t url) ;

/// @brief Method ovr_GraphAPI_Post addr 0x255bc98 size 0x9c virtual false final false
static uint64_t ovr_GraphAPI_Post(::StringW url) ;

/// @brief Method ovr_GraphAPI_Post_Native addr 0x255bd34 size 0x78 virtual false final false
static uint64_t ovr_GraphAPI_Post_Native(::cordl_internals::intptr_t url) ;

/// @brief Method ovr_GroupPresence_Clear addr 0x255bdac size 0x68 virtual false final false
static uint64_t ovr_GroupPresence_Clear() ;

/// @brief Method ovr_GroupPresence_GetInvitableUsers addr 0x255be14 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_GetInvitableUsers(::cordl_internals::intptr_t options) ;

/// @brief Method ovr_GroupPresence_GetSentInvites addr 0x255be90 size 0x68 virtual false final false
static uint64_t ovr_GroupPresence_GetSentInvites() ;

/// @brief Method ovr_GroupPresence_LaunchInvitePanel addr 0x255bef8 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_LaunchInvitePanel(::cordl_internals::intptr_t options) ;

/// @brief Method ovr_GroupPresence_LaunchMultiplayerErrorDialog addr 0x255bf74 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_LaunchMultiplayerErrorDialog(::cordl_internals::intptr_t options) ;

/// @brief Method ovr_GroupPresence_LaunchRejoinDialog addr 0x255bff0 size 0xe8 virtual false final false
static uint64_t ovr_GroupPresence_LaunchRejoinDialog(::StringW lobby_session_id, ::StringW match_session_id, ::StringW destination_api_name) ;

/// @brief Method ovr_GroupPresence_LaunchRejoinDialog_Native addr 0x255c0d8 size 0x94 virtual false final false
static uint64_t ovr_GroupPresence_LaunchRejoinDialog_Native(::cordl_internals::intptr_t lobby_session_id, ::cordl_internals::intptr_t match_session_id, ::cordl_internals::intptr_t destination_api_name) ;

/// @brief Method ovr_GroupPresence_LaunchRosterPanel addr 0x255c16c size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_LaunchRosterPanel(::cordl_internals::intptr_t options) ;

/// @brief Method ovr_GroupPresence_SendInvites addr 0x255c1e8 size 0x8c virtual false final false
static uint64_t ovr_GroupPresence_SendInvites(::ArrayW<uint64_t> userIDs, uint32_t userIDLength) ;

/// @brief Method ovr_GroupPresence_Set addr 0x255c274 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_Set(::cordl_internals::intptr_t groupPresenceOptions) ;

/// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride addr 0x255c2f0 size 0x9c virtual false final false
static uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride(::StringW deeplink_message) ;

/// @brief Method ovr_GroupPresence_SetDeeplinkMessageOverride_Native addr 0x255c38c size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_SetDeeplinkMessageOverride_Native(::cordl_internals::intptr_t deeplink_message) ;

/// @brief Method ovr_GroupPresence_SetDestination addr 0x255c408 size 0x9c virtual false final false
static uint64_t ovr_GroupPresence_SetDestination(::StringW api_name) ;

/// @brief Method ovr_GroupPresence_SetDestination_Native addr 0x255c4a4 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_SetDestination_Native(::cordl_internals::intptr_t api_name) ;

/// @brief Method ovr_GroupPresence_SetIsJoinable addr 0x255c520 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_SetIsJoinable(bool is_joinable) ;

/// @brief Method ovr_GroupPresence_SetLobbySession addr 0x255c59c size 0x9c virtual false final false
static uint64_t ovr_GroupPresence_SetLobbySession(::StringW id) ;

/// @brief Method ovr_GroupPresence_SetLobbySession_Native addr 0x255c638 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_SetLobbySession_Native(::cordl_internals::intptr_t id) ;

/// @brief Method ovr_GroupPresence_SetMatchSession addr 0x255c6b4 size 0x9c virtual false final false
static uint64_t ovr_GroupPresence_SetMatchSession(::StringW id) ;

/// @brief Method ovr_GroupPresence_SetMatchSession_Native addr 0x255c750 size 0x7c virtual false final false
static uint64_t ovr_GroupPresence_SetMatchSession_Native(::cordl_internals::intptr_t id) ;

/// @brief Method ovr_HTTP_Get addr 0x255c7cc size 0x9c virtual false final false
static uint64_t ovr_HTTP_Get(::StringW url) ;

/// @brief Method ovr_HTTP_Get_Native addr 0x255c868 size 0x7c virtual false final false
static uint64_t ovr_HTTP_Get_Native(::cordl_internals::intptr_t url) ;

/// @brief Method ovr_HTTP_GetToFile addr 0x255c8e4 size 0xc8 virtual false final false
static uint64_t ovr_HTTP_GetToFile(::StringW url, ::StringW diskFile) ;

/// @brief Method ovr_HTTP_GetToFile_Native addr 0x255c9ac size 0x84 virtual false final false
static uint64_t ovr_HTTP_GetToFile_Native(::cordl_internals::intptr_t url, ::cordl_internals::intptr_t diskFile) ;

/// @brief Method ovr_HTTP_MultiPartPost addr 0x255ca30 size 0x154 virtual false final false
static uint64_t ovr_HTTP_MultiPartPost(::StringW url, ::StringW filepath_param_name, ::StringW filepath, ::StringW access_token, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> post_params) ;

/// @brief Method ovr_HTTP_MultiPartPost_Native addr 0x255cb84 size 0x1d8 virtual false final false
static uint64_t ovr_HTTP_MultiPartPost_Native(::cordl_internals::intptr_t url, ::cordl_internals::intptr_t filepath_param_name, ::cordl_internals::intptr_t filepath, ::cordl_internals::intptr_t access_token, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> post_params, ::cordl_internals::uintptr_t numItems) ;

/// @brief Method ovr_HTTP_Post addr 0x255cd5c size 0x9c virtual false final false
static uint64_t ovr_HTTP_Post(::StringW url) ;

/// @brief Method ovr_HTTP_Post_Native addr 0x255cdf8 size 0x7c virtual false final false
static uint64_t ovr_HTTP_Post_Native(::cordl_internals::intptr_t url) ;

/// @brief Method ovr_IAP_ConsumePurchase addr 0x255ce74 size 0x9c virtual false final false
static uint64_t ovr_IAP_ConsumePurchase(::StringW sku) ;

/// @brief Method ovr_IAP_ConsumePurchase_Native addr 0x255cf10 size 0x7c virtual false final false
static uint64_t ovr_IAP_ConsumePurchase_Native(::cordl_internals::intptr_t sku) ;

/// @brief Method ovr_IAP_GetProductsBySKU addr 0x255cf8c size 0x148 virtual false final false
static uint64_t ovr_IAP_GetProductsBySKU(::ArrayW<::StringW> skus, int32_t count) ;

/// @brief Method ovr_IAP_GetViewerPurchases addr 0x255d0d4 size 0x68 virtual false final false
static uint64_t ovr_IAP_GetViewerPurchases() ;

/// @brief Method ovr_IAP_GetViewerPurchasesDurableCache addr 0x255d13c size 0x68 virtual false final false
static uint64_t ovr_IAP_GetViewerPurchasesDurableCache() ;

/// @brief Method ovr_IAP_LaunchCheckoutFlow addr 0x255d1a4 size 0x9c virtual false final false
static uint64_t ovr_IAP_LaunchCheckoutFlow(::StringW sku) ;

/// @brief Method ovr_IAP_LaunchCheckoutFlow_Native addr 0x255d240 size 0x7c virtual false final false
static uint64_t ovr_IAP_LaunchCheckoutFlow_Native(::cordl_internals::intptr_t sku) ;

/// @brief Method ovr_LanguagePack_GetCurrent addr 0x255d2bc size 0x68 virtual false final false
static uint64_t ovr_LanguagePack_GetCurrent() ;

/// @brief Method ovr_LanguagePack_SetCurrent addr 0x255d324 size 0x9c virtual false final false
static uint64_t ovr_LanguagePack_SetCurrent(::StringW tag) ;

/// @brief Method ovr_LanguagePack_SetCurrent_Native addr 0x255d3c0 size 0x7c virtual false final false
static uint64_t ovr_LanguagePack_SetCurrent_Native(::cordl_internals::intptr_t tag) ;

/// @brief Method ovr_Leaderboard_Get addr 0x255d43c size 0x9c virtual false final false
static uint64_t ovr_Leaderboard_Get(::StringW leaderboardName) ;

/// @brief Method ovr_Leaderboard_Get_Native addr 0x255d4d8 size 0x7c virtual false final false
static uint64_t ovr_Leaderboard_Get_Native(::cordl_internals::intptr_t leaderboardName) ;

/// @brief Method ovr_Leaderboard_GetEntries addr 0x255d554 size 0xc4 virtual false final false
static uint64_t ovr_Leaderboard_GetEntries(::StringW leaderboardName, int32_t limit, Oculus::Platform::LeaderboardFilterType filter, Oculus::Platform::LeaderboardStartAt startAt) ;

/// @brief Method ovr_Leaderboard_GetEntries_Native addr 0x255d618 size 0x9c virtual false final false
static uint64_t ovr_Leaderboard_GetEntries_Native(::cordl_internals::intptr_t leaderboardName, int32_t limit, Oculus::Platform::LeaderboardFilterType filter, Oculus::Platform::LeaderboardStartAt startAt) ;

/// @brief Method ovr_Leaderboard_GetEntriesAfterRank addr 0x255d6b4 size 0xb4 virtual false final false
static uint64_t ovr_Leaderboard_GetEntriesAfterRank(::StringW leaderboardName, int32_t limit, uint64_t afterRank) ;

/// @brief Method ovr_Leaderboard_GetEntriesAfterRank_Native addr 0x255d768 size 0x94 virtual false final false
static uint64_t ovr_Leaderboard_GetEntriesAfterRank_Native(::cordl_internals::intptr_t leaderboardName, int32_t limit, uint64_t afterRank) ;

/// @brief Method ovr_Leaderboard_GetEntriesByIds addr 0x255d7fc size 0xcc virtual false final false
static uint64_t ovr_Leaderboard_GetEntriesByIds(::StringW leaderboardName, int32_t limit, Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t> userIDs, uint32_t userIDLength) ;

/// @brief Method ovr_Leaderboard_GetEntriesByIds_Native addr 0x255d8c8 size 0xb4 virtual false final false
static uint64_t ovr_Leaderboard_GetEntriesByIds_Native(::cordl_internals::intptr_t leaderboardName, int32_t limit, Oculus::Platform::LeaderboardStartAt startAt, ::ArrayW<uint64_t> userIDs, uint32_t userIDLength) ;

/// @brief Method ovr_Leaderboard_GetNextEntries addr 0x255d97c size 0x7c virtual false final false
static uint64_t ovr_Leaderboard_GetNextEntries(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_Leaderboard_GetPreviousEntries addr 0x255d9f8 size 0x7c virtual false final false
static uint64_t ovr_Leaderboard_GetPreviousEntries(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_Leaderboard_WriteEntry addr 0x255da74 size 0xcc virtual false final false
static uint64_t ovr_Leaderboard_WriteEntry(::StringW leaderboardName, int64_t score, ::ArrayW<uint8_t> extraData, uint32_t extraDataLength, bool forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntry_Native addr 0x255db40 size 0xb4 virtual false final false
static uint64_t ovr_Leaderboard_WriteEntry_Native(::cordl_internals::intptr_t leaderboardName, int64_t score, ::ArrayW<uint8_t> extraData, uint32_t extraDataLength, bool forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric addr 0x255dbf4 size 0xdc virtual false final false
static uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric(::StringW leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t> extraData, uint32_t extraDataLength, bool forceUpdate) ;

/// @brief Method ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native addr 0x255dcd0 size 0xbc virtual false final false
static uint64_t ovr_Leaderboard_WriteEntryWithSupplementaryMetric_Native(::cordl_internals::intptr_t leaderboardName, int64_t score, int64_t supplementaryMetric, ::ArrayW<uint8_t> extraData, uint32_t extraDataLength, bool forceUpdate) ;

/// @brief Method ovr_Livestreaming_IsAllowedForApplication addr 0x255dd8c size 0x9c virtual false final false
static uint64_t ovr_Livestreaming_IsAllowedForApplication(::StringW packageName) ;

/// @brief Method ovr_Livestreaming_IsAllowedForApplication_Native addr 0x255de28 size 0x7c virtual false final false
static uint64_t ovr_Livestreaming_IsAllowedForApplication_Native(::cordl_internals::intptr_t packageName) ;

/// @brief Method ovr_Livestreaming_StartPartyStream addr 0x255dea4 size 0x68 virtual false final false
static uint64_t ovr_Livestreaming_StartPartyStream() ;

/// @brief Method ovr_Livestreaming_StartStream addr 0x255df0c size 0x84 virtual false final false
static uint64_t ovr_Livestreaming_StartStream(Oculus::Platform::LivestreamingAudience audience, Oculus::Platform::LivestreamingMicrophoneStatus micStatus) ;

/// @brief Method ovr_Livestreaming_StopPartyStream addr 0x255df90 size 0x68 virtual false final false
static uint64_t ovr_Livestreaming_StopPartyStream() ;

/// @brief Method ovr_Livestreaming_StopStream addr 0x255dff8 size 0x68 virtual false final false
static uint64_t ovr_Livestreaming_StopStream() ;

/// @brief Method ovr_Livestreaming_UpdateMicStatus addr 0x255e060 size 0x7c virtual false final false
static uint64_t ovr_Livestreaming_UpdateMicStatus(Oculus::Platform::LivestreamingMicrophoneStatus micStatus) ;

/// @brief Method ovr_Matchmaking_Browse addr 0x255e0dc size 0xac virtual false final false
static uint64_t ovr_Matchmaking_Browse(::StringW pool, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_Browse_Native addr 0x255e188 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_Browse_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_Browse2 addr 0x255e20c size 0xac virtual false final false
static uint64_t ovr_Matchmaking_Browse2(::StringW pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_Browse2_Native addr 0x255e2b8 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_Browse2_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_Cancel addr 0x255e33c size 0xc8 virtual false final false
static uint64_t ovr_Matchmaking_Cancel(::StringW pool, ::StringW requestHash) ;

/// @brief Method ovr_Matchmaking_Cancel_Native addr 0x255e404 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_Cancel_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t requestHash) ;

/// @brief Method ovr_Matchmaking_Cancel2 addr 0x255e488 size 0x68 virtual false final false
static uint64_t ovr_Matchmaking_Cancel2() ;

/// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom addr 0x255e4f0 size 0xc4 virtual false final false
static uint64_t ovr_Matchmaking_CreateAndEnqueueRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom_Native addr 0x255e5b4 size 0x9c virtual false final false
static uint64_t ovr_Matchmaking_CreateAndEnqueueRoom_Native(::cordl_internals::intptr_t pool, uint32_t maxUsers, bool subscribeToUpdates, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom2 addr 0x255e650 size 0xac virtual false final false
static uint64_t ovr_Matchmaking_CreateAndEnqueueRoom2(::StringW pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_CreateAndEnqueueRoom2_Native addr 0x255e6fc size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_CreateAndEnqueueRoom2_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_CreateRoom addr 0x255e780 size 0xb4 virtual false final false
static uint64_t ovr_Matchmaking_CreateRoom(::StringW pool, uint32_t maxUsers, bool subscribeToUpdates) ;

/// @brief Method ovr_Matchmaking_CreateRoom_Native addr 0x255e834 size 0x94 virtual false final false
static uint64_t ovr_Matchmaking_CreateRoom_Native(::cordl_internals::intptr_t pool, uint32_t maxUsers, bool subscribeToUpdates) ;

/// @brief Method ovr_Matchmaking_CreateRoom2 addr 0x255e8c8 size 0xac virtual false final false
static uint64_t ovr_Matchmaking_CreateRoom2(::StringW pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_CreateRoom2_Native addr 0x255e974 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_CreateRoom2_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_Enqueue addr 0x255e9f8 size 0xac virtual false final false
static uint64_t ovr_Matchmaking_Enqueue(::StringW pool, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_Enqueue_Native addr 0x255eaa4 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_Enqueue_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_Enqueue2 addr 0x255eb28 size 0xac virtual false final false
static uint64_t ovr_Matchmaking_Enqueue2(::StringW pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_Enqueue2_Native addr 0x255ebd4 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_Enqueue2_Native(::cordl_internals::intptr_t pool, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_EnqueueRoom addr 0x255ec58 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_EnqueueRoom(uint64_t roomID, ::cordl_internals::intptr_t customQueryData) ;

/// @brief Method ovr_Matchmaking_EnqueueRoom2 addr 0x255ecdc size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_EnqueueRoom2(uint64_t roomID, ::cordl_internals::intptr_t matchmakingOptions) ;

/// @brief Method ovr_Matchmaking_GetAdminSnapshot addr 0x255ed60 size 0x68 virtual false final false
static uint64_t ovr_Matchmaking_GetAdminSnapshot() ;

/// @brief Method ovr_Matchmaking_GetStats addr 0x255edc8 size 0xb4 virtual false final false
static uint64_t ovr_Matchmaking_GetStats(::StringW pool, uint32_t maxLevel, Oculus::Platform::MatchmakingStatApproach approach) ;

/// @brief Method ovr_Matchmaking_GetStats_Native addr 0x255ee7c size 0x94 virtual false final false
static uint64_t ovr_Matchmaking_GetStats_Native(::cordl_internals::intptr_t pool, uint32_t maxLevel, Oculus::Platform::MatchmakingStatApproach approach) ;

/// @brief Method ovr_Matchmaking_JoinRoom addr 0x255ef10 size 0x84 virtual false final false
static uint64_t ovr_Matchmaking_JoinRoom(uint64_t roomID, bool subscribeToUpdates) ;

/// @brief Method ovr_Matchmaking_ReportResultInsecure addr 0x255ef94 size 0xa0 virtual false final false
static uint64_t ovr_Matchmaking_ReportResultInsecure(uint64_t roomID, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> data) ;

/// @brief Method ovr_Matchmaking_ReportResultInsecure_Native addr 0x255f034 size 0x1a4 virtual false final false
static uint64_t ovr_Matchmaking_ReportResultInsecure_Native(uint64_t roomID, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> data, ::cordl_internals::uintptr_t numItems) ;

/// @brief Method ovr_Matchmaking_StartMatch addr 0x255f1d8 size 0x7c virtual false final false
static uint64_t ovr_Matchmaking_StartMatch(uint64_t roomID) ;

/// @brief Method ovr_Media_ShareToFacebook addr 0x255f254 size 0xd0 virtual false final false
static uint64_t ovr_Media_ShareToFacebook(::StringW postTextSuggestion, ::StringW filePath, Oculus::Platform::MediaContentType contentType) ;

/// @brief Method ovr_Media_ShareToFacebook_Native addr 0x255f324 size 0x94 virtual false final false
static uint64_t ovr_Media_ShareToFacebook_Native(::cordl_internals::intptr_t postTextSuggestion, ::cordl_internals::intptr_t filePath, Oculus::Platform::MediaContentType contentType) ;

/// @brief Method ovr_NetSync_Connect addr 0x255f3b8 size 0x7c virtual false final false
static uint64_t ovr_NetSync_Connect(::cordl_internals::intptr_t connect_options) ;

/// @brief Method ovr_NetSync_Disconnect addr 0x255f434 size 0x7c virtual false final false
static uint64_t ovr_NetSync_Disconnect(int64_t connection_id) ;

/// @brief Method ovr_NetSync_GetSessions addr 0x255f4b0 size 0x7c virtual false final false
static uint64_t ovr_NetSync_GetSessions(int64_t connection_id) ;

/// @brief Method ovr_NetSync_GetVoipAttenuation addr 0x255f52c size 0x7c virtual false final false
static uint64_t ovr_NetSync_GetVoipAttenuation(int64_t connection_id) ;

/// @brief Method ovr_NetSync_GetVoipAttenuationDefault addr 0x255f5a8 size 0x68 virtual false final false
static uint64_t ovr_NetSync_GetVoipAttenuationDefault() ;

/// @brief Method ovr_NetSync_SetVoipAttenuation addr 0x255f610 size 0xac virtual false final false
static uint64_t ovr_NetSync_SetVoipAttenuation(int64_t connection_id, ::ArrayW<float_t> distances, ::ArrayW<float_t> decibels, ::cordl_internals::uintptr_t count) ;

/// @brief Method ovr_NetSync_SetVoipAttenuationModel addr 0x255f6bc size 0xd0 virtual false final false
static uint64_t ovr_NetSync_SetVoipAttenuationModel(int64_t connection_id, ::StringW name, ::ArrayW<float_t> distances, ::ArrayW<float_t> decibels, ::cordl_internals::uintptr_t count) ;

/// @brief Method ovr_NetSync_SetVoipAttenuationModel_Native addr 0x255f78c size 0xbc virtual false final false
static uint64_t ovr_NetSync_SetVoipAttenuationModel_Native(int64_t connection_id, ::cordl_internals::intptr_t name, ::ArrayW<float_t> distances, ::ArrayW<float_t> decibels, ::cordl_internals::uintptr_t count) ;

/// @brief Method ovr_NetSync_SetVoipChannelCfg addr 0x255f848 size 0xe0 virtual false final false
static uint64_t ovr_NetSync_SetVoipChannelCfg(int64_t connection_id, ::StringW channel_name, ::StringW attnmodel, bool disable_spatialization) ;

/// @brief Method ovr_NetSync_SetVoipChannelCfg_Native addr 0x255f928 size 0x9c virtual false final false
static uint64_t ovr_NetSync_SetVoipChannelCfg_Native(int64_t connection_id, ::cordl_internals::intptr_t channel_name, ::cordl_internals::intptr_t attnmodel, bool disable_spatialization) ;

/// @brief Method ovr_NetSync_SetVoipGroup addr 0x255f9c4 size 0xb0 virtual false final false
static uint64_t ovr_NetSync_SetVoipGroup(int64_t connection_id, ::StringW group_id) ;

/// @brief Method ovr_NetSync_SetVoipGroup_Native addr 0x255fa74 size 0x84 virtual false final false
static uint64_t ovr_NetSync_SetVoipGroup_Native(int64_t connection_id, ::cordl_internals::intptr_t group_id) ;

/// @brief Method ovr_NetSync_SetVoipListentoChannels addr 0x255faf8 size 0x160 virtual false final false
static uint64_t ovr_NetSync_SetVoipListentoChannels(int64_t connection_id, ::ArrayW<::StringW> listento_channels, ::cordl_internals::uintptr_t count) ;

/// @brief Method ovr_NetSync_SetVoipMicSource addr 0x255fc58 size 0x84 virtual false final false
static uint64_t ovr_NetSync_SetVoipMicSource(int64_t connection_id, Oculus::Platform::NetSyncVoipMicSource mic_source) ;

/// @brief Method ovr_NetSync_SetVoipSessionMuted addr 0x255fcdc size 0x94 virtual false final false
static uint64_t ovr_NetSync_SetVoipSessionMuted(int64_t connection_id, uint64_t session_id, bool muted) ;

/// @brief Method ovr_NetSync_SetVoipSpeaktoChannels addr 0x255fd70 size 0x160 virtual false final false
static uint64_t ovr_NetSync_SetVoipSpeaktoChannels(int64_t connection_id, ::ArrayW<::StringW> speakto_channels, ::cordl_internals::uintptr_t count) ;

/// @brief Method ovr_NetSync_SetVoipStreamMode addr 0x255fed0 size 0x94 virtual false final false
static uint64_t ovr_NetSync_SetVoipStreamMode(int64_t connection_id, uint64_t sessionId, Oculus::Platform::NetSyncVoipStreamMode streamMode) ;

/// @brief Method ovr_Notification_GetRoomInvites addr 0x255ff64 size 0x68 virtual false final false
static uint64_t ovr_Notification_GetRoomInvites() ;

/// @brief Method ovr_Notification_MarkAsRead addr 0x255ffcc size 0x7c virtual false final false
static uint64_t ovr_Notification_MarkAsRead(uint64_t notificationID) ;

/// @brief Method ovr_Party_Create addr 0x2560048 size 0x68 virtual false final false
static uint64_t ovr_Party_Create() ;

/// @brief Method ovr_Party_GatherInApplication addr 0x25600b0 size 0x84 virtual false final false
static uint64_t ovr_Party_GatherInApplication(uint64_t partyID, uint64_t appID) ;

/// @brief Method ovr_Party_Get addr 0x2560134 size 0x7c virtual false final false
static uint64_t ovr_Party_Get(uint64_t partyID) ;

/// @brief Method ovr_Party_GetCurrent addr 0x25601b0 size 0x68 virtual false final false
static uint64_t ovr_Party_GetCurrent() ;

/// @brief Method ovr_Party_GetCurrentForUser addr 0x2560218 size 0x7c virtual false final false
static uint64_t ovr_Party_GetCurrentForUser(uint64_t userID) ;

/// @brief Method ovr_Party_Invite addr 0x2560294 size 0x80 virtual false final false
static uint64_t ovr_Party_Invite(uint64_t partyID, uint64_t userID) ;

/// @brief Method ovr_Party_Join addr 0x2560314 size 0x7c virtual false final false
static uint64_t ovr_Party_Join(uint64_t partyID) ;

/// @brief Method ovr_Party_Leave addr 0x2560390 size 0x7c virtual false final false
static uint64_t ovr_Party_Leave(uint64_t partyID) ;

/// @brief Method ovr_RichPresence_Clear addr 0x256040c size 0x68 virtual false final false
static uint64_t ovr_RichPresence_Clear() ;

/// @brief Method ovr_RichPresence_GetDestinations addr 0x2560474 size 0x68 virtual false final false
static uint64_t ovr_RichPresence_GetDestinations() ;

/// @brief Method ovr_RichPresence_Set addr 0x25604dc size 0x7c virtual false final false
static uint64_t ovr_RichPresence_Set(::cordl_internals::intptr_t richPresenceOptions) ;

/// @brief Method ovr_RichPresence_SetDestination addr 0x2560558 size 0x9c virtual false final false
static uint64_t ovr_RichPresence_SetDestination(::StringW api_name) ;

/// @brief Method ovr_RichPresence_SetDestination_Native addr 0x25605f4 size 0x7c virtual false final false
static uint64_t ovr_RichPresence_SetDestination_Native(::cordl_internals::intptr_t api_name) ;

/// @brief Method ovr_RichPresence_SetIsJoinable addr 0x2560670 size 0x7c virtual false final false
static uint64_t ovr_RichPresence_SetIsJoinable(bool is_joinable) ;

/// @brief Method ovr_RichPresence_SetLobbySession addr 0x25606ec size 0x9c virtual false final false
static uint64_t ovr_RichPresence_SetLobbySession(::StringW id) ;

/// @brief Method ovr_RichPresence_SetLobbySession_Native addr 0x2560788 size 0x7c virtual false final false
static uint64_t ovr_RichPresence_SetLobbySession_Native(::cordl_internals::intptr_t id) ;

/// @brief Method ovr_RichPresence_SetMatchSession addr 0x2560804 size 0x9c virtual false final false
static uint64_t ovr_RichPresence_SetMatchSession(::StringW id) ;

/// @brief Method ovr_RichPresence_SetMatchSession_Native addr 0x25608a0 size 0x7c virtual false final false
static uint64_t ovr_RichPresence_SetMatchSession_Native(::cordl_internals::intptr_t id) ;

/// @brief Method ovr_Room_CreateAndJoinPrivate addr 0x256091c size 0x94 virtual false final false
static uint64_t ovr_Room_CreateAndJoinPrivate(Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, bool subscribeToUpdates) ;

/// @brief Method ovr_Room_CreateAndJoinPrivate2 addr 0x25609b0 size 0x94 virtual false final false
static uint64_t ovr_Room_CreateAndJoinPrivate2(Oculus::Platform::RoomJoinPolicy joinPolicy, uint32_t maxUsers, ::cordl_internals::intptr_t roomOptions) ;

/// @brief Method ovr_Room_Get addr 0x2560a44 size 0x7c virtual false final false
static uint64_t ovr_Room_Get(uint64_t roomID) ;

/// @brief Method ovr_Room_GetCurrent addr 0x2560ac0 size 0x68 virtual false final false
static uint64_t ovr_Room_GetCurrent() ;

/// @brief Method ovr_Room_GetCurrentForUser addr 0x2560b28 size 0x7c virtual false final false
static uint64_t ovr_Room_GetCurrentForUser(uint64_t userID) ;

/// @brief Method ovr_Room_GetInvitableUsers addr 0x2560ba4 size 0x68 virtual false final false
static uint64_t ovr_Room_GetInvitableUsers() ;

/// @brief Method ovr_Room_GetInvitableUsers2 addr 0x2560c0c size 0x7c virtual false final false
static uint64_t ovr_Room_GetInvitableUsers2(::cordl_internals::intptr_t roomOptions) ;

/// @brief Method ovr_Room_GetModeratedRooms addr 0x2560c88 size 0x68 virtual false final false
static uint64_t ovr_Room_GetModeratedRooms() ;

/// @brief Method ovr_Room_GetSocialRooms addr 0x2560cf0 size 0x7c virtual false final false
static uint64_t ovr_Room_GetSocialRooms(uint64_t appID) ;

/// @brief Method ovr_Room_InviteUser addr 0x2560d6c size 0xb0 virtual false final false
static uint64_t ovr_Room_InviteUser(uint64_t roomID, ::StringW inviteToken) ;

/// @brief Method ovr_Room_InviteUser_Native addr 0x2560e1c size 0x84 virtual false final false
static uint64_t ovr_Room_InviteUser_Native(uint64_t roomID, ::cordl_internals::intptr_t inviteToken) ;

/// @brief Method ovr_Room_Join addr 0x2560ea0 size 0x84 virtual false final false
static uint64_t ovr_Room_Join(uint64_t roomID, bool subscribeToUpdates) ;

/// @brief Method ovr_Room_Join2 addr 0x2560f24 size 0x84 virtual false final false
static uint64_t ovr_Room_Join2(uint64_t roomID, ::cordl_internals::intptr_t roomOptions) ;

/// @brief Method ovr_Room_KickUser addr 0x2560fa8 size 0x90 virtual false final false
static uint64_t ovr_Room_KickUser(uint64_t roomID, uint64_t userID, int32_t kickDurationSeconds) ;

/// @brief Method ovr_Room_LaunchInvitableUserFlow addr 0x2561038 size 0x7c virtual false final false
static uint64_t ovr_Room_LaunchInvitableUserFlow(uint64_t roomID) ;

/// @brief Method ovr_Room_Leave addr 0x25610b4 size 0x7c virtual false final false
static uint64_t ovr_Room_Leave(uint64_t roomID) ;

/// @brief Method ovr_Room_SetDescription addr 0x2561130 size 0xb0 virtual false final false
static uint64_t ovr_Room_SetDescription(uint64_t roomID, ::StringW description) ;

/// @brief Method ovr_Room_SetDescription_Native addr 0x25611e0 size 0x84 virtual false final false
static uint64_t ovr_Room_SetDescription_Native(uint64_t roomID, ::cordl_internals::intptr_t description) ;

/// @brief Method ovr_Room_UpdateDataStore addr 0x2561264 size 0xa0 virtual false final false
static uint64_t ovr_Room_UpdateDataStore(uint64_t roomID, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> data) ;

/// @brief Method ovr_Room_UpdateDataStore_Native addr 0x2561304 size 0x1a0 virtual false final false
static uint64_t ovr_Room_UpdateDataStore_Native(uint64_t roomID, ::ArrayW<Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair> data, ::cordl_internals::uintptr_t numItems) ;

/// @brief Method ovr_Room_UpdateMembershipLockStatus addr 0x25614a4 size 0x84 virtual false final false
static uint64_t ovr_Room_UpdateMembershipLockStatus(uint64_t roomID, Oculus::Platform::RoomMembershipLockStatus membershipLockStatus) ;

/// @brief Method ovr_Room_UpdateOwner addr 0x2561528 size 0x84 virtual false final false
static uint64_t ovr_Room_UpdateOwner(uint64_t roomID, uint64_t userID) ;

/// @brief Method ovr_Room_UpdatePrivateRoomJoinPolicy addr 0x25615ac size 0x84 virtual false final false
static uint64_t ovr_Room_UpdatePrivateRoomJoinPolicy(uint64_t roomID, Oculus::Platform::RoomJoinPolicy newJoinPolicy) ;

/// @brief Method ovr_User_CancelRecordingForReportFlow addr 0x2561630 size 0x9c virtual false final false
static uint64_t ovr_User_CancelRecordingForReportFlow(::StringW recordingUUID) ;

/// @brief Method ovr_User_CancelRecordingForReportFlow_Native addr 0x25616cc size 0x7c virtual false final false
static uint64_t ovr_User_CancelRecordingForReportFlow_Native(::cordl_internals::intptr_t recordingUUID) ;

/// @brief Method ovr_User_Get addr 0x2561748 size 0x7c virtual false final false
static uint64_t ovr_User_Get(uint64_t userID) ;

/// @brief Method ovr_User_GetAccessToken addr 0x25617c4 size 0x68 virtual false final false
static uint64_t ovr_User_GetAccessToken() ;

/// @brief Method ovr_User_GetBlockedUsers addr 0x256182c size 0x68 virtual false final false
static uint64_t ovr_User_GetBlockedUsers() ;

/// @brief Method ovr_User_GetLinkedAccounts addr 0x2561894 size 0x7c virtual false final false
static uint64_t ovr_User_GetLinkedAccounts(::cordl_internals::intptr_t userOptions) ;

/// @brief Method ovr_User_GetLoggedInUser addr 0x2561910 size 0x68 virtual false final false
static uint64_t ovr_User_GetLoggedInUser() ;

/// @brief Method ovr_User_GetLoggedInUserFriends addr 0x2561978 size 0x68 virtual false final false
static uint64_t ovr_User_GetLoggedInUserFriends() ;

/// @brief Method ovr_User_GetLoggedInUserFriendsAndRooms addr 0x25619e0 size 0x68 virtual false final false
static uint64_t ovr_User_GetLoggedInUserFriendsAndRooms() ;

/// @brief Method ovr_User_GetLoggedInUserRecentlyMetUsersAndRooms addr 0x2561a48 size 0x7c virtual false final false
static uint64_t ovr_User_GetLoggedInUserRecentlyMetUsersAndRooms(::cordl_internals::intptr_t userOptions) ;

/// @brief Method ovr_User_GetOrgScopedID addr 0x2561ac4 size 0x7c virtual false final false
static uint64_t ovr_User_GetOrgScopedID(uint64_t userID) ;

/// @brief Method ovr_User_GetSdkAccounts addr 0x2561b40 size 0x68 virtual false final false
static uint64_t ovr_User_GetSdkAccounts() ;

/// @brief Method ovr_User_GetUserCapabilities addr 0x2561ba8 size 0x68 virtual false final false
static uint64_t ovr_User_GetUserCapabilities() ;

/// @brief Method ovr_User_GetUserProof addr 0x2561c10 size 0x68 virtual false final false
static uint64_t ovr_User_GetUserProof() ;

/// @brief Method ovr_User_LaunchBlockFlow addr 0x2561c78 size 0x7c virtual false final false
static uint64_t ovr_User_LaunchBlockFlow(uint64_t userID) ;

/// @brief Method ovr_User_LaunchFriendRequestFlow addr 0x2561cf4 size 0x7c virtual false final false
static uint64_t ovr_User_LaunchFriendRequestFlow(uint64_t userID) ;

/// @brief Method ovr_User_LaunchProfile addr 0x2561d70 size 0x7c virtual false final false
static uint64_t ovr_User_LaunchProfile(uint64_t userID) ;

/// @brief Method ovr_User_LaunchReportFlow addr 0x2561dec size 0x7c virtual false final false
static uint64_t ovr_User_LaunchReportFlow(uint64_t userID) ;

/// @brief Method ovr_User_LaunchReportFlow2 addr 0x2561e68 size 0x84 virtual false final false
static uint64_t ovr_User_LaunchReportFlow2(uint64_t optionalUserID, ::cordl_internals::intptr_t abuseReportOptions) ;

/// @brief Method ovr_User_LaunchUnblockFlow addr 0x2561eec size 0x7c virtual false final false
static uint64_t ovr_User_LaunchUnblockFlow(uint64_t userID) ;

/// @brief Method ovr_User_NewEntitledTestUser addr 0x2561f68 size 0x68 virtual false final false
static uint64_t ovr_User_NewEntitledTestUser() ;

/// @brief Method ovr_User_NewTestUser addr 0x2561fd0 size 0x68 virtual false final false
static uint64_t ovr_User_NewTestUser() ;

/// @brief Method ovr_User_NewTestUserFriends addr 0x2562038 size 0x68 virtual false final false
static uint64_t ovr_User_NewTestUserFriends() ;

/// @brief Method ovr_User_StartRecordingForReportFlow addr 0x25620a0 size 0x68 virtual false final false
static uint64_t ovr_User_StartRecordingForReportFlow() ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow addr 0x2562108 size 0xb0 virtual false final false
static uint64_t ovr_User_StopRecordingAndLaunchReportFlow(uint64_t optionalUserID, ::StringW optionalRecordingUUID) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow_Native addr 0x25621b8 size 0x84 virtual false final false
static uint64_t ovr_User_StopRecordingAndLaunchReportFlow_Native(uint64_t optionalUserID, ::cordl_internals::intptr_t optionalRecordingUUID) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2 addr 0x256223c size 0xb8 virtual false final false
static uint64_t ovr_User_StopRecordingAndLaunchReportFlow2(uint64_t optionalUserID, ::StringW optionalRecordingUUID, ::cordl_internals::intptr_t abuseReportOptions) ;

/// @brief Method ovr_User_StopRecordingAndLaunchReportFlow2_Native addr 0x25622f4 size 0x94 virtual false final false
static uint64_t ovr_User_StopRecordingAndLaunchReportFlow2_Native(uint64_t optionalUserID, ::cordl_internals::intptr_t optionalRecordingUUID, ::cordl_internals::intptr_t abuseReportOptions) ;

/// @brief Method ovr_User_TestUserCreateDeviceManifest addr 0x2562388 size 0xb4 virtual false final false
static uint64_t ovr_User_TestUserCreateDeviceManifest(::StringW deviceID, ::ArrayW<uint64_t> appIDs, int32_t numAppIDs) ;

/// @brief Method ovr_User_TestUserCreateDeviceManifest_Native addr 0x256243c size 0x9c virtual false final false
static uint64_t ovr_User_TestUserCreateDeviceManifest_Native(::cordl_internals::intptr_t deviceID, ::ArrayW<uint64_t> appIDs, int32_t numAppIDs) ;

/// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey addr 0x25624d8 size 0xb0 virtual false final false
static uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey(uint64_t userID, ::StringW key) ;

/// @brief Method ovr_UserDataStore_PrivateDeleteEntryByKey_Native addr 0x2562588 size 0x84 virtual false final false
static uint64_t ovr_UserDataStore_PrivateDeleteEntryByKey_Native(uint64_t userID, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_UserDataStore_PrivateGetEntries addr 0x256260c size 0x7c virtual false final false
static uint64_t ovr_UserDataStore_PrivateGetEntries(uint64_t userID) ;

/// @brief Method ovr_UserDataStore_PrivateGetEntryByKey addr 0x2562688 size 0xb0 virtual false final false
static uint64_t ovr_UserDataStore_PrivateGetEntryByKey(uint64_t userID, ::StringW key) ;

/// @brief Method ovr_UserDataStore_PrivateGetEntryByKey_Native addr 0x2562738 size 0x84 virtual false final false
static uint64_t ovr_UserDataStore_PrivateGetEntryByKey_Native(uint64_t userID, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_UserDataStore_PrivateWriteEntry addr 0x25627bc size 0xd0 virtual false final false
static uint64_t ovr_UserDataStore_PrivateWriteEntry(uint64_t userID, ::StringW key, ::StringW value) ;

/// @brief Method ovr_UserDataStore_PrivateWriteEntry_Native addr 0x256288c size 0x94 virtual false final false
static uint64_t ovr_UserDataStore_PrivateWriteEntry_Native(uint64_t userID, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey addr 0x2562920 size 0xb0 virtual false final false
static uint64_t ovr_UserDataStore_PublicDeleteEntryByKey(uint64_t userID, ::StringW key) ;

/// @brief Method ovr_UserDataStore_PublicDeleteEntryByKey_Native addr 0x25629d0 size 0x84 virtual false final false
static uint64_t ovr_UserDataStore_PublicDeleteEntryByKey_Native(uint64_t userID, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_UserDataStore_PublicGetEntries addr 0x2562a54 size 0x7c virtual false final false
static uint64_t ovr_UserDataStore_PublicGetEntries(uint64_t userID) ;

/// @brief Method ovr_UserDataStore_PublicGetEntryByKey addr 0x2562ad0 size 0xb0 virtual false final false
static uint64_t ovr_UserDataStore_PublicGetEntryByKey(uint64_t userID, ::StringW key) ;

/// @brief Method ovr_UserDataStore_PublicGetEntryByKey_Native addr 0x2562b80 size 0x84 virtual false final false
static uint64_t ovr_UserDataStore_PublicGetEntryByKey_Native(uint64_t userID, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_UserDataStore_PublicWriteEntry addr 0x2562c04 size 0xd0 virtual false final false
static uint64_t ovr_UserDataStore_PublicWriteEntry(uint64_t userID, ::StringW key, ::StringW value) ;

/// @brief Method ovr_UserDataStore_PublicWriteEntry_Native addr 0x2562cd4 size 0x94 virtual false final false
static uint64_t ovr_UserDataStore_PublicWriteEntry_Native(uint64_t userID, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_Voip_GetMicrophoneAvailability addr 0x2562d68 size 0x68 virtual false final false
static uint64_t ovr_Voip_GetMicrophoneAvailability() ;

/// @brief Method ovr_Voip_ReportAppVoipSessions addr 0x2562dd0 size 0x84 virtual false final false
static uint64_t ovr_Voip_ReportAppVoipSessions(::ArrayW<uint64_t> sessionIDs) ;

/// @brief Method ovr_Voip_SetSystemVoipSuppressed addr 0x2562e54 size 0x7c virtual false final false
static uint64_t ovr_Voip_SetSystemVoipSuppressed(bool suppressed) ;

/// @brief Method ovr_AbuseReportRecording_GetRecordingUuid addr 0x2562ed0 size 0x58 virtual false final false
static ::StringW ovr_AbuseReportRecording_GetRecordingUuid(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AbuseReportRecording_GetRecordingUuid_Native addr 0x2562f28 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AbuseReportRecording_GetRecordingUuid_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinition_GetBitfieldLength addr 0x2562fa4 size 0x7c virtual false final false
static uint32_t ovr_AchievementDefinition_GetBitfieldLength(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinition_GetName addr 0x2563020 size 0x58 virtual false final false
static ::StringW ovr_AchievementDefinition_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinition_GetName_Native addr 0x2563078 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementDefinition_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinition_GetTarget addr 0x25630f4 size 0x7c virtual false final false
static uint64_t ovr_AchievementDefinition_GetTarget(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinition_GetType addr 0x2563170 size 0x7c virtual false final false
static Oculus::Platform::AchievementType ovr_AchievementDefinition_GetType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetElement addr 0x25631ec size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementDefinitionArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_AchievementDefinitionArray_GetNextUrl addr 0x2563270 size 0x58 virtual false final false
static ::StringW ovr_AchievementDefinitionArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetNextUrl_Native addr 0x25632c8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementDefinitionArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinitionArray_GetSize addr 0x2563344 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_AchievementDefinitionArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementDefinitionArray_HasNextPage addr 0x25633c0 size 0x84 virtual false final false
static bool ovr_AchievementDefinitionArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetBitfield addr 0x2563444 size 0x58 virtual false final false
static ::StringW ovr_AchievementProgress_GetBitfield(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetBitfield_Native addr 0x256349c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementProgress_GetBitfield_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetCount addr 0x2563518 size 0x7c virtual false final false
static uint64_t ovr_AchievementProgress_GetCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetIsUnlocked addr 0x2563594 size 0x84 virtual false final false
static bool ovr_AchievementProgress_GetIsUnlocked(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetName addr 0x2563618 size 0x58 virtual false final false
static ::StringW ovr_AchievementProgress_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetName_Native addr 0x2563670 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementProgress_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetUnlockTime addr 0x25636ec size 0x58 virtual false final false
static System::DateTime ovr_AchievementProgress_GetUnlockTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgress_GetUnlockTime_Native addr 0x2563744 size 0x7c virtual false final false
static uint64_t ovr_AchievementProgress_GetUnlockTime_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgressArray_GetElement addr 0x25637c0 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementProgressArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_AchievementProgressArray_GetNextUrl addr 0x2563844 size 0x58 virtual false final false
static ::StringW ovr_AchievementProgressArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgressArray_GetNextUrl_Native addr 0x256389c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementProgressArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgressArray_GetSize addr 0x2563918 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_AchievementProgressArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementProgressArray_HasNextPage addr 0x2563994 size 0x84 virtual false final false
static bool ovr_AchievementProgressArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementUpdate_GetJustUnlocked addr 0x2563a18 size 0x84 virtual false final false
static bool ovr_AchievementUpdate_GetJustUnlocked(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementUpdate_GetName addr 0x2563a9c size 0x58 virtual false final false
static ::StringW ovr_AchievementUpdate_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AchievementUpdate_GetName_Native addr 0x2563af4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AchievementUpdate_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Application_GetID addr 0x2563b70 size 0x7c virtual false final false
static uint64_t ovr_Application_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetDestination addr 0x2563bec size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationInvite_GetDestination(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetID addr 0x2563c68 size 0x7c virtual false final false
static uint64_t ovr_ApplicationInvite_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetIsActive addr 0x2563ce4 size 0x84 virtual false final false
static bool ovr_ApplicationInvite_GetIsActive(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetLobbySessionId addr 0x2563d68 size 0x58 virtual false final false
static ::StringW ovr_ApplicationInvite_GetLobbySessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetLobbySessionId_Native addr 0x2563dc0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationInvite_GetLobbySessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetMatchSessionId addr 0x2563e3c size 0x58 virtual false final false
static ::StringW ovr_ApplicationInvite_GetMatchSessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetMatchSessionId_Native addr 0x2563e94 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationInvite_GetMatchSessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInvite_GetRecipient addr 0x2563f10 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationInvite_GetRecipient(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetElement addr 0x2563f8c size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationInviteArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_ApplicationInviteArray_GetNextUrl addr 0x2564010 size 0x58 virtual false final false
static ::StringW ovr_ApplicationInviteArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetNextUrl_Native addr 0x2564068 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationInviteArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInviteArray_GetSize addr 0x25640e4 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_ApplicationInviteArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationInviteArray_HasNextPage addr 0x2564160 size 0x84 virtual false final false
static bool ovr_ApplicationInviteArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentCode addr 0x25641e4 size 0x7c virtual false final false
static int32_t ovr_ApplicationVersion_GetCurrentCode(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentName addr 0x2564260 size 0x58 virtual false final false
static ::StringW ovr_ApplicationVersion_GetCurrentName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationVersion_GetCurrentName_Native addr 0x25642b8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationVersion_GetCurrentName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestCode addr 0x2564334 size 0x7c virtual false final false
static int32_t ovr_ApplicationVersion_GetLatestCode(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestName addr 0x25643b0 size 0x58 virtual false final false
static ::StringW ovr_ApplicationVersion_GetLatestName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ApplicationVersion_GetLatestName_Native addr 0x2564408 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationVersion_GetLatestName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetAssetId addr 0x2564484 size 0x7c virtual false final false
static uint64_t ovr_AssetDetails_GetAssetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetAssetType addr 0x2564500 size 0x58 virtual false final false
static ::StringW ovr_AssetDetails_GetAssetType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetAssetType_Native addr 0x2564558 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetails_GetAssetType_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetDownloadStatus addr 0x25645d4 size 0x58 virtual false final false
static ::StringW ovr_AssetDetails_GetDownloadStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetDownloadStatus_Native addr 0x256462c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetails_GetDownloadStatus_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetFilepath addr 0x25646a8 size 0x58 virtual false final false
static ::StringW ovr_AssetDetails_GetFilepath(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetFilepath_Native addr 0x2564700 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetails_GetFilepath_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetIapStatus addr 0x256477c size 0x58 virtual false final false
static ::StringW ovr_AssetDetails_GetIapStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetIapStatus_Native addr 0x25647d4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetails_GetIapStatus_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetLanguage addr 0x2564850 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetails_GetLanguage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetMetadata addr 0x25648cc size 0x58 virtual false final false
static ::StringW ovr_AssetDetails_GetMetadata(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetails_GetMetadata_Native addr 0x2564924 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetails_GetMetadata_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetDetailsArray_GetElement addr 0x25649a0 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_AssetDetailsArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_AssetDetailsArray_GetSize addr 0x2564a24 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_AssetDetailsArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetAssetFileId addr 0x2564aa0 size 0x7c virtual false final false
static uint64_t ovr_AssetFileDeleteResult_GetAssetFileId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetAssetId addr 0x2564b1c size 0x7c virtual false final false
static uint64_t ovr_AssetFileDeleteResult_GetAssetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetFilepath addr 0x2564b98 size 0x58 virtual false final false
static ::StringW ovr_AssetFileDeleteResult_GetFilepath(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetFilepath_Native addr 0x2564bf0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetFileDeleteResult_GetFilepath_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDeleteResult_GetSuccess addr 0x2564c6c size 0x84 virtual false final false
static bool ovr_AssetFileDeleteResult_GetSuccess(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetFileId addr 0x2564cf0 size 0x7c virtual false final false
static uint64_t ovr_AssetFileDownloadCancelResult_GetAssetFileId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetAssetId addr 0x2564d6c size 0x7c virtual false final false
static uint64_t ovr_AssetFileDownloadCancelResult_GetAssetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath addr 0x2564de8 size 0x58 virtual false final false
static ::StringW ovr_AssetFileDownloadCancelResult_GetFilepath(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetFilepath_Native addr 0x2564e40 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetFileDownloadCancelResult_GetFilepath_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadCancelResult_GetSuccess addr 0x2564ebc size 0x84 virtual false final false
static bool ovr_AssetFileDownloadCancelResult_GetSuccess(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetAssetId addr 0x2564f40 size 0x7c virtual false final false
static uint64_t ovr_AssetFileDownloadResult_GetAssetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetFilepath addr 0x2564fbc size 0x58 virtual false final false
static ::StringW ovr_AssetFileDownloadResult_GetFilepath(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadResult_GetFilepath_Native addr 0x2565014 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_AssetFileDownloadResult_GetFilepath_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetAssetFileId addr 0x2565090 size 0x7c virtual false final false
static uint64_t ovr_AssetFileDownloadUpdate_GetAssetFileId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetAssetId addr 0x256510c size 0x7c virtual false final false
static uint64_t ovr_AssetFileDownloadUpdate_GetAssetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotal addr 0x2565188 size 0x7c virtual false final false
static uint32_t ovr_AssetFileDownloadUpdate_GetBytesTotal(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTotalLong addr 0x2565204 size 0x7c virtual false final false
static uint64_t ovr_AssetFileDownloadUpdate_GetBytesTotalLong(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferred addr 0x2565280 size 0x7c virtual false final false
static int32_t ovr_AssetFileDownloadUpdate_GetBytesTransferred(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetBytesTransferredLong addr 0x25652fc size 0x7c virtual false final false
static int64_t ovr_AssetFileDownloadUpdate_GetBytesTransferredLong(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AssetFileDownloadUpdate_GetCompleted addr 0x2565378 size 0x84 virtual false final false
static bool ovr_AssetFileDownloadUpdate_GetCompleted(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AvatarEditorResult_GetRequestSent addr 0x25653fc size 0x84 virtual false final false
static bool ovr_AvatarEditorResult_GetRequestSent(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_BlockedUser_GetId addr 0x2565480 size 0x7c virtual false final false
static uint64_t ovr_BlockedUser_GetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_BlockedUserArray_GetElement addr 0x25654fc size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_BlockedUserArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_BlockedUserArray_GetNextUrl addr 0x2565580 size 0x58 virtual false final false
static ::StringW ovr_BlockedUserArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_BlockedUserArray_GetNextUrl_Native addr 0x25655d8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_BlockedUserArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_BlockedUserArray_GetSize addr 0x2565654 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_BlockedUserArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_BlockedUserArray_HasNextPage addr 0x25656d0 size 0x84 virtual false final false
static bool ovr_BlockedUserArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationFinalized_GetCountdownMS addr 0x2565754 size 0x7c virtual false final false
static int32_t ovr_CalApplicationFinalized_GetCountdownMS(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationFinalized_GetID addr 0x25657d0 size 0x7c virtual false final false
static uint64_t ovr_CalApplicationFinalized_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationFinalized_GetLaunchDetails addr 0x256584c size 0x58 virtual false final false
static ::StringW ovr_CalApplicationFinalized_GetLaunchDetails(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationFinalized_GetLaunchDetails_Native addr 0x25658a4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CalApplicationFinalized_GetLaunchDetails_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationProposed_GetID addr 0x2565920 size 0x7c virtual false final false
static uint64_t ovr_CalApplicationProposed_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationSuggestion_GetID addr 0x256599c size 0x7c virtual false final false
static uint64_t ovr_CalApplicationSuggestion_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationSuggestion_GetSocialContext addr 0x2565a18 size 0x58 virtual false final false
static ::StringW ovr_CalApplicationSuggestion_GetSocialContext(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationSuggestion_GetSocialContext_Native addr 0x2565a70 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CalApplicationSuggestion_GetSocialContext_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CalApplicationSuggestionArray_GetElement addr 0x2565aec size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_CalApplicationSuggestionArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_CalApplicationSuggestionArray_GetSize addr 0x2565b70 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_CalApplicationSuggestionArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetCreationType addr 0x2565bec size 0x7c virtual false final false
static Oculus::Platform::ChallengeCreationType ovr_Challenge_GetCreationType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetDescription addr 0x2565c68 size 0x58 virtual false final false
static ::StringW ovr_Challenge_GetDescription(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetDescription_Native addr 0x2565cc0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Challenge_GetDescription_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetEndDate addr 0x2565d3c size 0x58 virtual false final false
static System::DateTime ovr_Challenge_GetEndDate(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetEndDate_Native addr 0x2565d94 size 0x7c virtual false final false
static uint64_t ovr_Challenge_GetEndDate_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetID addr 0x2565e10 size 0x7c virtual false final false
static uint64_t ovr_Challenge_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetInvitedUsers addr 0x2565e8c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Challenge_GetInvitedUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetLeaderboard addr 0x2565f08 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Challenge_GetLeaderboard(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetParticipants addr 0x2565f84 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Challenge_GetParticipants(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetStartDate addr 0x2566000 size 0x58 virtual false final false
static System::DateTime ovr_Challenge_GetStartDate(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetStartDate_Native addr 0x2566058 size 0x7c virtual false final false
static uint64_t ovr_Challenge_GetStartDate_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetTitle addr 0x25660d4 size 0x58 virtual false final false
static ::StringW ovr_Challenge_GetTitle(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetTitle_Native addr 0x256612c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Challenge_GetTitle_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Challenge_GetVisibility addr 0x25661a8 size 0x7c virtual false final false
static Oculus::Platform::ChallengeVisibility ovr_Challenge_GetVisibility(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_GetElement addr 0x2566224 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_ChallengeArray_GetNextUrl addr 0x25662a8 size 0x58 virtual false final false
static ::StringW ovr_ChallengeArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_GetNextUrl_Native addr 0x2566300 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_GetPreviousUrl addr 0x256637c size 0x58 virtual false final false
static ::StringW ovr_ChallengeArray_GetPreviousUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_GetPreviousUrl_Native addr 0x25663d4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeArray_GetPreviousUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_GetSize addr 0x2566450 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_ChallengeArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_GetTotalCount addr 0x25664cc size 0x7c virtual false final false
static uint64_t ovr_ChallengeArray_GetTotalCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_HasNextPage addr 0x2566548 size 0x84 virtual false final false
static bool ovr_ChallengeArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeArray_HasPreviousPage addr 0x25665cc size 0x84 virtual false final false
static bool ovr_ChallengeArray_HasPreviousPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetDisplayScore addr 0x2566650 size 0x58 virtual false final false
static ::StringW ovr_ChallengeEntry_GetDisplayScore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetDisplayScore_Native addr 0x25666a8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeEntry_GetDisplayScore_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraData addr 0x2566724 size 0x6c virtual false final false
static ::ArrayW<uint8_t> ovr_ChallengeEntry_GetExtraData(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraData_Native addr 0x256680c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeEntry_GetExtraData_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetExtraDataLength addr 0x2566888 size 0x7c virtual false final false
static uint32_t ovr_ChallengeEntry_GetExtraDataLength(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetID addr 0x2566904 size 0x7c virtual false final false
static uint64_t ovr_ChallengeEntry_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetRank addr 0x2566980 size 0x7c virtual false final false
static int32_t ovr_ChallengeEntry_GetRank(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetScore addr 0x25669fc size 0x7c virtual false final false
static int64_t ovr_ChallengeEntry_GetScore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetTimestamp addr 0x2566a78 size 0x58 virtual false final false
static System::DateTime ovr_ChallengeEntry_GetTimestamp(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetTimestamp_Native addr 0x2566ad0 size 0x7c virtual false final false
static uint64_t ovr_ChallengeEntry_GetTimestamp_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntry_GetUser addr 0x2566b4c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeEntry_GetUser(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetElement addr 0x2566bc8 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeEntryArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_ChallengeEntryArray_GetNextUrl addr 0x2566c4c size 0x58 virtual false final false
static ::StringW ovr_ChallengeEntryArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetNextUrl_Native addr 0x2566ca4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeEntryArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl addr 0x2566d20 size 0x58 virtual false final false
static ::StringW ovr_ChallengeEntryArray_GetPreviousUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetPreviousUrl_Native addr 0x2566d78 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeEntryArray_GetPreviousUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetSize addr 0x2566df4 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_ChallengeEntryArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_GetTotalCount addr 0x2566e70 size 0x7c virtual false final false
static uint64_t ovr_ChallengeEntryArray_GetTotalCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_HasNextPage addr 0x2566eec size 0x84 virtual false final false
static bool ovr_ChallengeEntryArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ChallengeEntryArray_HasPreviousPage addr 0x2566f70 size 0x84 virtual false final false
static bool ovr_ChallengeEntryArray_HasPreviousPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorage2UserDirectoryPathResponse_GetPath addr 0x2566ff4 size 0x58 virtual false final false
static ::StringW ovr_CloudStorage2UserDirectoryPathResponse_GetPath(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorage2UserDirectoryPathResponse_GetPath_Native addr 0x256704c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorage2UserDirectoryPathResponse_GetPath_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageConflictMetadata_GetLocal addr 0x25670c8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageConflictMetadata_GetLocal(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageConflictMetadata_GetRemote addr 0x2567144 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageConflictMetadata_GetRemote(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetBucket addr 0x25671c0 size 0x58 virtual false final false
static ::StringW ovr_CloudStorageData_GetBucket(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetBucket_Native addr 0x2567218 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageData_GetBucket_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetData addr 0x2567294 size 0x6c virtual false final false
static ::ArrayW<uint8_t> ovr_CloudStorageData_GetData(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetData_Native addr 0x256737c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageData_GetData_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetDataSize addr 0x2567300 size 0x7c virtual false final false
static uint32_t ovr_CloudStorageData_GetDataSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetKey addr 0x25673f8 size 0x58 virtual false final false
static ::StringW ovr_CloudStorageData_GetKey(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageData_GetKey_Native addr 0x2567450 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageData_GetKey_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetBucket addr 0x25674cc size 0x58 virtual false final false
static ::StringW ovr_CloudStorageMetadata_GetBucket(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetBucket_Native addr 0x2567524 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageMetadata_GetBucket_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetCounter addr 0x25675a0 size 0x7c virtual false final false
static int64_t ovr_CloudStorageMetadata_GetCounter(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetDataSize addr 0x256761c size 0x7c virtual false final false
static uint32_t ovr_CloudStorageMetadata_GetDataSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetExtraData addr 0x2567698 size 0x58 virtual false final false
static ::StringW ovr_CloudStorageMetadata_GetExtraData(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetExtraData_Native addr 0x25676f0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageMetadata_GetExtraData_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetKey addr 0x256776c size 0x58 virtual false final false
static ::StringW ovr_CloudStorageMetadata_GetKey(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetKey_Native addr 0x25677c4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageMetadata_GetKey_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetSaveTime addr 0x2567840 size 0x7c virtual false final false
static uint64_t ovr_CloudStorageMetadata_GetSaveTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetStatus addr 0x25678bc size 0x7c virtual false final false
static Oculus::Platform::CloudStorageDataStatus ovr_CloudStorageMetadata_GetStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetVersionHandle addr 0x2567938 size 0x58 virtual false final false
static ::StringW ovr_CloudStorageMetadata_GetVersionHandle(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadata_GetVersionHandle_Native addr 0x2567990 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageMetadata_GetVersionHandle_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadataArray_GetElement addr 0x2567a0c size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageMetadataArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_CloudStorageMetadataArray_GetNextUrl addr 0x2567a90 size 0x58 virtual false final false
static ::StringW ovr_CloudStorageMetadataArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadataArray_GetNextUrl_Native addr 0x2567ae8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageMetadataArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadataArray_GetSize addr 0x2567b64 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_CloudStorageMetadataArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageMetadataArray_HasNextPage addr 0x2567be0 size 0x84 virtual false final false
static bool ovr_CloudStorageMetadataArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetBucket addr 0x2567c64 size 0x58 virtual false final false
static ::StringW ovr_CloudStorageUpdateResponse_GetBucket(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetBucket_Native addr 0x2567cbc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageUpdateResponse_GetBucket_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetKey addr 0x2567d38 size 0x58 virtual false final false
static ::StringW ovr_CloudStorageUpdateResponse_GetKey(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetKey_Native addr 0x2567d90 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageUpdateResponse_GetKey_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetStatus addr 0x2567e0c size 0x7c virtual false final false
static Oculus::Platform::CloudStorageUpdateStatus ovr_CloudStorageUpdateResponse_GetStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetVersionHandle addr 0x2567e88 size 0x58 virtual false final false
static ::StringW ovr_CloudStorageUpdateResponse_GetVersionHandle(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_CloudStorageUpdateResponse_GetVersionHandle_Native addr 0x2567ee0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_CloudStorageUpdateResponse_GetVersionHandle_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_DataStore_Contains addr 0x2567f5c size 0xb0 virtual false final false
static uint32_t ovr_DataStore_Contains(::cordl_internals::intptr_t obj, ::StringW key) ;

/// @brief Method ovr_DataStore_Contains_Native addr 0x256800c size 0x84 virtual false final false
static uint32_t ovr_DataStore_Contains_Native(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_DataStore_GetKey addr 0x255542c size 0x68 virtual false final false
static ::StringW ovr_DataStore_GetKey(::cordl_internals::intptr_t obj, int32_t index) ;

/// @brief Method ovr_DataStore_GetKey_Native addr 0x2568090 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_DataStore_GetKey_Native(::cordl_internals::intptr_t obj, int32_t index) ;

/// @brief Method ovr_DataStore_GetNumKeys addr 0x25553b0 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_DataStore_GetNumKeys(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_DataStore_GetValue addr 0x2555494 size 0xb4 virtual false final false
static ::StringW ovr_DataStore_GetValue(::cordl_internals::intptr_t obj, ::StringW key) ;

/// @brief Method ovr_DataStore_GetValue_Native addr 0x2568114 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_DataStore_GetValue_Native(::cordl_internals::intptr_t obj, ::cordl_internals::intptr_t key) ;

/// @brief Method ovr_Destination_GetApiName addr 0x2568198 size 0x58 virtual false final false
static ::StringW ovr_Destination_GetApiName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Destination_GetApiName_Native addr 0x25681f0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Destination_GetApiName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Destination_GetDeeplinkMessage addr 0x256826c size 0x58 virtual false final false
static ::StringW ovr_Destination_GetDeeplinkMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Destination_GetDeeplinkMessage_Native addr 0x25682c4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Destination_GetDeeplinkMessage_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Destination_GetDisplayName addr 0x2568340 size 0x58 virtual false final false
static ::StringW ovr_Destination_GetDisplayName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Destination_GetDisplayName_Native addr 0x2568398 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Destination_GetDisplayName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_DestinationArray_GetElement addr 0x2568414 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_DestinationArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_DestinationArray_GetNextUrl addr 0x2568498 size 0x58 virtual false final false
static ::StringW ovr_DestinationArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_DestinationArray_GetNextUrl_Native addr 0x25684f0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_DestinationArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_DestinationArray_GetSize addr 0x256856c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_DestinationArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_DestinationArray_HasNextPage addr 0x25685e8 size 0x84 virtual false final false
static bool ovr_DestinationArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Error_GetCode addr 0x256866c size 0x78 virtual false final false
static int32_t ovr_Error_GetCode(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Error_GetDisplayableMessage addr 0x25686e4 size 0x58 virtual false final false
static ::StringW ovr_Error_GetDisplayableMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Error_GetDisplayableMessage_Native addr 0x256873c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Error_GetDisplayableMessage_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Error_GetHttpCode addr 0x25687b8 size 0x7c virtual false final false
static int32_t ovr_Error_GetHttpCode(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Error_GetMessage addr 0x2568834 size 0x58 virtual false final false
static ::StringW ovr_Error_GetMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Error_GetMessage_Native addr 0x256888c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Error_GetMessage_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage addr 0x2568908 size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceJoinIntent_GetDeeplinkMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native addr 0x2568960 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceJoinIntent_GetDeeplinkMessage_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName addr 0x25689dc size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceJoinIntent_GetDestinationApiName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native addr 0x2568a34 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceJoinIntent_GetDestinationApiName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId addr 0x2568ab0 size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceJoinIntent_GetLobbySessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native addr 0x2568b08 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceJoinIntent_GetLobbySessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId addr 0x2568b84 size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceJoinIntent_GetMatchSessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native addr 0x2568bdc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceJoinIntent_GetMatchSessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName addr 0x2568c58 size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceLeaveIntent_GetDestinationApiName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native addr 0x2568cb0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceLeaveIntent_GetDestinationApiName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId addr 0x2568d2c size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceLeaveIntent_GetLobbySessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native addr 0x2568d84 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceLeaveIntent_GetLobbySessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId addr 0x2568e00 size 0x58 virtual false final false
static ::StringW ovr_GroupPresenceLeaveIntent_GetMatchSessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native addr 0x2568e58 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceLeaveIntent_GetMatchSessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetBytes addr 0x2568ed4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_HttpTransferUpdate_GetBytes(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetID addr 0x2568f50 size 0x7c virtual false final false
static uint64_t ovr_HttpTransferUpdate_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_HttpTransferUpdate_GetSize addr 0x2568fcc size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_HttpTransferUpdate_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_HttpTransferUpdate_IsCompleted addr 0x2569048 size 0x84 virtual false final false
static bool ovr_HttpTransferUpdate_IsCompleted(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetApplicationId addr 0x25690cc size 0x58 virtual false final false
static ::StringW ovr_InstalledApplication_GetApplicationId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetApplicationId_Native addr 0x2569124 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_InstalledApplication_GetApplicationId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetPackageName addr 0x25691a0 size 0x58 virtual false final false
static ::StringW ovr_InstalledApplication_GetPackageName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetPackageName_Native addr 0x25691f8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_InstalledApplication_GetPackageName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetStatus addr 0x2569274 size 0x58 virtual false final false
static ::StringW ovr_InstalledApplication_GetStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetStatus_Native addr 0x25692cc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_InstalledApplication_GetStatus_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionCode addr 0x2569348 size 0x7c virtual false final false
static int32_t ovr_InstalledApplication_GetVersionCode(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionName addr 0x25693c4 size 0x58 virtual false final false
static ::StringW ovr_InstalledApplication_GetVersionName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplication_GetVersionName_Native addr 0x256941c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_InstalledApplication_GetVersionName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InstalledApplicationArray_GetElement addr 0x2569498 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_InstalledApplicationArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_InstalledApplicationArray_GetSize addr 0x256951c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_InstalledApplicationArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_InvitePanelResultInfo_GetInvitesSent addr 0x2569598 size 0x84 virtual false final false
static bool ovr_InvitePanelResultInfo_GetInvitesSent(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LanguagePackInfo_GetEnglishName addr 0x256961c size 0x58 virtual false final false
static ::StringW ovr_LanguagePackInfo_GetEnglishName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LanguagePackInfo_GetEnglishName_Native addr 0x2569674 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LanguagePackInfo_GetEnglishName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LanguagePackInfo_GetNativeName addr 0x25696f0 size 0x58 virtual false final false
static ::StringW ovr_LanguagePackInfo_GetNativeName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LanguagePackInfo_GetNativeName_Native addr 0x2569748 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LanguagePackInfo_GetNativeName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LanguagePackInfo_GetTag addr 0x25697c4 size 0x58 virtual false final false
static ::StringW ovr_LanguagePackInfo_GetTag(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LanguagePackInfo_GetTag_Native addr 0x256981c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LanguagePackInfo_GetTag_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchBlockFlowResult_GetDidBlock addr 0x2569898 size 0x84 virtual false final false
static bool ovr_LaunchBlockFlowResult_GetDidBlock(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchBlockFlowResult_GetDidCancel addr 0x256991c size 0x84 virtual false final false
static bool ovr_LaunchBlockFlowResult_GetDidCancel(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetDeeplinkMessage addr 0x25699a0 size 0x58 virtual false final false
static ::StringW ovr_LaunchDetails_GetDeeplinkMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetDeeplinkMessage_Native addr 0x25699f8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LaunchDetails_GetDeeplinkMessage_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetDestinationApiName addr 0x2569a74 size 0x58 virtual false final false
static ::StringW ovr_LaunchDetails_GetDestinationApiName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetDestinationApiName_Native addr 0x2569acc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LaunchDetails_GetDestinationApiName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchSource addr 0x2569b48 size 0x58 virtual false final false
static ::StringW ovr_LaunchDetails_GetLaunchSource(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchSource_Native addr 0x2569ba0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LaunchDetails_GetLaunchSource_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetLaunchType addr 0x2569c1c size 0x7c virtual false final false
static Oculus::Platform::LaunchType ovr_LaunchDetails_GetLaunchType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetRoomID addr 0x2569c98 size 0x7c virtual false final false
static uint64_t ovr_LaunchDetails_GetRoomID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetTrackingID addr 0x2569d14 size 0x58 virtual false final false
static ::StringW ovr_LaunchDetails_GetTrackingID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetTrackingID_Native addr 0x2569d6c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LaunchDetails_GetTrackingID_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchDetails_GetUsers addr 0x2569de8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LaunchDetails_GetUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidCancel addr 0x2569e64 size 0x84 virtual false final false
static bool ovr_LaunchFriendRequestFlowResult_GetDidCancel(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchFriendRequestFlowResult_GetDidSendRequest addr 0x2569ee8 size 0x84 virtual false final false
static bool ovr_LaunchFriendRequestFlowResult_GetDidSendRequest(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchInvitePanelFlowResult_GetInvitedUsers addr 0x2569f6c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LaunchInvitePanelFlowResult_GetInvitedUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchReportFlowResult_GetDidCancel addr 0x2569fe8 size 0x84 virtual false final false
static bool ovr_LaunchReportFlowResult_GetDidCancel(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchReportFlowResult_GetUserReportId addr 0x256a06c size 0x7c virtual false final false
static uint64_t ovr_LaunchReportFlowResult_GetUserReportId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchUnblockFlowResult_GetDidCancel addr 0x256a0e8 size 0x84 virtual false final false
static bool ovr_LaunchUnblockFlowResult_GetDidCancel(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LaunchUnblockFlowResult_GetDidUnblock addr 0x256a16c size 0x84 virtual false final false
static bool ovr_LaunchUnblockFlowResult_GetDidUnblock(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Leaderboard_GetApiName addr 0x256a1f0 size 0x58 virtual false final false
static ::StringW ovr_Leaderboard_GetApiName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Leaderboard_GetApiName_Native addr 0x256a248 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Leaderboard_GetApiName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Leaderboard_GetDestination addr 0x256a2c4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Leaderboard_GetDestination(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Leaderboard_GetID addr 0x256a340 size 0x7c virtual false final false
static uint64_t ovr_Leaderboard_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardArray_GetElement addr 0x256a3bc size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_LeaderboardArray_GetNextUrl addr 0x256a440 size 0x58 virtual false final false
static ::StringW ovr_LeaderboardArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardArray_GetNextUrl_Native addr 0x256a498 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardArray_GetSize addr 0x256a514 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_LeaderboardArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardArray_HasNextPage addr 0x256a590 size 0x84 virtual false final false
static bool ovr_LeaderboardArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetDisplayScore addr 0x256a614 size 0x58 virtual false final false
static ::StringW ovr_LeaderboardEntry_GetDisplayScore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetDisplayScore_Native addr 0x256a66c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntry_GetDisplayScore_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraData addr 0x256a6e8 size 0x6c virtual false final false
static ::ArrayW<uint8_t> ovr_LeaderboardEntry_GetExtraData(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraData_Native addr 0x256a754 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntry_GetExtraData_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetExtraDataLength addr 0x2566790 size 0x7c virtual false final false
static uint32_t ovr_LeaderboardEntry_GetExtraDataLength(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetID addr 0x256a7d0 size 0x7c virtual false final false
static uint64_t ovr_LeaderboardEntry_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetRank addr 0x256a84c size 0x7c virtual false final false
static int32_t ovr_LeaderboardEntry_GetRank(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetScore addr 0x256a8c8 size 0x7c virtual false final false
static int64_t ovr_LeaderboardEntry_GetScore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetSupplementaryMetric addr 0x256a944 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntry_GetSupplementaryMetric(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetTimestamp addr 0x256a9c0 size 0x58 virtual false final false
static System::DateTime ovr_LeaderboardEntry_GetTimestamp(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetTimestamp_Native addr 0x256aa18 size 0x7c virtual false final false
static uint64_t ovr_LeaderboardEntry_GetTimestamp_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntry_GetUser addr 0x256aa94 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntry_GetUser(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetElement addr 0x256ab10 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntryArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_LeaderboardEntryArray_GetNextUrl addr 0x256ab94 size 0x58 virtual false final false
static ::StringW ovr_LeaderboardEntryArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetNextUrl_Native addr 0x256abec size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntryArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl addr 0x256ac68 size 0x58 virtual false final false
static ::StringW ovr_LeaderboardEntryArray_GetPreviousUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetPreviousUrl_Native addr 0x256acc0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LeaderboardEntryArray_GetPreviousUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetSize addr 0x256ad3c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_LeaderboardEntryArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_GetTotalCount addr 0x256adb8 size 0x7c virtual false final false
static uint64_t ovr_LeaderboardEntryArray_GetTotalCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_HasNextPage addr 0x256ae34 size 0x84 virtual false final false
static bool ovr_LeaderboardEntryArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardEntryArray_HasPreviousPage addr 0x256aeb8 size 0x84 virtual false final false
static bool ovr_LeaderboardEntryArray_HasPreviousPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetDidUpdate addr 0x256af3c size 0x84 virtual false final false
static bool ovr_LeaderboardUpdateStatus_GetDidUpdate(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId addr 0x256afc0 size 0x84 virtual false final false
static uint64_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeId(::cordl_internals::intptr_t obj, uint32_t index) ;

/// @brief Method ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize addr 0x256b044 size 0x7c virtual false final false
static uint32_t ovr_LeaderboardUpdateStatus_GetUpdatedChallengeIdsSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LinkedAccount_GetAccessToken addr 0x256b0c0 size 0x58 virtual false final false
static ::StringW ovr_LinkedAccount_GetAccessToken(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LinkedAccount_GetAccessToken_Native addr 0x256b118 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LinkedAccount_GetAccessToken_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LinkedAccount_GetServiceProvider addr 0x256b194 size 0x7c virtual false final false
static Oculus::Platform::ServiceProvider ovr_LinkedAccount_GetServiceProvider(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LinkedAccount_GetUserId addr 0x256b210 size 0x58 virtual false final false
static ::StringW ovr_LinkedAccount_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LinkedAccount_GetUserId_Native addr 0x256b268 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LinkedAccount_GetUserId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LinkedAccountArray_GetElement addr 0x256b2e4 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_LinkedAccountArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_LinkedAccountArray_GetSize addr 0x256b368 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_LinkedAccountArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingApplicationStatus_GetStreamingEnabled addr 0x256b3e4 size 0x84 virtual false final false
static bool ovr_LivestreamingApplicationStatus_GetStreamingEnabled(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingStartResult_GetStreamingResult addr 0x256b468 size 0x7c virtual false final false
static Oculus::Platform::LivestreamingStartStatus ovr_LivestreamingStartResult_GetStreamingResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingStatus_GetCommentsVisible addr 0x256b4e4 size 0x84 virtual false final false
static bool ovr_LivestreamingStatus_GetCommentsVisible(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingStatus_GetIsPaused addr 0x256b568 size 0x84 virtual false final false
static bool ovr_LivestreamingStatus_GetIsPaused(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingStatus_GetLivestreamingEnabled addr 0x256b5ec size 0x84 virtual false final false
static bool ovr_LivestreamingStatus_GetLivestreamingEnabled(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingStatus_GetLivestreamingType addr 0x256b670 size 0x7c virtual false final false
static int32_t ovr_LivestreamingStatus_GetLivestreamingType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingStatus_GetMicEnabled addr 0x256b6ec size 0x84 virtual false final false
static bool ovr_LivestreamingStatus_GetMicEnabled(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetCommentCount addr 0x256b770 size 0x7c virtual false final false
static int32_t ovr_LivestreamingVideoStats_GetCommentCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetReactionCount addr 0x256b7ec size 0x7c virtual false final false
static int32_t ovr_LivestreamingVideoStats_GetReactionCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetTotalViews addr 0x256b868 size 0x58 virtual false final false
static ::StringW ovr_LivestreamingVideoStats_GetTotalViews(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_LivestreamingVideoStats_GetTotalViews_Native addr 0x256b8c0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_LivestreamingVideoStats_GetTotalViews_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshot_GetCandidates addr 0x256b93c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingAdminSnapshot_GetCandidates(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshot_GetMyCurrentThreshold addr 0x256b9b8 size 0x7c virtual false final false
static double_t ovr_MatchmakingAdminSnapshot_GetMyCurrentThreshold(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetCanMatch addr 0x256ba34 size 0x84 virtual false final false
static bool ovr_MatchmakingAdminSnapshotCandidate_GetCanMatch(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetMyTotalScore addr 0x256bab8 size 0x7c virtual false final false
static double_t ovr_MatchmakingAdminSnapshotCandidate_GetMyTotalScore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold addr 0x256bb34 size 0x7c virtual false final false
static double_t ovr_MatchmakingAdminSnapshotCandidate_GetTheirCurrentThreshold(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTheirTotalScore addr 0x256bbb0 size 0x7c virtual false final false
static double_t ovr_MatchmakingAdminSnapshotCandidate_GetTheirTotalScore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTraceId addr 0x256bc2c size 0x58 virtual false final false
static ::StringW ovr_MatchmakingAdminSnapshotCandidate_GetTraceId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidate_GetTraceId_Native addr 0x256bc84 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingAdminSnapshotCandidate_GetTraceId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidateArray_GetElement addr 0x256bd00 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingAdminSnapshotCandidateArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_MatchmakingAdminSnapshotCandidateArray_GetSize addr 0x256bd84 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_MatchmakingAdminSnapshotCandidateArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingBrowseResult_GetEnqueueResult addr 0x256be00 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingBrowseResult_GetEnqueueResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingBrowseResult_GetRooms addr 0x256be7c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingBrowseResult_GetRooms(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidate_GetEntryHash addr 0x256bef8 size 0x58 virtual false final false
static ::StringW ovr_MatchmakingCandidate_GetEntryHash(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidate_GetEntryHash_Native addr 0x256bf50 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingCandidate_GetEntryHash_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidate_GetUserId addr 0x256bfcc size 0x7c virtual false final false
static uint64_t ovr_MatchmakingCandidate_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidateArray_GetElement addr 0x256c048 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingCandidateArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_MatchmakingCandidateArray_GetNextUrl addr 0x256c0cc size 0x58 virtual false final false
static ::StringW ovr_MatchmakingCandidateArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidateArray_GetNextUrl_Native addr 0x256c124 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingCandidateArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidateArray_GetSize addr 0x256c1a0 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_MatchmakingCandidateArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingCandidateArray_HasNextPage addr 0x256c21c size 0x84 virtual false final false
static bool ovr_MatchmakingCandidateArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetAdminSnapshot addr 0x256c2a0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueueResult_GetAdminSnapshot(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetAverageWait addr 0x256c31c size 0x7c virtual false final false
static uint32_t ovr_MatchmakingEnqueueResult_GetAverageWait(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetMatchesInLastHourCount addr 0x256c398 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingEnqueueResult_GetMatchesInLastHourCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetMaxExpectedWait addr 0x256c414 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingEnqueueResult_GetMaxExpectedWait(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetPool addr 0x256c490 size 0x58 virtual false final false
static ::StringW ovr_MatchmakingEnqueueResult_GetPool(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetPool_Native addr 0x256c4e8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueueResult_GetPool_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetRecentMatchPercentage addr 0x256c564 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingEnqueueResult_GetRecentMatchPercentage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetRequestHash addr 0x256c5e0 size 0x58 virtual false final false
static ::StringW ovr_MatchmakingEnqueueResult_GetRequestHash(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResult_GetRequestHash_Native addr 0x256c638 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueueResult_GetRequestHash_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult addr 0x256c6b4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueueResultAndRoom_GetMatchmakingEnqueueResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueueResultAndRoom_GetRoom addr 0x256c730 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueueResultAndRoom_GetRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueuedUser_GetAdditionalUserID addr 0x256c7ac size 0x84 virtual false final false
static uint64_t ovr_MatchmakingEnqueuedUser_GetAdditionalUserID(::cordl_internals::intptr_t obj, uint32_t index) ;

/// @brief Method ovr_MatchmakingEnqueuedUser_GetAdditionalUserIDsSize addr 0x256c830 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingEnqueuedUser_GetAdditionalUserIDsSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueuedUser_GetCustomData addr 0x256c8ac size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueuedUser_GetCustomData(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueuedUser_GetUser addr 0x256c928 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueuedUser_GetUser(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingEnqueuedUserArray_GetElement addr 0x256c9a4 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingEnqueuedUserArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_MatchmakingEnqueuedUserArray_GetSize addr 0x256ca28 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_MatchmakingEnqueuedUserArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingNotification_GetAddedByUserId addr 0x256caa4 size 0x7c virtual false final false
static uint64_t ovr_MatchmakingNotification_GetAddedByUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingNotification_GetRoom addr 0x256cb20 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingNotification_GetRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingNotification_GetTraceId addr 0x256cb9c size 0x58 virtual false final false
static ::StringW ovr_MatchmakingNotification_GetTraceId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingNotification_GetTraceId_Native addr 0x256cbf4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingNotification_GetTraceId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingRoom_GetPingTime addr 0x256cc70 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingRoom_GetPingTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingRoom_GetRoom addr 0x256ccec size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingRoom_GetRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingRoom_HasPingTime addr 0x256cd68 size 0x84 virtual false final false
static bool ovr_MatchmakingRoom_HasPingTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingRoomArray_GetElement addr 0x256cdec size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingRoomArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_MatchmakingRoomArray_GetSize addr 0x256ce70 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_MatchmakingRoomArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingStats_GetDrawCount addr 0x256ceec size 0x7c virtual false final false
static uint32_t ovr_MatchmakingStats_GetDrawCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingStats_GetLossCount addr 0x256cf68 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingStats_GetLossCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingStats_GetSkillLevel addr 0x256cfe4 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingStats_GetSkillLevel(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingStats_GetSkillMean addr 0x256d060 size 0x7c virtual false final false
static double_t ovr_MatchmakingStats_GetSkillMean(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingStats_GetSkillStandardDeviation addr 0x256d0dc size 0x7c virtual false final false
static double_t ovr_MatchmakingStats_GetSkillStandardDeviation(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MatchmakingStats_GetWinCount addr 0x256d158 size 0x7c virtual false final false
static uint32_t ovr_MatchmakingStats_GetWinCount(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAbuseReportRecording addr 0x256d1d4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAbuseReportRecording(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAchievementDefinitionArray addr 0x256d250 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAchievementDefinitionArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAchievementProgressArray addr 0x256d2cc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAchievementProgressArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAchievementUpdate addr 0x256d348 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAchievementUpdate(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetApplicationInviteArray addr 0x256d3c4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetApplicationInviteArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetApplicationVersion addr 0x256d440 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetApplicationVersion(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAssetDetails addr 0x256d4bc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAssetDetails(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAssetDetailsArray addr 0x256d538 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAssetDetailsArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAssetFileDeleteResult addr 0x256d5b4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAssetFileDeleteResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadCancelResult addr 0x256d630 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAssetFileDownloadCancelResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadResult addr 0x256d6ac size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAssetFileDownloadResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAssetFileDownloadUpdate addr 0x256d728 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAssetFileDownloadUpdate(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetAvatarEditorResult addr 0x256d7a4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetAvatarEditorResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetBlockedUserArray addr 0x256d820 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetBlockedUserArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCalApplicationFinalized addr 0x256d89c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCalApplicationFinalized(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCalApplicationProposed addr 0x256d918 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCalApplicationProposed(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCalApplicationSuggestionArray addr 0x256d994 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCalApplicationSuggestionArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetChallenge addr 0x256da10 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetChallenge(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetChallengeArray addr 0x256da8c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetChallengeArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetChallengeEntryArray addr 0x256db08 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetChallengeEntryArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCloudStorageConflictMetadata addr 0x256db84 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCloudStorageConflictMetadata(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCloudStorageData addr 0x256dc00 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCloudStorageData(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCloudStorageMetadata addr 0x256dc7c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCloudStorageMetadata(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCloudStorageMetadataArray addr 0x256dcf8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCloudStorageMetadataArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetCloudStorageUpdateResponse addr 0x256dd74 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetCloudStorageUpdateResponse(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetDataStore addr 0x256ddf0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetDataStore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetDestinationArray addr 0x256de6c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetDestinationArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetError addr 0x256dee8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetError(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetGroupPresenceJoinIntent addr 0x256df64 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetGroupPresenceJoinIntent(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetGroupPresenceLeaveIntent addr 0x256dfe0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetGroupPresenceLeaveIntent(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetHttpTransferUpdate addr 0x256e05c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetHttpTransferUpdate(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetInstalledApplicationArray addr 0x256e0d8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetInstalledApplicationArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetInvitePanelResultInfo addr 0x256e154 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetInvitePanelResultInfo(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLaunchBlockFlowResult addr 0x256e1d0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLaunchBlockFlowResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLaunchFriendRequestFlowResult addr 0x256e24c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLaunchFriendRequestFlowResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLaunchInvitePanelFlowResult addr 0x256e2c8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLaunchInvitePanelFlowResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLaunchReportFlowResult addr 0x256e344 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLaunchReportFlowResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLaunchUnblockFlowResult addr 0x256e3c0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLaunchUnblockFlowResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLeaderboardArray addr 0x256e43c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLeaderboardArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLeaderboardEntryArray addr 0x256e4b8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLeaderboardEntryArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLeaderboardUpdateStatus addr 0x256e534 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLeaderboardUpdateStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLinkedAccountArray addr 0x256e5b0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLinkedAccountArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLivestreamingApplicationStatus addr 0x256e62c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLivestreamingApplicationStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLivestreamingStartResult addr 0x256e6a8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLivestreamingStartResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLivestreamingStatus addr 0x256e724 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLivestreamingStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetLivestreamingVideoStats addr 0x256e7a0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetLivestreamingVideoStats(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMatchmakingAdminSnapshot addr 0x256e81c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMatchmakingAdminSnapshot(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMatchmakingBrowseResult addr 0x256e898 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMatchmakingBrowseResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMatchmakingEnqueueResult addr 0x256e914 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMatchmakingEnqueueResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMatchmakingEnqueueResultAndRoom addr 0x256e990 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMatchmakingEnqueueResultAndRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMatchmakingRoomArray addr 0x256ea0c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMatchmakingRoomArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMatchmakingStats addr 0x256ea88 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMatchmakingStats(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetMicrophoneAvailabilityState addr 0x256eb04 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetMicrophoneAvailabilityState(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNativeMessage addr 0x256eb80 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNativeMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNetSyncConnection addr 0x256ebfc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNetSyncConnection(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNetSyncSessionArray addr 0x256ec78 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNetSyncSessionArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNetSyncSessionsChangedNotification addr 0x256ecf4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNetSyncSessionsChangedNotification(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNetSyncSetSessionPropertyResult addr 0x256ed70 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNetSyncSetSessionPropertyResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNetSyncVoipAttenuationValueArray addr 0x256edec size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNetSyncVoipAttenuationValueArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetNetworkingPeer addr 0x256ee68 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetNetworkingPeer(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetOrgScopedID addr 0x256eee4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetOrgScopedID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetParty addr 0x256ef60 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetParty(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPartyID addr 0x256efdc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPartyID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPartyUpdateNotification addr 0x256f058 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPartyUpdateNotification(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPidArray addr 0x256f0d4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPidArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPingResult addr 0x256f150 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPingResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPlatformInitialize addr 0x256f1cc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPlatformInitialize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetProductArray addr 0x256f248 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetProductArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPurchase addr 0x256f2c4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPurchase(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetPurchaseArray addr 0x256f340 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetPurchaseArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetRejoinDialogResult addr 0x256f3bc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetRejoinDialogResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetRequestID addr 0x256f438 size 0x7c virtual false final false
static uint64_t ovr_Message_GetRequestID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetRoom addr 0x256f4b4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetRoomArray addr 0x256f530 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetRoomArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetRoomInviteNotification addr 0x256f5ac size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetRoomInviteNotification(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetRoomInviteNotificationArray addr 0x256f628 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetRoomInviteNotificationArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetSdkAccountArray addr 0x256f6a4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetSdkAccountArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetSendInvitesResult addr 0x256f720 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetSendInvitesResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetShareMediaResult addr 0x256f79c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetShareMediaResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetString addr 0x256f818 size 0x58 virtual false final false
static ::StringW ovr_Message_GetString(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetString_Native addr 0x256f870 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetString_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetSystemVoipState addr 0x256f8ec size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetSystemVoipState(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetType addr 0x256f968 size 0x7c virtual false final false
static Oculus::Platform::Oculus__Platform__Message__MessageType ovr_Message_GetType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUser addr 0x256f9e4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUser(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUserAndRoomArray addr 0x256fa60 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUserAndRoomArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUserArray addr 0x256fadc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUserArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUserCapabilityArray addr 0x256fb58 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUserCapabilityArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUserDataStoreUpdateResponse addr 0x256fbd4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUserDataStoreUpdateResponse(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUserProof addr 0x256fc50 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUserProof(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_GetUserReportID addr 0x256fccc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Message_GetUserReportID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Message_IsError addr 0x256fd48 size 0x84 virtual false final false
static bool ovr_Message_IsError(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Microphone_GetNumSamplesAvailable addr 0x256fdcc size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_Microphone_GetNumSamplesAvailable(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Microphone_GetOutputBufferMaxSize addr 0x256fe48 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_Microphone_GetOutputBufferMaxSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Microphone_GetPCM addr 0x256fec4 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_Microphone_GetPCM(::cordl_internals::intptr_t obj, ::ArrayW<int16_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_Microphone_GetPCMFloat addr 0x256ff60 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_Microphone_GetPCMFloat(::cordl_internals::intptr_t obj, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferNumElements) ;

/// @brief Method ovr_Microphone_ReadData addr 0x256fffc size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_Microphone_ReadData(::cordl_internals::intptr_t obj, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferSize) ;

/// @brief Method ovr_Microphone_SetAcceptableRecordingDelayHint addr 0x2570098 size 0x84 virtual false final false
static void ovr_Microphone_SetAcceptableRecordingDelayHint(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t delayMs) ;

/// @brief Method ovr_Microphone_Start addr 0x257011c size 0x7c virtual false final false
static void ovr_Microphone_Start(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Microphone_Stop addr 0x2570198 size 0x7c virtual false final false
static void ovr_Microphone_Stop(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable addr 0x2570214 size 0x84 virtual false final false
static bool ovr_MicrophoneAvailabilityState_GetMicrophoneAvailable(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncConnection_GetConnectionId addr 0x2570298 size 0x7c virtual false final false
static int64_t ovr_NetSyncConnection_GetConnectionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncConnection_GetDisconnectReason addr 0x2570314 size 0x7c virtual false final false
static Oculus::Platform::NetSyncDisconnectReason ovr_NetSyncConnection_GetDisconnectReason(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncConnection_GetSessionId addr 0x2570390 size 0x7c virtual false final false
static uint64_t ovr_NetSyncConnection_GetSessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncConnection_GetStatus addr 0x257040c size 0x7c virtual false final false
static Oculus::Platform::NetSyncConnectionStatus ovr_NetSyncConnection_GetStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncConnection_GetZoneId addr 0x2570488 size 0x58 virtual false final false
static ::StringW ovr_NetSyncConnection_GetZoneId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncConnection_GetZoneId_Native addr 0x25704e0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncConnection_GetZoneId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSession_GetConnectionId addr 0x257055c size 0x7c virtual false final false
static int64_t ovr_NetSyncSession_GetConnectionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSession_GetMuted addr 0x25705d8 size 0x84 virtual false final false
static bool ovr_NetSyncSession_GetMuted(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSession_GetSessionId addr 0x257065c size 0x7c virtual false final false
static uint64_t ovr_NetSyncSession_GetSessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSession_GetUserId addr 0x25706d8 size 0x7c virtual false final false
static uint64_t ovr_NetSyncSession_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSession_GetVoipGroup addr 0x2570754 size 0x58 virtual false final false
static ::StringW ovr_NetSyncSession_GetVoipGroup(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSession_GetVoipGroup_Native addr 0x25707ac size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncSession_GetVoipGroup_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSessionArray_GetElement addr 0x2570828 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncSessionArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_NetSyncSessionArray_GetSize addr 0x25708ac size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSyncSessionArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSessionsChangedNotification_GetConnectionId addr 0x2570928 size 0x7c virtual false final false
static int64_t ovr_NetSyncSessionsChangedNotification_GetConnectionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSessionsChangedNotification_GetSessions addr 0x25709a4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncSessionsChangedNotification_GetSessions(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncSetSessionPropertyResult_GetSession addr 0x2570a20 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncSetSessionPropertyResult_GetSession(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValue_GetDecibels addr 0x2570a9c size 0x7c virtual false final false
static float_t ovr_NetSyncVoipAttenuationValue_GetDecibels(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValue_GetDistance addr 0x2570b18 size 0x7c virtual false final false
static float_t ovr_NetSyncVoipAttenuationValue_GetDistance(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetElement addr 0x2570b94 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncVoipAttenuationValueArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_NetSyncVoipAttenuationValueArray_GetSize addr 0x2570c18 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_NetSyncVoipAttenuationValueArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetworkingPeer_GetID addr 0x2570c94 size 0x7c virtual false final false
static uint64_t ovr_NetworkingPeer_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_NetworkingPeer_GetState addr 0x2570d10 size 0x7c virtual false final false
static Oculus::Platform::PeerConnectionState ovr_NetworkingPeer_GetState(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_OrgScopedID_GetID addr 0x2570d8c size 0x7c virtual false final false
static uint64_t ovr_OrgScopedID_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Packet_Free addr 0x2570e08 size 0x7c virtual false final false
static void ovr_Packet_Free(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Packet_GetBytes addr 0x2570e84 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Packet_GetBytes(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Packet_GetSendPolicy addr 0x2570f00 size 0x7c virtual false final false
static Oculus::Platform::SendPolicy ovr_Packet_GetSendPolicy(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Packet_GetSenderID addr 0x2570f7c size 0x7c virtual false final false
static uint64_t ovr_Packet_GetSenderID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Packet_GetSize addr 0x2570ff8 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_Packet_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Party_GetID addr 0x2571074 size 0x7c virtual false final false
static uint64_t ovr_Party_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Party_GetInvitedUsers addr 0x25710f0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Party_GetInvitedUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Party_GetLeader addr 0x257116c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Party_GetLeader(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Party_GetRoom addr 0x25711e8 size 0x78 virtual false final false
static ::cordl_internals::intptr_t ovr_Party_GetRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Party_GetUsers addr 0x2571260 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Party_GetUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyID_GetID addr 0x25712dc size 0x78 virtual false final false
static uint64_t ovr_PartyID_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetAction addr 0x2571354 size 0x7c virtual false final false
static Oculus::Platform::PartyUpdateAction ovr_PartyUpdateNotification_GetAction(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetPartyId addr 0x25713d0 size 0x7c virtual false final false
static uint64_t ovr_PartyUpdateNotification_GetPartyId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetSenderId addr 0x257144c size 0x7c virtual false final false
static uint64_t ovr_PartyUpdateNotification_GetSenderId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp addr 0x25714c8 size 0x58 virtual false final false
static ::StringW ovr_PartyUpdateNotification_GetUpdateTimestamp(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUpdateTimestamp_Native addr 0x2571520 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_PartyUpdateNotification_GetUpdateTimestamp_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserAlias addr 0x257159c size 0x58 virtual false final false
static ::StringW ovr_PartyUpdateNotification_GetUserAlias(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserAlias_Native addr 0x25715f4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_PartyUpdateNotification_GetUserAlias_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserId addr 0x2571670 size 0x7c virtual false final false
static uint64_t ovr_PartyUpdateNotification_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserName addr 0x25716ec size 0x58 virtual false final false
static ::StringW ovr_PartyUpdateNotification_GetUserName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PartyUpdateNotification_GetUserName_Native addr 0x2571744 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_PartyUpdateNotification_GetUserName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Pid_GetId addr 0x25717c0 size 0x58 virtual false final false
static ::StringW ovr_Pid_GetId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Pid_GetId_Native addr 0x2571818 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Pid_GetId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PidArray_GetElement addr 0x2571894 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_PidArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_PidArray_GetSize addr 0x2571918 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_PidArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PingResult_GetID addr 0x2571994 size 0x7c virtual false final false
static uint64_t ovr_PingResult_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PingResult_GetPingTimeUsec addr 0x2571a10 size 0x7c virtual false final false
static uint64_t ovr_PingResult_GetPingTimeUsec(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PingResult_IsTimeout addr 0x2571a8c size 0x84 virtual false final false
static bool ovr_PingResult_IsTimeout(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PlatformInitialize_GetResult addr 0x2571b10 size 0x7c virtual false final false
static Oculus::Platform::PlatformInitializeResult ovr_PlatformInitialize_GetResult(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Price_GetAmountInHundredths addr 0x2571b8c size 0x7c virtual false final false
static uint32_t ovr_Price_GetAmountInHundredths(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Price_GetCurrency addr 0x2571c08 size 0x58 virtual false final false
static ::StringW ovr_Price_GetCurrency(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Price_GetCurrency_Native addr 0x2571c60 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Price_GetCurrency_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Price_GetFormatted addr 0x2571cdc size 0x58 virtual false final false
static ::StringW ovr_Price_GetFormatted(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Price_GetFormatted_Native addr 0x2571d34 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Price_GetFormatted_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetDescription addr 0x2571db0 size 0x58 virtual false final false
static ::StringW ovr_Product_GetDescription(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetDescription_Native addr 0x2571e08 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Product_GetDescription_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetFormattedPrice addr 0x2571e84 size 0x58 virtual false final false
static ::StringW ovr_Product_GetFormattedPrice(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetFormattedPrice_Native addr 0x2571edc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Product_GetFormattedPrice_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetName addr 0x2571f58 size 0x58 virtual false final false
static ::StringW ovr_Product_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetName_Native addr 0x2571fb0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Product_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetSKU addr 0x257202c size 0x58 virtual false final false
static ::StringW ovr_Product_GetSKU(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Product_GetSKU_Native addr 0x2572084 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Product_GetSKU_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ProductArray_GetElement addr 0x2572100 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_ProductArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_ProductArray_GetNextUrl addr 0x2572184 size 0x58 virtual false final false
static ::StringW ovr_ProductArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ProductArray_GetNextUrl_Native addr 0x25721dc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_ProductArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ProductArray_GetSize addr 0x2572258 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_ProductArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ProductArray_HasNextPage addr 0x25722d4 size 0x84 virtual false final false
static bool ovr_ProductArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetDeveloperPayload addr 0x2572358 size 0x58 virtual false final false
static ::StringW ovr_Purchase_GetDeveloperPayload(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetDeveloperPayload_Native addr 0x25723b0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Purchase_GetDeveloperPayload_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetExpirationTime addr 0x257242c size 0x58 virtual false final false
static System::DateTime ovr_Purchase_GetExpirationTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetExpirationTime_Native addr 0x2572484 size 0x7c virtual false final false
static uint64_t ovr_Purchase_GetExpirationTime_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetGrantTime addr 0x2572500 size 0x58 virtual false final false
static System::DateTime ovr_Purchase_GetGrantTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetGrantTime_Native addr 0x2572558 size 0x7c virtual false final false
static uint64_t ovr_Purchase_GetGrantTime_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetPurchaseID addr 0x25725d4 size 0x7c virtual false final false
static uint64_t ovr_Purchase_GetPurchaseID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetPurchaseStrID addr 0x2572650 size 0x58 virtual false final false
static ::StringW ovr_Purchase_GetPurchaseStrID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetPurchaseStrID_Native addr 0x25726a8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Purchase_GetPurchaseStrID_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetReportingId addr 0x2572724 size 0x58 virtual false final false
static ::StringW ovr_Purchase_GetReportingId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetReportingId_Native addr 0x257277c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Purchase_GetReportingId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetSKU addr 0x25727f8 size 0x58 virtual false final false
static ::StringW ovr_Purchase_GetSKU(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Purchase_GetSKU_Native addr 0x2572850 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Purchase_GetSKU_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PurchaseArray_GetElement addr 0x25728cc size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_PurchaseArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_PurchaseArray_GetNextUrl addr 0x2572950 size 0x58 virtual false final false
static ::StringW ovr_PurchaseArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PurchaseArray_GetNextUrl_Native addr 0x25729a8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_PurchaseArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PurchaseArray_GetSize addr 0x2572a24 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_PurchaseArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_PurchaseArray_HasNextPage addr 0x2572aa0 size 0x84 virtual false final false
static bool ovr_PurchaseArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RejoinDialogResult_GetRejoinSelected addr 0x2572b24 size 0x84 virtual false final false
static bool ovr_RejoinDialogResult_GetRejoinSelected(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetApplicationID addr 0x2572ba8 size 0x7c virtual false final false
static uint64_t ovr_Room_GetApplicationID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetDataStore addr 0x2572c24 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetDataStore(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetDescription addr 0x2572ca0 size 0x58 virtual false final false
static ::StringW ovr_Room_GetDescription(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetDescription_Native addr 0x2572cf8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetDescription_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetID addr 0x2572d74 size 0x7c virtual false final false
static uint64_t ovr_Room_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetInvitedUsers addr 0x2572df0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetInvitedUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetIsMembershipLocked addr 0x2572e6c size 0x84 virtual false final false
static bool ovr_Room_GetIsMembershipLocked(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetJoinPolicy addr 0x2572ef0 size 0x7c virtual false final false
static Oculus::Platform::RoomJoinPolicy ovr_Room_GetJoinPolicy(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetJoinability addr 0x2572f6c size 0x7c virtual false final false
static Oculus::Platform::RoomJoinability ovr_Room_GetJoinability(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetMatchedUsers addr 0x2572fe8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetMatchedUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetMaxUsers addr 0x2573064 size 0x7c virtual false final false
static uint32_t ovr_Room_GetMaxUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetName addr 0x25730e0 size 0x58 virtual false final false
static ::StringW ovr_Room_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetName_Native addr 0x2573138 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetOwner addr 0x25731b4 size 0x78 virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetOwner(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetTeams addr 0x257322c size 0x78 virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetTeams(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetType addr 0x25732a4 size 0x7c virtual false final false
static Oculus::Platform::RoomType ovr_Room_GetType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetUsers addr 0x2573320 size 0x78 virtual false final false
static ::cordl_internals::intptr_t ovr_Room_GetUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Room_GetVersion addr 0x2573398 size 0x7c virtual false final false
static uint32_t ovr_Room_GetVersion(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomArray_GetElement addr 0x2573414 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_RoomArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_RoomArray_GetNextUrl addr 0x2573498 size 0x58 virtual false final false
static ::StringW ovr_RoomArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomArray_GetNextUrl_Native addr 0x25734f0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_RoomArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomArray_GetSize addr 0x257356c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_RoomArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomArray_HasNextPage addr 0x25735e8 size 0x84 virtual false final false
static bool ovr_RoomArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotification_GetID addr 0x257366c size 0x7c virtual false final false
static uint64_t ovr_RoomInviteNotification_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotification_GetRoomID addr 0x25736e8 size 0x7c virtual false final false
static uint64_t ovr_RoomInviteNotification_GetRoomID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotification_GetSenderID addr 0x2573764 size 0x7c virtual false final false
static uint64_t ovr_RoomInviteNotification_GetSenderID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotification_GetSentTime addr 0x25737e0 size 0x58 virtual false final false
static System::DateTime ovr_RoomInviteNotification_GetSentTime(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotification_GetSentTime_Native addr 0x2573838 size 0x7c virtual false final false
static uint64_t ovr_RoomInviteNotification_GetSentTime_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotificationArray_GetElement addr 0x25738b4 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_RoomInviteNotificationArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_RoomInviteNotificationArray_GetNextUrl addr 0x2573938 size 0x58 virtual false final false
static ::StringW ovr_RoomInviteNotificationArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotificationArray_GetNextUrl_Native addr 0x2573990 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_RoomInviteNotificationArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotificationArray_GetSize addr 0x2573a0c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_RoomInviteNotificationArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_RoomInviteNotificationArray_HasNextPage addr 0x2573a88 size 0x84 virtual false final false
static bool ovr_RoomInviteNotificationArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SdkAccount_GetAccountType addr 0x2573b0c size 0x7c virtual false final false
static Oculus::Platform::SdkAccountType ovr_SdkAccount_GetAccountType(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SdkAccount_GetUserId addr 0x2573b88 size 0x7c virtual false final false
static uint64_t ovr_SdkAccount_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SdkAccountArray_GetElement addr 0x2573c04 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_SdkAccountArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_SdkAccountArray_GetSize addr 0x2573c88 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_SdkAccountArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SendInvitesResult_GetInvites addr 0x2573d04 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_SendInvitesResult_GetInvites(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_ShareMediaResult_GetStatus addr 0x2573d80 size 0x7c virtual false final false
static Oculus::Platform::ShareMediaStatus ovr_ShareMediaResult_GetStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SupplementaryMetric_GetID addr 0x2573dfc size 0x7c virtual false final false
static uint64_t ovr_SupplementaryMetric_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SupplementaryMetric_GetMetric addr 0x2573e78 size 0x7c virtual false final false
static int64_t ovr_SupplementaryMetric_GetMetric(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SystemVoipState_GetMicrophoneMuted addr 0x2573ef4 size 0x7c virtual false final false
static Oculus::Platform::VoipMuteState ovr_SystemVoipState_GetMicrophoneMuted(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_SystemVoipState_GetStatus addr 0x2573f70 size 0x7c virtual false final false
static Oculus::Platform::SystemVoipStatus ovr_SystemVoipState_GetStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Team_GetAssignedUsers addr 0x2573fec size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Team_GetAssignedUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Team_GetMaxUsers addr 0x2574068 size 0x7c virtual false final false
static int32_t ovr_Team_GetMaxUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Team_GetMinUsers addr 0x25740e4 size 0x7c virtual false final false
static int32_t ovr_Team_GetMinUsers(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Team_GetName addr 0x2574160 size 0x58 virtual false final false
static ::StringW ovr_Team_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_Team_GetName_Native addr 0x25741b8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_Team_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TeamArray_GetElement addr 0x2574234 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_TeamArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_TeamArray_GetSize addr 0x25742b8 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_TeamArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetAccessToken addr 0x2574334 size 0x58 virtual false final false
static ::StringW ovr_TestUser_GetAccessToken(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetAccessToken_Native addr 0x257438c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUser_GetAccessToken_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetAppAccessArray addr 0x2574408 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUser_GetAppAccessArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetFbAppAccessArray addr 0x2574484 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUser_GetFbAppAccessArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetFriendAccessToken addr 0x2574500 size 0x58 virtual false final false
static ::StringW ovr_TestUser_GetFriendAccessToken(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetFriendAccessToken_Native addr 0x2574558 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUser_GetFriendAccessToken_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetFriendAppAccessArray addr 0x25745d4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUser_GetFriendAppAccessArray(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetUserAlias addr 0x2574650 size 0x58 virtual false final false
static ::StringW ovr_TestUser_GetUserAlias(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetUserAlias_Native addr 0x25746a8 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUser_GetUserAlias_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetUserFbid addr 0x2574724 size 0x7c virtual false final false
static uint64_t ovr_TestUser_GetUserFbid(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUser_GetUserId addr 0x25747a0 size 0x7c virtual false final false
static uint64_t ovr_TestUser_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAccessToken addr 0x257481c size 0x58 virtual false final false
static ::StringW ovr_TestUserAppAccess_GetAccessToken(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAccessToken_Native addr 0x2574874 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_TestUserAppAccess_GetAccessToken_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUserAppAccess_GetAppId addr 0x25748f0 size 0x7c virtual false final false
static uint64_t ovr_TestUserAppAccess_GetAppId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUserAppAccess_GetUserId addr 0x257496c size 0x7c virtual false final false
static uint64_t ovr_TestUserAppAccess_GetUserId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_TestUserAppAccessArray_GetElement addr 0x25749e8 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_TestUserAppAccessArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_TestUserAppAccessArray_GetSize addr 0x2574a6c size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_TestUserAppAccessArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetDisplayName addr 0x2574ae8 size 0x58 virtual false final false
static ::StringW ovr_User_GetDisplayName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetDisplayName_Native addr 0x2574b40 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetDisplayName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetID addr 0x2574bbc size 0x7c virtual false final false
static uint64_t ovr_User_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetImageUrl addr 0x2574c38 size 0x58 virtual false final false
static ::StringW ovr_User_GetImageUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetImageUrl_Native addr 0x2574c90 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetImageUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetInviteToken addr 0x2574d0c size 0x58 virtual false final false
static ::StringW ovr_User_GetInviteToken(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetInviteToken_Native addr 0x2574d64 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetInviteToken_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetOculusID addr 0x2574de0 size 0x58 virtual false final false
static ::StringW ovr_User_GetOculusID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetOculusID_Native addr 0x2574e38 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetOculusID_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresence addr 0x2574eb4 size 0x58 virtual false final false
static ::StringW ovr_User_GetPresence(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresence_Native addr 0x2574f0c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetPresence_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceDeeplinkMessage addr 0x2574f88 size 0x58 virtual false final false
static ::StringW ovr_User_GetPresenceDeeplinkMessage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceDeeplinkMessage_Native addr 0x2574fe0 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetPresenceDeeplinkMessage_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceDestinationApiName addr 0x257505c size 0x58 virtual false final false
static ::StringW ovr_User_GetPresenceDestinationApiName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceDestinationApiName_Native addr 0x25750b4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetPresenceDestinationApiName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceLobbySessionId addr 0x2575130 size 0x58 virtual false final false
static ::StringW ovr_User_GetPresenceLobbySessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceLobbySessionId_Native addr 0x2575188 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetPresenceLobbySessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceMatchSessionId addr 0x2575204 size 0x58 virtual false final false
static ::StringW ovr_User_GetPresenceMatchSessionId(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceMatchSessionId_Native addr 0x257525c size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetPresenceMatchSessionId_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetPresenceStatus addr 0x25752d8 size 0x7c virtual false final false
static Oculus::Platform::UserPresenceStatus ovr_User_GetPresenceStatus(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetSmallImageUrl addr 0x2575354 size 0x58 virtual false final false
static ::StringW ovr_User_GetSmallImageUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_User_GetSmallImageUrl_Native addr 0x25753ac size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_User_GetSmallImageUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserAndRoom_GetRoom addr 0x2575428 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserAndRoom_GetRoom(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserAndRoom_GetUser addr 0x25754a4 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserAndRoom_GetUser(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserAndRoomArray_GetElement addr 0x2575520 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_UserAndRoomArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_UserAndRoomArray_GetNextUrl addr 0x25755a4 size 0x58 virtual false final false
static ::StringW ovr_UserAndRoomArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserAndRoomArray_GetNextUrl_Native addr 0x25755fc size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserAndRoomArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserAndRoomArray_GetSize addr 0x2575678 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_UserAndRoomArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserAndRoomArray_HasNextPage addr 0x25756f4 size 0x84 virtual false final false
static bool ovr_UserAndRoomArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserArray_GetElement addr 0x2575778 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_UserArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_UserArray_GetNextUrl addr 0x25757fc size 0x58 virtual false final false
static ::StringW ovr_UserArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserArray_GetNextUrl_Native addr 0x2575854 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserArray_GetSize addr 0x25758d0 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_UserArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserArray_HasNextPage addr 0x257594c size 0x84 virtual false final false
static bool ovr_UserArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetDescription addr 0x25759d0 size 0x58 virtual false final false
static ::StringW ovr_UserCapability_GetDescription(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetDescription_Native addr 0x2575a28 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserCapability_GetDescription_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetIsEnabled addr 0x2575aa4 size 0x84 virtual false final false
static bool ovr_UserCapability_GetIsEnabled(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetName addr 0x2575b28 size 0x58 virtual false final false
static ::StringW ovr_UserCapability_GetName(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetName_Native addr 0x2575b80 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserCapability_GetName_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetReasonCode addr 0x2575bfc size 0x58 virtual false final false
static ::StringW ovr_UserCapability_GetReasonCode(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapability_GetReasonCode_Native addr 0x2575c54 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserCapability_GetReasonCode_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapabilityArray_GetElement addr 0x2575cd0 size 0x84 virtual false final false
static ::cordl_internals::intptr_t ovr_UserCapabilityArray_GetElement(::cordl_internals::intptr_t obj, ::cordl_internals::uintptr_t index) ;

/// @brief Method ovr_UserCapabilityArray_GetNextUrl addr 0x2575d54 size 0x58 virtual false final false
static ::StringW ovr_UserCapabilityArray_GetNextUrl(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapabilityArray_GetNextUrl_Native addr 0x2575dac size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserCapabilityArray_GetNextUrl_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapabilityArray_GetSize addr 0x2575e28 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_UserCapabilityArray_GetSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserCapabilityArray_HasNextPage addr 0x2575ea4 size 0x84 virtual false final false
static bool ovr_UserCapabilityArray_HasNextPage(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserDataStoreUpdateResponse_GetSuccess addr 0x2575f28 size 0x84 virtual false final false
static bool ovr_UserDataStoreUpdateResponse_GetSuccess(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserProof_GetNonce addr 0x2575fac size 0x58 virtual false final false
static ::StringW ovr_UserProof_GetNonce(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserProof_GetNonce_Native addr 0x2576004 size 0x7c virtual false final false
static ::cordl_internals::intptr_t ovr_UserProof_GetNonce_Native(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserReportID_GetDidCancel addr 0x2576080 size 0x84 virtual false final false
static bool ovr_UserReportID_GetDidCancel(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_UserReportID_GetID addr 0x2576104 size 0x7c virtual false final false
static uint64_t ovr_UserReportID_GetID(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_VoipDecoder_Decode addr 0x2576180 size 0x9c virtual false final false
static void ovr_VoipDecoder_Decode(::cordl_internals::intptr_t obj, ::ArrayW<uint8_t> compressedData, ::cordl_internals::uintptr_t compressedSize) ;

/// @brief Method ovr_VoipDecoder_GetDecodedPCM addr 0x257621c size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_VoipDecoder_GetDecodedPCM(::cordl_internals::intptr_t obj, ::ArrayW<float_t> outputBuffer, ::cordl_internals::uintptr_t outputBufferSize) ;

/// @brief Method ovr_VoipEncoder_AddPCM addr 0x25762b8 size 0x9c virtual false final false
static void ovr_VoipEncoder_AddPCM(::cordl_internals::intptr_t obj, ::ArrayW<float_t> inputData, uint32_t inputSize) ;

/// @brief Method ovr_VoipEncoder_GetCompressedData addr 0x2576354 size 0x9c virtual false final false
static ::cordl_internals::uintptr_t ovr_VoipEncoder_GetCompressedData(::cordl_internals::intptr_t obj, ::ArrayW<uint8_t> outputBuffer, ::cordl_internals::uintptr_t intputSize) ;

/// @brief Method ovr_VoipEncoder_GetCompressedDataSize addr 0x25763f0 size 0x7c virtual false final false
static ::cordl_internals::uintptr_t ovr_VoipEncoder_GetCompressedDataSize(::cordl_internals::intptr_t obj) ;

/// @brief Method ovr_AbuseReportOptions_Create addr 0x255207c size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_AbuseReportOptions_Create() ;

/// @brief Method ovr_AbuseReportOptions_Destroy addr 0x25523e8 size 0x7c virtual false final false
static void ovr_AbuseReportOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_AbuseReportOptions_SetPreventPeopleChooser addr 0x255214c size 0x84 virtual false final false
static void ovr_AbuseReportOptions_SetPreventPeopleChooser(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_AbuseReportOptions_SetReportType addr 0x2552238 size 0x84 virtual false final false
static void ovr_AbuseReportOptions_SetReportType(::cordl_internals::intptr_t handle, Oculus::Platform::AbuseReportType value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_Create addr 0x25524c8 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_AdvancedAbuseReportOptions_Create() ;

/// @brief Method ovr_AdvancedAbuseReportOptions_Destroy addr 0x2552d00 size 0x7c virtual false final false
static void ovr_AdvancedAbuseReportOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString addr 0x25525a0 size 0xc0 virtual false final false
static void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString(::cordl_internals::intptr_t handle, ::StringW key, ::StringW value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native addr 0x257646c size 0x94 virtual false final false
static void ovr_AdvancedAbuseReportOptions_SetDeveloperDefinedContextString_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext addr 0x25526b8 size 0x7c virtual false final false
static void ovr_AdvancedAbuseReportOptions_ClearDeveloperDefinedContext(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType addr 0x255279c size 0xa0 virtual false final false
static void ovr_AdvancedAbuseReportOptions_SetObjectType(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetObjectType_Native addr 0x2576500 size 0x84 virtual false final false
static void ovr_AdvancedAbuseReportOptions_SetObjectType_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetReportType addr 0x25528a4 size 0x84 virtual false final false
static void ovr_AdvancedAbuseReportOptions_SetReportType(::cordl_internals::intptr_t handle, Oculus::Platform::AbuseReportType value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_AddSuggestedUser addr 0x2552990 size 0x84 virtual false final false
static void ovr_AdvancedAbuseReportOptions_AddSuggestedUser(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers addr 0x2552a6c size 0x7c virtual false final false
static void ovr_AdvancedAbuseReportOptions_ClearSuggestedUsers(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_AdvancedAbuseReportOptions_SetVideoMode addr 0x2552b50 size 0x84 virtual false final false
static void ovr_AdvancedAbuseReportOptions_SetVideoMode(::cordl_internals::intptr_t handle, Oculus::Platform::AbuseReportVideoMode value) ;

/// @brief Method ovr_ApplicationOptions_Create addr 0x25530cc size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_ApplicationOptions_Create() ;

/// @brief Method ovr_ApplicationOptions_Destroy addr 0x255376c size 0x7c virtual false final false
static void ovr_ApplicationOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage addr 0x255319c size 0xa0 virtual false final false
static void ovr_ApplicationOptions_SetDeeplinkMessage(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ApplicationOptions_SetDeeplinkMessage_Native addr 0x2576584 size 0x84 virtual false final false
static void ovr_ApplicationOptions_SetDeeplinkMessage_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ApplicationOptions_SetDestinationApiName addr 0x25532a4 size 0xa0 virtual false final false
static void ovr_ApplicationOptions_SetDestinationApiName(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ApplicationOptions_SetDestinationApiName_Native addr 0x2576608 size 0x84 virtual false final false
static void ovr_ApplicationOptions_SetDestinationApiName_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ApplicationOptions_SetLobbySessionId addr 0x25533ac size 0xa0 virtual false final false
static void ovr_ApplicationOptions_SetLobbySessionId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ApplicationOptions_SetLobbySessionId_Native addr 0x257668c size 0x84 virtual false final false
static void ovr_ApplicationOptions_SetLobbySessionId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ApplicationOptions_SetMatchSessionId addr 0x25534b4 size 0xa0 virtual false final false
static void ovr_ApplicationOptions_SetMatchSessionId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ApplicationOptions_SetMatchSessionId_Native addr 0x2576710 size 0x84 virtual false final false
static void ovr_ApplicationOptions_SetMatchSessionId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ApplicationOptions_SetRoomId addr 0x25535bc size 0x84 virtual false final false
static void ovr_ApplicationOptions_SetRoomId(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_AvatarEditorOptions_Create addr 0x255384c size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_AvatarEditorOptions_Create() ;

/// @brief Method ovr_AvatarEditorOptions_Destroy addr 0x2553ae8 size 0x7c virtual false final false
static void ovr_AvatarEditorOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_AvatarEditorOptions_SetSourceOverride addr 0x255391c size 0xa0 virtual false final false
static void ovr_AvatarEditorOptions_SetSourceOverride(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_AvatarEditorOptions_SetSourceOverride_Native addr 0x2576794 size 0x84 virtual false final false
static void ovr_AvatarEditorOptions_SetSourceOverride_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ChallengeOptions_Create addr 0x2576818 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_ChallengeOptions_Create() ;

/// @brief Method ovr_ChallengeOptions_Destroy addr 0x2576880 size 0x7c virtual false final false
static void ovr_ChallengeOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_ChallengeOptions_SetDescription addr 0x25768fc size 0xa0 virtual false final false
static void ovr_ChallengeOptions_SetDescription(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ChallengeOptions_SetDescription_Native addr 0x257699c size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetDescription_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ChallengeOptions_SetEndDate addr 0x2576a20 size 0x6c virtual false final false
static void ovr_ChallengeOptions_SetEndDate(::cordl_internals::intptr_t handle, System::DateTime value) ;

/// @brief Method ovr_ChallengeOptions_SetEndDate_Native addr 0x2576a8c size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetEndDate_Native(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludeActiveChallenges addr 0x2576b10 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetIncludeActiveChallenges(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludeFutureChallenges addr 0x2576b94 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetIncludeFutureChallenges(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_ChallengeOptions_SetIncludePastChallenges addr 0x2576c18 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetIncludePastChallenges(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_ChallengeOptions_SetLeaderboardName addr 0x2576c9c size 0xa0 virtual false final false
static void ovr_ChallengeOptions_SetLeaderboardName(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ChallengeOptions_SetLeaderboardName_Native addr 0x2576d3c size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetLeaderboardName_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ChallengeOptions_SetStartDate addr 0x2576dc0 size 0x6c virtual false final false
static void ovr_ChallengeOptions_SetStartDate(::cordl_internals::intptr_t handle, System::DateTime value) ;

/// @brief Method ovr_ChallengeOptions_SetStartDate_Native addr 0x2576e2c size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetStartDate_Native(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_ChallengeOptions_SetTitle addr 0x2576eb0 size 0xa0 virtual false final false
static void ovr_ChallengeOptions_SetTitle(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_ChallengeOptions_SetTitle_Native addr 0x2576f50 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetTitle_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_ChallengeOptions_SetViewerFilter addr 0x2576fd4 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetViewerFilter(::cordl_internals::intptr_t handle, Oculus::Platform::ChallengeViewerFilter value) ;

/// @brief Method ovr_ChallengeOptions_SetVisibility addr 0x2577058 size 0x84 virtual false final false
static void ovr_ChallengeOptions_SetVisibility(::cordl_internals::intptr_t handle, Oculus::Platform::ChallengeVisibility value) ;

/// @brief Method ovr_GroupPresenceOptions_Create addr 0x25770dc size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_GroupPresenceOptions_Create() ;

/// @brief Method ovr_GroupPresenceOptions_Destroy addr 0x2577144 size 0x7c virtual false final false
static void ovr_GroupPresenceOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride addr 0x25771c0 size 0xa0 virtual false final false
static void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native addr 0x2577260 size 0x84 virtual false final false
static void ovr_GroupPresenceOptions_SetDeeplinkMessageOverride_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName addr 0x25772e4 size 0xa0 virtual false final false
static void ovr_GroupPresenceOptions_SetDestinationApiName(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_GroupPresenceOptions_SetDestinationApiName_Native addr 0x2577384 size 0x84 virtual false final false
static void ovr_GroupPresenceOptions_SetDestinationApiName_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_GroupPresenceOptions_SetIsJoinable addr 0x2577408 size 0x84 virtual false final false
static void ovr_GroupPresenceOptions_SetIsJoinable(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId addr 0x257748c size 0xa0 virtual false final false
static void ovr_GroupPresenceOptions_SetLobbySessionId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_GroupPresenceOptions_SetLobbySessionId_Native addr 0x257752c size 0x84 virtual false final false
static void ovr_GroupPresenceOptions_SetLobbySessionId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId addr 0x25775b0 size 0xa0 virtual false final false
static void ovr_GroupPresenceOptions_SetMatchSessionId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_GroupPresenceOptions_SetMatchSessionId_Native addr 0x2577650 size 0x84 virtual false final false
static void ovr_GroupPresenceOptions_SetMatchSessionId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_InviteOptions_Create addr 0x25776d4 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_InviteOptions_Create() ;

/// @brief Method ovr_InviteOptions_Destroy addr 0x257773c size 0x7c virtual false final false
static void ovr_InviteOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_InviteOptions_AddSuggestedUser addr 0x25777b8 size 0x84 virtual false final false
static void ovr_InviteOptions_AddSuggestedUser(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_InviteOptions_ClearSuggestedUsers addr 0x257783c size 0x7c virtual false final false
static void ovr_InviteOptions_ClearSuggestedUsers(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_MatchmakingOptions_Create addr 0x25778b8 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_MatchmakingOptions_Create() ;

/// @brief Method ovr_MatchmakingOptions_Destroy addr 0x2577920 size 0x7c virtual false final false
static void ovr_MatchmakingOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_MatchmakingOptions_SetCreateRoomDataStoreString addr 0x257799c size 0xc0 virtual false final false
static void ovr_MatchmakingOptions_SetCreateRoomDataStoreString(::cordl_internals::intptr_t handle, ::StringW key, ::StringW value) ;

/// @brief Method ovr_MatchmakingOptions_SetCreateRoomDataStoreString_Native addr 0x2577a5c size 0x94 virtual false final false
static void ovr_MatchmakingOptions_SetCreateRoomDataStoreString_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_MatchmakingOptions_ClearCreateRoomDataStore addr 0x2577af0 size 0x7c virtual false final false
static void ovr_MatchmakingOptions_ClearCreateRoomDataStore(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_MatchmakingOptions_SetCreateRoomJoinPolicy addr 0x2577b6c size 0x84 virtual false final false
static void ovr_MatchmakingOptions_SetCreateRoomJoinPolicy(::cordl_internals::intptr_t handle, Oculus::Platform::RoomJoinPolicy value) ;

/// @brief Method ovr_MatchmakingOptions_SetCreateRoomMaxUsers addr 0x2577bf0 size 0x84 virtual false final false
static void ovr_MatchmakingOptions_SetCreateRoomMaxUsers(::cordl_internals::intptr_t handle, uint32_t value) ;

/// @brief Method ovr_MatchmakingOptions_AddEnqueueAdditionalUser addr 0x2577c74 size 0x84 virtual false final false
static void ovr_MatchmakingOptions_AddEnqueueAdditionalUser(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_MatchmakingOptions_ClearEnqueueAdditionalUsers addr 0x2577cf8 size 0x7c virtual false final false
static void ovr_MatchmakingOptions_ClearEnqueueAdditionalUsers(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsInt addr 0x2577d74 size 0xa8 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueDataSettingsInt(::cordl_internals::intptr_t handle, ::StringW key, int32_t value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsInt_Native addr 0x2577e1c size 0x94 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueDataSettingsInt_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, int32_t value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble addr 0x2577eb0 size 0xb0 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble(::cordl_internals::intptr_t handle, ::StringW key, double_t value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble_Native addr 0x2577f60 size 0x94 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueDataSettingsDouble_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, double_t value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsString addr 0x2577ff4 size 0xc0 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueDataSettingsString(::cordl_internals::intptr_t handle, ::StringW key, ::StringW value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueDataSettingsString_Native addr 0x25780b4 size 0x94 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueDataSettingsString_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_MatchmakingOptions_ClearEnqueueDataSettings addr 0x2578148 size 0x7c virtual false final false
static void ovr_MatchmakingOptions_ClearEnqueueDataSettings(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueIsDebug addr 0x25781c4 size 0x84 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueIsDebug(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueQueryKey addr 0x2578248 size 0xa0 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueQueryKey(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_MatchmakingOptions_SetEnqueueQueryKey_Native addr 0x25782e8 size 0x84 virtual false final false
static void ovr_MatchmakingOptions_SetEnqueueQueryKey_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_MultiplayerErrorOptions_Create addr 0x257836c size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_MultiplayerErrorOptions_Create() ;

/// @brief Method ovr_MultiplayerErrorOptions_Destroy addr 0x25783d4 size 0x7c virtual false final false
static void ovr_MultiplayerErrorOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_MultiplayerErrorOptions_SetErrorKey addr 0x2578450 size 0x84 virtual false final false
static void ovr_MultiplayerErrorOptions_SetErrorKey(::cordl_internals::intptr_t handle, Oculus::Platform::MultiplayerErrorErrorKey value) ;

/// @brief Method ovr_NetSyncOptions_Create addr 0x25784d4 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_NetSyncOptions_Create() ;

/// @brief Method ovr_NetSyncOptions_Destroy addr 0x257853c size 0x7c virtual false final false
static void ovr_NetSyncOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_NetSyncOptions_SetVoipGroup addr 0x25785b8 size 0xa0 virtual false final false
static void ovr_NetSyncOptions_SetVoipGroup(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_NetSyncOptions_SetVoipGroup_Native addr 0x2578658 size 0x84 virtual false final false
static void ovr_NetSyncOptions_SetVoipGroup_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_NetSyncOptions_SetVoipStreamDefault addr 0x25786dc size 0x84 virtual false final false
static void ovr_NetSyncOptions_SetVoipStreamDefault(::cordl_internals::intptr_t handle, Oculus::Platform::NetSyncVoipStreamMode value) ;

/// @brief Method ovr_NetSyncOptions_SetZoneId addr 0x2578760 size 0xa0 virtual false final false
static void ovr_NetSyncOptions_SetZoneId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_NetSyncOptions_SetZoneId_Native addr 0x2578800 size 0x84 virtual false final false
static void ovr_NetSyncOptions_SetZoneId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_Create addr 0x2578884 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_RichPresenceOptions_Create() ;

/// @brief Method ovr_RichPresenceOptions_Destroy addr 0x25788ec size 0x7c virtual false final false
static void ovr_RichPresenceOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_RichPresenceOptions_SetApiName addr 0x2578968 size 0xa0 virtual false final false
static void ovr_RichPresenceOptions_SetApiName(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetApiName_Native addr 0x2578a08 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetApiName_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetArgsString addr 0x2578a8c size 0xc0 virtual false final false
static void ovr_RichPresenceOptions_SetArgsString(::cordl_internals::intptr_t handle, ::StringW key, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetArgsString_Native addr 0x2578b4c size 0x94 virtual false final false
static void ovr_RichPresenceOptions_SetArgsString_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_ClearArgs addr 0x2578be0 size 0x7c virtual false final false
static void ovr_RichPresenceOptions_ClearArgs(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_RichPresenceOptions_SetCurrentCapacity addr 0x2578c5c size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetCurrentCapacity(::cordl_internals::intptr_t handle, uint32_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride addr 0x2578ce0 size 0xa0 virtual false final false
static void ovr_RichPresenceOptions_SetDeeplinkMessageOverride(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native addr 0x2578d80 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetDeeplinkMessageOverride_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetEndTime addr 0x2578e04 size 0x6c virtual false final false
static void ovr_RichPresenceOptions_SetEndTime(::cordl_internals::intptr_t handle, System::DateTime value) ;

/// @brief Method ovr_RichPresenceOptions_SetEndTime_Native addr 0x2578e70 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetEndTime_Native(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetExtraContext addr 0x2578ef4 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetExtraContext(::cordl_internals::intptr_t handle, Oculus::Platform::RichPresenceExtraContext value) ;

/// @brief Method ovr_RichPresenceOptions_SetInstanceId addr 0x2578f78 size 0xa0 virtual false final false
static void ovr_RichPresenceOptions_SetInstanceId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetInstanceId_Native addr 0x2579018 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetInstanceId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetIsIdle addr 0x257909c size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetIsIdle(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_RichPresenceOptions_SetIsJoinable addr 0x2579120 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetIsJoinable(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_RichPresenceOptions_SetJoinableId addr 0x25791a4 size 0xa0 virtual false final false
static void ovr_RichPresenceOptions_SetJoinableId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetJoinableId_Native addr 0x2579244 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetJoinableId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetLobbySessionId addr 0x25792c8 size 0xa0 virtual false final false
static void ovr_RichPresenceOptions_SetLobbySessionId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetLobbySessionId_Native addr 0x2579368 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetLobbySessionId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetMatchSessionId addr 0x25793ec size 0xa0 virtual false final false
static void ovr_RichPresenceOptions_SetMatchSessionId(::cordl_internals::intptr_t handle, ::StringW value) ;

/// @brief Method ovr_RichPresenceOptions_SetMatchSessionId_Native addr 0x257948c size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetMatchSessionId_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetMaxCapacity addr 0x2579510 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetMaxCapacity(::cordl_internals::intptr_t handle, uint32_t value) ;

/// @brief Method ovr_RichPresenceOptions_SetStartTime addr 0x2579594 size 0x6c virtual false final false
static void ovr_RichPresenceOptions_SetStartTime(::cordl_internals::intptr_t handle, System::DateTime value) ;

/// @brief Method ovr_RichPresenceOptions_SetStartTime_Native addr 0x2579600 size 0x84 virtual false final false
static void ovr_RichPresenceOptions_SetStartTime_Native(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_RoomOptions_Create addr 0x2579684 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_RoomOptions_Create() ;

/// @brief Method ovr_RoomOptions_Destroy addr 0x25796ec size 0x7c virtual false final false
static void ovr_RoomOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_RoomOptions_SetDataStoreString addr 0x2579768 size 0xc0 virtual false final false
static void ovr_RoomOptions_SetDataStoreString(::cordl_internals::intptr_t handle, ::StringW key, ::StringW value) ;

/// @brief Method ovr_RoomOptions_SetDataStoreString_Native addr 0x2579828 size 0x94 virtual false final false
static void ovr_RoomOptions_SetDataStoreString_Native(::cordl_internals::intptr_t handle, ::cordl_internals::intptr_t key, ::cordl_internals::intptr_t value) ;

/// @brief Method ovr_RoomOptions_ClearDataStore addr 0x25798bc size 0x7c virtual false final false
static void ovr_RoomOptions_ClearDataStore(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_RoomOptions_SetExcludeRecentlyMet addr 0x2579938 size 0x84 virtual false final false
static void ovr_RoomOptions_SetExcludeRecentlyMet(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_RoomOptions_SetMaxUserResults addr 0x25799bc size 0x84 virtual false final false
static void ovr_RoomOptions_SetMaxUserResults(::cordl_internals::intptr_t handle, uint32_t value) ;

/// @brief Method ovr_RoomOptions_SetOrdering addr 0x2579a40 size 0x84 virtual false final false
static void ovr_RoomOptions_SetOrdering(::cordl_internals::intptr_t handle, Oculus::Platform::UserOrdering value) ;

/// @brief Method ovr_RoomOptions_SetRecentlyMetTimeWindow addr 0x2579ac4 size 0x84 virtual false final false
static void ovr_RoomOptions_SetRecentlyMetTimeWindow(::cordl_internals::intptr_t handle, Oculus::Platform::TimeWindow value) ;

/// @brief Method ovr_RoomOptions_SetRoomId addr 0x2579b48 size 0x84 virtual false final false
static void ovr_RoomOptions_SetRoomId(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_RoomOptions_SetTurnOffUpdates addr 0x2579bcc size 0x84 virtual false final false
static void ovr_RoomOptions_SetTurnOffUpdates(::cordl_internals::intptr_t handle, bool value) ;

/// @brief Method ovr_RosterOptions_Create addr 0x2579c50 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_RosterOptions_Create() ;

/// @brief Method ovr_RosterOptions_Destroy addr 0x2579cb8 size 0x7c virtual false final false
static void ovr_RosterOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_RosterOptions_AddSuggestedUser addr 0x2579d34 size 0x84 virtual false final false
static void ovr_RosterOptions_AddSuggestedUser(::cordl_internals::intptr_t handle, uint64_t value) ;

/// @brief Method ovr_RosterOptions_ClearSuggestedUsers addr 0x2579db8 size 0x7c virtual false final false
static void ovr_RosterOptions_ClearSuggestedUsers(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_UserOptions_Create addr 0x2579e34 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_UserOptions_Create() ;

/// @brief Method ovr_UserOptions_Destroy addr 0x2579e9c size 0x7c virtual false final false
static void ovr_UserOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_UserOptions_SetMaxUsers addr 0x2579f18 size 0x84 virtual false final false
static void ovr_UserOptions_SetMaxUsers(::cordl_internals::intptr_t handle, uint32_t value) ;

/// @brief Method ovr_UserOptions_AddServiceProvider addr 0x2579f9c size 0x84 virtual false final false
static void ovr_UserOptions_AddServiceProvider(::cordl_internals::intptr_t handle, Oculus::Platform::ServiceProvider value) ;

/// @brief Method ovr_UserOptions_ClearServiceProviders addr 0x257a020 size 0x7c virtual false final false
static void ovr_UserOptions_ClearServiceProviders(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_UserOptions_SetTimeWindow addr 0x257a09c size 0x84 virtual false final false
static void ovr_UserOptions_SetTimeWindow(::cordl_internals::intptr_t handle, Oculus::Platform::TimeWindow value) ;

/// @brief Method ovr_VoipOptions_Create addr 0x257a120 size 0x68 virtual false final false
static ::cordl_internals::intptr_t ovr_VoipOptions_Create() ;

/// @brief Method ovr_VoipOptions_Destroy addr 0x257a188 size 0x7c virtual false final false
static void ovr_VoipOptions_Destroy(::cordl_internals::intptr_t handle) ;

/// @brief Method ovr_VoipOptions_SetBitrateForNewConnections addr 0x257a204 size 0x84 virtual false final false
static void ovr_VoipOptions_SetBitrateForNewConnections(::cordl_internals::intptr_t handle, Oculus::Platform::VoipBitrate value) ;

/// @brief Method ovr_VoipOptions_SetCreateNewConnectionUseDtx addr 0x257a288 size 0x84 virtual false final false
static void ovr_VoipOptions_SetCreateNewConnectionUseDtx(::cordl_internals::intptr_t handle, Oculus::Platform::VoipDtxState value) ;

// Ctor Parameters []
explicit CAPI() ;

/// @brief Method .ctor addr 0x257a30c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Oculus::Platform
NEED_NO_BOX(Oculus::Platform::CAPI);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::CAPI, "Oculus.Platform", "CAPI");
NEED_NO_BOX(Oculus::Platform::Oculus__Platform__CAPI__FilterCallback);
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__CAPI__FilterCallback, "Oculus.Platform", "CAPI/FilterCallback");
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__CAPI__OculusInitParams, "Oculus.Platform", "CAPI/OculusInitParams");
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__CAPI__ovrKeyValuePair, "Oculus.Platform", "CAPI/ovrKeyValuePair");
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__CAPI__ovrMatchmakingCriterion, "Oculus.Platform", "CAPI/ovrMatchmakingCriterion");
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__CAPI__ovrMatchmakingCustomQueryData, "Oculus.Platform", "CAPI/ovrMatchmakingCustomQueryData");
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::Oculus__Platform__CAPI__ovrNetSyncVec3, "Oculus.Platform", "CAPI/ovrNetSyncVec3");
