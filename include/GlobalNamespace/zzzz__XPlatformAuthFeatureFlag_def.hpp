#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class XPlatformAuthFeatureFlag;
}
// Type: ::XPlatformAuthFeatureFlag
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12938))
// CS Name: XPlatformAuthFeatureFlag
class CORDL_TYPE XPlatformAuthFeatureFlag : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XPlatformAuthFeatureFlag() = default;

// Ctor Parameters [CppParam { name: "", ty: "XPlatformAuthFeatureFlag", modifiers: " const&", def_value: None }]
constexpr XPlatformAuthFeatureFlag(XPlatformAuthFeatureFlag const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XPlatformAuthFeatureFlag", modifiers: "&&", def_value: None }]
constexpr XPlatformAuthFeatureFlag(XPlatformAuthFeatureFlag&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XPlatformAuthFeatureFlag(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XPlatformAuthFeatureFlag& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XPlatformAuthFeatureFlag& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XPlatformAuthFeatureFlag& operator=(XPlatformAuthFeatureFlag&& o) noexcept = default;
  constexpr XPlatformAuthFeatureFlag& operator=(XPlatformAuthFeatureFlag const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__UseXPlatformAuth_k__BackingField, put=__set__UseXPlatformAuth_k__BackingField))  _UseXPlatformAuth_k__BackingField;

constexpr void __set__UseXPlatformAuth_k__BackingField(bool value) ;

constexpr bool __get__UseXPlatformAuth_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_UseXPlatformAuth, put=set_UseXPlatformAuth))  UseXPlatformAuth;


// Methods

/// @brief Method get_UseXPlatformAuth addr 0xdd0df8 size 0x8 virtual false final false
 bool get_UseXPlatformAuth() ;

/// @brief Method set_UseXPlatformAuth addr 0xdd0e00 size 0xc virtual false final false
 void set_UseXPlatformAuth(bool value) ;

// Ctor Parameters []
explicit XPlatformAuthFeatureFlag() ;

/// @brief Method .ctor addr 0xdd0e0c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::XPlatformAuthFeatureFlag);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::XPlatformAuthFeatureFlag, "", "XPlatformAuthFeatureFlag");
