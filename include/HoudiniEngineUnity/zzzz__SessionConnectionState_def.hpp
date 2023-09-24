#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace HoudiniEngineUnity {
struct SessionConnectionState;
}
// Type: HoudiniEngineUnity::SessionConnectionState
namespace HoudiniEngineUnity {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9723))
// CS Name: HoudiniEngineUnity.SessionConnectionState
struct CORDL_TYPE SessionConnectionState : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SessionConnectionState(int32_t value__) noexcept;


                    constexpr SessionConnectionState(SessionConnectionState const&) = default;
                    constexpr SessionConnectionState(SessionConnectionState&&) = default;
                    constexpr SessionConnectionState& operator=(SessionConnectionState const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SessionConnectionState& operator=(SessionConnectionState&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SessionConnectionState(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SessionConnectionState_Unwrapped : int32_t {
__NOT_CONNECTED = 0,
__CONNECTED = 1,
__FAILED_TO_CONNECT = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SessionConnectionState_Unwrapped () const noexcept {
return std::bit_cast<__SessionConnectionState_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field NOT_CONNECTED offset 0
static HoudiniEngineUnity::SessionConnectionState const NOT_CONNECTED;

/// @brief Field CONNECTED offset 0
static HoudiniEngineUnity::SessionConnectionState const CONNECTED;

/// @brief Field FAILED_TO_CONNECT offset 0
static HoudiniEngineUnity::SessionConnectionState const FAILED_TO_CONNECT;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::SessionConnectionState, "HoudiniEngineUnity", "SessionConnectionState");
