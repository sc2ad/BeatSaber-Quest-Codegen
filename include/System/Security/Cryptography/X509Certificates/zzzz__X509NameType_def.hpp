#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include <cstddef>
#include <cstdint>
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
struct X509NameType;
}
// Type: System.Security.Cryptography.X509Certificates::X509NameType
namespace System::Security::Cryptography::X509Certificates {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7836))
// CS Name: System.Security.Cryptography.X509Certificates.X509NameType
struct CORDL_TYPE X509NameType : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr X509NameType(int32_t value__) noexcept;


                    constexpr X509NameType(X509NameType const&) = default;
                    constexpr X509NameType(X509NameType&&) = default;
                    constexpr X509NameType& operator=(X509NameType const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr X509NameType& operator=(X509NameType&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit X509NameType(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __X509NameType_Unwrapped : int32_t {
__SimpleName = 0,
__EmailName = 1,
__UpnName = 2,
__DnsName = 3,
__DnsFromAlternativeName = 4,
__UrlName = 5,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __X509NameType_Unwrapped () const noexcept {
return std::bit_cast<__X509NameType_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field SimpleName offset 0
static System::Security::Cryptography::X509Certificates::X509NameType const SimpleName;

/// @brief Field EmailName offset 0
static System::Security::Cryptography::X509Certificates::X509NameType const EmailName;

/// @brief Field UpnName offset 0
static System::Security::Cryptography::X509Certificates::X509NameType const UpnName;

/// @brief Field DnsName offset 0
static System::Security::Cryptography::X509Certificates::X509NameType const DnsName;

/// @brief Field DnsFromAlternativeName offset 0
static System::Security::Cryptography::X509Certificates::X509NameType const DnsFromAlternativeName;

/// @brief Field UrlName offset 0
static System::Security::Cryptography::X509Certificates::X509NameType const UrlName;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509NameType, "System.Security.Cryptography.X509Certificates", "X509NameType");
