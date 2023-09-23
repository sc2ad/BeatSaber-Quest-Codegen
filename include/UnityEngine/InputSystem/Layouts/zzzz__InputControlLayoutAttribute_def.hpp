#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System {
class Type;
}
namespace System {
template<typename T>
struct Nullable_1;
}
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayoutAttribute;
}
// Type: UnityEngine.InputSystem.Layouts::InputControlLayoutAttribute
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6699))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayoutAttribute
class CORDL_TYPE InputControlLayoutAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~InputControlLayoutAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayoutAttribute", modifiers: " const&", def_value: None }]
constexpr InputControlLayoutAttribute(InputControlLayoutAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayoutAttribute", modifiers: "&&", def_value: None }]
constexpr InputControlLayoutAttribute(InputControlLayoutAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControlLayoutAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr InputControlLayoutAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControlLayoutAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControlLayoutAttribute& operator=(InputControlLayoutAttribute&& o) noexcept = default;
  constexpr InputControlLayoutAttribute& operator=(InputControlLayoutAttribute const& o) noexcept = default;
                


// Fields

 System::Type __declspec(property(get=__get__stateType_k__BackingField, put=__set__stateType_k__BackingField))  _stateType_k__BackingField;

constexpr void __set__stateType_k__BackingField(System::Type value) ;

constexpr System::Type __get__stateType_k__BackingField() const;

 ::StringW __declspec(property(get=__get__stateFormat_k__BackingField, put=__set__stateFormat_k__BackingField))  _stateFormat_k__BackingField;

constexpr void __set__stateFormat_k__BackingField(::StringW value) ;

constexpr ::StringW __get__stateFormat_k__BackingField() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__commonUsages_k__BackingField, put=__set__commonUsages_k__BackingField))  _commonUsages_k__BackingField;

