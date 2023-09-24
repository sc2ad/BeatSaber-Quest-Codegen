#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
// Forward declare root types
namespace GlobalNamespace {
class NamedPreset;
}
// Type: ::NamedPreset
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4459))
// CS Name: NamedPreset
class CORDL_TYPE NamedPreset : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NamedPreset() = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedPreset", modifiers: " const&", def_value: None }]
constexpr NamedPreset(NamedPreset const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NamedPreset", modifiers: "&&", def_value: None }]
constexpr NamedPreset(NamedPreset&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NamedPreset(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NamedPreset& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NamedPreset& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NamedPreset& operator=(NamedPreset&& o) noexcept = default;
  constexpr NamedPreset& operator=(NamedPreset const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__presetNameLocalizationKey, put=__set__presetNameLocalizationKey))  _presetNameLocalizationKey;

constexpr void __set__presetNameLocalizationKey(::StringW value) ;

constexpr ::StringW __get__presetNameLocalizationKey() const;


// Properties

 ::StringW __declspec(property(get=get_presetNameLocalizationKey))  presetNameLocalizationKey;


// Methods

/// @brief Method get_presetNameLocalizationKey addr 0x21f0898 size 0x8 virtual false final false
 ::StringW get_presetNameLocalizationKey() ;

static GlobalNamespace::NamedPreset New_ctor() ;

/// @brief Method .ctor addr 0x21f0890 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NamedPreset);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NamedPreset, "", "NamedPreset");
