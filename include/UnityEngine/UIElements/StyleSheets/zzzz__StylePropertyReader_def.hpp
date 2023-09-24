#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct Color;
}
namespace UnityEngine::UIElements {
struct Rotate;
}
namespace UnityEngine::UIElements {
struct TextShadow;
}
namespace UnityEngine::UIElements {
struct EasingFunction;
}
namespace UnityEngine::UIElements {
struct StylePropertyName;
}
namespace UnityEngine::UIElements {
struct FontDefinition;
}
namespace UnityEngine::UIElements {
struct TimeValue;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct StyleValueKeyword;
}
namespace UnityEngine::UIElements {
struct Length;
}
namespace UnityEngine::UIElements {
struct Translate;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
class StyleVariableResolver;
}
namespace UnityEngine::UIElements {
struct StyleValueType;
}
namespace UnityEngine::UIElements {
struct Scale;
}
namespace UnityEngine {
class Font;
}
namespace UnityEngine::UIElements {
class StyleProperty;
}
namespace UnityEngine::UIElements {
class StyleVariableContext;
}
namespace UnityEngine::UIElements {
struct Background;
}
namespace UnityEngine::UIElements {
struct Cursor;
}
namespace UnityEngine::UIElements {
struct Angle;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleEnumType;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine::UIElements::StyleSheets {
struct ImageSource;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyValue;
}
namespace UnityEngine::UIElements {
struct TransformOrigin;
}
namespace UnityEngine::UIElements::StyleSheets {
class UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
// Forward declare root types
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
namespace UnityEngine::UIElements::StyleSheets {
class UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction;
}
// Type: ::GetCursorIdFunction
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7564))
// CS Name: UnityEngine.UIElements.StyleSheets.StylePropertyReader::GetCursorIdFunction
class CORDL_TYPE UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction", modifiers: " const&", def_value: None }]
constexpr UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction(UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction", modifiers: "&&", def_value: None }]
constexpr UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction(UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction& operator=(UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction&& o) noexcept = default;
  constexpr UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction& operator=(UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction const& o) noexcept = default;
                


// Methods

static UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c70bd8 size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c70d08 size 0x14 virtual true final false
 int32_t Invoke(UnityEngine::UIElements::StyleSheet sheet, UnityEngine::UIElements::StyleValueHandle handle) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
// Type: UnityEngine.UIElements.StyleSheets::StylePropertyReader
namespace UnityEngine::UIElements::StyleSheets {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7565))
// CS Name: UnityEngine.UIElements.StyleSheets.StylePropertyReader
class CORDL_TYPE StylePropertyReader : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using GetCursorIdFunction = UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~StylePropertyReader() = default;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyReader", modifiers: " const&", def_value: None }]
constexpr StylePropertyReader(StylePropertyReader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StylePropertyReader", modifiers: "&&", def_value: None }]
constexpr StylePropertyReader(StylePropertyReader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StylePropertyReader(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr StylePropertyReader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StylePropertyReader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StylePropertyReader& operator=(StylePropertyReader&& o) noexcept = default;
  constexpr StylePropertyReader& operator=(StylePropertyReader const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction __declspec(property(get=__get_getCursorIdFunc, put=__set_getCursorIdFunc))  getCursorIdFunc;

static void __set_getCursorIdFunc(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction value) ;

static UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction __get_getCursorIdFunc() ;

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyValue> __declspec(property(get=__get_m_Values, put=__set_m_Values))  m_Values;

constexpr void __set_m_Values(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyValue> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StylePropertyValue> __get_m_Values() const;

 System::Collections::Generic::List_1<int32_t> __declspec(property(get=__get_m_ValueCount, put=__set_m_ValueCount))  m_ValueCount;

constexpr void __set_m_ValueCount(System::Collections::Generic::List_1<int32_t> value) ;

constexpr System::Collections::Generic::List_1<int32_t> __get_m_ValueCount() const;

 UnityEngine::UIElements::StyleVariableResolver __declspec(property(get=__get_m_Resolver, put=__set_m_Resolver))  m_Resolver;

constexpr void __set_m_Resolver(UnityEngine::UIElements::StyleVariableResolver value) ;

constexpr UnityEngine::UIElements::StyleVariableResolver __get_m_Resolver() const;

 UnityEngine::UIElements::StyleSheet __declspec(property(get=__get_m_Sheet, put=__set_m_Sheet))  m_Sheet;

constexpr void __set_m_Sheet(UnityEngine::UIElements::StyleSheet value) ;

constexpr UnityEngine::UIElements::StyleSheet __get_m_Sheet() const;

 ::ArrayW<UnityEngine::UIElements::StyleProperty> __declspec(property(get=__get_m_Properties, put=__set_m_Properties))  m_Properties;

constexpr void __set_m_Properties(::ArrayW<UnityEngine::UIElements::StyleProperty> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleProperty> __get_m_Properties() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_m_PropertyIds, put=__set_m_PropertyIds))  m_PropertyIds;

constexpr void __set_m_PropertyIds(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_m_PropertyIds() const;

 int32_t __declspec(property(get=__get_m_CurrentValueIndex, put=__set_m_CurrentValueIndex))  m_CurrentValueIndex;

constexpr void __set_m_CurrentValueIndex(int32_t value) ;

constexpr int32_t __get_m_CurrentValueIndex() const;

 int32_t __declspec(property(get=__get_m_CurrentPropertyIndex, put=__set_m_CurrentPropertyIndex))  m_CurrentPropertyIndex;

constexpr void __set_m_CurrentPropertyIndex(int32_t value) ;

constexpr int32_t __get_m_CurrentPropertyIndex() const;

 UnityEngine::UIElements::StyleProperty __declspec(property(get=__get__property_k__BackingField, put=__set__property_k__BackingField))  _property_k__BackingField;

constexpr void __set__property_k__BackingField(UnityEngine::UIElements::StyleProperty value) ;

constexpr UnityEngine::UIElements::StyleProperty __get__property_k__BackingField() const;

 UnityEngine::UIElements::StyleSheets::StylePropertyId __declspec(property(get=__get__propertyId_k__BackingField, put=__set__propertyId_k__BackingField))  _propertyId_k__BackingField;

constexpr void __set__propertyId_k__BackingField(UnityEngine::UIElements::StyleSheets::StylePropertyId value) ;

constexpr UnityEngine::UIElements::StyleSheets::StylePropertyId __get__propertyId_k__BackingField() const;

 int32_t __declspec(property(get=__get__valueCount_k__BackingField, put=__set__valueCount_k__BackingField))  _valueCount_k__BackingField;

constexpr void __set__valueCount_k__BackingField(int32_t value) ;

constexpr int32_t __get__valueCount_k__BackingField() const;

 float_t __declspec(property(get=__get__dpiScaling_k__BackingField, put=__set__dpiScaling_k__BackingField))  _dpiScaling_k__BackingField;

constexpr void __set__dpiScaling_k__BackingField(float_t value) ;

constexpr float_t __get__dpiScaling_k__BackingField() const;


// Properties

 UnityEngine::UIElements::StyleProperty __declspec(property(get=get_property, put=set_property))  property;

 UnityEngine::UIElements::StyleSheets::StylePropertyId __declspec(property(get=get_propertyId, put=set_propertyId))  propertyId;

 int32_t __declspec(property(get=get_valueCount, put=set_valueCount))  valueCount;

 float_t __declspec(property(get=get_dpiScaling, put=set_dpiScaling))  dpiScaling;


// Methods

/// @brief Method get_property addr 0x2c6d54c size 0x8 virtual false final false
 UnityEngine::UIElements::StyleProperty get_property() ;

/// @brief Method set_property addr 0x2c6d554 size 0x8 virtual false final false
 void set_property(UnityEngine::UIElements::StyleProperty value) ;

/// @brief Method get_propertyId addr 0x2c6d55c size 0x8 virtual false final false
 UnityEngine::UIElements::StyleSheets::StylePropertyId get_propertyId() ;

/// @brief Method set_propertyId addr 0x2c6d564 size 0x8 virtual false final false
 void set_propertyId(UnityEngine::UIElements::StyleSheets::StylePropertyId value) ;

/// @brief Method get_valueCount addr 0x2c6d56c size 0x8 virtual false final false
 int32_t get_valueCount() ;

/// @brief Method set_valueCount addr 0x2c6d574 size 0x8 virtual false final false
 void set_valueCount(int32_t value) ;

/// @brief Method get_dpiScaling addr 0x2c6d57c size 0x8 virtual false final false
 float_t get_dpiScaling() ;

/// @brief Method set_dpiScaling addr 0x2c6d584 size 0x8 virtual false final false
 void set_dpiScaling(float_t value) ;

/// @brief Method SetContext addr 0x2c6d58c size 0xb8 virtual false final false
 void SetContext(UnityEngine::UIElements::StyleSheet sheet, UnityEngine::UIElements::StyleComplexSelector selector, UnityEngine::UIElements::StyleVariableContext varContext, float_t dpiScaling) ;

/// @brief Method SetInlineContext addr 0x2c6dc28 size 0x10 virtual false final false
 void SetInlineContext(UnityEngine::UIElements::StyleSheet sheet, ::ArrayW<UnityEngine::UIElements::StyleProperty> properties, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> propertyIds, float_t dpiScaling) ;

/// @brief Method MoveNextProperty addr 0x2c6dc38 size 0x2c virtual false final false
 UnityEngine::UIElements::StyleSheets::StylePropertyId MoveNextProperty() ;

/// @brief Method GetValue addr 0x2c6dd14 size 0x5c virtual false final false
 UnityEngine::UIElements::StyleSheets::StylePropertyValue GetValue(int32_t index) ;

/// @brief Method GetValueType addr 0x2c6b618 size 0x80 virtual false final false
 UnityEngine::UIElements::StyleValueType GetValueType(int32_t index) ;

/// @brief Method IsValueType addr 0x2c6b4e0 size 0x94 virtual false final false
 bool IsValueType(int32_t index, UnityEngine::UIElements::StyleValueType type) ;

/// @brief Method IsKeyword addr 0x2c6b574 size 0xa4 virtual false final false
 bool IsKeyword(int32_t index, UnityEngine::UIElements::StyleValueKeyword keyword) ;

/// @brief Method ReadAsString addr 0x2c6c588 size 0x60 virtual false final false
 ::StringW ReadAsString(int32_t index) ;

/// @brief Method ReadLength addr 0x2c6b698 size 0xf4 virtual false final false
 UnityEngine::UIElements::Length ReadLength(int32_t index) ;

/// @brief Method ReadTimeValue addr 0x2c6c4f0 size 0x98 virtual false final false
 UnityEngine::UIElements::TimeValue ReadTimeValue(int32_t index) ;

/// @brief Method ReadTranslate addr 0x2c6ddd0 size 0x130 virtual false final false
 UnityEngine::UIElements::Translate ReadTranslate(int32_t index) ;

/// @brief Method ReadTransformOrigin addr 0x2c6e188 size 0x134 virtual false final false
 UnityEngine::UIElements::TransformOrigin ReadTransformOrigin(int32_t index) ;

/// @brief Method ReadRotate addr 0x2c6e480 size 0x124 virtual false final false
 UnityEngine::UIElements::Rotate ReadRotate(int32_t index) ;

/// @brief Method ReadScale addr 0x2c6e670 size 0x100 virtual false final false
 UnityEngine::UIElements::Scale ReadScale(int32_t index) ;

/// @brief Method ReadFloat addr 0x2c6b78c size 0x68 virtual false final false
 float_t ReadFloat(int32_t index) ;

/// @brief Method ReadInt addr 0x2c6e96c size 0x84 virtual false final false
 int32_t ReadInt(int32_t index) ;

/// @brief Method ReadColor addr 0x2c6bcb8 size 0x104 virtual false final false
 UnityEngine::Color ReadColor(int32_t index) ;

/// @brief Method ReadEnum addr 0x2c6eae4 size 0xfc virtual false final false
 int32_t ReadEnum(UnityEngine::UIElements::StyleSheets::StyleEnumType enumType, int32_t index) ;

/// @brief Method ReadFontDefinition addr 0x2c6ebe0 size 0x528 virtual false final false
 UnityEngine::UIElements::FontDefinition ReadFontDefinition(int32_t index) ;

/// @brief Method ReadFont addr 0x2c6f108 size 0x344 virtual false final false
 UnityEngine::Font ReadFont(int32_t index) ;

/// @brief Method ReadBackground addr 0x2c6f44c size 0x270 virtual false final false
 UnityEngine::UIElements::Background ReadBackground(int32_t index) ;

/// @brief Method ReadCursor addr 0x2c6fd70 size 0x2ac virtual false final false
 UnityEngine::UIElements::Cursor ReadCursor(int32_t index) ;

/// @brief Method ReadTextShadow addr 0x2c7001c size 0x274 virtual false final false
 UnityEngine::UIElements::TextShadow ReadTextShadow(int32_t index) ;

/// @brief Method ReadListEasingFunction addr 0x2c70290 size 0x1f0 virtual false final false
 void ReadListEasingFunction(System::Collections::Generic::List_1<UnityEngine::UIElements::EasingFunction> list, int32_t index) ;

/// @brief Method ReadListTimeValue addr 0x2c70480 size 0x194 virtual false final false
 void ReadListTimeValue(System::Collections::Generic::List_1<UnityEngine::UIElements::TimeValue> list, int32_t index) ;

/// @brief Method ReadListStylePropertyName addr 0x2c70614 size 0x198 virtual false final false
 void ReadListStylePropertyName(System::Collections::Generic::List_1<UnityEngine::UIElements::StylePropertyName> list, int32_t index) ;

/// @brief Method LoadProperties addr 0x2c6d7f4 size 0x434 virtual false final false
 void LoadProperties() ;

/// @brief Method SetCurrentProperty addr 0x2c6dc64 size 0xb0 virtual false final false
 void SetCurrentProperty() ;

/// @brief Method ReadTransformOrigin addr 0x2c6e2bc size 0x1c4 virtual false final false
static UnityEngine::UIElements::TransformOrigin ReadTransformOrigin(int32_t valCount, UnityEngine::UIElements::StyleSheets::StylePropertyValue val1, UnityEngine::UIElements::StyleSheets::StylePropertyValue val2, UnityEngine::UIElements::StyleSheets::StylePropertyValue zVvalue) ;

/// @brief Method ReadTransformOriginEnum addr 0x2c707ac size 0x158 virtual false final false
static UnityEngine::UIElements::Length ReadTransformOriginEnum(UnityEngine::UIElements::StyleSheets::StylePropertyValue value, ByRef<bool> isVertical, ByRef<bool> isHorizontal) ;

/// @brief Method ReadTranslate addr 0x2c6df00 size 0x288 virtual false final false
static UnityEngine::UIElements::Translate ReadTranslate(int32_t valCount, UnityEngine::UIElements::StyleSheets::StylePropertyValue val1, UnityEngine::UIElements::StyleSheets::StylePropertyValue val2, UnityEngine::UIElements::StyleSheets::StylePropertyValue val3) ;

/// @brief Method ReadScale addr 0x2c6e770 size 0x1fc virtual false final false
static UnityEngine::UIElements::Scale ReadScale(int32_t valCount, UnityEngine::UIElements::StyleSheets::StylePropertyValue val1, UnityEngine::UIElements::StyleSheets::StylePropertyValue val2, UnityEngine::UIElements::StyleSheets::StylePropertyValue val3) ;

/// @brief Method ReadRotate addr 0x2c6e5a4 size 0xcc virtual false final false
static UnityEngine::UIElements::Rotate ReadRotate(int32_t valCount, UnityEngine::UIElements::StyleSheets::StylePropertyValue val1, UnityEngine::UIElements::StyleSheets::StylePropertyValue val2, UnityEngine::UIElements::StyleSheets::StylePropertyValue val3, UnityEngine::UIElements::StyleSheets::StylePropertyValue val4) ;

/// @brief Method ReadEnum addr 0x2c70904 size 0xc8 virtual false final false
static int32_t ReadEnum(UnityEngine::UIElements::StyleSheets::StyleEnumType enumType, UnityEngine::UIElements::StyleSheets::StylePropertyValue value) ;

/// @brief Method ReadAngle addr 0x2c709cc size 0x78 virtual false final false
static UnityEngine::UIElements::Angle ReadAngle(UnityEngine::UIElements::StyleSheets::StylePropertyValue value) ;

/// @brief Method TryGetImageSourceFromValue addr 0x2c6f6bc size 0x6b4 virtual false final false
static bool TryGetImageSourceFromValue(UnityEngine::UIElements::StyleSheets::StylePropertyValue propertyValue, float_t dpiScaling, ByRef<UnityEngine::UIElements::StyleSheets::ImageSource> source) ;

static UnityEngine::UIElements::StyleSheets::StylePropertyReader New_ctor() ;

/// @brief Method .ctor addr 0x2c70ae8 size 0xf0 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::StyleSheets
NEED_NO_BOX(UnityEngine::UIElements::StyleSheets::StylePropertyReader);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::StylePropertyReader, "UnityEngine.UIElements.StyleSheets", "StylePropertyReader");
NEED_NO_BOX(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::StyleSheets::UnityEngine__UIElements__StyleSheets__StylePropertyReader__GetCursorIdFunction, "UnityEngine.UIElements.StyleSheets", "StylePropertyReader/GetCursorIdFunction");
