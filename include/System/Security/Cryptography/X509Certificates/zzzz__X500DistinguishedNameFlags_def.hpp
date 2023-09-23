#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X500DistinguishedNameFlags;
}
// Type: System.Security.Cryptography.X509Certificates::X500DistinguishedNameFlags
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7832))
// CS Name: System.Security.Cryptography.X509Certificates.X500DistinguishedNameFlags
struct CORDL_TYPE X500DistinguishedNameFlags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X500DistinguishedNameFlags(int32_t value__) noexcept;


                    constexpr X500DistinguishedNameFlags(X500DistinguishedNameFlags const&) = default;
                    constexpr X500DistinguishedNameFlags(X500DistinguishedNameFlags&&) = default;
                    constexpr X500DistinguishedNameFlags& operator=(X500DistinguishedNameFlags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr X500DistinguishedNameFlags& operator=(X500DistinguishedNameFlags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit X500DistinguishedNameFlags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __X500DistinguishedNameFlags_Unwrapped : int32_t {
__None = 0,
__Reversed = 1,
__UseSemicolons = 16,
__DoNotUsePlusSign = 32,
__DoNotUseQuotes = 64,
__UseCommas = 128,
__UseNewLines = 256,
__UseUTF8Encoding = 4096,
__UseT61Encoding = 8192,
__ForceUTF8Encoding = 16384,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X500DistinguishedNameFlags_Unwrapped () const noexcept {
return std::bit_cast<__X500DistinguishedNameFlags_Unwrapped>(__instance);
}


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field None offset 0
static System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const None;

/// @brief Field Reversed offset 0
static System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const Reversed;

/// @brief Field UseSemicolons offset 0
static System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const UseSemicolons;

/// @brief Field DoNotUsePlusSign offset 0
static System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const DoNotUsePlusSign;

/// @brief Field DoNotUseQuotes offset 0
static System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const DoNotUseQuotes;

/// @brief Field UseCommas offset 0
static System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const UseCommas;

/// @brief Field UseNewLines offset 0
static System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const UseNewLines;

/// @brief Field UseUTF8Encoding offset 0
static System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const UseUTF8Encoding;

/// @brief Field UseT61Encoding offset 0
static System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const UseT61Encoding;

/// @brief Field ForceUTF8Encoding offset 0
static System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags const ForceUTF8Encoding;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X500DistinguishedNameFlags, "System.Security.Cryptography.X509Certificates", "X500DistinguishedNameFlags");
