#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Security::Cryptography {
struct CipherMode;
}
// Type: System.Security.Cryptography::CipherMode
namespace System::Security::Cryptography {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2917))
// CS Name: System.Security.Cryptography.CipherMode
struct CORDL_TYPE CipherMode : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr CipherMode(int32_t value__) noexcept;


                    constexpr CipherMode(CipherMode const&) = default;
                    constexpr CipherMode(CipherMode&&) = default;
                    constexpr CipherMode& operator=(CipherMode const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr CipherMode& operator=(CipherMode&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit CipherMode(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __CipherMode_Unwrapped : int32_t {
__CBC = 1,
__ECB = 2,
__OFB = 3,
__CFB = 4,
__CTS = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __CipherMode_Unwrapped () const noexcept {
return std::bit_cast<__CipherMode_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field CBC offset 0
static ::System::Security::Cryptography::CipherMode const CBC;

/// @brief Field ECB offset 0
static ::System::Security::Cryptography::CipherMode const ECB;

/// @brief Field OFB offset 0
static ::System::Security::Cryptography::CipherMode const OFB;

/// @brief Field CFB offset 0
static ::System::Security::Cryptography::CipherMode const CFB;

/// @brief Field CTS offset 0
static ::System::Security::Cryptography::CipherMode const CTS;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::CipherMode, "System.Security.Cryptography", "CipherMode");
