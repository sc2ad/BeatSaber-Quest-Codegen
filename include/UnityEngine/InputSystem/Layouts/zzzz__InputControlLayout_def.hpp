#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace UnityEngine::InputSystem::Utilities {
struct InternedString;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System {
class IDisposable;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace UnityEngine::InputSystem::Utilities {
struct NameAndParameters;
}
namespace UnityEngine::InputSystem::Utilities {
struct NamedValue;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__Flags;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__Cache;
}
namespace System {
class Type;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::Layouts {
class UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct ReadOnlyArray_1;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlAttribute;
}
namespace UnityEngine::InputSystem::Utilities {
struct FourCC;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly;
}
namespace UnityEngine::InputSystem::Layouts {
class UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceMatcher;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__Collection;
}
namespace UnityEngine::InputSystem::Layouts {
class UnityEngine__InputSystem__Layouts__InputControlLayout____c;
}
namespace UnityEngine::InputSystem::Utilities {
template<typename TValue>
struct InlinedArray_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::InputSystem::Layouts {
class UnityEngine__InputSystem__Layouts__InputControlLayout__Builder;
}
namespace System::Reflection {
class MemberInfo;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c;
}
namespace System {
class Exception;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c;
}
namespace UnityEngine::InputSystem::Utilities {
struct PrimitiveValue;
}
namespace UnityEngine::InputSystem {
class InputDevice;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::InputSystem::Layouts {
struct InputDeviceDescription;
}
namespace UnityEngine::InputSystem {
class InputControl;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson;
}
// Forward declare root types
namespace GlobalNamespace {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__Flags;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c;
}
namespace GlobalNamespace {
class UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c;
}
namespace UnityEngine::InputSystem::Layouts {
class InputControlLayout;
}
namespace UnityEngine::InputSystem::Layouts {
class UnityEngine__InputSystem__Layouts__InputControlLayout__Builder;
}
namespace UnityEngine::InputSystem::Layouts {
class UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson;
}
namespace UnityEngine::InputSystem::Layouts {
class UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException;
}
namespace UnityEngine::InputSystem::Layouts {
class UnityEngine__InputSystem__Layouts__InputControlLayout____c;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher;
}
namespace GlobalNamespace {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__Cache;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__Collection;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson;
}
namespace UnityEngine::InputSystem::Layouts {
struct UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly;
}
// Type: ::Flags
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6679))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::ControlItem::Flags
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags_Unwrapped : int32_t {
__isModifyingExistingControl = 1,
__IsNoisy = 2,
__IsSynthetic = 4,
__IsFirstDefinedInThisLayout = 8,
__DontReset = 16,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field isModifyingExistingControl offset 0
static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags const isModifyingExistingControl;

/// @brief Field IsNoisy offset 0
static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags const IsNoisy;

/// @brief Field IsSynthetic offset 0
static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags const IsSynthetic;

/// @brief Field IsFirstDefinedInThisLayout offset 0
static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags const IsFirstDefinedInThisLayout;

/// @brief Field DontReset offset 0
static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags const DontReset;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ControlItem
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6680))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::ControlItem
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using Flags = GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags;

// Ctor Parameters [CppParam { name: "_name_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "_layout_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "_variants_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "_useStateFrom_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_displayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_shortDisplayName_k__BackingField", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "_usages_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "_aliases_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "_parameters_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue>", modifiers: "", def_value: None }, CppParam { name: "_processors_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters>", modifiers: "", def_value: None }, CppParam { name: "_offset_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_bit_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_sizeInBits_k__BackingField", ty: "uint32_t", modifiers: "", def_value: None }, CppParam { name: "_format_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::FourCC", modifiers: "", def_value: None }, CppParam { name: "_flags_k__BackingField", ty: "GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags", modifiers: "", def_value: None }, CppParam { name: "_arraySize_k__BackingField", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "_defaultState_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }, CppParam { name: "_minValue_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }, CppParam { name: "_maxValue_k__BackingField", ty: "UnityEngine::InputSystem::Utilities::PrimitiveValue", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem(UnityEngine::InputSystem::Utilities::InternedString _name_k__BackingField, UnityEngine::InputSystem::Utilities::InternedString _layout_k__BackingField, UnityEngine::InputSystem::Utilities::InternedString _variants_k__BackingField, ::StringW _useStateFrom_k__BackingField, ::StringW _displayName_k__BackingField, ::StringW _shortDisplayName_k__BackingField, UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> _usages_k__BackingField, UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> _aliases_k__BackingField, UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> _parameters_k__BackingField, UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> _processors_k__BackingField, uint32_t _offset_k__BackingField, uint32_t _bit_k__BackingField, uint32_t _sizeInBits_k__BackingField, UnityEngine::InputSystem::Utilities::FourCC _format_k__BackingField, GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags _flags_k__BackingField, int32_t _arraySize_k__BackingField, UnityEngine::InputSystem::Utilities::PrimitiveValue _defaultState_k__BackingField, UnityEngine::InputSystem::Utilities::PrimitiveValue _minValue_k__BackingField, UnityEngine::InputSystem::Utilities::PrimitiveValue _maxValue_k__BackingField) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0xd0};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr UnityEngine::InputSystem::Utilities::InternedString __get__name_k__BackingField() const;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get__layout_k__BackingField, put=__set__layout_k__BackingField))  _layout_k__BackingField;

constexpr void __set__layout_k__BackingField(UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr UnityEngine::InputSystem::Utilities::InternedString __get__layout_k__BackingField() const;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get__variants_k__BackingField, put=__set__variants_k__BackingField))  _variants_k__BackingField;

constexpr void __set__variants_k__BackingField(UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr UnityEngine::InputSystem::Utilities::InternedString __get__variants_k__BackingField() const;

 ::StringW __declspec(property(get=__get__useStateFrom_k__BackingField, put=__set__useStateFrom_k__BackingField))  _useStateFrom_k__BackingField;

constexpr void __set__useStateFrom_k__BackingField(::StringW value) ;

constexpr ::StringW __get__useStateFrom_k__BackingField() const;

 ::StringW __declspec(property(get=__get__displayName_k__BackingField, put=__set__displayName_k__BackingField))  _displayName_k__BackingField;

constexpr void __set__displayName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__displayName_k__BackingField() const;

 ::StringW __declspec(property(get=__get__shortDisplayName_k__BackingField, put=__set__shortDisplayName_k__BackingField))  _shortDisplayName_k__BackingField;

constexpr void __set__shortDisplayName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__shortDisplayName_k__BackingField() const;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get__usages_k__BackingField, put=__set__usages_k__BackingField))  _usages_k__BackingField;

constexpr void __set__usages_k__BackingField(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> __get__usages_k__BackingField() const;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get__aliases_k__BackingField, put=__set__aliases_k__BackingField))  _aliases_k__BackingField;

constexpr void __set__aliases_k__BackingField(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> __get__aliases_k__BackingField() const;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> __declspec(property(get=__get__parameters_k__BackingField, put=__set__parameters_k__BackingField))  _parameters_k__BackingField;

constexpr void __set__parameters_k__BackingField(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> value) ;

constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> __get__parameters_k__BackingField() const;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> __declspec(property(get=__get__processors_k__BackingField, put=__set__processors_k__BackingField))  _processors_k__BackingField;

constexpr void __set__processors_k__BackingField(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> value) ;

constexpr UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> __get__processors_k__BackingField() const;

 uint32_t __declspec(property(get=__get__offset_k__BackingField, put=__set__offset_k__BackingField))  _offset_k__BackingField;

constexpr void __set__offset_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__offset_k__BackingField() const;

 uint32_t __declspec(property(get=__get__bit_k__BackingField, put=__set__bit_k__BackingField))  _bit_k__BackingField;

constexpr void __set__bit_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__bit_k__BackingField() const;

 uint32_t __declspec(property(get=__get__sizeInBits_k__BackingField, put=__set__sizeInBits_k__BackingField))  _sizeInBits_k__BackingField;

constexpr void __set__sizeInBits_k__BackingField(uint32_t value) ;

constexpr uint32_t __get__sizeInBits_k__BackingField() const;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get__format_k__BackingField, put=__set__format_k__BackingField))  _format_k__BackingField;

constexpr void __set__format_k__BackingField(UnityEngine::InputSystem::Utilities::FourCC value) ;

constexpr UnityEngine::InputSystem::Utilities::FourCC __get__format_k__BackingField() const;

 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags __declspec(property(get=__get__flags_k__BackingField, put=__set__flags_k__BackingField))  _flags_k__BackingField;

constexpr void __set__flags_k__BackingField(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags value) ;

constexpr GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags __get__flags_k__BackingField() const;

 int32_t __declspec(property(get=__get__arraySize_k__BackingField, put=__set__arraySize_k__BackingField))  _arraySize_k__BackingField;

constexpr void __set__arraySize_k__BackingField(int32_t value) ;

constexpr int32_t __get__arraySize_k__BackingField() const;

 UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=__get__defaultState_k__BackingField, put=__set__defaultState_k__BackingField))  _defaultState_k__BackingField;

constexpr void __set__defaultState_k__BackingField(UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

constexpr UnityEngine::InputSystem::Utilities::PrimitiveValue __get__defaultState_k__BackingField() const;

 UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=__get__minValue_k__BackingField, put=__set__minValue_k__BackingField))  _minValue_k__BackingField;

constexpr void __set__minValue_k__BackingField(UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

constexpr UnityEngine::InputSystem::Utilities::PrimitiveValue __get__minValue_k__BackingField() const;

 UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=__get__maxValue_k__BackingField, put=__set__maxValue_k__BackingField))  _maxValue_k__BackingField;

