#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__PropertyAttribute_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::InputSystem::Layouts {
class InputControlAttribute;
}
// Type: UnityEngine.InputSystem.Layouts::InputControlAttribute
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10112))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6677))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlAttribute
class CORDL_TYPE InputControlAttribute : public UnityEngine::PropertyAttribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa8};

virtual ~InputControlAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControlAttribute", modifiers: " const&", def_value: None }]
constexpr InputControlAttribute(InputControlAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControlAttribute", modifiers: "&&", def_value: None }]
constexpr InputControlAttribute(InputControlAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControlAttribute(void* ptr) noexcept : UnityEngine::PropertyAttribute(ptr) {
}


  constexpr InputControlAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControlAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControlAttribute& operator=(InputControlAttribute&& o) noexcept = default;
  constexpr InputControlAttribute& operator=(InputControlAttribute const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__layout_k__BackingField, put=__set__layout_k__BackingField))  _layout_k__BackingField;

constexpr void __set__layout_k__BackingField(::StringW value) ;

constexpr ::StringW __get__layout_k__BackingField() const;

 ::StringW __declspec(property(get=__get__variants_k__BackingField, put=__set__variants_k__BackingField))  _variants_k__BackingField;

constexpr void __set__variants_k__BackingField(::StringW value) ;

constexpr ::StringW __get__variants_k__BackingField() const;

 ::StringW __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__name_k__BackingField() const;

 ::StringW __declspec(property(get=__get__format_k__BackingField, put=__set__format_k__BackingField))  _format_k__BackingField;

constexpr void __set__format_k__BackingField(::StringW value) ;

constexpr ::StringW __get__format_k__BackingField() const;

 ::StringW __declspec(property(get=__get__usage_k__BackingField, put=__set__usage_k__BackingField))  _usage_k__BackingField;

constexpr void __set__usage_k__BackingField(::StringW value) ;

constexpr ::StringW __get__usage_k__BackingField() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__usages_k__BackingField, put=__set__usages_k__BackingField))  _usages_k__BackingField;

constexpr void __set__usages_k__BackingField(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__usages_k__BackingField() const;

 ::StringW __declspec(property(get=__get__parameters_k__BackingField, put=__set__parameters_k__BackingField))  _parameters_k__BackingField;

constexpr void __set__parameters_k__BackingField(::StringW value) ;

constexpr ::StringW __get__parameters_k__BackingField() const;

 ::StringW __declspec(property(get=__get__processors_k__BackingField, put=__set__processors_k__BackingField))  _processors_k__BackingField;

constexpr void __set__processors_k__BackingField(::StringW value) ;

constexpr ::StringW __get__processors_k__BackingField() const;

 ::StringW __declspec(property(get=__get__alias_k__BackingField, put=__set__alias_k__BackingField))  _alias_k__BackingField;

constexpr void __set__alias_k__BackingField(::StringW value) ;

constexpr ::StringW __get__alias_k__BackingField() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__aliases_k__BackingField, put=__set__aliases_k__BackingField))  _aliases_k__BackingField;

constexpr void __set__aliases_k__BackingField(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__aliases_k__BackingField() const;

 ::StringW __declspec(property(get=__get__useStateFrom_k__BackingField, put=__set__useStateFrom_k__BackingField))  _useStateFrom_k__BackingField;

constexpr void __set__useStateFrom_k__BackingField(::StringW value) ;

constexpr ::StringW __get__useStateFrom_k__BackingField() const;

 uint32_t __declspec(property(get=__get__bit_k__BackingField, put=__set__bit_k__BackingField))  _bit_k__BackingField;

constexpr void __set__bit_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__bit_k__BackingField() const;

 uint32_t __declspec(property(get=__get__offset_k__BackingField, put=__set__offset_k__BackingField))  _offset_k__BackingField;

constexpr void __set__offset_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__offset_k__BackingField() const;

 uint32_t __declspec(property(get=__get__sizeInBits_k__BackingField, put=__set__sizeInBits_k__BackingField))  _sizeInBits_k__BackingField;

constexpr void __set__sizeInBits_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__sizeInBits_k__BackingField() const;

 int32_t __declspec(property(get=__get__arraySize_k__BackingField, put=__set__arraySize_k__BackingField))  _arraySize_k__BackingField;

constexpr void __set__arraySize_k__BackingField(int32_t value) ;

constexpr int32_t __get__arraySize_k__BackingField() const;

 ::StringW __declspec(property(get=__get__displayName_k__BackingField, put=__set__displayName_k__BackingField))  _displayName_k__BackingField;

constexpr void __set__displayName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__displayName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__shortDisplayName_k__BackingField, put=__set__shortDisplayName_k__BackingField))  _shortDisplayName_k__BackingField;

