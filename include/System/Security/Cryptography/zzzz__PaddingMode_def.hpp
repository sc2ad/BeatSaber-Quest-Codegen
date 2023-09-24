#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
struct PaddingMode;
}
// Type: System.Security.Cryptography::PaddingMode
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2918))
// CS Name: System.Security.Cryptography.PaddingMode
struct CORDL_TYPE PaddingMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr PaddingMode(int32_t value__) noexcept;


                    constexpr PaddingMode(PaddingMode const&) = default;
                    constexpr PaddingMode(PaddingMode&&) = default;
                    constexpr PaddingMode& operator=(PaddingMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr PaddingMode& operator=(PaddingMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit PaddingMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __PaddingMode_Unwrapped : int32_t {
__None = 1,
__PKCS7 = 2,
__Zeros = 3,
__ANSIX923 = 4,
__ISO10126 = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __PaddingMode_Unwrapped () const noexcept {
return std::bit_cast<__PaddingMode_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Security::Cryptography::PaddingMode const None;

/// @brief Field PKCS7 offset 0
static System::Security::Cryptography::PaddingMode const PKCS7;

/// @brief Field Zeros offset 0
static System::Security::Cryptography::PaddingMode const Zeros;

/// @brief Field ANSIX923 offset 0
static System::Security::Cryptography::PaddingMode const ANSIX923;

/// @brief Field ISO10126 offset 0
static System::Security::Cryptography::PaddingMode const ISO10126;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::PaddingMode, "System.Security.Cryptography", "PaddingMode");
