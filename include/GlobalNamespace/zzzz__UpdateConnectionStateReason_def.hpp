#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
struct UpdateConnectionStateReason;
}
// Type: ::UpdateConnectionStateReason
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12931))
// CS Name: UpdateConnectionStateReason
struct CORDL_TYPE UpdateConnectionStateReason : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UpdateConnectionStateReason(int32_t value__) noexcept;


                    constexpr UpdateConnectionStateReason(UpdateConnectionStateReason const&) = default;
                    constexpr UpdateConnectionStateReason(UpdateConnectionStateReason&&) = default;
                    constexpr UpdateConnectionStateReason& operator=(UpdateConnectionStateReason const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UpdateConnectionStateReason& operator=(UpdateConnectionStateReason&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UpdateConnectionStateReason(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UpdateConnectionStateReason_Unwrapped : int32_t {
__Init = 0,
__PlayerOrderChanged = 1,
__Connected = 2,
__StartSession = 3,
__StartDedicatedServer = 4,
__SyncTimeInitialized = 5,
__ManualDisconnect = 6,
__RemoteDisconnect = 7,
__ConnectionFailed = 8,
__OnDestroy = 9,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UpdateConnectionStateReason_Unwrapped () const noexcept {
return std::bit_cast<__UpdateConnectionStateReason_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Init offset 0
static GlobalNamespace::UpdateConnectionStateReason const Init;

/// @brief Field PlayerOrderChanged offset 0
static GlobalNamespace::UpdateConnectionStateReason const PlayerOrderChanged;

/// @brief Field Connected offset 0
static GlobalNamespace::UpdateConnectionStateReason const Connected;

/// @brief Field StartSession offset 0
static GlobalNamespace::UpdateConnectionStateReason const StartSession;

/// @brief Field StartDedicatedServer offset 0
static GlobalNamespace::UpdateConnectionStateReason const StartDedicatedServer;

/// @brief Field SyncTimeInitialized offset 0
static GlobalNamespace::UpdateConnectionStateReason const SyncTimeInitialized;

/// @brief Field ManualDisconnect offset 0
static GlobalNamespace::UpdateConnectionStateReason const ManualDisconnect;

/// @brief Field RemoteDisconnect offset 0
static GlobalNamespace::UpdateConnectionStateReason const RemoteDisconnect;

/// @brief Field ConnectionFailed offset 0
static GlobalNamespace::UpdateConnectionStateReason const ConnectionFailed;

/// @brief Field OnDestroy offset 0
static GlobalNamespace::UpdateConnectionStateReason const OnDestroy;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UpdateConnectionStateReason, "", "UpdateConnectionStateReason");
