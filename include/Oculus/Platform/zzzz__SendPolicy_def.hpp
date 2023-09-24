#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct SendPolicy;
}
// Type: Oculus.Platform::SendPolicy
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13358))
// CS Name: Oculus.Platform.SendPolicy
struct CORDL_TYPE SendPolicy : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SendPolicy(int32_t value__) noexcept;


                    constexpr SendPolicy(SendPolicy const&) = default;
                    constexpr SendPolicy(SendPolicy&&) = default;
                    constexpr SendPolicy& operator=(SendPolicy const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SendPolicy& operator=(SendPolicy&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SendPolicy(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SendPolicy_Unwrapped : int32_t {
__Unreliable = 0,
__Reliable = 1,
__Unknown = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SendPolicy_Unwrapped () const noexcept {
return std::bit_cast<__SendPolicy_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unreliable offset 0
static Oculus::Platform::SendPolicy const Unreliable;

/// @brief Field Reliable offset 0
static Oculus::Platform::SendPolicy const Reliable;

/// @brief Field Unknown offset 0
static Oculus::Platform::SendPolicy const Unknown;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::SendPolicy, "Oculus.Platform", "SendPolicy");
