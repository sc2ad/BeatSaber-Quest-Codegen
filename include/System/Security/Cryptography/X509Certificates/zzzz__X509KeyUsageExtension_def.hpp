#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509Extension_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography::X509Certificates {
struct X509KeyUsageFlags;
}
namespace System::Security::Cryptography {
struct AsnDecodeStatus;
}
namespace System::Security::Cryptography {
class AsnEncodedData;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509KeyUsageExtension;
}
// Type: System.Security.Cryptography.X509Certificates::X509KeyUsageExtension
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7862))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7866))
// CS Name: System.Security.Cryptography.X509Certificates.X509KeyUsageExtension
class CORDL_TYPE X509KeyUsageExtension : public ::System::Security::Cryptography::X509Certificates::X509Extension {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~X509KeyUsageExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509KeyUsageExtension", modifiers: " const&", def_value: None }]
constexpr X509KeyUsageExtension(X509KeyUsageExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509KeyUsageExtension", modifiers: "&&", def_value: None }]
constexpr X509KeyUsageExtension(X509KeyUsageExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509KeyUsageExtension(void* ptr) noexcept : ::System::Security::Cryptography::X509Certificates::X509Extension(ptr) {
}


  constexpr X509KeyUsageExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509KeyUsageExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509KeyUsageExtension& operator=(X509KeyUsageExtension&& o) noexcept = default;
  constexpr X509KeyUsageExtension& operator=(X509KeyUsageExtension const& o) noexcept = default;
                


// Fields

/// @brief Field oid offset 0
static constexpr ::ConstString  oid{u"2.5.29.15"};

/// @brief Field friendlyName offset 0
static constexpr ::ConstString  friendlyName{u"Key Usage"};

/// @brief Field all offset 0
static ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags const all;

 ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags __declspec(property(get=__get__keyUsages, put=__set__keyUsages))  _keyUsages;

constexpr void __set__keyUsages(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags value) ;

constexpr ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags __get__keyUsages() const;

 ::System::Security::Cryptography::AsnDecodeStatus __declspec(property(get=__get__status, put=__set__status))  _status;

constexpr void __set__status(::System::Security::Cryptography::AsnDecodeStatus value) ;

constexpr ::System::Security::Cryptography::AsnDecodeStatus __get__status() const;


// Properties

 ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags __declspec(property(get=get_KeyUsages))  KeyUsages;


// Methods

// Ctor Parameters []
explicit X509KeyUsageExtension() ;

/// @brief Method .ctor addr 0x27f3db4 size 0x9c virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "encodedKeyUsage", ty: "::System::Security::Cryptography::AsnEncodedData", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }]
explicit X509KeyUsageExtension(::System::Security::Cryptography::AsnEncodedData encodedKeyUsage, bool critical) ;

/// @brief Method .ctor addr 0x27f3e50 size 0xcc virtual false final false
 void _ctor(::System::Security::Cryptography::AsnEncodedData encodedKeyUsage, bool critical) ;

// Ctor Parameters [CppParam { name: "keyUsages", ty: "::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags", modifiers: "", def_value: None }, CppParam { name: "critical", ty: "bool", modifiers: "", def_value: None }]
explicit X509KeyUsageExtension(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags keyUsages, bool critical) ;

/// @brief Method .ctor addr 0x27f40d0 size 0xd8 virtual false final false
 void _ctor(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags keyUsages, bool critical) ;

/// @brief Method get_KeyUsages addr 0x27f4320 size 0x6c virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags get_KeyUsages() ;

/// @brief Method CopyFrom addr 0x27f438c size 0x1e0 virtual true final false
 void CopyFrom(::System::Security::Cryptography::AsnEncodedData asnEncodedData) ;

/// @brief Method GetValidFlags addr 0x27f41a8 size 0x10 virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags GetValidFlags(::System::Security::Cryptography::X509Certificates::X509KeyUsageFlags flags) ;

/// @brief Method Decode addr 0x27f3f1c size 0x1b4 virtual false final false
 ::System::Security::Cryptography::AsnDecodeStatus Decode(::ArrayW<uint8_t> extension) ;

/// @brief Method Encode addr 0x27f41b8 size 0x168 virtual false final false
 ::ArrayW<uint8_t> Encode() ;

/// @brief Method ToString addr 0x27f456c size 0x530 virtual true final false
 ::StringW ToString(bool multiLine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509KeyUsageExtension, "System.Security.Cryptography.X509Certificates", "X509KeyUsageExtension");