constexpr void __set__maxValue_k__BackingField(UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

constexpr UnityEngine::InputSystem::Utilities::PrimitiveValue __get__maxValue_k__BackingField() const;


// Properties

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=get_name, put=set_name))  name;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=get_layout, put=set_layout))  layout;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=get_variants, put=set_variants))  variants;

 ::StringW __declspec(property(get=get_useStateFrom, put=set_useStateFrom))  useStateFrom;

 ::StringW __declspec(property(get=get_displayName, put=set_displayName))  displayName;

 ::StringW __declspec(property(get=get_shortDisplayName, put=set_shortDisplayName))  shortDisplayName;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=get_usages, put=set_usages))  usages;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=get_aliases, put=set_aliases))  aliases;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> __declspec(property(get=get_parameters, put=set_parameters))  parameters;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> __declspec(property(get=get_processors, put=set_processors))  processors;

 uint32_t __declspec(property(get=get_offset, put=set_offset))  offset;

 uint32_t __declspec(property(get=get_bit, put=set_bit))  bit;

 uint32_t __declspec(property(get=get_sizeInBits, put=set_sizeInBits))  sizeInBits;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_format, put=set_format))  format;

 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags __declspec(property(get=get_flags, put=set_flags))  flags;

 int32_t __declspec(property(get=get_arraySize, put=set_arraySize))  arraySize;

 UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=get_defaultState, put=set_defaultState))  defaultState;

 UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=get_minValue, put=set_minValue))  minValue;

 UnityEngine::InputSystem::Utilities::PrimitiveValue __declspec(property(get=get_maxValue, put=set_maxValue))  maxValue;

 bool __declspec(property(get=get_isModifyingExistingControl, put=set_isModifyingExistingControl))  isModifyingExistingControl;

 bool __declspec(property(get=get_isNoisy, put=set_isNoisy))  isNoisy;

 bool __declspec(property(get=get_isSynthetic, put=set_isSynthetic))  isSynthetic;

 bool __declspec(property(get=get_dontReset, put=set_dontReset))  dontReset;

 bool __declspec(property(get=get_isFirstDefinedInThisLayout, put=set_isFirstDefinedInThisLayout))  isFirstDefinedInThisLayout;

 bool __declspec(property(get=get_isArray))  isArray;


// Methods

/// @brief Method get_name addr 0x296cdcc size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString get_name() ;

/// @brief Method set_name addr 0x296cdd8 size 0x8 virtual false final false
 void set_name(UnityEngine::InputSystem::Utilities::InternedString value) ;

/// @brief Method get_layout addr 0x296cde0 size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString get_layout() ;

/// @brief Method set_layout addr 0x296cdec size 0x8 virtual false final false
 void set_layout(UnityEngine::InputSystem::Utilities::InternedString value) ;

/// @brief Method get_variants addr 0x296cdf4 size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString get_variants() ;

/// @brief Method set_variants addr 0x296ce00 size 0x8 virtual false final false
 void set_variants(UnityEngine::InputSystem::Utilities::InternedString value) ;

/// @brief Method get_useStateFrom addr 0x296ce08 size 0x8 virtual false final false
 ::StringW get_useStateFrom() ;

/// @brief Method set_useStateFrom addr 0x296ce10 size 0x8 virtual false final false
 void set_useStateFrom(::StringW value) ;

/// @brief Method get_displayName addr 0x296ce18 size 0x8 virtual false final false
 ::StringW get_displayName() ;

/// @brief Method set_displayName addr 0x296ce20 size 0x8 virtual false final false
 void set_displayName(::StringW value) ;

/// @brief Method get_shortDisplayName addr 0x296ce28 size 0x8 virtual false final false
 ::StringW get_shortDisplayName() ;

/// @brief Method set_shortDisplayName addr 0x296ce30 size 0x8 virtual false final false
 void set_shortDisplayName(::StringW value) ;

/// @brief Method get_usages addr 0x296ce38 size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> get_usages() ;

/// @brief Method set_usages addr 0x296ce44 size 0x8 virtual false final false
 void set_usages(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> value) ;

/// @brief Method get_aliases addr 0x296ce4c size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> get_aliases() ;

/// @brief Method set_aliases addr 0x296ce58 size 0x8 virtual false final false
 void set_aliases(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> value) ;

/// @brief Method get_parameters addr 0x296ce60 size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> get_parameters() ;

/// @brief Method set_parameters addr 0x296ce6c size 0x8 virtual false final false
 void set_parameters(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NamedValue> value) ;

/// @brief Method get_processors addr 0x296ce74 size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> get_processors() ;

/// @brief Method set_processors addr 0x296ce80 size 0x8 virtual false final false
 void set_processors(UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::NameAndParameters> value) ;

/// @brief Method get_offset addr 0x296ce88 size 0x8 virtual false final false
 uint32_t get_offset() ;

/// @brief Method set_offset addr 0x296ce90 size 0x8 virtual false final false
 void set_offset(uint32_t value) ;

/// @brief Method get_bit addr 0x296ce98 size 0x8 virtual false final false
 uint32_t get_bit() ;

/// @brief Method set_bit addr 0x296cea0 size 0x8 virtual false final false
 void set_bit(uint32_t value) ;

/// @brief Method get_sizeInBits addr 0x296cea8 size 0x8 virtual false final false
 uint32_t get_sizeInBits() ;

/// @brief Method set_sizeInBits addr 0x296ceb0 size 0x8 virtual false final false
 void set_sizeInBits(uint32_t value) ;

/// @brief Method get_format addr 0x296ceb8 size 0x8 virtual false final false
 UnityEngine::InputSystem::Utilities::FourCC get_format() ;

/// @brief Method set_format addr 0x296cec0 size 0x8 virtual false final false
 void set_format(UnityEngine::InputSystem::Utilities::FourCC value) ;

/// @brief Method get_flags addr 0x296cec8 size 0x8 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags get_flags() ;

/// @brief Method set_flags addr 0x296ced0 size 0x8 virtual false final false
 void set_flags(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags value) ;

/// @brief Method get_arraySize addr 0x296ced8 size 0x8 virtual false final false
 int32_t get_arraySize() ;

/// @brief Method set_arraySize addr 0x296cee0 size 0x8 virtual false final false
 void set_arraySize(int32_t value) ;

/// @brief Method get_defaultState addr 0x296cee8 size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::PrimitiveValue get_defaultState() ;

/// @brief Method set_defaultState addr 0x296cef4 size 0x8 virtual false final false
 void set_defaultState(UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

/// @brief Method get_minValue addr 0x296cefc size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::PrimitiveValue get_minValue() ;

/// @brief Method set_minValue addr 0x296cf08 size 0x8 virtual false final false
 void set_minValue(UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

/// @brief Method get_maxValue addr 0x296cf10 size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::PrimitiveValue get_maxValue() ;

/// @brief Method set_maxValue addr 0x296cf1c size 0x8 virtual false final false
 void set_maxValue(UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

/// @brief Method get_isModifyingExistingControl addr 0x296cf24 size 0xc virtual false final false
 bool get_isModifyingExistingControl() ;

/// @brief Method set_isModifyingExistingControl addr 0x296acd4 size 0x1c virtual false final false
 void set_isModifyingExistingControl(bool value) ;

/// @brief Method get_isNoisy addr 0x296cf30 size 0xc virtual false final false
 bool get_isNoisy() ;

/// @brief Method set_isNoisy addr 0x296ad0c size 0x1c virtual false final false
 void set_isNoisy(bool value) ;

/// @brief Method get_isSynthetic addr 0x296cf3c size 0xc virtual false final false
 bool get_isSynthetic() ;

/// @brief Method set_isSynthetic addr 0x296ad44 size 0x1c virtual false final false
 void set_isSynthetic(bool value) ;

/// @brief Method get_dontReset addr 0x296cf48 size 0xc virtual false final false
 bool get_dontReset() ;

/// @brief Method set_dontReset addr 0x296ad28 size 0x1c virtual false final false
 void set_dontReset(bool value) ;

/// @brief Method get_isFirstDefinedInThisLayout addr 0x296cf54 size 0xc virtual false final false
 bool get_isFirstDefinedInThisLayout() ;

/// @brief Method set_isFirstDefinedInThisLayout addr 0x296acf0 size 0x1c virtual false final false
 void set_isFirstDefinedInThisLayout(bool value) ;

/// @brief Method get_isArray addr 0x29685c4 size 0x10 virtual false final false
 bool get_isArray() ;

/// @brief Method Merge addr 0x296c574 size 0x3a0 virtual false final false
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem Merge(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6681))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::Builder::ControlBuilder::<>c
class CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c(UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c(UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c value) ;

static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c __get___9() ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get___9__14_0, put=__set___9__14_0))  __9__14_0;

static void __set___9__14_0(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value) ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __get___9__14_0() ;


// Methods

static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c New_ctor() ;

/// @brief Method .ctor addr 0x296df14 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <WithUsages>b__14_0 addr 0x296df1c size 0x28 virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString _WithUsages_b__14_0(::StringW x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ControlBuilder
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6682))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::Builder::ControlBuilder
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c;

// Ctor Parameters [CppParam { name: "builder", ty: "UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder", modifiers: "", def_value: None }, CppParam { name: "index", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder builder, int32_t index) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder(UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder(UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder __declspec(property(get=__get_builder, put=__set_builder))  builder;

constexpr void __set_builder(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder value) ;

constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder __get_builder() const;

 int32_t __declspec(property(get=__get_index, put=__set_index))  index;

constexpr void __set_index(int32_t value) ;

constexpr int32_t __get_index() const;


// Methods

/// @brief Method WithDisplayName addr 0x296d4fc size 0x48 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithDisplayName(::StringW displayName) ;

/// @brief Method WithLayout addr 0x296d544 size 0xec virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithLayout(::StringW layout) ;

/// @brief Method WithFormat addr 0x296d630 size 0x48 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithFormat(UnityEngine::InputSystem::Utilities::FourCC format) ;

/// @brief Method WithFormat addr 0x296d678 size 0x34 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithFormat(::StringW format) ;

/// @brief Method WithByteOffset addr 0x296d6ac size 0x48 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithByteOffset(uint32_t offset) ;

/// @brief Method WithBitOffset addr 0x296d6f4 size 0x48 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithBitOffset(uint32_t bit) ;

/// @brief Method IsSynthetic addr 0x296d73c size 0x5c virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder IsSynthetic(bool value) ;

/// @brief Method IsNoisy addr 0x296d798 size 0x5c virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder IsNoisy(bool value) ;

/// @brief Method DontReset addr 0x296d7f4 size 0x5c virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder DontReset(bool value) ;

/// @brief Method WithSizeInBits addr 0x296d850 size 0x48 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithSizeInBits(uint32_t sizeInBits) ;

/// @brief Method WithRange addr 0x296d898 size 0x9c virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithRange(float_t minValue, float_t maxValue) ;

/// @brief Method WithUsages addr 0x296d934 size 0x1d4 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithUsages(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> usages) ;

/// @brief Method WithUsages addr 0x296db08 size 0x124 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithUsages(System::Collections::Generic::IEnumerable_1<::StringW> usages) ;

/// @brief Method WithUsages addr 0x296dc2c size 0x4 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithUsages(::ArrayW<::StringW> usages) ;

/// @brief Method WithParameters addr 0x296dc30 size 0xb8 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithParameters(::StringW parameters) ;

/// @brief Method WithProcessors addr 0x296dce8 size 0xd4 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithProcessors(::StringW processors) ;

/// @brief Method WithDefaultState addr 0x296ddbc size 0x48 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder WithDefaultState(UnityEngine::InputSystem::Utilities::PrimitiveValue value) ;

/// @brief Method UsingStateFrom addr 0x296de04 size 0x64 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder UsingStateFrom(::StringW path) ;

/// @brief Method AsArrayOfControlsWithSize addr 0x296de68 size 0x48 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder AsArrayOfControlsWithSize(int32_t arraySize) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Builder
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6683))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::Builder
class CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__Builder : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using ControlBuilder = GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~UnityEngine__InputSystem__Layouts__InputControlLayout__Builder() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__Builder", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder(UnityEngine__InputSystem__Layouts__InputControlLayout__Builder const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__Builder", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder(UnityEngine__InputSystem__Layouts__InputControlLayout__Builder&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__Builder(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Builder&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Builder& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Builder const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__name_k__BackingField, put=__set__name_k__BackingField))  _name_k__BackingField;

constexpr void __set__name_k__BackingField(::StringW value) ;

constexpr ::StringW __get__name_k__BackingField() const;

 ::StringW __declspec(property(get=__get__displayName_k__BackingField, put=__set__displayName_k__BackingField))  _displayName_k__BackingField;

constexpr void __set__displayName_k__BackingField(::StringW value) ;

constexpr ::StringW __get__displayName_k__BackingField() const;

 System::Type __declspec(property(get=__get__type_k__BackingField, put=__set__type_k__BackingField))  _type_k__BackingField;

constexpr void __set__type_k__BackingField(System::Type value) ;

constexpr System::Type __get__type_k__BackingField() const;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get__stateFormat_k__BackingField, put=__set__stateFormat_k__BackingField))  _stateFormat_k__BackingField;

constexpr void __set__stateFormat_k__BackingField(UnityEngine::InputSystem::Utilities::FourCC value) ;

constexpr UnityEngine::InputSystem::Utilities::FourCC __get__stateFormat_k__BackingField() const;

 int32_t __declspec(property(get=__get__stateSizeInBytes_k__BackingField, put=__set__stateSizeInBytes_k__BackingField))  _stateSizeInBytes_k__BackingField;

constexpr void __set__stateSizeInBytes_k__BackingField(int32_t value) ;

constexpr int32_t __get__stateSizeInBytes_k__BackingField() const;

 ::StringW __declspec(property(get=__get_m_ExtendsLayout, put=__set_m_ExtendsLayout))  m_ExtendsLayout;

constexpr void __set_m_ExtendsLayout(::StringW value) ;

constexpr ::StringW __get_m_ExtendsLayout() const;

 System::Nullable_1<bool> __declspec(property(get=__get__updateBeforeRender_k__BackingField, put=__set__updateBeforeRender_k__BackingField))  _updateBeforeRender_k__BackingField;

constexpr void __set__updateBeforeRender_k__BackingField(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get__updateBeforeRender_k__BackingField() const;

 int32_t __declspec(property(get=__get_m_ControlCount, put=__set_m_ControlCount))  m_ControlCount;

constexpr void __set_m_ControlCount(int32_t value) ;

constexpr int32_t __get_m_ControlCount() const;

 ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> __declspec(property(get=__get_m_Controls, put=__set_m_Controls))  m_Controls;

constexpr void __set_m_Controls(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> __get_m_Controls() const;


// Properties

 ::StringW __declspec(property(get=get_name, put=set_name))  name;

 ::StringW __declspec(property(get=get_displayName, put=set_displayName))  displayName;

 System::Type __declspec(property(get=get_type, put=set_type))  type;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_stateFormat, put=set_stateFormat))  stateFormat;

 int32_t __declspec(property(get=get_stateSizeInBytes, put=set_stateSizeInBytes))  stateSizeInBytes;

 ::StringW __declspec(property(get=get_extendsLayout, put=set_extendsLayout))  extendsLayout;

 System::Nullable_1<bool> __declspec(property(get=get_updateBeforeRender, put=set_updateBeforeRender))  updateBeforeRender;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> __declspec(property(get=get_controls))  controls;


// Methods

/// @brief Method get_name addr 0x296cf60 size 0x8 virtual false final false
 ::StringW get_name() ;

/// @brief Method set_name addr 0x296cf68 size 0x8 virtual false final false
 void set_name(::StringW value) ;

/// @brief Method get_displayName addr 0x296cf70 size 0x8 virtual false final false
 ::StringW get_displayName() ;

/// @brief Method set_displayName addr 0x296cf78 size 0x8 virtual false final false
 void set_displayName(::StringW value) ;

/// @brief Method get_type addr 0x296cf80 size 0x8 virtual false final false
 System::Type get_type() ;

/// @brief Method set_type addr 0x296cf88 size 0x8 virtual false final false
 void set_type(System::Type value) ;

/// @brief Method get_stateFormat addr 0x296cf90 size 0x8 virtual false final false
 UnityEngine::InputSystem::Utilities::FourCC get_stateFormat() ;

/// @brief Method set_stateFormat addr 0x296cf98 size 0x8 virtual false final false
 void set_stateFormat(UnityEngine::InputSystem::Utilities::FourCC value) ;

/// @brief Method get_stateSizeInBytes addr 0x296cfa0 size 0x8 virtual false final false
 int32_t get_stateSizeInBytes() ;

/// @brief Method set_stateSizeInBytes addr 0x296cfa8 size 0x8 virtual false final false
 void set_stateSizeInBytes(int32_t value) ;

/// @brief Method get_extendsLayout addr 0x296cfb0 size 0x8 virtual false final false
 ::StringW get_extendsLayout() ;

/// @brief Method set_extendsLayout addr 0x296cfb8 size 0x34 virtual false final false
 void set_extendsLayout(::StringW value) ;

/// @brief Method get_updateBeforeRender addr 0x296cfec size 0x8 virtual false final false
 System::Nullable_1<bool> get_updateBeforeRender() ;

/// @brief Method set_updateBeforeRender addr 0x296cff4 size 0x8 virtual false final false
 void set_updateBeforeRender(System::Nullable_1<bool> value) ;

/// @brief Method get_controls addr 0x296cffc size 0x68 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> get_controls() ;

/// @brief Method AddControl addr 0x296d064 size 0x1d0 virtual false final false
 GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder AddControl(::StringW name) ;

/// @brief Method WithName addr 0x296d234 size 0x8 virtual false final false
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder WithName(::StringW name) ;

/// @brief Method WithDisplayName addr 0x296d23c size 0x8 virtual false final false
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder WithDisplayName(::StringW displayName) ;

/// @brief Method WithType addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder WithType() ;

/// @brief Method WithFormat addr 0x296d244 size 0x8 virtual false final false
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder WithFormat(UnityEngine::InputSystem::Utilities::FourCC format) ;

/// @brief Method WithFormat addr 0x296d24c size 0x34 virtual false final false
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder WithFormat(::StringW format) ;

/// @brief Method WithSizeInBytes addr 0x296d280 size 0x8 virtual false final false
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder WithSizeInBytes(int32_t sizeInBytes) ;

/// @brief Method Extend addr 0x296d288 size 0x38 virtual false final false
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder Extend(::StringW baseLayoutName) ;

/// @brief Method Build addr 0x296d2c0 size 0x234 virtual false final false
 UnityEngine::InputSystem::Layouts::InputControlLayout Build() ;

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder New_ctor() ;