constexpr void __set__shortDisplayName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__shortDisplayName_k__BackingField() const;

 bool __declspec(property(get=__get__noisy_k__BackingField, put=__set__noisy_k__BackingField))  _noisy_k__BackingField;

constexpr void __set__noisy_k__BackingField(bool value) ;

constexpr bool __get__noisy_k__BackingField() const;

 bool __declspec(property(get=__get__synthetic_k__BackingField, put=__set__synthetic_k__BackingField))  _synthetic_k__BackingField;

constexpr void __set__synthetic_k__BackingField(bool value) ;

constexpr bool __get__synthetic_k__BackingField() const;

 bool __declspec(property(get=__get__dontReset_k__BackingField, put=__set__dontReset_k__BackingField))  _dontReset_k__BackingField;

constexpr void __set__dontReset_k__BackingField(bool value) ;

constexpr bool __get__dontReset_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__defaultState_k__BackingField, put=__set__defaultState_k__BackingField))  _defaultState_k__BackingField;

constexpr void __set__defaultState_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__defaultState_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__minValue_k__BackingField, put=__set__minValue_k__BackingField))  _minValue_k__BackingField;

constexpr void __set__minValue_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__minValue_k__BackingField() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__maxValue_k__BackingField, put=__set__maxValue_k__BackingField))  _maxValue_k__BackingField;

constexpr void __set__maxValue_k__BackingField(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__maxValue_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_layout, put=set_layout))  layout;

 ::StringW __declspec(property(get=get_variants, put=set_variants))  variants;

 ::StringW __declspec(property(get=get_name, put=set_name))  name;

 ::StringW __declspec(property(get=get_format, put=set_format))  format;

 ::StringW __declspec(property(get=get_usage, put=set_usage))  usage;

 ::ArrayW<::StringW> __declspec(property(get=get_usages, put=set_usages))  usages;

 ::StringW __declspec(property(get=get_parameters, put=set_parameters))  parameters;

 ::StringW __declspec(property(get=get_processors, put=set_processors))  processors;

 ::StringW __declspec(property(get=get_alias, put=set_alias))  alias;

 ::ArrayW<::StringW> __declspec(property(get=get_aliases, put=set_aliases))  aliases;

 ::StringW __declspec(property(get=get_useStateFrom, put=set_useStateFrom))  useStateFrom;

 uint32_t __declspec(property(get=get_bit, put=set_bit))  bit;

 uint32_t __declspec(property(get=get_offset, put=set_offset))  offset;

 uint32_t __declspec(property(get=get_sizeInBits, put=set_sizeInBits))  sizeInBits;

 int32_t __declspec(property(get=get_arraySize, put=set_arraySize))  arraySize;

 ::StringW __declspec(property(get=get_displayName, put=set_displayName))  displayName;

 ::StringW __declspec(property(get=get_shortDisplayName, put=set_shortDisplayName))  shortDisplayName;

 bool __declspec(property(get=get_noisy, put=set_noisy))  noisy;

 bool __declspec(property(get=get_synthetic, put=set_synthetic))  synthetic;

 bool __declspec(property(get=get_dontReset, put=set_dontReset))  dontReset;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_defaultState, put=set_defaultState))  defaultState;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_minValue, put=set_minValue))  minValue;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_maxValue, put=set_maxValue))  maxValue;


// Methods

/// @brief Method get_layout addr 0x29677ac size 0x8 virtual false final false
 ::StringW get_layout() ;

/// @brief Method set_layout addr 0x29677b4 size 0x8 virtual false final false
 void set_layout(::StringW value) ;

/// @brief Method get_variants addr 0x29677bc size 0x8 virtual false final false
 ::StringW get_variants() ;

/// @brief Method set_variants addr 0x29677c4 size 0x8 virtual false final false
 void set_variants(::StringW value) ;

/// @brief Method get_name addr 0x29677cc size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x29677d4 size 0x8 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method get_format addr 0x29677dc size 0x8 virtual false final false
 ::StringW get_format() ;

/// @brief Method set_format addr 0x29677e4 size 0x8 virtual false final false
 void set_format(::StringW value) ;

/// @brief Method get_usage addr 0x29677ec size 0x8 virtual false final false
 ::StringW get_usage() ;

/// @brief Method set_usage addr 0x29677f4 size 0x8 virtual false final false
 void set_usage(::StringW value) ;

/// @brief Method get_usages addr 0x29677fc size 0x8 virtual false final false
 ::ArrayW<::StringW> get_usages() ;

/// @brief Method set_usages addr 0x2967804 size 0x8 virtual false final false
 void set_usages(::ArrayW<::StringW> value) ;

