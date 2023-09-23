#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace GlobalNamespace {
struct MultiplayerPlacementErrorCode;
}
namespace BGNet::Core::GameLift {
class PlayerSessionInfo;
}
// Forward declare root types
namespace BGNet::Core::GameLift {
struct GetMultiplayerInstanceResponse;
}
// Type: BGNet.Core.GameLift::GetMultiplayerInstanceResponse
namespace BGNet::Core::GameLift {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12950))
// CS Name: BGNet.Core.GameLift.GetMultiplayerInstanceResponse
struct CORDL_TYPE GetMultiplayerInstanceResponse : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "errorCode", ty: "GlobalNamespace::MultiplayerPlacementErrorCode", modifiers: "", def_value: None }, CppParam { name: "playerSessionInfo", ty: "BGNet::Core::GameLift::PlayerSessionInfo", modifiers: "", def_value: None }, CppParam { name: "pollIntervalMs", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "ticketId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "ticketStatus", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "placementId", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "placementStatus", ty: "::StringW", modifiers: "", def_value: None }]
constexpr GetMultiplayerInstanceResponse(GlobalNamespace::MultiplayerPlacementErrorCode errorCode, BGNet::Core::GameLift::PlayerSessionInfo playerSessionInfo, int32_t pollIntervalMs, ::StringW ticketId, ::StringW ticketStatus, ::StringW placementId, ::StringW placementStatus) noexcept;


                    constexpr GetMultiplayerInstanceResponse(GetMultiplayerInstanceResponse const&) = default;
                    constexpr GetMultiplayerInstanceResponse(GetMultiplayerInstanceResponse&&) = default;
                    constexpr GetMultiplayerInstanceResponse& operator=(GetMultiplayerInstanceResponse const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr GetMultiplayerInstanceResponse& operator=(GetMultiplayerInstanceResponse&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x38};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit GetMultiplayerInstanceResponse(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 GlobalNamespace::MultiplayerPlacementErrorCode __declspec(property(get=__get_errorCode, put=__set_errorCode))  errorCode;

constexpr void __set_errorCode(GlobalNamespace::MultiplayerPlacementErrorCode value) ;

constexpr GlobalNamespace::MultiplayerPlacementErrorCode __get_errorCode() const;

 BGNet::Core::GameLift::PlayerSessionInfo __declspec(property(get=__get_playerSessionInfo, put=__set_playerSessionInfo))  playerSessionInfo;

constexpr void __set_playerSessionInfo(BGNet::Core::GameLift::PlayerSessionInfo value) ;

constexpr BGNet::Core::GameLift::PlayerSessionInfo __get_playerSessionInfo() const;

 int32_t __declspec(property(get=__get_pollIntervalMs, put=__set_pollIntervalMs))  pollIntervalMs;

constexpr void __set_pollIntervalMs(int32_t value) ;

constexpr int32_t __get_pollIntervalMs() const;

 ::StringW __declspec(property(get=__get_ticketId, put=__set_ticketId))  ticketId;

constexpr void __set_ticketId(::StringW value) ;

constexpr ::StringW __get_ticketId() const;

 ::StringW __declspec(property(get=__get_ticketStatus, put=__set_ticketStatus))  ticketStatus;

constexpr void __set_ticketStatus(::StringW value) ;

constexpr ::StringW __get_ticketStatus() const;

 ::StringW __declspec(property(get=__get_placementId, put=__set_placementId))  placementId;

constexpr void __set_placementId(::StringW value) ;

constexpr ::StringW __get_placementId() const;

 ::StringW __declspec(property(get=__get_placementStatus, put=__set_placementStatus))  placementStatus;

constexpr void __set_placementStatus(::StringW value) ;

constexpr ::StringW __get_placementStatus() const;


// Methods

/// @brief Method .ctor addr 0xdd3d9c size 0x18 virtual false final false
 void _ctor(GlobalNamespace::MultiplayerPlacementErrorCode errorCode, BGNet::Core::GameLift::PlayerSessionInfo playerSessionInfo, int32_t pollIntervalMs, ::StringW ticketId, ::StringW ticketStatus, ::StringW placementId, ::StringW placementStatus) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def BGNet::Core::GameLift
DEFINE_IL2CPP_ARG_TYPE(BGNet::Core::GameLift::GetMultiplayerInstanceResponse, "BGNet.Core.GameLift", "GetMultiplayerInstanceResponse");