/// @brief Method .ctor addr 0x296d4f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::Flags
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2558))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6684))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::Flags
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__Flags : public ::bs_hook::EnumTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "value__", ty: "int32_t", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Flags(int32_t value__) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Flags(UnityEngine__InputSystem__Layouts__InputControlLayout__Flags const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Flags(UnityEngine__InputSystem__Layouts__InputControlLayout__Flags&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Flags& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Flags const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Flags& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Flags&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x4};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__Flags(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::EnumTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}

enum class __UnityEngine__InputSystem__Layouts__InputControlLayout__Flags_Unwrapped : int32_t {
__IsGenericTypeOfDevice = 1,
__HideInUI = 2,
__IsOverride = 4,
__CanRunInBackground = 8,
__CanRunInBackgroundIsSet = 16,
__IsNoisy = 32,
};

/// @brief Conversion into unwrapped enum value
constexpr operator __UnityEngine__InputSystem__Layouts__InputControlLayout__Flags_Unwrapped () const noexcept {
return std::bit_cast<__UnityEngine__InputSystem__Layouts__InputControlLayout__Flags_Unwrapped>(__instance);
}

using __CORDL_BACKING_ENUM_TYPE = int32_t;


// Fields

 int32_t __declspec(property(get=__get_value__, put=__set_value__))  value__;

constexpr void __set_value__(int32_t value) ;

constexpr int32_t __get_value__() const;

/// @brief Field IsGenericTypeOfDevice offset 0
static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags const IsGenericTypeOfDevice;

/// @brief Field HideInUI offset 0
static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags const HideInUI;

/// @brief Field IsOverride offset 0
static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags const IsOverride;

/// @brief Field CanRunInBackground offset 0
static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags const CanRunInBackground;

/// @brief Field CanRunInBackgroundIsSet offset 0
static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags const CanRunInBackgroundIsSet;

/// @brief Field IsNoisy offset 0
static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags const IsNoisy;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::LayoutJsonNameAndDescriptorOnly
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6685))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::LayoutJsonNameAndDescriptorOnly
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "extendMultiple", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "device", ty: "UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly(::StringW name, ::StringW extend, ::ArrayW<::StringW> extendMultiple, UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson device) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x70};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_extend, put=__set_extend))  extend;

constexpr void __set_extend(::StringW value) ;

constexpr ::StringW __get_extend() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_extendMultiple, put=__set_extendMultiple))  extendMultiple;

constexpr void __set_extendMultiple(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_extendMultiple() const;

 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson __declspec(property(get=__get_device, put=__set_device))  device;

constexpr void __set_device(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson value) ;

constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputDeviceMatcher__MatcherJson __get_device() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6686))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::LayoutJson::<>c
class CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c value) ;

static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c __get___9() ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get___9__14_0, put=__set___9__14_0))  __9__14_0;

static void __set___9__14_0(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value) ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __get___9__14_0() ;

static System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __declspec(property(get=__get___9__15_0, put=__set___9__15_0))  __9__15_0;

static void __set___9__15_0(System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value) ;

static System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __get___9__15_0() ;

static System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __declspec(property(get=__get___9__15_1, put=__set___9__15_1))  __9__15_1;

static void __set___9__15_1(System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value) ;

static System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __get___9__15_1() ;


// Methods

static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c New_ctor() ;

/// @brief Method .ctor addr 0x296ed14 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToLayout>b__14_0 addr 0x296ed1c size 0x28 virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__14_0(::StringW x) ;

/// @brief Method <FromLayout>b__15_0 addr 0x296ed44 size 0x24 virtual false final false
 ::StringW _FromLayout_b__15_0(UnityEngine::InputSystem::Utilities::InternedString x) ;

/// @brief Method <FromLayout>b__15_1 addr 0x296ed68 size 0x24 virtual false final false
 ::StringW _FromLayout_b__15_1(UnityEngine::InputSystem::Utilities::InternedString x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::LayoutJson
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6687))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::LayoutJson
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c;

// Ctor Parameters [CppParam { name: "name", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "extend", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "extendMultiple", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "format", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "beforeRender", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "runInBackground", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "commonUsages", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "displayName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "description", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "type", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "variant", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "isGenericTypeOfDevice", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "hideInUI", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "controls", ty: "::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson>", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson(::StringW name, ::StringW extend, ::ArrayW<::StringW> extendMultiple, ::StringW format, ::StringW beforeRender, ::StringW runInBackground, ::ArrayW<::StringW> commonUsages, ::StringW displayName, ::StringW description, ::StringW type, ::StringW variant, bool isGenericTypeOfDevice, bool hideInUI, ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson> controls) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x68};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_extend, put=__set_extend))  extend;

constexpr void __set_extend(::StringW value) ;

constexpr ::StringW __get_extend() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_extendMultiple, put=__set_extendMultiple))  extendMultiple;

constexpr void __set_extendMultiple(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_extendMultiple() const;

 ::StringW __declspec(property(get=__get_format, put=__set_format))  format;

constexpr void __set_format(::StringW value) ;

constexpr ::StringW __get_format() const;

 ::StringW __declspec(property(get=__get_beforeRender, put=__set_beforeRender))  beforeRender;

constexpr void __set_beforeRender(::StringW value) ;

constexpr ::StringW __get_beforeRender() const;

 ::StringW __declspec(property(get=__get_runInBackground, put=__set_runInBackground))  runInBackground;

constexpr void __set_runInBackground(::StringW value) ;

constexpr ::StringW __get_runInBackground() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_commonUsages, put=__set_commonUsages))  commonUsages;

constexpr void __set_commonUsages(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_commonUsages() const;

 ::StringW __declspec(property(get=__get_displayName, put=__set_displayName))  displayName;

constexpr void __set_displayName(::StringW value) ;

constexpr ::StringW __get_displayName() const;

 ::StringW __declspec(property(get=__get_description, put=__set_description))  description;

constexpr void __set_description(::StringW value) ;

constexpr ::StringW __get_description() const;

 ::StringW __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(::StringW value) ;

constexpr ::StringW __get_type() const;

 ::StringW __declspec(property(get=__get_variant, put=__set_variant))  variant;

constexpr void __set_variant(::StringW value) ;

constexpr ::StringW __get_variant() const;

 bool __declspec(property(get=__get_isGenericTypeOfDevice, put=__set_isGenericTypeOfDevice))  isGenericTypeOfDevice;

constexpr void __set_isGenericTypeOfDevice(bool value) ;

constexpr bool __get_isGenericTypeOfDevice() const;

 bool __declspec(property(get=__get_hideInUI, put=__set_hideInUI))  hideInUI;

constexpr void __set_hideInUI(bool value) ;

constexpr bool __get_hideInUI() const;

 ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson> __declspec(property(get=__get_controls, put=__set_controls))  controls;

constexpr void __set_controls(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson> __get_controls() const;


// Methods

/// @brief Method ToLayout addr 0x2969018 size 0xa2c virtual false final false
 UnityEngine::InputSystem::Layouts::InputControlLayout ToLayout() ;

/// @brief Method FromLayout addr 0x2968c44 size 0x344 virtual false final false
static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson FromLayout(UnityEngine::InputSystem::Layouts::InputControlLayout layout) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::<>c
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6688))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::ControlItemJson::<>c
class CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c const& o) noexcept = default;
                


// Fields

static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c value) ;

static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c __get___9() ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get___9__24_0, put=__set___9__24_0))  __9__24_0;

static void __set___9__24_0(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value) ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __get___9__24_0() ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get___9__24_1, put=__set___9__24_1))  __9__24_1;

static void __set___9__24_1(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value) ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __get___9__24_1() ;

static System::Func_2<UnityEngine::InputSystem::Utilities::NamedValue,::StringW> __declspec(property(get=__get___9__25_0, put=__set___9__25_0))  __9__25_0;

static void __set___9__25_0(System::Func_2<UnityEngine::InputSystem::Utilities::NamedValue,::StringW> value) ;

static System::Func_2<UnityEngine::InputSystem::Utilities::NamedValue,::StringW> __get___9__25_0() ;

static System::Func_2<UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW> __declspec(property(get=__get___9__25_1, put=__set___9__25_1))  __9__25_1;

static void __set___9__25_1(System::Func_2<UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW> value) ;

static System::Func_2<UnityEngine::InputSystem::Utilities::NameAndParameters,::StringW> __get___9__25_1() ;

static System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __declspec(property(get=__get___9__25_2, put=__set___9__25_2))  __9__25_2;

static void __set___9__25_2(System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value) ;

static System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __get___9__25_2() ;

static System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __declspec(property(get=__get___9__25_3, put=__set___9__25_3))  __9__25_3;

static void __set___9__25_3(System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value) ;

static System::Func_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __get___9__25_3() ;


// Methods

static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c New_ctor() ;

/// @brief Method .ctor addr 0x296ee10 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <ToLayout>b__24_0 addr 0x296ee18 size 0x28 virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_0(::StringW x) ;

/// @brief Method <ToLayout>b__24_1 addr 0x296ee40 size 0x28 virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString _ToLayout_b__24_1(::StringW x) ;

/// @brief Method <FromControlItems>b__25_0 addr 0x296ee68 size 0xc virtual false final false
 ::StringW _FromControlItems_b__25_0(UnityEngine::InputSystem::Utilities::NamedValue x) ;

/// @brief Method <FromControlItems>b__25_1 addr 0x296ee74 size 0xc virtual false final false
 ::StringW _FromControlItems_b__25_1(UnityEngine::InputSystem::Utilities::NameAndParameters x) ;

