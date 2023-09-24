#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/zzzz__AsnEncodedData_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography {
class AsnEncodedData;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Extension;
}
// Type: System.Security.Cryptography.X509Certificates::X509Extension
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7828))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7862))
// CS Name: System.Security.Cryptography.X509Certificates.X509Extension
class CORDL_TYPE X509Extension : public System::Security::Cryptography::AsnEncodedData {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~X509Extension() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: " const&", def_value: None }]
constexpr X509Extension(X509Extension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Extension", modifiers: "&&", def_value: None }]
constexpr X509Extension(X509Extension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Extension(void* ptr) noexcept : System::Security::Cryptography::AsnEncodedData(ptr) {
}


  constexpr X509Extension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Extension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Extension& operator=(X509Extension&& o) noexcept = default;
  constexpr X509Extension& operator=(X509Extension const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__critical, put=__set__critical))  _critical;

constexpr void __set__critical(bool value) ;

constexpr bool __get__critical() const;


// Properties

 bool __declspec(property(get=get_Critical, put=set_Critical))  Critical;


// Methods

static System::Security::Cryptography::X509Certificates::X509Extension New_ctor() ;

/// @brief Method .ctor addr 0x27f2ef0 size 0x8 virtual false final false
 void _ctor() ;

static System::Security::Cryptography::X509Certificates::X509Extension New_ctor(::StringW oid, ::ArrayW<uint8_t> rawData, bool critical) ;

/// @brief Method .ctor addr 0x27f2ef8 size 0x28 virtual false final false
 void _ctor(::StringW oid, ::ArrayW<uint8_t> rawData, bool critical) ;

/// @brief Method get_Critical addr 0x27f2f20 size 0x8 virtual false final false
 bool get_Critical() ;

/// @brief Method set_Critical addr 0x27f2f28 size 0xc virtual false final false
 void set_Critical(bool value) ;

/// @brief Method CopyFrom addr 0x27f2f34 size 0x130 virtual true final false
 void CopyFrom(System::Security::Cryptography::AsnEncodedData asnEncodedData) ;

/// @brief Method FormatUnkownData addr 0x27f3064 size 0x114 virtual false final false
 ::StringW FormatUnkownData(::ArrayW<uint8_t> data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509Extension);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Extension, "System.Security.Cryptography.X509Certificates", "X509Extension");
