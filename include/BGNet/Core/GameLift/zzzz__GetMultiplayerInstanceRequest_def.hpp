#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct GameplayServerConfiguration;
}
namespace GlobalNamespace {
struct GlobalNamespace__AuthenticationToken__Platform;
}
namespace GlobalNamespace {
struct ServiceEnvironment;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace GlobalNamespace {
struct BeatmapLevelSelectionMask;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceRequest;
}
// Type: BGNet.Core.GameLift::GetMultiplayerInstanceRequest
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12949))
// CS Name: BGNet.Core.GameLift.GetMultiplayerInstanceRequest
struct CORDL_TYPE GetMultiplayerInstanceRequest : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "version", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "serviceEnvironment", ty: "GlobalNamespace::ServiceEnvironment", modifiers: "", def_value: None }, CppParam { name: "singleUseAuthToken", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beatmapLevelSelectionMask", ty: "GlobalNamespace::BeatmapLevelSelectionMask", modifiers: "", def_value: None }, CppParam { name: "gameplayServerConfiguration", ty: "GlobalNamespace::GameplayServerConfiguration", modifiers: "", def_value: None }, CppParam { name: "userId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateGameSecret", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "privateGameCode", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "platform", ty: "GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform", modifiers: "", def_value: None }, CppParam { name: "authUserId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "gameliftRegionLatencies", ty: "System::Collections::Generic::Dictionary_2<::StringW,int64_t>", modifiers: "", def_value: None }, CppParam { name: "ticketId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "placementId", ty: "::StringW", modifiers: "", def_value: None }]
constexpr GetMultiplayerInstanceRequest(::StringW version, GlobalNamespace::ServiceEnvironment serviceEnvironment, ::StringW singleUseAuthToken, GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, ::StringW userId, ::StringW privateGameSecret, ::StringW privateGameCode, GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform platform, ::StringW authUserId, System::Collections::Generic::Dictionary_2<::StringW,int64_t> gameliftRegionLatencies, ::StringW ticketId, ::StringW placementId) noexcept;


                    constexpr GetMultiplayerInstanceRequest(GetMultiplayerInstanceRequest const&) = default;
                    constexpr GetMultiplayerInstanceRequest(GetMultiplayerInstanceRequest&&) = default;
                    constexpr GetMultiplayerInstanceRequest& operator=(GetMultiplayerInstanceRequest const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GetMultiplayerInstanceRequest& operator=(GetMultiplayerInstanceRequest&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x88};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GetMultiplayerInstanceRequest(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_version, put=__set_version))  version;

constexpr void __set_version(::StringW value) ;

constexpr ::StringW __get_version() const;

 GlobalNamespace::ServiceEnvironment __declspec(property(get=__get_serviceEnvironment, put=__set_serviceEnvironment))  serviceEnvironment;

constexpr void __set_serviceEnvironment(GlobalNamespace::ServiceEnvironment value) ;

constexpr GlobalNamespace::ServiceEnvironment __get_serviceEnvironment() const;

 ::StringW __declspec(property(get=__get_singleUseAuthToken, put=__set_singleUseAuthToken))  singleUseAuthToken;

constexpr void __set_singleUseAuthToken(::StringW value) ;

constexpr ::StringW __get_singleUseAuthToken() const;

 GlobalNamespace::BeatmapLevelSelectionMask __declspec(property(get=__get_beatmapLevelSelectionMask, put=__set_beatmapLevelSelectionMask))  beatmapLevelSelectionMask;

constexpr void __set_beatmapLevelSelectionMask(GlobalNamespace::BeatmapLevelSelectionMask value) ;

constexpr GlobalNamespace::BeatmapLevelSelectionMask __get_beatmapLevelSelectionMask() const;

 GlobalNamespace::GameplayServerConfiguration __declspec(property(get=__get_gameplayServerConfiguration, put=__set_gameplayServerConfiguration))  gameplayServerConfiguration;

constexpr void __set_gameplayServerConfiguration(GlobalNamespace::GameplayServerConfiguration value) ;

constexpr GlobalNamespace::GameplayServerConfiguration __get_gameplayServerConfiguration() const;

 ::StringW __declspec(property(get=__get_userId, put=__set_userId))  userId;

constexpr void __set_userId(::StringW value) ;

constexpr ::StringW __get_userId() const;

 ::StringW __declspec(property(get=__get_privateGameSecret, put=__set_privateGameSecret))  privateGameSecret;

constexpr void __set_privateGameSecret(::StringW value) ;

constexpr ::StringW __get_privateGameSecret() const;

 ::StringW __declspec(property(get=__get_privateGameCode, put=__set_privateGameCode))  privateGameCode;

constexpr void __set_privateGameCode(::StringW value) ;

constexpr ::StringW __get_privateGameCode() const;

 GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform __declspec(property(get=__get_platform, put=__set_platform))  platform;

constexpr void __set_platform(GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform value) ;

constexpr GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform __get_platform() const;

 ::StringW __declspec(property(get=__get_authUserId, put=__set_authUserId))  authUserId;

constexpr void __set_authUserId(::StringW value) ;

constexpr ::StringW __get_authUserId() const;

 System::Collections::Generic::Dictionary_2<::StringW,int64_t> __declspec(property(get=__get_gameliftRegionLatencies, put=__set_gameliftRegionLatencies))  gameliftRegionLatencies;

constexpr void __set_gameliftRegionLatencies(System::Collections::Generic::Dictionary_2<::StringW,int64_t> value) ;

constexpr System::Collections::Generic::Dictionary_2<::StringW,int64_t> __get_gameliftRegionLatencies() const;

 ::StringW __declspec(property(get=__get_ticketId, put=__set_ticketId))  ticketId;

constexpr void __set_ticketId(::StringW value) ;

constexpr ::StringW __get_ticketId() const;

 ::StringW __declspec(property(get=__get_placementId, put=__set_placementId))  placementId;

constexpr void __set_placementId(::StringW value) ;

constexpr ::StringW __get_placementId() const;


// Methods

/// @brief Method .ctor addr 0xdd34e8 size 0x58 virtual false final false
 void _ctor(::StringW version, GlobalNamespace::ServiceEnvironment serviceEnvironment, ::StringW userId, GlobalNamespace::BeatmapLevelSelectionMask beatmapLevelSelectionMask, GlobalNamespace::GameplayServerConfiguration gameplayServerConfiguration, GlobalNamespace::GlobalNamespace__AuthenticationToken__Platform platform, ::StringW authUserId, ::StringW singleUseAuthToken, ::StringW privateGameSecret, ::StringW privateGameCode, System::Collections::Generic::Dictionary_2<::StringW,int64_t> gameliftRegionLatencies, ::StringW ticketId, ::StringW placementId) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::GameLift
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::GameLift::GetMultiplayerInstanceRequest, "BGNet.Core.GameLift", "GetMultiplayerInstanceRequest");