/// @brief Method <FromControlItems>b__25_2 addr 0x296ee80 size 0x24 virtual false final false
 ::StringW _FromControlItems_b__25_2(UnityEngine::InputSystem::Utilities::InternedString x) ;

/// @brief Method <FromControlItems>b__25_3 addr 0x296eea4 size 0x24 virtual false final false
 ::StringW _FromControlItems_b__25_3(UnityEngine::InputSystem::Utilities::InternedString x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::ControlItemJson
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6689))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::ControlItemJson
class CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;

 ::StringW __declspec(property(get=__get_layout, put=__set_layout))  layout;

constexpr void __set_layout(::StringW value) ;

constexpr ::StringW __get_layout() const;

 ::StringW __declspec(property(get=__get_variants, put=__set_variants))  variants;

constexpr void __set_variants(::StringW value) ;

constexpr ::StringW __get_variants() const;

 ::StringW __declspec(property(get=__get_usage, put=__set_usage))  usage;

constexpr void __set_usage(::StringW value) ;

constexpr ::StringW __get_usage() const;

 ::StringW __declspec(property(get=__get_alias, put=__set_alias))  alias;

constexpr void __set_alias(::StringW value) ;

constexpr ::StringW __get_alias() const;

 ::StringW __declspec(property(get=__get_useStateFrom, put=__set_useStateFrom))  useStateFrom;

constexpr void __set_useStateFrom(::StringW value) ;

constexpr ::StringW __get_useStateFrom() const;

 uint32_t __declspec(property(get=__get_offset, put=__set_offset))  offset;

constexpr void __set_offset(uint32_t value) ;

constexpr uint32_t __get_offset() const;

 uint32_t __declspec(property(get=__get_bit, put=__set_bit))  bit;

constexpr void __set_bit(uint32_t value) ;

constexpr uint32_t __get_bit() const;

 uint32_t __declspec(property(get=__get_sizeInBits, put=__set_sizeInBits))  sizeInBits;

constexpr void __set_sizeInBits(uint32_t value) ;

constexpr uint32_t __get_sizeInBits() const;

 ::StringW __declspec(property(get=__get_format, put=__set_format))  format;

constexpr void __set_format(::StringW value) ;

constexpr ::StringW __get_format() const;

 int32_t __declspec(property(get=__get_arraySize, put=__set_arraySize))  arraySize;

constexpr void __set_arraySize(int32_t value) ;

constexpr int32_t __get_arraySize() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_usages, put=__set_usages))  usages;

constexpr void __set_usages(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_usages() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_aliases, put=__set_aliases))  aliases;

constexpr void __set_aliases(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_aliases() const;

 ::StringW __declspec(property(get=__get_parameters, put=__set_parameters))  parameters;

constexpr void __set_parameters(::StringW value) ;

constexpr ::StringW __get_parameters() const;

 ::StringW __declspec(property(get=__get_processors, put=__set_processors))  processors;

constexpr void __set_processors(::StringW value) ;

constexpr ::StringW __get_processors() const;

 ::StringW __declspec(property(get=__get_displayName, put=__set_displayName))  displayName;

constexpr void __set_displayName(::StringW value) ;

constexpr ::StringW __get_displayName() const;

 ::StringW __declspec(property(get=__get_shortDisplayName, put=__set_shortDisplayName))  shortDisplayName;

constexpr void __set_shortDisplayName(::StringW value) ;

constexpr ::StringW __get_shortDisplayName() const;

 bool __declspec(property(get=__get_noisy, put=__set_noisy))  noisy;

constexpr void __set_noisy(bool value) ;

constexpr bool __get_noisy() const;

 bool __declspec(property(get=__get_dontReset, put=__set_dontReset))  dontReset;

constexpr void __set_dontReset(bool value) ;

constexpr bool __get_dontReset() const;

 bool __declspec(property(get=__get_synthetic, put=__set_synthetic))  synthetic;

constexpr void __set_synthetic(bool value) ;

constexpr bool __get_synthetic() const;

 ::StringW __declspec(property(get=__get_defaultState, put=__set_defaultState))  defaultState;

constexpr void __set_defaultState(::StringW value) ;

constexpr ::StringW __get_defaultState() const;

 ::StringW __declspec(property(get=__get_minValue, put=__set_minValue))  minValue;

constexpr void __set_minValue(::StringW value) ;

constexpr ::StringW __get_minValue() const;

 ::StringW __declspec(property(get=__get_maxValue, put=__set_maxValue))  maxValue;

constexpr void __set_maxValue(::StringW value) ;

constexpr ::StringW __get_maxValue() const;


// Methods

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson New_ctor() ;

/// @brief Method .ctor addr 0x296ed8c size 0x20 virtual false final false
 void _ctor() ;

/// @brief Method ToLayout addr 0x296df44 size 0x678 virtual false final false
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem ToLayout() ;

/// @brief Method FromControlItems addr 0x296e5bc size 0x6f4 virtual false final false
static ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson> FromControlItems(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> items) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::LayoutMatcher
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6690))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::Collection::LayoutMatcher
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "layoutName", ty: "UnityEngine::InputSystem::Utilities::InternedString", modifiers: "", def_value: None }, CppParam { name: "deviceMatcher", ty: "UnityEngine::InputSystem::Layouts::InputDeviceMatcher", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher(UnityEngine::InputSystem::Utilities::InternedString layoutName, UnityEngine::InputSystem::Layouts::InputDeviceMatcher deviceMatcher) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_layoutName, put=__set_layoutName))  layoutName;

constexpr void __set_layoutName(UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr UnityEngine::InputSystem::Utilities::InternedString __get_layoutName() const;

 UnityEngine::InputSystem::Layouts::InputDeviceMatcher __declspec(property(get=__get_deviceMatcher, put=__set_deviceMatcher))  deviceMatcher;

constexpr void __set_deviceMatcher(UnityEngine::InputSystem::Layouts::InputDeviceMatcher value) ;

constexpr UnityEngine::InputSystem::Layouts::InputDeviceMatcher __get_deviceMatcher() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::PrecompiledLayout
namespace GlobalNamespace {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6691))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::Collection::PrecompiledLayout
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "factoryMethod", ty: "System::Func_1<UnityEngine::InputSystem::InputDevice>", modifiers: "", def_value: None }, CppParam { name: "metadata", ty: "::StringW", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout(System::Func_1<UnityEngine::InputSystem::InputDevice> factoryMethod, ::StringW metadata) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Func_1<UnityEngine::InputSystem::InputDevice> __declspec(property(get=__get_factoryMethod, put=__set_factoryMethod))  factoryMethod;

constexpr void __set_factoryMethod(System::Func_1<UnityEngine::InputSystem::InputDevice> value) ;

constexpr System::Func_1<UnityEngine::InputSystem::InputDevice> __get_factoryMethod() const;

 ::StringW __declspec(property(get=__get_metadata, put=__set_metadata))  metadata;

constexpr void __set_metadata(::StringW value) ;

constexpr ::StringW __get_metadata() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::<GetBaseLayouts>d__24
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6692))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::Collection::<GetBaseLayouts>d__24
class CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::InternedString>
constexpr operator  System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::InternedString>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerator
constexpr operator  System::Collections::IEnumerator() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xd0};

virtual ~UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr UnityEngine::InputSystem::Utilities::InternedString __get___2__current() const;

 int32_t __declspec(property(get=__get___l__initialThreadId, put=__set___l__initialThreadId))  __l__initialThreadId;

constexpr void __set___l__initialThreadId(int32_t value) ;

constexpr int32_t __get___l__initialThreadId() const;

 bool __declspec(property(get=__get_includeSelf, put=__set_includeSelf))  includeSelf;

constexpr void __set_includeSelf(bool value) ;

constexpr bool __get_includeSelf() const;

 bool __declspec(property(get=__get___3__includeSelf, put=__set___3__includeSelf))  __3__includeSelf;

constexpr void __set___3__includeSelf(bool value) ;

constexpr bool __get___3__includeSelf() const;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_layout, put=__set_layout))  layout;

constexpr void __set_layout(UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr UnityEngine::InputSystem::Utilities::InternedString __get_layout() const;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get___3__layout, put=__set___3__layout))  __3__layout;

constexpr void __set___3__layout(UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr UnityEngine::InputSystem::Utilities::InternedString __get___3__layout() const;

 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection value) ;

constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection __get___4__this() const;

 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection __declspec(property(get=__get___3____4__this, put=__set___3____4__this))  __3____4__this;

constexpr void __set___3____4__this(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection value) ;

constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection __get___3____4__this() const;


// Properties

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current))  System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

static GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24 New_ctor(int32_t __1__state) ;

/// @brief Method .ctor addr 0x2970468 size 0x34 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x29706e8 size 0x4 virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x29706ec size 0xbc virtual true final true
 bool MoveNext() ;

/// @brief Method System.Collections.Generic.IEnumerator<UnityEngine.InputSystem.Utilities.InternedString>.get_Current addr 0x29707a8 size 0xc virtual true final true
 UnityEngine::InputSystem::Utilities::InternedString System_Collections_Generic_IEnumerator_UnityEngine_InputSystem_Utilities_InternedString__get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x29707b4 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x29707f4 size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

/// @brief Method System.Collections.Generic.IEnumerable<UnityEngine.InputSystem.Utilities.InternedString>.GetEnumerator addr 0x2970850 size 0xcc virtual true final true
 System::Collections::Generic::IEnumerator_1<UnityEngine::InputSystem::Utilities::InternedString> System_Collections_Generic_IEnumerable_UnityEngine_InputSystem_Utilities_InternedString__GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x297091c size 0x4 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Collection
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6693))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::Collection
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__Collection : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
using _GetBaseLayouts_d__24 = GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24;

