#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography {
struct CryptoStreamMode;
}
// Type: System.Security.Cryptography::CryptoStreamMode
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2910))
// CS Name: System.Security.Cryptography.CryptoStreamMode
struct CORDL_TYPE CryptoStreamMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CryptoStreamMode(int32_t value__) noexcept;


                    constexpr CryptoStreamMode(CryptoStreamMode const&) = default;
                    constexpr CryptoStreamMode(CryptoStreamMode&&) = default;
                    constexpr CryptoStreamMode& operator=(CryptoStreamMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CryptoStreamMode& operator=(CryptoStreamMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CryptoStreamMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CryptoStreamMode_Unwrapped : int32_t {
__Read = 0,
__Write = 1,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CryptoStreamMode_Unwrapped () const noexcept {
return std::bit_cast<__CryptoStreamMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field Read offset 0
static System::Security::Cryptography::CryptoStreamMode const Read;

/// @brief Field Write offset 0
static System::Security::Cryptography::CryptoStreamMode const Write;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::CryptoStreamMode, "System.Security.Cryptography", "CryptoStreamMode");
