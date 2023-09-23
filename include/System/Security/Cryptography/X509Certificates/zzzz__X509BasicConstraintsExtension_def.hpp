#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
struct AsnDecodeStatus;
}
namespace System::Security::Cryptography {
class AsnEncodedData;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509BasicConstraintsExtension;
}
// Type: System.Security.Cryptography.X509Certificates::X509BasicConstraintsExtension
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7862))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7843))
// CS Name: System.Security.Cryptography.X509Certificates.X509BasicConstraintsExtension
class CORDL_TYPE X509BasicConstraintsExtension : public System::Security::Cryptography::X509Certificates::X509Extension {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~X509BasicConstraintsExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509BasicConstraintsExtension", modifiers: " const&", def_value: None }]
constexpr X509BasicConstraintsExtension(X509BasicConstraintsExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509BasicConstraintsExtension", modifiers: "&&", def_value: None }]
constexpr X509BasicConstraintsExtension(X509BasicConstraintsExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509BasicConstraintsExtension(void* ptr) noexcept : System::Security::Cryptography::X509Certificates::X509Extension(ptr) {
}


  constexpr X509BasicConstraintsExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509BasicConstraintsExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509BasicConstraintsExtension& operator=(X509BasicConstraintsExtension&& o) noexcept = default;
  constexpr X509BasicConstraintsExtension& operator=(X509BasicConstraintsExtension const& o) noexcept = default;
                


// Fields

/// @brief Field oid offset 0
static constexpr ::ConstString  oid{u"2.5.29.19"};

/// @brief Field friendlyName offset 0
static constexpr ::ConstString  friendlyName{u"Basic Constraints"};

 bool __declspec(property(get=__get__certificateAuthority, put=__set__certificateAuthority))  _certificateAuthority;

constexpr void __set__certificateAuthority(bool value) ;

constexpr bool __get__certificateAuthority() const;

 bool __declspec(property(get=__get__hasPathLengthConstraint, put=__set__hasPathLengthConstraint))  _hasPathLengthConstraint;

constexpr void __set__hasPathLengthConstraint(bool value) ;

constexpr bool __get__hasPathLengthConstraint() const;

 int32_t __declspec(property(get=__get__pathLengthConstraint, put=__set__pathLengthConstraint))  _pathLengthConstraint;

constexpr void __set__pathLengthConstraint(int32_t value) ;

constexpr int32_t __get__pathLengthConstraint() const;

 System::Security::Cryptography::AsnDecodeStatus __declspec(property(get=__get__status, put=__set__status))  _status;

constexpr void __set__status(System::Security::Cryptography::AsnDecodeStatus value) ;

constexpr System::Security::Cryptography::AsnDecodeStatus __get__status() const;


// Properties

 bool __declspec(property(get=get_CertificateAuthority))  CertificateAuthority;

 bool __declspec(property(get=get_HasPathLengthConstraint))  HasPathLengthConstraint;

 int32_t __declspec(property(get=get_PathLengthConstraint))  PathLengthConstraint;


// Methods

// Ctor Parameters []
explicit X509BasicConstraintsExtension() ;

/// @brief Method .ctor addr 0x27e65bc size 0xa8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "encodedBasicConstraints", ty: "System::Security::Cryptography::AsnEncodedData", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }]
explicit X509BasicConstraintsExtension(System::Security::Cryptography::AsnEncodedData encodedBasicConstraints, bool critical) ;

/// @brief Method .ctor addr 0x27e4f84 size 0xd8 virtual false final false
 void _ctor(System::Security::Cryptography::AsnEncodedData encodedBasicConstraints, bool critical) ;

// Ctor Parameters [CppParam { name: "certificateAuthority", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hasPathLengthConstraint", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "pathLengthConstraint", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }]
explicit X509BasicConstraintsExtension(bool certificateAuthority, bool hasPathLengthConstraint, int32_t pathLengthConstraint, bool critical) ;

/// @brief Method .ctor addr 0x27e6828 size 0x140 virtual false final false
 void _ctor(bool certificateAuthority, bool hasPathLengthConstraint, int32_t pathLengthConstraint, bool critical) ;

/// @brief Method get_CertificateAuthority addr 0x27e6ac0 size 0x6c virtual false final false
 bool get_CertificateAuthority() ;

/// @brief Method get_HasPathLengthConstraint addr 0x27e6b2c size 0x6c virtual false final false
 bool get_HasPathLengthConstraint() ;

/// @brief Method get_PathLengthConstraint addr 0x27e6b98 size 0x6c virtual false final false
 int32_t get_PathLengthConstraint() ;

/// @brief Method CopyFrom addr 0x27e6c04 size 0x1dc virtual true final false
 void CopyFrom(System::Security::Cryptography::AsnEncodedData asnEncodedData) ;

/// @brief Method Decode addr 0x27e6664 size 0x1c4 virtual false final false
 System::Security::Cryptography::AsnDecodeStatus Decode(::ArrayW<uint8_t> extension) ;

/// @brief Method Encode addr 0x27e6968 size 0x158 virtual false final false
 ::ArrayW<uint8_t> Encode() ;

/// @brief Method ToString addr 0x27e6de0 size 0x298 virtual true final false
 ::StringW ToString(bool multiLine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509BasicConstraintsExtension, "System.Security.Cryptography.X509Certificates", "X509BasicConstraintsExtension");