using PrecompiledLayout = GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout;

using LayoutMatcher = GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher;

// Ctor Parameters [CppParam { name: "layoutTypes", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Type>", modifiers: "", def_value: None }, CppParam { name: "layoutStrings", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW>", modifiers: "", def_value: None }, CppParam { name: "layoutBuilders", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>>", modifiers: "", def_value: None }, CppParam { name: "baseLayoutTable", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "layoutOverrides", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>>", modifiers: "", def_value: None }, CppParam { name: "layoutOverrideNames", ty: "System::Collections::Generic::HashSet_1<UnityEngine::InputSystem::Utilities::InternedString>", modifiers: "", def_value: None }, CppParam { name: "precompiledLayouts", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout>", modifiers: "", def_value: None }, CppParam { name: "layoutMatchers", ty: "System::Collections::Generic::List_1<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher>", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Type> layoutTypes, System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> layoutStrings, System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>> layoutBuilders, System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString> baseLayoutTable, System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>> layoutOverrides, System::Collections::Generic::HashSet_1<UnityEngine::InputSystem::Utilities::InternedString> layoutOverrideNames, System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout> precompiledLayouts, System::Collections::Generic::List_1<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher> layoutMatchers) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Collection& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Collection&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x40};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__Collection(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

/// @brief Field kBaseScoreForNonGeneratedLayouts offset 0
static constexpr float_t  kBaseScoreForNonGeneratedLayouts{1};

 System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Type> __declspec(property(get=__get_layoutTypes, put=__set_layoutTypes))  layoutTypes;

constexpr void __set_layoutTypes(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Type> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Type> __get_layoutTypes() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __declspec(property(get=__get_layoutStrings, put=__set_layoutStrings))  layoutStrings;

constexpr void __set_layoutStrings(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::StringW> __get_layoutStrings() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>> __declspec(property(get=__get_layoutBuilders, put=__set_layoutBuilders))  layoutBuilders;

constexpr void __set_layoutBuilders(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,System::Func_1<UnityEngine::InputSystem::Layouts::InputControlLayout>> __get_layoutBuilders() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get_baseLayoutTable, put=__set_baseLayoutTable))  baseLayoutTable;

constexpr void __set_baseLayoutTable(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Utilities::InternedString> __get_baseLayoutTable() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>> __declspec(property(get=__get_layoutOverrides, put=__set_layoutOverrides))  layoutOverrides;

constexpr void __set_layoutOverrides(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,::ArrayW<UnityEngine::InputSystem::Utilities::InternedString>> __get_layoutOverrides() const;

 System::Collections::Generic::HashSet_1<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get_layoutOverrideNames, put=__set_layoutOverrideNames))  layoutOverrideNames;

constexpr void __set_layoutOverrideNames(System::Collections::Generic::HashSet_1<UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::InputSystem::Utilities::InternedString> __get_layoutOverrideNames() const;

 System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout> __declspec(property(get=__get_precompiledLayouts, put=__set_precompiledLayouts))  precompiledLayouts;

constexpr void __set_precompiledLayouts(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout> __get_precompiledLayouts() const;

 System::Collections::Generic::List_1<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher> __declspec(property(get=__get_layoutMatchers, put=__set_layoutMatchers))  layoutMatchers;

constexpr void __set_layoutMatchers(System::Collections::Generic::List_1<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher> value) ;

constexpr System::Collections::Generic::List_1<GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher> __get_layoutMatchers() const;


// Methods

/// @brief Method Allocate addr 0x296eec8 size 0x250 virtual false final false
 void Allocate() ;

/// @brief Method TryFindLayoutForType addr 0x296ad60 size 0x1b0 virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString TryFindLayoutForType(System::Type layoutType) ;

/// @brief Method TryFindMatchingLayout addr 0x296f118 size 0x18c virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString TryFindMatchingLayout(UnityEngine::InputSystem::Layouts::InputDeviceDescription deviceDescription) ;

/// @brief Method HasLayout addr 0x296af10 size 0xdc virtual false final false
 bool HasLayout(UnityEngine::InputSystem::Utilities::InternedString name) ;

/// @brief Method TryLoadLayoutInternal addr 0x296f620 size 0x1f4 virtual false final false
 UnityEngine::InputSystem::Layouts::InputControlLayout TryLoadLayoutInternal(UnityEngine::InputSystem::Utilities::InternedString name) ;

/// @brief Method TryLoadLayout addr 0x296f814 size 0x38c virtual false final false
 UnityEngine::InputSystem::Layouts::InputControlLayout TryLoadLayout(UnityEngine::InputSystem::Utilities::InternedString name, System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout> table) ;

/// @brief Method GetBaseLayoutName addr 0x296fc5c size 0x8c virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString GetBaseLayoutName(UnityEngine::InputSystem::Utilities::InternedString layoutName) ;

/// @brief Method GetRootLayoutName addr 0x296fce8 size 0x94 virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString GetRootLayoutName(UnityEngine::InputSystem::Utilities::InternedString layoutName) ;

/// @brief Method ComputeDistanceInInheritanceHierarchy addr 0x296fd7c size 0x134 virtual false final false
 bool ComputeDistanceInInheritanceHierarchy(UnityEngine::InputSystem::Utilities::InternedString firstLayout, UnityEngine::InputSystem::Utilities::InternedString secondLayout, ByRef<int32_t> distance) ;

/// @brief Method FindLayoutThatIntroducesControl addr 0x296feb0 size 0xfc virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString FindLayoutThatIntroducesControl(UnityEngine::InputSystem::InputControl control, UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache cache) ;

/// @brief Method GetControlTypeForLayout addr 0x29700d8 size 0x154 virtual false final false
 System::Type GetControlTypeForLayout(UnityEngine::InputSystem::Utilities::InternedString layoutName) ;

/// @brief Method ValueTypeIsAssignableFrom addr 0x297022c size 0x128 virtual false final false
 bool ValueTypeIsAssignableFrom(UnityEngine::InputSystem::Utilities::InternedString layoutName, System::Type valueType) ;

/// @brief Method IsGeneratedLayout addr 0x2970354 size 0x68 virtual false final false
 bool IsGeneratedLayout(UnityEngine::InputSystem::Utilities::InternedString layout) ;

/// @brief Method GetBaseLayouts addr 0x29703bc size 0xac virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString> GetBaseLayouts(UnityEngine::InputSystem::Utilities::InternedString layout, bool includeSelf) ;

/// @brief Method IsBasedOn addr 0x297049c size 0xb0 virtual false final false
 bool IsBasedOn(UnityEngine::InputSystem::Utilities::InternedString parentLayout, UnityEngine::InputSystem::Utilities::InternedString childLayout) ;

/// @brief Method AddMatcher addr 0x297054c size 0x180 virtual false final false
 void AddMatcher(UnityEngine::InputSystem::Utilities::InternedString layout, UnityEngine::InputSystem::Layouts::InputDeviceMatcher matcher) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::LayoutNotFoundException
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6694))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::LayoutNotFoundException
class CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException : public System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException(void* ptr) noexcept : System::Exception(ptr) {
}


  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__layout_k__BackingField, put=__set__layout_k__BackingField))  _layout_k__BackingField;

constexpr void __set__layout_k__BackingField(::StringW value) ;

constexpr ::StringW __get__layout_k__BackingField() const;


// Properties

 ::StringW __declspec(property(get=get_layout))  layout;


// Methods

/// @brief Method get_layout addr 0x2970920 size 0x8 virtual false final false
 ::StringW get_layout() ;

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException New_ctor() ;

/// @brief Method .ctor addr 0x2970928 size 0x58 virtual false final false
 void _ctor() ;

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException New_ctor(::StringW name, ::StringW message) ;

/// @brief Method .ctor addr 0x2970980 size 0x74 virtual false final false
 void _ctor(::StringW name, ::StringW message) ;

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException New_ctor(::StringW name) ;

/// @brief Method .ctor addr 0x296fba0 size 0xbc virtual false final false
 void _ctor(::StringW name) ;

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException New_ctor(::StringW message, System::Exception innerException) ;

