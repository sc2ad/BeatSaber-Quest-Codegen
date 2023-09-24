#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace Oculus::Platform {
struct SdkAccountType;
}
// Type: Oculus.Platform::SdkAccountType
namespace Oculus::Platform {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13357))
// CS Name: Oculus.Platform.SdkAccountType
struct CORDL_TYPE SdkAccountType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr SdkAccountType(int32_t value__) noexcept;


                    constexpr SdkAccountType(SdkAccountType const&) = default;
                    constexpr SdkAccountType(SdkAccountType&&) = default;
                    constexpr SdkAccountType& operator=(SdkAccountType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr SdkAccountType& operator=(SdkAccountType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit SdkAccountType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __SdkAccountType_Unwrapped : int32_t {
__Unknown = 0,
__Oculus = 1,
__FacebookGameroom = 2,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __SdkAccountType_Unwrapped () const noexcept {
return std::bit_cast<__SdkAccountType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Unknown offset 0
static Oculus::Platform::SdkAccountType const Unknown;

/// @brief Field Oculus offset 0
static Oculus::Platform::SdkAccountType const Oculus;

/// @brief Field FacebookGameroom offset 0
static Oculus::Platform::SdkAccountType const FacebookGameroom;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def Oculus::Platform
DEFINE_IL2CPP_ARG_TYPE(Oculus::Platform::SdkAccountType, "Oculus.Platform", "SdkAccountType");
