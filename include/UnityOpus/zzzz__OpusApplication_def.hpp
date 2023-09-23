#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace UnityOpus {
struct OpusApplication;
}
// Type: UnityOpus::OpusApplication
namespace UnityOpus {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6155))
// CS Name: UnityOpus.OpusApplication
struct CORDL_TYPE OpusApplication : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr OpusApplication(int32_t value__) noexcept;


                    constexpr OpusApplication(OpusApplication const&) = default;
                    constexpr OpusApplication(OpusApplication&&) = default;
                    constexpr OpusApplication& operator=(OpusApplication const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr OpusApplication& operator=(OpusApplication&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit OpusApplication(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __OpusApplication_Unwrapped : int32_t {
__VoIP = 2048,
__Audio = 2049,
__RestrictedLowDelay = 2051,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __OpusApplication_Unwrapped () const noexcept {
return std::bit_cast<__OpusApplication_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field VoIP offset 0
static UnityOpus::OpusApplication const VoIP;

/// @brief Field Audio offset 0
static UnityOpus::OpusApplication const Audio;

/// @brief Field RestrictedLowDelay offset 0
static UnityOpus::OpusApplication const RestrictedLowDelay;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityOpus
DEFINE_IL2CPP_ARG_TYPE(UnityOpus::OpusApplication, "UnityOpus", "OpusApplication");