/// @brief Method .ctor addr 0x29709f4 size 0x70 virtual false final false
 void _ctor(::StringW message, System::Exception innerException) ;

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x2970a64 size 0x80 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::Cache
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6695))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::Cache
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__Cache : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "table", ty: "System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout>", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Cache(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout> table) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Cache(UnityEngine__InputSystem__Layouts__InputControlLayout__Cache const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Cache(UnityEngine__InputSystem__Layouts__InputControlLayout__Cache&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Cache& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Cache const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__Cache& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__Cache&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__Cache(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout> __declspec(property(get=__get_table, put=__set_table))  table;

constexpr void __set_table(System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout> value) ;

constexpr System::Collections::Generic::Dictionary_2<UnityEngine::InputSystem::Utilities::InternedString,UnityEngine::InputSystem::Layouts::InputControlLayout> __get_table() const;


// Methods

/// @brief Method Clear addr 0x2970ae4 size 0x8 virtual false final false
 void Clear() ;

/// @brief Method FindOrLoadLayout addr 0x296ffac size 0x12c virtual false final false
 UnityEngine::InputSystem::Layouts::InputControlLayout FindOrLoadLayout(::StringW name, bool throwIfNotFound) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::CacheRefInstance
namespace UnityEngine::InputSystem::Layouts {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6696))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::CacheRefInstance
struct CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "valid", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance(bool valid) noexcept;


                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance(UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance const&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance(UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance&&) = default;
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x1};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 bool __declspec(property(get=__get_valid, put=__set_valid))  valid;

constexpr void __set_valid(bool value) ;

constexpr bool __get_valid() const;


// Methods

/// @brief Method Dispose addr 0x2970aec size 0x98 virtual true final true
 void Dispose() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: ::<>c
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6697))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout::<>c
class CORDL_TYPE UnityEngine__InputSystem__Layouts__InputControlLayout____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityEngine__InputSystem__Layouts__InputControlLayout____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout____c", modifiers: " const&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout____c(UnityEngine__InputSystem__Layouts__InputControlLayout____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__InputSystem__Layouts__InputControlLayout____c", modifiers: "&&", def_value: None }]
constexpr UnityEngine__InputSystem__Layouts__InputControlLayout____c(UnityEngine__InputSystem__Layouts__InputControlLayout____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__InputSystem__Layouts__InputControlLayout____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout____c& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout____c&& o) noexcept = default;
  constexpr UnityEngine__InputSystem__Layouts__InputControlLayout____c& operator=(UnityEngine__InputSystem__Layouts__InputControlLayout____c const& o) noexcept = default;
                


// Fields

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c value) ;

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c __get___9() ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get___9__52_0, put=__set___9__52_0))  __9__52_0;

static void __set___9__52_0(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value) ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __get___9__52_0() ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get___9__75_0, put=__set___9__75_0))  __9__75_0;

static void __set___9__75_0(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value) ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __get___9__75_0() ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get___9__75_1, put=__set___9__75_1))  __9__75_1;

static void __set___9__75_1(System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> value) ;

static System::Func_2<::StringW,UnityEngine::InputSystem::Utilities::InternedString> __get___9__75_1() ;


// Methods

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c New_ctor() ;

/// @brief Method .ctor addr 0x2970be8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <FromType>b__52_0 addr 0x2970bf0 size 0x28 virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString _FromType_b__52_0(::StringW x) ;

/// @brief Method <CreateControlItemFromMember>b__75_0 addr 0x2970c18 size 0x28 virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString _CreateControlItemFromMember_b__75_0(::StringW x) ;

/// @brief Method <CreateControlItemFromMember>b__75_1 addr 0x2970c40 size 0x28 virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString _CreateControlItemFromMember_b__75_1(::StringW x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
// Type: UnityEngine.InputSystem.Layouts::InputControlLayout
namespace UnityEngine::InputSystem::Layouts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6698))
// CS Name: UnityEngine.InputSystem.Layouts.InputControlLayout
class CORDL_TYPE InputControlLayout : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c;

using CacheRefInstance = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance;

using Cache = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache;

using LayoutNotFoundException = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException;

using Collection = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection;

using ControlItemJson = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson;

using LayoutJson = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson;

using LayoutJsonNameAndDescriptorOnly = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly;

using Flags = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags;

using Builder = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder;

using ControlItem = UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~InputControlLayout() = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout", modifiers: " const&", def_value: None }]
constexpr InputControlLayout(InputControlLayout const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InputControlLayout", modifiers: "&&", def_value: None }]
constexpr InputControlLayout(InputControlLayout&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InputControlLayout(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr InputControlLayout& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InputControlLayout& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InputControlLayout& operator=(InputControlLayout&& o) noexcept = default;
  constexpr InputControlLayout& operator=(InputControlLayout const& o) noexcept = default;
                


// Fields

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_s_DefaultVariant, put=__set_s_DefaultVariant))  s_DefaultVariant;

static void __set_s_DefaultVariant(UnityEngine::InputSystem::Utilities::InternedString value) ;

static UnityEngine::InputSystem::Utilities::InternedString __get_s_DefaultVariant() ;

/// @brief Field VariantSeparator offset 0
static constexpr ::ConstString  VariantSeparator{u";"};

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_m_Name, put=__set_m_Name))  m_Name;

constexpr void __set_m_Name(UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr UnityEngine::InputSystem::Utilities::InternedString __get_m_Name() const;

 System::Type __declspec(property(get=__get_m_Type, put=__set_m_Type))  m_Type;

constexpr void __set_m_Type(System::Type value) ;

constexpr System::Type __get_m_Type() const;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=__get_m_Variants, put=__set_m_Variants))  m_Variants;

constexpr void __set_m_Variants(UnityEngine::InputSystem::Utilities::InternedString value) ;

constexpr UnityEngine::InputSystem::Utilities::InternedString __get_m_Variants() const;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=__get_m_StateFormat, put=__set_m_StateFormat))  m_StateFormat;

constexpr void __set_m_StateFormat(UnityEngine::InputSystem::Utilities::FourCC value) ;

constexpr UnityEngine::InputSystem::Utilities::FourCC __get_m_StateFormat() const;

 int32_t __declspec(property(get=__get_m_StateSizeInBytes, put=__set_m_StateSizeInBytes))  m_StateSizeInBytes;

constexpr void __set_m_StateSizeInBytes(int32_t value) ;

constexpr int32_t __get_m_StateSizeInBytes() const;

 System::Nullable_1<bool> __declspec(property(get=__get_m_UpdateBeforeRender, put=__set_m_UpdateBeforeRender))  m_UpdateBeforeRender;

constexpr void __set_m_UpdateBeforeRender(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get_m_UpdateBeforeRender() const;

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get_m_BaseLayouts, put=__set_m_BaseLayouts))  m_BaseLayouts;

constexpr void __set_m_BaseLayouts(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString> __get_m_BaseLayouts() const;

 UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get_m_AppliedOverrides, put=__set_m_AppliedOverrides))  m_AppliedOverrides;

constexpr void __set_m_AppliedOverrides(UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString> __get_m_AppliedOverrides() const;

 ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=__get_m_CommonUsages, put=__set_m_CommonUsages))  m_CommonUsages;

constexpr void __set_m_CommonUsages(::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Utilities::InternedString> __get_m_CommonUsages() const;

 ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> __declspec(property(get=__get_m_Controls, put=__set_m_Controls))  m_Controls;

constexpr void __set_m_Controls(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> value) ;

constexpr ::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> __get_m_Controls() const;

 ::StringW __declspec(property(get=__get_m_DisplayName, put=__set_m_DisplayName))  m_DisplayName;

constexpr void __set_m_DisplayName(::StringW value) ;

constexpr ::StringW __get_m_DisplayName() const;

 ::StringW __declspec(property(get=__get_m_Description, put=__set_m_Description))  m_Description;

constexpr void __set_m_Description(::StringW value) ;

constexpr ::StringW __get_m_Description() const;

 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags value) ;

constexpr UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags __get_m_Flags() const;

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection __declspec(property(get=__get_s_Layouts, put=__set_s_Layouts))  s_Layouts;

static void __set_s_Layouts(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection value) ;

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection __get_s_Layouts() ;

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache __declspec(property(get=__get_s_CacheInstance, put=__set_s_CacheInstance))  s_CacheInstance;

static void __set_s_CacheInstance(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache value) ;

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache __get_s_CacheInstance() ;

static int32_t __declspec(property(get=__get_s_CacheInstanceRef, put=__set_s_CacheInstanceRef))  s_CacheInstanceRef;

static void __set_s_CacheInstanceRef(int32_t value) ;

static int32_t __get_s_CacheInstanceRef() ;


// Properties

static UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=get_DefaultVariant))  DefaultVariant;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=get_name))  name;

 ::StringW __declspec(property(get=get_displayName))  displayName;

 System::Type __declspec(property(get=get_type))  type;

 UnityEngine::InputSystem::Utilities::InternedString __declspec(property(get=get_variants))  variants;

 UnityEngine::InputSystem::Utilities::FourCC __declspec(property(get=get_stateFormat))  stateFormat;

 int32_t __declspec(property(get=get_stateSizeInBytes))  stateSizeInBytes;

 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=get_baseLayouts))  baseLayouts;

 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=get_appliedOverrides))  appliedOverrides;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> __declspec(property(get=get_commonUsages))  commonUsages;

 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> __declspec(property(get=get_controls))  controls;

 bool __declspec(property(get=get_updateBeforeRender))  updateBeforeRender;

 bool __declspec(property(get=get_isDeviceLayout))  isDeviceLayout;

 bool __declspec(property(get=get_isControlLayout))  isControlLayout;

 bool __declspec(property(get=get_isOverride, put=set_isOverride))  isOverride;

 bool __declspec(property(get=get_isGenericTypeOfDevice, put=set_isGenericTypeOfDevice))  isGenericTypeOfDevice;

 bool __declspec(property(get=get_hideInUI, put=set_hideInUI))  hideInUI;

 bool __declspec(property(get=get_isNoisy, put=set_isNoisy))  isNoisy;

 System::Nullable_1<bool> __declspec(property(get=get_canRunInBackground, put=set_canRunInBackground))  canRunInBackground;

 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem __declspec(property(get=get_Item))  Item;

static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache __declspec(property(get=get_cache))  cache;


// Methods

/// @brief Method get_DefaultVariant addr 0x2967ae0 size 0x58 virtual false final false
static UnityEngine::InputSystem::Utilities::InternedString get_DefaultVariant() ;

/// @brief Method get_name addr 0x2967b38 size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString get_name() ;

/// @brief Method get_displayName addr 0x2967b44 size 0x20 virtual false final false
 ::StringW get_displayName() ;

/// @brief Method get_type addr 0x2967b64 size 0x8 virtual false final false
 System::Type get_type() ;

