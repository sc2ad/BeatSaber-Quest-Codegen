#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Mono::Security::X509 {
class X509Store;
}
// Forward declare root types
namespace Mono::Security::X509 {
class X509Stores;
}
// Type: Mono.Security.X509::X509Stores
namespace Mono::Security::X509 {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13971))
// CS Name: Mono.Security.X509.X509Stores
class CORDL_TYPE X509Stores : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~X509Stores() = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Stores", modifiers: " const&", def_value: None }]
constexpr X509Stores(X509Stores const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "X509Stores", modifiers: "&&", def_value: None }]
constexpr X509Stores(X509Stores&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit X509Stores(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr X509Stores& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr X509Stores& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr X509Stores& operator=(X509Stores&& o) noexcept = default;
  constexpr X509Stores& operator=(X509Stores const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__storePath, put=__set__storePath))  _storePath;

constexpr void __set__storePath(::StringW value) ;

constexpr ::StringW __get__storePath() const;

 bool __declspec(property(get=__get__newFormat, put=__set__newFormat))  _newFormat;

constexpr void __set__newFormat(bool value) ;

constexpr bool __get__newFormat() const;

 Mono::Security::X509::X509Store __declspec(property(get=__get__trusted, put=__set__trusted))  _trusted;

constexpr void __set__trusted(Mono::Security::X509::X509Store value) ;

constexpr Mono::Security::X509::X509Store __get__trusted() const;


// Properties

 Mono::Security::X509::X509Store __declspec(property(get=get_TrustedRoot))  TrustedRoot;


// Methods

static Mono::Security::X509::X509Stores New_ctor(::StringW path, bool newFormat) ;

/// @brief Method .ctor addr 0x2290a1c size 0x30 virtual false final false
 void _ctor(::StringW path, bool newFormat) ;

/// @brief Method get_TrustedRoot addr 0x2290aec size 0xdc virtual false final false
 Mono::Security::X509::X509Store get_TrustedRoot() ;

/// @brief Method Open addr 0x2290bc8 size 0x120 virtual false final false
 Mono::Security::X509::X509Store Open(::StringW storeName, bool create) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Security::X509
NEED_NO_BOX(Mono::Security::X509::X509Stores);
DEFINE_IL2CPP_ARG_TYPE(Mono::Security::X509::X509Stores, "Mono.Security.X509", "X509Stores");