constexpr void __set__commonUsages_k__BackingField(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__commonUsages_k__BackingField() const;

 ::StringW __declspec(property(get=__get__variants_k__BackingField, put=__set__variants_k__BackingField))  _variants_k__BackingField;

constexpr void __set__variants_k__BackingField(::StringW value) ;

constexpr ::StringW __get__variants_k__BackingField() const;

 bool __declspec(property(get=__get__isNoisy_k__BackingField, put=__set__isNoisy_k__BackingField))  _isNoisy_k__BackingField;

constexpr void __set__isNoisy_k__BackingField(bool value) ;

constexpr bool __get__isNoisy_k__BackingField() const;

 System::Nullable_1<bool> __declspec(property(get=__get_canRunInBackgroundInternal, put=__set_canRunInBackgroundInternal))  canRunInBackgroundInternal;

constexpr void __set_canRunInBackgroundInternal(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get_canRunInBackgroundInternal() const;

 System::Nullable_1<bool> __declspec(property(get=__get_updateBeforeRenderInternal, put=__set_updateBeforeRenderInternal))  updateBeforeRenderInternal;

constexpr void __set_updateBeforeRenderInternal(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get_updateBeforeRenderInternal() const;

 bool __declspec(property(get=__get__isGenericTypeOfDevice_k__BackingField, put=__set__isGenericTypeOfDevice_k__BackingField))  _isGenericTypeOfDevice_k__BackingField;

constexpr void __set__isGenericTypeOfDevice_k__BackingField(bool value) ;

constexpr bool __get__isGenericTypeOfDevice_k__BackingField() const;

 ::StringW __declspec(property(get=__get__displayName_k__BackingField, put=__set__displayName_k__BackingField))  _displayName_k__BackingField;

constexpr void __set__displayName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__displayName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__description_k__BackingField, put=__set__description_k__BackingField))  _description_k__BackingField;

constexpr void __set__description_k__BackingField(::StringW value) ;

constexpr ::StringW __get__description_k__BackingField() const;

 bool __declspec(property(get=__get__hideInUI_k__BackingField, put=__set__hideInUI_k__BackingField))  _hideInUI_k__BackingField;

constexpr void __set__hideInUI_k__BackingField(bool value) ;

constexpr bool __get__hideInUI_k__BackingField() const;


// Properties

 System::Type __declspec(property(get=get_stateType, put=set_stateType))  stateType;

 ::StringW __declspec(property(get=get_stateFormat, put=set_stateFormat))  stateFormat;

 ::ArrayW<::StringW> __declspec(property(get=get_commonUsages, put=set_commonUsages))  commonUsages;

 ::StringW __declspec(property(get=get_variants, put=set_variants))  variants;

 bool __declspec(property(get=get_isNoisy, put=set_isNoisy))  isNoisy;

 bool __declspec(property(get=get_canRunInBackground, put=set_canRunInBackground))  canRunInBackground;

 bool __declspec(property(get=get_updateBeforeRender, put=set_updateBeforeRender))  updateBeforeRender;

 bool __declspec(property(get=get_isGenericTypeOfDevice, put=set_isGenericTypeOfDevice))  isGenericTypeOfDevice;

 ::StringW __declspec(property(get=get_displayName, put=set_displayName))  displayName;

 ::StringW __declspec(property(get=get_description, put=set_description))  description;

 bool __declspec(property(get=get_hideInUI, put=set_hideInUI))  hideInUI;


// Methods

/// @brief Method get_stateType addr 0x2970c68 size 0x8 virtual false final false
 System::Type get_stateType() ;

/// @brief Method set_stateType addr 0x2970c70 size 0x8 virtual false final false
 void set_stateType(System::Type value) ;

/// @brief Method get_stateFormat addr 0x2970c78 size 0x8 virtual false final false
 ::StringW get_stateFormat() ;

/// @brief Method set_stateFormat addr 0x2970c80 size 0x8 virtual false final false
 void set_stateFormat(::StringW value) ;

/// @brief Method get_commonUsages addr 0x2970c88 size 0x8 virtual false final false
 ::ArrayW<::StringW> get_commonUsages() ;

/// @brief Method set_commonUsages addr 0x2970c90 size 0x8 virtual false final false
 void set_commonUsages(::ArrayW<::StringW> value) ;

/// @brief Method get_variants addr 0x2970c98 size 0x8 virtual false final false
 ::StringW get_variants() ;

/// @brief Method set_variants addr 0x2970ca0 size 0x8 virtual false final false
 void set_variants(::StringW value) ;

/// @brief Method get_isNoisy addr 0x2970ca8 size 0x8 virtual false final false
 bool get_isNoisy() ;

/// @brief Method set_isNoisy addr 0x2970cb0 size 0xc virtual false final false
 void set_isNoisy(bool value) ;

/// @brief Method get_canRunInBackground addr 0x2970cbc size 0x48 virtual false final false
 bool get_canRunInBackground() ;

/// @brief Method set_canRunInBackground addr 0x2970d04 size 0x68 virtual false final false
 void set_canRunInBackground(bool value) ;

/// @brief Method get_updateBeforeRender addr 0x2970d6c size 0x48 virtual false final false
 bool get_updateBeforeRender() ;

/// @brief Method set_updateBeforeRender addr 0x2970db4 size 0x68 virtual false final false
 void set_updateBeforeRender(bool value) ;

/// @brief Method get_isGenericTypeOfDevice addr 0x2970e1c size 0x8 virtual false final false
 bool get_isGenericTypeOfDevice() ;

/// @brief Method set_isGenericTypeOfDevice addr 0x2970e24 size 0xc virtual false final false
 void set_isGenericTypeOfDevice(bool value) ;

/// @brief Method get_displayName addr 0x2970e30 size 0x8 virtual false final false
 ::StringW get_displayName() ;

/// @brief Method set_displayName addr 0x2970e38 size 0x8 virtual false final false
 void set_displayName(::StringW value) ;

/// @brief Method get_description addr 0x2970e40 size 0x8 virtual false final false
 ::StringW get_description() ;

/// @brief Method set_description addr 0x2970e48 size 0x8 virtual false final false
 void set_description(::StringW value) ;

/// @brief Method get_hideInUI addr 0x2970e50 size 0x8 virtual false final false
 bool get_hideInUI() ;

/// @brief Method set_hideInUI addr 0x2970e58 size 0xc virtual false final false
 void set_hideInUI(bool value) ;

// Ctor Parameters []
explicit InputControlLayoutAttribute() ;

/// @brief Method .ctor addr 0x2970e64 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
NEED_NO_BOX(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::InputControlLayoutAttribute, "UnityEngine.InputSystem.Layouts", "InputControlLayoutAttribute");
