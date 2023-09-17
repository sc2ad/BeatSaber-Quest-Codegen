#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography {
struct AsnDecodeStatus;
}
namespace System::Security::Cryptography {
class AsnEncodedData;
}
namespace System::Security::Cryptography::X509Certificates {
class PublicKey;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509SubjectKeyIdentifierHashAlgorithm;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509SubjectKeyIdentifierExtension;
}
// Type: System.Security.Cryptography.X509Certificates::X509SubjectKeyIdentifierExtension
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7862))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7868))
// CS Name: System.Security.Cryptography.X509Certificates.X509SubjectKeyIdentifierExtension
class CORDL_TYPE X509SubjectKeyIdentifierExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~X509SubjectKeyIdentifierExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509SubjectKeyIdentifierExtension", modifiers: " const&", def_value: None }]
constexpr X509SubjectKeyIdentifierExtension(X509SubjectKeyIdentifierExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509SubjectKeyIdentifierExtension", modifiers: "&&", def_value: None }]
constexpr X509SubjectKeyIdentifierExtension(X509SubjectKeyIdentifierExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509SubjectKeyIdentifierExtension(void* ptr) noexcept : ::System::Security::Cryptography::X509Certificates::X509Extension(ptr) {
}


  constexpr X509SubjectKeyIdentifierExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509SubjectKeyIdentifierExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509SubjectKeyIdentifierExtension& operator=(X509SubjectKeyIdentifierExtension&& o) noexcept = default;
  constexpr X509SubjectKeyIdentifierExtension& operator=(X509SubjectKeyIdentifierExtension const& o) noexcept = default;
                


// Fields

/// @brief Field oid offset 0
static constexpr ::ConstString  oid{u"2.5.29.14"};

/// @brief Field friendlyName offset 0
static constexpr ::ConstString  friendlyName{u"Subject Key Identifier"};

 ::ArrayW<uint8_t> __declspec(property(get=__get__subjectKeyIdentifier, put=__set__subjectKeyIdentifier))  _subjectKeyIdentifier;

constexpr void __set__subjectKeyIdentifier(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get__subjectKeyIdentifier() const;

 ::StringW __declspec(property(get=__get__ski, put=__set__ski))  _ski;

constexpr void __set__ski(::StringW value) ;

constexpr ::StringW __get__ski() const;

 ::System::Security::Cryptography::AsnDecodeStatus __declspec(property(get=__get__status, put=__set__status))  _status;

constexpr void __set__status(::System::Security::Cryptography::AsnDecodeStatus value) ;

constexpr ::System::Security::Cryptography::AsnDecodeStatus __get__status() const;


// Properties

 ::StringW __declspec(property(get=get_SubjectKeyIdentifier))  SubjectKeyIdentifier;


// Methods

// Ctor Parameters []
explicit X509SubjectKeyIdentifierExtension() ;

/// @brief Method .ctor addr 0x27f50b4 size 0x9c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "encodedSubjectKeyIdentifier", ty: "::System::Security::Cryptography::AsnEncodedData", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }]
explicit X509SubjectKeyIdentifierExtension(::System::Security::Cryptography::AsnEncodedData encodedSubjectKeyIdentifier, bool critical) ;

/// @brief Method .ctor addr 0x27f5150 size 0xcc virtual false final false
 void _ctor(::System::Security::Cryptography::AsnEncodedData encodedSubjectKeyIdentifier, bool critical) ;

// Ctor Parameters [CppParam { name: "subjectKeyIdentifier", ty: "::ArrayW<uint8_t>", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }]
explicit X509SubjectKeyIdentifierExtension(::ArrayW<uint8_t> subjectKeyIdentifier, bool critical) ;

/// @brief Method .ctor addr 0x27f5380 size 0x1b8 virtual false final false
 void _ctor(::ArrayW<uint8_t> subjectKeyIdentifier, bool critical) ;

// Ctor Parameters [CppParam { name: "subjectKeyIdentifier", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }]
explicit X509SubjectKeyIdentifierExtension(::StringW subjectKeyIdentifier, bool critical) ;

/// @brief Method .ctor addr 0x27f55ac size 0x168 virtual false final false
 void _ctor(::StringW subjectKeyIdentifier, bool critical) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Security::Cryptography::X509Certificates::PublicKey", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }]
explicit X509SubjectKeyIdentifierExtension(::System::Security::Cryptography::X509Certificates::PublicKey key, bool critical) ;

/// @brief Method .ctor addr 0x27f5804 size 0xc virtual false final false
 void _ctor(::System::Security::Cryptography::X509Certificates::PublicKey key, bool critical) ;

// Ctor Parameters [CppParam { name: "key", ty: "::System::Security::Cryptography::X509Certificates::PublicKey", modifiers: "", def_value: None }, CppParam { name: "algorithm", ty: "::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }]
explicit X509SubjectKeyIdentifierExtension(::System::Security::Cryptography::X509Certificates::PublicKey key, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm algorithm, bool critical) ;

/// @brief Method .ctor addr 0x27f5810 size 0x3cc virtual false final false
 void _ctor(::System::Security::Cryptography::X509Certificates::PublicKey key, ::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierHashAlgorithm algorithm, bool critical) ;

/// @brief Method get_SubjectKeyIdentifier addr 0x27f5bdc size 0x88 virtual false final false
 ::StringW get_SubjectKeyIdentifier() ;

/// @brief Method CopyFrom addr 0x27f5c64 size 0x1e0 virtual true final false
 void CopyFrom(::System::Security::Cryptography::AsnEncodedData asnEncodedData) ;

/// @brief Method FromHexChar addr 0x27f5e44 size 0x48 virtual false final false
static uint8_t FromHexChar(char16_t c) ;

/// @brief Method FromHexChars addr 0x27f5e8c size 0x9c virtual false final false
static uint8_t FromHexChars(char16_t c1, char16_t c2) ;

/// @brief Method FromHex addr 0x27f5714 size 0xf0 virtual false final false
static ::ArrayW<uint8_t> FromHex(::StringW hex) ;

/// @brief Method Decode addr 0x27f521c size 0x164 virtual false final false
 ::System::Security::Cryptography::AsnDecodeStatus Decode(::ArrayW<uint8_t> extension) ;

/// @brief Method Encode addr 0x27f5538 size 0x74 virtual false final false
 ::ArrayW<uint8_t> Encode() ;

/// @brief Method ToString addr 0x27f5f28 size 0x22c virtual true final false
 ::StringW ToString(bool multiLine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509SubjectKeyIdentifierExtension, "System.Security.Cryptography.X509Certificates", "X509SubjectKeyIdentifierExtension");
