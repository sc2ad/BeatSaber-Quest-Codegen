#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct NetSyncVoipStreamMode;
}
// Type: Oculus.Platform::NetSyncVoipStreamMode
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13303))
// CS Name: Oculus.Platform.NetSyncVoipStreamMode
struct CORDL_TYPE NetSyncVoipStreamMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr NetSyncVoipStreamMode(int32_t value__) noexcept;


                    constexpr NetSyncVoipStreamMode(NetSyncVoipStreamMode const&) = default;
                    constexpr NetSyncVoipStreamMode(NetSyncVoipStreamMode&&) = default;
                    constexpr NetSyncVoipStreamMode& operator=(NetSyncVoipStreamMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr NetSyncVoipStreamMode& operator=(NetSyncVoipStreamMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit NetSyncVoipStreamMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __NetSyncVoipStreamMode_Unwrapped : int32_t {
__Unknown = 0,
__Ambisonic = 1,
__Mono = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __NetSyncVoipStreamMode_Unwrapped () const noexcept {
return std::bit_cast<__NetSyncVoipStreamMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::NetSyncVoipStreamMode const Unknown;

/// @brief Field Ambisonic offset 0
static Oculus::Platform::NetSyncVoipStreamMode const Ambisonic;

/// @brief Field Mono offset 0
static Oculus::Platform::NetSyncVoipStreamMode const Mono;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::NetSyncVoipStreamMode, "Oculus.Platform", "NetSyncVoipStreamMode");
