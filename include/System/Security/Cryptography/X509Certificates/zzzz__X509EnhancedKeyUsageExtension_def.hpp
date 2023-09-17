#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
class OidCollection;
}
namespace System::Security::Cryptography {
class AsnEncodedData;
}
namespace System::Security::Cryptography {
struct AsnDecodeStatus;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509EnhancedKeyUsageExtension;
}
// Type: System.Security.Cryptography.X509Certificates::X509EnhancedKeyUsageExtension
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7862))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7861))
// CS Name: System.Security.Cryptography.X509Certificates.X509EnhancedKeyUsageExtension
class CORDL_TYPE X509EnhancedKeyUsageExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~X509EnhancedKeyUsageExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509EnhancedKeyUsageExtension", modifiers: " const&", def_value: None }]
constexpr X509EnhancedKeyUsageExtension(X509EnhancedKeyUsageExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509EnhancedKeyUsageExtension", modifiers: "&&", def_value: None }]
constexpr X509EnhancedKeyUsageExtension(X509EnhancedKeyUsageExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509EnhancedKeyUsageExtension(void* ptr) noexcept : ::System::Security::Cryptography::X509Certificates::X509Extension(ptr) {
}


  constexpr X509EnhancedKeyUsageExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509EnhancedKeyUsageExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509EnhancedKeyUsageExtension& operator=(X509EnhancedKeyUsageExtension&& o) noexcept = default;
  constexpr X509EnhancedKeyUsageExtension& operator=(X509EnhancedKeyUsageExtension const& o) noexcept = default;
                


// Fields

 ::System::Security::Cryptography::OidCollection __declspec(property(get=__get__enhKeyUsage, put=__set__enhKeyUsage))  _enhKeyUsage;

constexpr void __set__enhKeyUsage(::System::Security::Cryptography::OidCollection value) ;

constexpr ::System::Security::Cryptography::OidCollection __get__enhKeyUsage() const;

 ::System::Security::Cryptography::AsnDecodeStatus __declspec(property(get=__get__status, put=__set__status))  _status;

constexpr void __set__status(::System::Security::Cryptography::AsnDecodeStatus value) ;

constexpr ::System::Security::Cryptography::AsnDecodeStatus __get__status() const;


// Methods

// Ctor Parameters []
explicit X509EnhancedKeyUsageExtension() ;

/// @brief Method .ctor addr 0x27e8da8 size 0xa8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "encodedEnhancedKeyUsages", ty: "::System::Security::Cryptography::AsnEncodedData", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }]
explicit X509EnhancedKeyUsageExtension(::System::Security::Cryptography::AsnEncodedData encodedEnhancedKeyUsages, bool critical) ;

/// @brief Method .ctor addr 0x27e505c size 0xd8 virtual false final false
 void _ctor(::System::Security::Cryptography::AsnEncodedData encodedEnhancedKeyUsages, bool critical) ;

// Ctor Parameters [CppParam { name: "enhancedKeyUsages", ty: "::System::Security::Cryptography::OidCollection", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }]
explicit X509EnhancedKeyUsageExtension(::System::Security::Cryptography::OidCollection enhancedKeyUsages, bool critical) ;

/// @brief Method .ctor addr 0x27f1800 size 0x188 virtual false final false
 void _ctor(::System::Security::Cryptography::OidCollection enhancedKeyUsages, bool critical) ;

/// @brief Method CopyFrom addr 0x27f1a40 size 0x1dc virtual true final false
 void CopyFrom(::System::Security::Cryptography::AsnEncodedData asnEncodedData) ;

/// @brief Method Decode addr 0x27f15a0 size 0x260 virtual false final false
 ::System::Security::Cryptography::AsnDecodeStatus Decode(::ArrayW<uint8_t> extension) ;

/// @brief Method Encode addr 0x27f1988 size 0xb8 virtual false final false
 ::ArrayW<uint8_t> Encode() ;

/// @brief Method ToString addr 0x27f1c1c size 0x12d4 virtual true final false
 ::StringW ToString(bool multiLine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509EnhancedKeyUsageExtension, "System.Security.Cryptography.X509Certificates", "X509EnhancedKeyUsageExtension");
