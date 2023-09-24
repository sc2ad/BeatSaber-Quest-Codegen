#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Mono::Security::X509 {
class X509Extension;
}
// Forward declare root types
namespace Mono::Security::X509::Extensions {
class BasicConstraintsExtension;
}
// Type: Mono.Security.X509.Extensions::BasicConstraintsExtension
namespace Mono::Security::X509::Extensions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13967))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13973))
// CS Name: Mono.Security.X509.Extensions.BasicConstraintsExtension
class CORDL_TYPE BasicConstraintsExtension : public Mono::Security::X509::X509Extension {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~BasicConstraintsExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicConstraintsExtension", modifiers: " const&", def_value: None }]
constexpr BasicConstraintsExtension(BasicConstraintsExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BasicConstraintsExtension", modifiers: "&&", def_value: None }]
constexpr BasicConstraintsExtension(BasicConstraintsExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BasicConstraintsExtension(void* ptr) noexcept : Mono::Security::X509::X509Extension(ptr) {
}


  constexpr BasicConstraintsExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BasicConstraintsExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BasicConstraintsExtension& operator=(BasicConstraintsExtension&& o) noexcept = default;
  constexpr BasicConstraintsExtension& operator=(BasicConstraintsExtension const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_cA, put=__set_cA))  cA;

constexpr void __set_cA(bool value) ;

constexpr bool __get_cA() const;

 int32_t __declspec(property(get=__get_pathLenConstraint, put=__set_pathLenConstraint))  pathLenConstraint;

constexpr void __set_pathLenConstraint(int32_t value) ;

constexpr int32_t __get_pathLenConstraint() const;


// Properties

 bool __declspec(property(get=get_CertificateAuthority))  CertificateAuthority;


// Methods

static Mono::Security::X509::Extensions::BasicConstraintsExtension New_ctor(Mono::Security::X509::X509Extension extension) ;

/// @brief Method .ctor addr 0x228f514 size 0x4 virtual false final false
 void _ctor(Mono::Security::X509::X509Extension extension) ;

/// @brief Method Decode addr 0x2291104 size 0x138 virtual true final false
 void Decode() ;

/// @brief Method Encode addr 0x229123c size 0x134 virtual true final false
 void Encode() ;

/// @brief Method get_CertificateAuthority addr 0x2291370 size 0x8 virtual false final false
 bool get_CertificateAuthority() ;

/// @brief Method ToString addr 0x2291378 size 0x1a8 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509::Extensions
NEED_NO_BOX(Mono::Security::X509::Extensions::BasicConstraintsExtension);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::Extensions::BasicConstraintsExtension, "Mono.Security.X509.Extensions", "BasicConstraintsExtension");
