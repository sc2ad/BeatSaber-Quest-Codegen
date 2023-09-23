#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Security/Cryptography/X509Certificates/zzzz__X509CertificateCollection_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Enumerator;
}
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2;
}
namespace System::Security::Cryptography::X509Certificates {
struct X509FindType;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509Certificate2Collection;
}
// Type: System.Security.Cryptography.X509Certificates::X509Certificate2Collection
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7851))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7845))
// CS Name: System.Security.Cryptography.X509Certificates.X509Certificate2Collection
class CORDL_TYPE X509Certificate2Collection : public System::Security::Cryptography::X509Certificates::X509CertificateCollection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509Certificate2Collection() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Collection", modifiers: " const&", def_value: None }]
constexpr X509Certificate2Collection(X509Certificate2Collection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Certificate2Collection", modifiers: "&&", def_value: None }]
constexpr X509Certificate2Collection(X509Certificate2Collection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Certificate2Collection(void* ptr) noexcept : System::Security::Cryptography::X509Certificates::X509CertificateCollection(ptr) {
}


  constexpr X509Certificate2Collection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Certificate2Collection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Certificate2Collection& operator=(X509Certificate2Collection&& o) noexcept = default;
  constexpr X509Certificate2Collection& operator=(X509Certificate2Collection const& o) noexcept = default;
                


// Fields

static ::ArrayW<::StringW> __declspec(property(get=__get_newline_split, put=__set_newline_split))  newline_split;

static void __set_newline_split(::ArrayW<::StringW> value) ;

static ::ArrayW<::StringW> __get_newline_split() ;


// Properties

 System::Security::Cryptography::X509Certificates::X509Certificate2 __declspec(property(get=get_Item))  Item;


// Methods

// Ctor Parameters []
explicit X509Certificate2Collection() ;

/// @brief Method .ctor addr 0x27e8e50 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "certificates", ty: "System::Security::Cryptography::X509Certificates::X509Certificate2Collection", modifiers: "", def_value: None }]
explicit X509Certificate2Collection(System::Security::Cryptography::X509Certificates::X509Certificate2Collection certificates) ;

/// @brief Method .ctor addr 0x27e8e60 size 0x2c virtual false final false
 void _ctor(System::Security::Cryptography::X509Certificates::X509Certificate2Collection certificates) ;

/// @brief Method get_Item addr 0x27e8f00 size 0x12c virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate2 get_Item(int32_t index) ;

/// @brief Method Add addr 0x27e902c size 0x74 virtual false final false
 int32_t Add(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method AddRange addr 0x27e8e8c size 0x74 virtual false final false
 void AddRange(System::Security::Cryptography::X509Certificates::X509Certificate2Collection certificates) ;

/// @brief Method Contains addr 0x27e90a0 size 0x384 virtual false final false
 bool Contains(System::Security::Cryptography::X509Certificates::X509Certificate2 certificate) ;

/// @brief Method GetKeyIdentifier addr 0x27e9424 size 0xcc virtual false final false
 ::StringW GetKeyIdentifier(System::Security::Cryptography::X509Certificates::X509Certificate2 x) ;

/// @brief Method Find addr 0x27e94f0 size 0x1138 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate2Collection Find(System::Security::Cryptography::X509Certificates::X509FindType findType, ::bs_hook::Il2CppWrapperType findValue, bool validOnly) ;

/// @brief Method GetEnumerator addr 0x27ea628 size 0x60 virtual false final false
 System::Security::Cryptography::X509Certificates::X509Certificate2Enumerator GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
NEED_NO_BOX(System::Security::Cryptography::X509Certificates::X509Certificate2Collection);
DEFINE_IL2CPP_ARG_TYPE(System::Security::Cryptography::X509Certificates::X509Certificate2Collection, "System.Security.Cryptography.X509Certificates", "X509Certificate2Collection");
