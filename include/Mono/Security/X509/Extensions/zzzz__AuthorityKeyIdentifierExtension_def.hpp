#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "Mono/Security/X509/zzzz__X509Extension_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace Mono::Security::X509 {
class X509Extension;
}
// Forward declare root types
namespace Mono::Security::X509::Extensions {
class AuthorityKeyIdentifierExtension;
}
// Type: Mono.Security.X509.Extensions::AuthorityKeyIdentifierExtension
namespace Mono::Security::X509::Extensions {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13967))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13972))
// CS Name: Mono.Security.X509.Extensions.AuthorityKeyIdentifierExtension
class CORDL_TYPE AuthorityKeyIdentifierExtension : public Mono::Security::X509::X509Extension {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AuthorityKeyIdentifierExtension() = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifierExtension", modifiers: " const&", def_value: None }]
constexpr AuthorityKeyIdentifierExtension(AuthorityKeyIdentifierExtension const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AuthorityKeyIdentifierExtension", modifiers: "&&", def_value: None }]
constexpr AuthorityKeyIdentifierExtension(AuthorityKeyIdentifierExtension&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AuthorityKeyIdentifierExtension(void* ptr) noexcept : Mono::Security::X509::X509Extension(ptr) {
}


  constexpr AuthorityKeyIdentifierExtension& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AuthorityKeyIdentifierExtension& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AuthorityKeyIdentifierExtension& operator=(AuthorityKeyIdentifierExtension&& o) noexcept = default;
  constexpr AuthorityKeyIdentifierExtension& operator=(AuthorityKeyIdentifierExtension const& o) noexcept = default;
                


// Fields

 ::ArrayW<uint8_t> __declspec(property(get=__get_aki, put=__set_aki))  aki;

constexpr void __set_aki(::ArrayW<uint8_t> value) ;

constexpr ::ArrayW<uint8_t> __get_aki() const;


// Properties

 ::ArrayW<uint8_t> __declspec(property(get=get_Identifier))  Identifier;


// Methods

// Ctor Parameters [CppParam { name: "extension", ty: "Mono::Security::X509::X509Extension", modifiers: "", def_value: None }]
explicit AuthorityKeyIdentifierExtension(Mono::Security::X509::X509Extension extension) ;

/// @brief Method .ctor addr 0x2290ce8 size 0x4 virtual false final false
 void _ctor(Mono::Security::X509::X509Extension extension) ;

/// @brief Method Decode addr 0x2290cec size 0x118 virtual true final false
 void Decode() ;

/// @brief Method Encode addr 0x2290e04 size 0x124 virtual true final false
 void Encode() ;

/// @brief Method get_Identifier addr 0x2290f28 size 0x74 virtual false final false
 ::ArrayW<uint8_t> get_Identifier() ;

/// @brief Method ToString addr 0x2290f9c size 0x168 virtual true final false
 ::StringW ToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509::Extensions
NEED_NO_BOX(Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::Extensions::AuthorityKeyIdentifierExtension, "Mono.Security.X509.Extensions", "AuthorityKeyIdentifierExtension");