/// @brief Method get_parameters addr 0x296780c size 0x8 virtual false final false
 ::StringW get_parameters() ;

/// @brief Method set_parameters addr 0x2967814 size 0x8 virtual false final false
 void set_parameters(::StringW value) ;

/// @brief Method get_processors addr 0x296781c size 0x8 virtual false final false
 ::StringW get_processors() ;

/// @brief Method set_processors addr 0x2967824 size 0x8 virtual false final false
 void set_processors(::StringW value) ;

/// @brief Method get_alias addr 0x296782c size 0x8 virtual false final false
 ::StringW get_alias() ;

/// @brief Method set_alias addr 0x2967834 size 0x8 virtual false final false
 void set_alias(::StringW value) ;

/// @brief Method get_aliases addr 0x296783c size 0x8 virtual false final false
 ::ArrayW<::StringW> get_aliases() ;

/// @brief Method set_aliases addr 0x2967844 size 0x8 virtual false final false
 void set_aliases(::ArrayW<::StringW> value) ;

/// @brief Method get_useStateFrom addr 0x296784c size 0x8 virtual false final false
 ::StringW get_useStateFrom() ;

/// @brief Method set_useStateFrom addr 0x2967854 size 0x8 virtual false final false
 void set_useStateFrom(::StringW value) ;

/// @brief Method get_bit addr 0x296785c size 0x8 virtual false final false
 uint32_t get_bit() ;

/// @brief Method set_bit addr 0x2967864 size 0x8 virtual false final false
 void set_bit(uint32_t value) ;

/// @brief Method get_offset addr 0x296786c size 0x8 virtual false final false
 uint32_t get_offset() ;

/// @brief Method set_offset addr 0x2967874 size 0x8 virtual false final false
 void set_offset(uint32_t value) ;

/// @brief Method get_sizeInBits addr 0x296787c size 0x8 virtual false final false
 uint32_t get_sizeInBits() ;

/// @brief Method set_sizeInBits addr 0x2967884 size 0x8 virtual false final false
 void set_sizeInBits(uint32_t value) ;

/// @brief Method get_arraySize addr 0x296788c size 0x8 virtual false final false
 int32_t get_arraySize() ;

/// @brief Method set_arraySize addr 0x2967894 size 0x8 virtual false final false
 void set_arraySize(int32_t value) ;

/// @brief Method get_displayName addr 0x296789c size 0x8 virtual false final false
 ::StringW get_displayName() ;

/// @brief Method set_displayName addr 0x29678a4 size 0x8 virtual false final false
 void set_displayName(::StringW value) ;

/// @brief Method get_shortDisplayName addr 0x29678ac size 0x8 virtual false final false
 ::StringW get_shortDisplayName() ;

/// @brief Method set_shortDisplayName addr 0x29678b4 size 0x8 virtual false final false
 void set_shortDisplayName(::StringW value) ;

/// @brief Method get_noisy addr 0x29678bc size 0x8 virtual false final false
 bool get_noisy() ;

/// @brief Method set_noisy addr 0x29678c4 size 0xc virtual false final false
 void set_noisy(bool value) ;

/// @brief Method get_synthetic addr 0x29678d0 size 0x8 virtual false final false
 bool get_synthetic() ;

/// @brief Method set_synthetic addr 0x29678d8 size 0xc virtual false final false
 void set_synthetic(bool value) ;

/// @brief Method get_dontReset addr 0x29678e4 size 0x8 virtual false final false
 bool get_dontReset() ;

/// @brief Method set_dontReset addr 0x29678ec size 0xc virtual false final false
 void set_dontReset(bool value) ;

/// @brief Method get_defaultState addr 0x29678f8 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_defaultState() ;

/// @brief Method set_defaultState addr 0x2967900 size 0x8 virtual false final false
 void set_defaultState(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_minValue addr 0x2967908 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_minValue() ;

/// @brief Method set_minValue addr 0x2967910 size 0x8 virtual false final false
 void set_minValue(::bs_hook::Il2CppWrapperType value) ;

/// @brief Method get_maxValue addr 0x2967918 size 0x8 virtual false final false
 ::bs_hook::Il2CppWrapperType get_maxValue() ;

/// @brief Method set_maxValue addr 0x2967920 size 0x8 virtual false final false
 void set_maxValue(::bs_hook::Il2CppWrapperType value) ;

static UnityEngine::InputSystem::Layouts::InputControlAttribute New_ctor() ;

/// @brief Method .ctor addr 0x2967928 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
NEED_NO_BOX(UnityEngine::InputSystem::Layouts::InputControlAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::InputControlAttribute, "UnityEngine.InputSystem.Layouts", "InputControlAttribute");