/// @brief Method get_variants addr 0x2967b6c size 0xc virtual false final false
 UnityEngine::InputSystem::Utilities::InternedString get_variants() ;

/// @brief Method get_stateFormat addr 0x2967b78 size 0x8 virtual false final false
 UnityEngine::InputSystem::Utilities::FourCC get_stateFormat() ;

/// @brief Method get_stateSizeInBytes addr 0x2967b80 size 0x8 virtual false final false
 int32_t get_stateSizeInBytes() ;

/// @brief Method get_baseLayouts addr 0x2967b88 size 0x60 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString> get_baseLayouts() ;

/// @brief Method get_appliedOverrides addr 0x2967be8 size 0x60 virtual false final false
 System::Collections::Generic::IEnumerable_1<UnityEngine::InputSystem::Utilities::InternedString> get_appliedOverrides() ;

/// @brief Method get_commonUsages addr 0x2967c48 size 0x60 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Utilities::InternedString> get_commonUsages() ;

/// @brief Method get_controls addr 0x2967ca8 size 0x60 virtual false final false
 UnityEngine::InputSystem::Utilities::ReadOnlyArray_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> get_controls() ;

/// @brief Method get_updateBeforeRender addr 0x2967d08 size 0x3c virtual false final false
 bool get_updateBeforeRender() ;

/// @brief Method get_isDeviceLayout addr 0x2967d44 size 0x94 virtual false final false
 bool get_isDeviceLayout() ;

/// @brief Method get_isControlLayout addr 0x2967dd8 size 0x18 virtual false final false
 bool get_isControlLayout() ;

/// @brief Method get_isOverride addr 0x2967df0 size 0xc virtual false final false
 bool get_isOverride() ;

/// @brief Method set_isOverride addr 0x2967dfc size 0x1c virtual false final false
 void set_isOverride(bool value) ;

/// @brief Method get_isGenericTypeOfDevice addr 0x2967e18 size 0xc virtual false final false
 bool get_isGenericTypeOfDevice() ;

/// @brief Method set_isGenericTypeOfDevice addr 0x2967e24 size 0x1c virtual false final false
 void set_isGenericTypeOfDevice(bool value) ;

/// @brief Method get_hideInUI addr 0x2967e40 size 0xc virtual false final false
 bool get_hideInUI() ;

/// @brief Method set_hideInUI addr 0x2967e4c size 0x1c virtual false final false
 void set_hideInUI(bool value) ;

/// @brief Method get_isNoisy addr 0x2967e68 size 0xc virtual false final false
 bool get_isNoisy() ;

/// @brief Method set_isNoisy addr 0x2967e74 size 0x1c virtual false final false
 void set_isNoisy(bool value) ;

/// @brief Method get_canRunInBackground addr 0x2967e90 size 0x68 virtual false final false
 System::Nullable_1<bool> get_canRunInBackground() ;

/// @brief Method set_canRunInBackground addr 0x2967ef8 size 0x9c virtual false final false
 void set_canRunInBackground(System::Nullable_1<bool> value) ;

/// @brief Method get_Item addr 0x2967f94 size 0x184 virtual false final false
 UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem get_Item(::StringW path) ;

/// @brief Method FindControl addr 0x2968118 size 0x19c virtual false final false
 System::Nullable_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> FindControl(UnityEngine::InputSystem::Utilities::InternedString path) ;

/// @brief Method FindControlIncludingArrayElements addr 0x29682b4 size 0x310 virtual false final false
 System::Nullable_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> FindControlIncludingArrayElements(::StringW path, ByRef<int32_t> arrayIndex) ;

/// @brief Method GetValueType addr 0x29685d4 size 0x90 virtual false final false
 System::Type GetValueType() ;

/// @brief Method FromType addr 0x2968664 size 0x498 virtual false final false
static UnityEngine::InputSystem::Layouts::InputControlLayout FromType(::StringW name, System::Type type) ;

/// @brief Method ToJson addr 0x2968bc8 size 0x7c virtual false final false
 ::StringW ToJson() ;

/// @brief Method FromJson addr 0x2968f88 size 0x90 virtual false final false
static UnityEngine::InputSystem::Layouts::InputControlLayout FromJson(::StringW json) ;

static UnityEngine::InputSystem::Layouts::InputControlLayout New_ctor(::StringW name, System::Type type) ;

/// @brief Method .ctor addr 0x2968b78 size 0x50 virtual false final false
 void _ctor(::StringW name, System::Type type) ;

/// @brief Method AddControlItems addr 0x2968afc size 0x7c virtual false final false
static void AddControlItems(System::Type type, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlLayouts, ::StringW layoutName) ;

/// @brief Method AddControlItemsFromFields addr 0x2969a44 size 0x94 virtual false final false
static void AddControlItemsFromFields(System::Type type, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlLayouts, ::StringW layoutName) ;

/// @brief Method AddControlItemsFromProperties addr 0x2969ad8 size 0x94 virtual false final false
static void AddControlItemsFromProperties(System::Type type, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlLayouts, ::StringW layoutName) ;

/// @brief Method AddControlItemsFromMembers addr 0x2969b6c size 0x52c virtual false final false
static void AddControlItemsFromMembers(::ArrayW<System::Reflection::MemberInfo> members, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlItems, ::StringW layoutName) ;

/// @brief Method AddControlItemsFromMember addr 0x296a098 size 0x270 virtual false final false
static void AddControlItemsFromMember(System::Reflection::MemberInfo member, ::ArrayW<UnityEngine::InputSystem::Layouts::InputControlAttribute> attributes, System::Collections::Generic::List_1<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlItems) ;

/// @brief Method CreateControlItemFromMember addr 0x296a308 size 0x814 virtual false final false
static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem CreateControlItemFromMember(System::Reflection::MemberInfo member, UnityEngine::InputSystem::Layouts::InputControlAttribute attribute) ;

/// @brief Method InferLayoutFromValueType addr 0x296ab1c size 0x1b8 virtual false final false
static ::StringW InferLayoutFromValueType(System::Type type) ;

/// @brief Method MergeLayout addr 0x296afec size 0x117c virtual false final false
 void MergeLayout(UnityEngine::InputSystem::Layouts::InputControlLayout other) ;

/// @brief Method CreateLookupTableForControls addr 0x296c168 size 0x40c virtual false final false
static System::Collections::Generic::Dictionary_2<::StringW,UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> CreateLookupTableForControls(::ArrayW<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem> controlItems, System::Collections::Generic::List_1<::StringW> variants) ;

/// @brief Method VariantsMatch addr 0x296ca40 size 0x64 virtual false final false
static bool VariantsMatch(UnityEngine::InputSystem::Utilities::InternedString expected, UnityEngine::InputSystem::Utilities::InternedString actual) ;

/// @brief Method VariantsMatch addr 0x296c914 size 0x12c virtual false final false
static bool VariantsMatch(::StringW expected, ::StringW actual) ;

/// @brief Method ParseHeaderFieldsFromJson addr 0x296caa4 size 0x17c virtual false final false
static void ParseHeaderFieldsFromJson(::StringW json, ByRef<UnityEngine::InputSystem::Utilities::InternedString> name, ByRef<UnityEngine::InputSystem::Utilities::InlinedArray_1<UnityEngine::InputSystem::Utilities::InternedString>> baseLayouts, ByRef<UnityEngine::InputSystem::Layouts::InputDeviceMatcher> deviceMatcher) ;

/// @brief Method get_cache addr 0x296cc20 size 0x58 virtual false final false
static ByRef<UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache> get_cache() ;

/// @brief Method CacheRef addr 0x296cc78 size 0x64 virtual false final false
static UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance CacheRef() ;

/// @brief Method <MergeLayout>b__77_0 addr 0x296cd58 size 0x74 virtual false final false
 bool _MergeLayout_b__77_0(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::InputSystem::Layouts
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem__Flags, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItem/Flags");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Flags, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Flags");
NEED_NO_BOX(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder____c, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder/ControlBuilder/<>c");
NEED_NO_BOX(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection___GetBaseLayouts_d__24, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/<GetBaseLayouts>d__24");
NEED_NO_BOX(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson____c, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItemJson/<>c");
NEED_NO_BOX(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson____c, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutJson/<>c");
NEED_NO_BOX(UnityEngine::InputSystem::Layouts::InputControlLayout);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::InputControlLayout, "UnityEngine.InputSystem.Layouts", "InputControlLayout");
NEED_NO_BOX(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder");
NEED_NO_BOX(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItemJson, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItemJson");
NEED_NO_BOX(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutNotFoundException, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutNotFoundException");
NEED_NO_BOX(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout____c, "UnityEngine.InputSystem.Layouts", "InputControlLayout/<>c");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Builder__ControlBuilder, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Builder/ControlBuilder");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__LayoutMatcher, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/LayoutMatcher");
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection__PrecompiledLayout, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection/PrecompiledLayout");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Cache, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Cache");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__CacheRefInstance, "UnityEngine.InputSystem.Layouts", "InputControlLayout/CacheRefInstance");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__Collection, "UnityEngine.InputSystem.Layouts", "InputControlLayout/Collection");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__ControlItem, "UnityEngine.InputSystem.Layouts", "InputControlLayout/ControlItem");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJson, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutJson");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::InputSystem::Layouts::UnityEngine__InputSystem__Layouts__InputControlLayout__LayoutJsonNameAndDescriptorOnly, "UnityEngine.InputSystem.Layouts", "InputControlLayout/LayoutJsonNameAndDescriptorOnly");
