#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct ShareMediaStatus;
}
// Type: Oculus.Platform::ShareMediaStatus
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13360))
// CS Name: Oculus.Platform.ShareMediaStatus
struct CORDL_TYPE ShareMediaStatus : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr ShareMediaStatus(int32_t value__) noexcept;


                    constexpr ShareMediaStatus(ShareMediaStatus const&) = default;
                    constexpr ShareMediaStatus(ShareMediaStatus&&) = default;
                    constexpr ShareMediaStatus& operator=(ShareMediaStatus const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ShareMediaStatus& operator=(ShareMediaStatus&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ShareMediaStatus(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __ShareMediaStatus_Unwrapped : int32_t {
__Unknown = 0,
__Shared = 1,
__Canceled = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __ShareMediaStatus_Unwrapped () const noexcept {
return std::bit_cast<__ShareMediaStatus_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::ShareMediaStatus const Unknown;

/// @brief Field Shared offset 0
static Oculus::Platform::ShareMediaStatus const Shared;

/// @brief Field Canceled offset 0
static Oculus::Platform::ShareMediaStatus const Canceled;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::ShareMediaStatus, "Oculus.Platform", "ShareMediaStatus");
