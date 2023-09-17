#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImpl;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Security::Cryptography::X509Certificates {
class X509CertificateImplCollection;
}
// Type: System.Security.Cryptography.X509Certificates::X509CertificateImplCollection
namespace System::Security::Cryptography::X509Certificates {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7852))
// CS Name: System.Security.Cryptography.X509Certificates.X509CertificateImplCollection
class CORDL_TYPE X509CertificateImplCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~X509CertificateImplCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateImplCollection", modifiers: " const&", def_value: None }]
constexpr X509CertificateImplCollection(X509CertificateImplCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509CertificateImplCollection", modifiers: "&&", def_value: None }]
constexpr X509CertificateImplCollection(X509CertificateImplCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509CertificateImplCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509CertificateImplCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509CertificateImplCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509CertificateImplCollection& operator=(X509CertificateImplCollection&& o) noexcept = default;
  constexpr X509CertificateImplCollection& operator=(X509CertificateImplCollection const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl> __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl> value) ;

constexpr ::System::Collections::Generic::List_1<::System::Security::Cryptography::X509Certificates::X509CertificateImpl> __get_list() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 ::System::Security::Cryptography::X509Certificates::X509CertificateImpl __declspec(property(get=get_Item))  Item;


// Methods

// Ctor Parameters []
explicit X509CertificateImplCollection() ;

/// @brief Method .ctor addr 0x27ebe34 size 0x80 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "other", ty: "::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection", modifiers: "", def_value: None }]
explicit X509CertificateImplCollection(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection other) ;

/// @brief Method .ctor addr 0x27ecc34 size 0x230 virtual false final false
 void _ctor(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection other) ;

/// @brief Method get_Count addr 0x27ece64 size 0x48 virtual false final false
 int32_t get_Count() ;

/// @brief Method get_Item addr 0x27eceac size 0x58 virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509CertificateImpl get_Item(int32_t index) ;

/// @brief Method Add addr 0x27ebeb4 size 0xd4 virtual false final false
 void Add(::System::Security::Cryptography::X509Certificates::X509CertificateImpl impl, bool takeOwnership) ;

/// @brief Method Clone addr 0x27eaca0 size 0x60 virtual false final false
 ::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection Clone() ;

/// @brief Method Dispose addr 0x27ecf04 size 0x6c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x27ecf70 size 0x220 virtual true final false
 void Dispose(bool disposing) ;

/// @brief Method Finalize addr 0x27ed190 size 0xa0 virtual true final false
 void Finalize() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Security::Cryptography::X509Certificates
} // end anonymous namespace
NEED_NO_BOX(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection);
DEFINE_IL2CPP_ARG_TYPE(::System::Security::Cryptography::X509Certificates::X509CertificateImplCollection, "System.Security.Cryptography.X509Certificates", "X509CertificateImplCollection");
