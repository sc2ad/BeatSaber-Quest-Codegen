#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRConfigurationDataAttribute;
}
// Type: UnityEngine.XR.Management::XRConfigurationDataAttribute
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15889))
// CS Name: UnityEngine.XR.Management.XRConfigurationDataAttribute
class CORDL_TYPE XRConfigurationDataAttribute : public ::System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XRConfigurationDataAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRConfigurationDataAttribute", modifiers: " const&", def_value: None }]
constexpr XRConfigurationDataAttribute(XRConfigurationDataAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRConfigurationDataAttribute", modifiers: "&&", def_value: None }]
constexpr XRConfigurationDataAttribute(XRConfigurationDataAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRConfigurationDataAttribute(void* ptr) noexcept : ::System::Attribute(ptr) {
}


  constexpr XRConfigurationDataAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRConfigurationDataAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRConfigurationDataAttribute& operator=(XRConfigurationDataAttribute&& o) noexcept = default;
  constexpr XRConfigurationDataAttribute& operator=(XRConfigurationDataAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__displayName_k__BackingField, put=__set__displayName_k__BackingField))  _displayName_k__BackingField;

constexpr void __set__displayName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__displayName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__buildSettingsKey_k__BackingField, put=__set__buildSettingsKey_k__BackingField))  _buildSettingsKey_k__BackingField;

constexpr void __set__buildSettingsKey_k__BackingField(::StringW value) ;

constexpr ::StringW __get__buildSettingsKey_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_displayName, put=set_displayName))  displayName;

 ::StringW __declspec(property(get=get_buildSettingsKey, put=set_buildSettingsKey))  buildSettingsKey;


// Methods

/// @brief Method get_displayName addr 0x2adcc80 size 0x8 virtual false final false
 ::StringW get_displayName() ;

/// @brief Method set_displayName addr 0x2adcc88 size 0x8 virtual false final false
 void set_displayName(::StringW value) ;

/// @brief Method get_buildSettingsKey addr 0x2adcc90 size 0x8 virtual false final false
 ::StringW get_buildSettingsKey() ;

/// @brief Method set_buildSettingsKey addr 0x2adcc98 size 0x8 virtual false final false
 void set_buildSettingsKey(::StringW value) ;

// Ctor Parameters []
explicit XRConfigurationDataAttribute() ;

/// @brief Method .ctor addr 0x2adcca0 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "buildSettingsKey", ty: "::StringW", modifiers: "", def_value: None }]
explicit XRConfigurationDataAttribute(::StringW displayName, ::StringW buildSettingsKey) ;

/// @brief Method .ctor addr 0x2adcca8 size 0x2c virtual false final false
 void _ctor(::StringW displayName, ::StringW buildSettingsKey) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Management
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::XR::Management::XRConfigurationDataAttribute);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::XR::Management::XRConfigurationDataAttribute, "UnityEngine.XR.Management", "XRConfigurationDataAttribute");
