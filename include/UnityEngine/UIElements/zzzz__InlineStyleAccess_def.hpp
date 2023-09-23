#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__StyleValueCollection_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstddef>
namespace UnityEngine::UIElements {
struct Justify;
}
namespace UnityEngine::UIElements {
struct StyleTextShadow;
}
namespace UnityEngine::UIElements {
struct StyleTranslate;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StylePropertyId;
}
namespace UnityEngine::UIElements {
struct Position;
}
namespace UnityEngine::UIElements {
class IStyle;
}
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValue;
}
namespace UnityEngine::UIElements {
struct ComputedStyle;
}
namespace UnityEngine::UIElements {
struct StyleColor;
}
namespace UnityEngine::UIElements {
struct StyleScale;
}
namespace UnityEngine::UIElements {
struct FlexDirection;
}
namespace UnityEngine::UIElements {
struct StyleFloat;
}
namespace UnityEngine::UIElements {
template<typename T>
struct StyleEnum_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct StyleValueManaged;
}
namespace UnityEngine::UIElements {
struct StyleTransformOrigin;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements {
struct StyleLength;
}
namespace UnityEngine::UIElements {
struct StyleRotate;
}
namespace UnityEngine::UIElements {
struct StyleCursor;
}
namespace UnityEngine::UIElements {
struct Visibility;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace UnityEngine::UIElements {
struct DisplayStyle;
}
namespace UnityEngine::UIElements::StyleSheets {
class StylePropertyReader;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class InlineStyleAccess;
}
namespace UnityEngine::UIElements {
struct UnityEngine__UIElements__InlineStyleAccess__InlineRule;
}
// Type: ::InlineRule
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7408))
// CS Name: UnityEngine.UIElements.InlineStyleAccess::InlineRule
struct CORDL_TYPE UnityEngine__UIElements__InlineStyleAccess__InlineRule : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "sheet", ty: "UnityEngine::UIElements::StyleSheet", modifiers: "", def_value: None }, CppParam { name: "rule", ty: "UnityEngine::UIElements::StyleRule", modifiers: "", def_value: None }, CppParam { name: "propertyIds", ty: "::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId>", modifiers: "", def_value: None }]
constexpr UnityEngine__UIElements__InlineStyleAccess__InlineRule(UnityEngine::UIElements::StyleSheet sheet, UnityEngine::UIElements::StyleRule rule, ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> propertyIds) noexcept;


                    constexpr UnityEngine__UIElements__InlineStyleAccess__InlineRule(UnityEngine__UIElements__InlineStyleAccess__InlineRule const&) = default;
                    constexpr UnityEngine__UIElements__InlineStyleAccess__InlineRule(UnityEngine__UIElements__InlineStyleAccess__InlineRule&&) = default;
                    constexpr UnityEngine__UIElements__InlineStyleAccess__InlineRule& operator=(UnityEngine__UIElements__InlineStyleAccess__InlineRule const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__UIElements__InlineStyleAccess__InlineRule& operator=(UnityEngine__UIElements__InlineStyleAccess__InlineRule&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__UIElements__InlineStyleAccess__InlineRule(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 UnityEngine::UIElements::StyleSheet __declspec(property(get=__get_sheet, put=__set_sheet))  sheet;

constexpr void __set_sheet(UnityEngine::UIElements::StyleSheet value) ;

constexpr UnityEngine::UIElements::StyleSheet __get_sheet() const;

 UnityEngine::UIElements::StyleRule __declspec(property(get=__get_rule, put=__set_rule))  rule;

constexpr void __set_rule(UnityEngine::UIElements::StyleRule value) ;

constexpr UnityEngine::UIElements::StyleRule __get_rule() const;

 ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __declspec(property(get=__get_propertyIds, put=__set_propertyIds))  propertyIds;

constexpr void __set_propertyIds(::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::StyleSheets::StylePropertyId> __get_propertyIds() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::InlineStyleAccess
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(7407))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7409))
// CS Name: UnityEngine.UIElements.InlineStyleAccess
class CORDL_TYPE InlineStyleAccess : public UnityEngine::UIElements::StyleValueCollection {
public:
// Declarations
using InlineRule = UnityEngine::UIElements::UnityEngine__UIElements__InlineStyleAccess__InlineRule;

/// @brief Convert operator to UnityEngine::UIElements::IStyle
constexpr operator  UnityEngine::UIElements::IStyle() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x100};

virtual ~InlineStyleAccess() = default;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccess", modifiers: " const&", def_value: None }]
constexpr InlineStyleAccess(InlineStyleAccess const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "InlineStyleAccess", modifiers: "&&", def_value: None }]
constexpr InlineStyleAccess(InlineStyleAccess&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit InlineStyleAccess(void* ptr) noexcept : UnityEngine::UIElements::StyleValueCollection(ptr) {
}


  constexpr InlineStyleAccess& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr InlineStyleAccess& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr InlineStyleAccess& operator=(InlineStyleAccess&& o) noexcept = default;
  constexpr InlineStyleAccess& operator=(InlineStyleAccess const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::StyleSheets::StylePropertyReader __declspec(property(get=__get_s_StylePropertyReader, put=__set_s_StylePropertyReader))  s_StylePropertyReader;

static void __set_s_StylePropertyReader(UnityEngine::UIElements::StyleSheets::StylePropertyReader value) ;

static UnityEngine::UIElements::StyleSheets::StylePropertyReader __get_s_StylePropertyReader() ;

 System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StyleValueManaged> __declspec(property(get=__get_m_ValuesManaged, put=__set_m_ValuesManaged))  m_ValuesManaged;

constexpr void __set_m_ValuesManaged(System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StyleValueManaged> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::UIElements::StyleSheets::StyleValueManaged> __get_m_ValuesManaged() const;

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get__ve_k__BackingField, put=__set__ve_k__BackingField))  _ve_k__BackingField;

constexpr void __set__ve_k__BackingField(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get__ve_k__BackingField() const;

 bool __declspec(property(get=__get_m_HasInlineCursor, put=__set_m_HasInlineCursor))  m_HasInlineCursor;

constexpr void __set_m_HasInlineCursor(bool value) ;

constexpr bool __get_m_HasInlineCursor() const;

 UnityEngine::UIElements::StyleCursor __declspec(property(get=__get_m_InlineCursor, put=__set_m_InlineCursor))  m_InlineCursor;

constexpr void __set_m_InlineCursor(UnityEngine::UIElements::StyleCursor value) ;

constexpr UnityEngine::UIElements::StyleCursor __get_m_InlineCursor() const;

 bool __declspec(property(get=__get_m_HasInlineTextShadow, put=__set_m_HasInlineTextShadow))  m_HasInlineTextShadow;

constexpr void __set_m_HasInlineTextShadow(bool value) ;

constexpr bool __get_m_HasInlineTextShadow() const;

 UnityEngine::UIElements::StyleTextShadow __declspec(property(get=__get_m_InlineTextShadow, put=__set_m_InlineTextShadow))  m_InlineTextShadow;

constexpr void __set_m_InlineTextShadow(UnityEngine::UIElements::StyleTextShadow value) ;

constexpr UnityEngine::UIElements::StyleTextShadow __get_m_InlineTextShadow() const;

 bool __declspec(property(get=__get_m_HasInlineTransformOrigin, put=__set_m_HasInlineTransformOrigin))  m_HasInlineTransformOrigin;

constexpr void __set_m_HasInlineTransformOrigin(bool value) ;

constexpr bool __get_m_HasInlineTransformOrigin() const;

 UnityEngine::UIElements::StyleTransformOrigin __declspec(property(get=__get_m_InlineTransformOrigin, put=__set_m_InlineTransformOrigin))  m_InlineTransformOrigin;

constexpr void __set_m_InlineTransformOrigin(UnityEngine::UIElements::StyleTransformOrigin value) ;

constexpr UnityEngine::UIElements::StyleTransformOrigin __get_m_InlineTransformOrigin() const;

 bool __declspec(property(get=__get_m_HasInlineTranslate, put=__set_m_HasInlineTranslate))  m_HasInlineTranslate;

constexpr void __set_m_HasInlineTranslate(bool value) ;

constexpr bool __get_m_HasInlineTranslate() const;

 UnityEngine::UIElements::StyleTranslate __declspec(property(get=__get_m_InlineTranslateOperation, put=__set_m_InlineTranslateOperation))  m_InlineTranslateOperation;

constexpr void __set_m_InlineTranslateOperation(UnityEngine::UIElements::StyleTranslate value) ;

constexpr UnityEngine::UIElements::StyleTranslate __get_m_InlineTranslateOperation() const;

 bool __declspec(property(get=__get_m_HasInlineRotate, put=__set_m_HasInlineRotate))  m_HasInlineRotate;

constexpr void __set_m_HasInlineRotate(bool value) ;

constexpr bool __get_m_HasInlineRotate() const;

 UnityEngine::UIElements::StyleRotate __declspec(property(get=__get_m_InlineRotateOperation, put=__set_m_InlineRotateOperation))  m_InlineRotateOperation;

constexpr void __set_m_InlineRotateOperation(UnityEngine::UIElements::StyleRotate value) ;

constexpr UnityEngine::UIElements::StyleRotate __get_m_InlineRotateOperation() const;

 bool __declspec(property(get=__get_m_HasInlineScale, put=__set_m_HasInlineScale))  m_HasInlineScale;

constexpr void __set_m_HasInlineScale(bool value) ;

constexpr bool __get_m_HasInlineScale() const;

 UnityEngine::UIElements::StyleScale __declspec(property(get=__get_m_InlineScale, put=__set_m_InlineScale))  m_InlineScale;

constexpr void __set_m_InlineScale(UnityEngine::UIElements::StyleScale value) ;

constexpr UnityEngine::UIElements::StyleScale __get_m_InlineScale() const;

 UnityEngine::UIElements::UnityEngine__UIElements__InlineStyleAccess__InlineRule __declspec(property(get=__get_m_InlineRule, put=__set_m_InlineRule))  m_InlineRule;

constexpr void __set_m_InlineRule(UnityEngine::UIElements::UnityEngine__UIElements__InlineStyleAccess__InlineRule value) ;

constexpr UnityEngine::UIElements::UnityEngine__UIElements__InlineStyleAccess__InlineRule __get_m_InlineRule() const;


// Properties

 UnityEngine::UIElements::VisualElement __declspec(property(get=get_ve, put=set_ve))  ve;

 UnityEngine::UIElements::StyleCursor __declspec(property(get=UnityEngine_UIElements_IStyle_get_cursor))  UnityEngine_UIElements_IStyle_cursor;

 UnityEngine::UIElements::StyleTextShadow __declspec(property(get=UnityEngine_UIElements_IStyle_get_textShadow))  UnityEngine_UIElements_IStyle_textShadow;

 UnityEngine::UIElements::StyleTransformOrigin __declspec(property(get=UnityEngine_UIElements_IStyle_get_transformOrigin))  UnityEngine_UIElements_IStyle_transformOrigin;

 UnityEngine::UIElements::StyleTranslate __declspec(property(get=UnityEngine_UIElements_IStyle_get_translate, put=UnityEngine_UIElements_IStyle_set_translate))  UnityEngine_UIElements_IStyle_translate;

 UnityEngine::UIElements::StyleRotate __declspec(property(get=UnityEngine_UIElements_IStyle_get_rotate))  UnityEngine_UIElements_IStyle_rotate;

 UnityEngine::UIElements::StyleScale __declspec(property(get=UnityEngine_UIElements_IStyle_get_scale))  UnityEngine_UIElements_IStyle_scale;

 UnityEngine::UIElements::StyleColor __declspec(property(put=UnityEngine_UIElements_IStyle_set_backgroundColor))  UnityEngine_UIElements_IStyle_backgroundColor;

 UnityEngine::UIElements::StyleColor __declspec(property(put=UnityEngine_UIElements_IStyle_set_borderBottomColor))  UnityEngine_UIElements_IStyle_borderBottomColor;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius))  UnityEngine_UIElements_IStyle_borderBottomLeftRadius;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_borderBottomRightRadius))  UnityEngine_UIElements_IStyle_borderBottomRightRadius;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=UnityEngine_UIElements_IStyle_set_borderBottomWidth))  UnityEngine_UIElements_IStyle_borderBottomWidth;

 UnityEngine::UIElements::StyleColor __declspec(property(put=UnityEngine_UIElements_IStyle_set_borderLeftColor))  UnityEngine_UIElements_IStyle_borderLeftColor;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=UnityEngine_UIElements_IStyle_set_borderLeftWidth))  UnityEngine_UIElements_IStyle_borderLeftWidth;

 UnityEngine::UIElements::StyleColor __declspec(property(put=UnityEngine_UIElements_IStyle_set_borderRightColor))  UnityEngine_UIElements_IStyle_borderRightColor;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=UnityEngine_UIElements_IStyle_set_borderRightWidth))  UnityEngine_UIElements_IStyle_borderRightWidth;

 UnityEngine::UIElements::StyleColor __declspec(property(put=UnityEngine_UIElements_IStyle_set_borderTopColor))  UnityEngine_UIElements_IStyle_borderTopColor;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_borderTopLeftRadius))  UnityEngine_UIElements_IStyle_borderTopLeftRadius;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_borderTopRightRadius))  UnityEngine_UIElements_IStyle_borderTopRightRadius;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=UnityEngine_UIElements_IStyle_set_borderTopWidth))  UnityEngine_UIElements_IStyle_borderTopWidth;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_bottom))  UnityEngine_UIElements_IStyle_bottom;

 UnityEngine::UIElements::StyleColor __declspec(property(put=UnityEngine_UIElements_IStyle_set_color))  UnityEngine_UIElements_IStyle_color;

 UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::DisplayStyle> __declspec(property(get=UnityEngine_UIElements_IStyle_get_display, put=UnityEngine_UIElements_IStyle_set_display))  UnityEngine_UIElements_IStyle_display;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_flexBasis))  UnityEngine_UIElements_IStyle_flexBasis;

 UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::FlexDirection> __declspec(property(put=UnityEngine_UIElements_IStyle_set_flexDirection))  UnityEngine_UIElements_IStyle_flexDirection;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=UnityEngine_UIElements_IStyle_set_flexGrow))  UnityEngine_UIElements_IStyle_flexGrow;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=UnityEngine_UIElements_IStyle_set_flexShrink))  UnityEngine_UIElements_IStyle_flexShrink;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_fontSize))  UnityEngine_UIElements_IStyle_fontSize;

 UnityEngine::UIElements::StyleLength __declspec(property(get=UnityEngine_UIElements_IStyle_get_height, put=UnityEngine_UIElements_IStyle_set_height))  UnityEngine_UIElements_IStyle_height;

 UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::Justify> __declspec(property(put=UnityEngine_UIElements_IStyle_set_justifyContent))  UnityEngine_UIElements_IStyle_justifyContent;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_left))  UnityEngine_UIElements_IStyle_left;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_marginBottom))  UnityEngine_UIElements_IStyle_marginBottom;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_marginLeft))  UnityEngine_UIElements_IStyle_marginLeft;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_marginRight))  UnityEngine_UIElements_IStyle_marginRight;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_marginTop))  UnityEngine_UIElements_IStyle_marginTop;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_maxWidth))  UnityEngine_UIElements_IStyle_maxWidth;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_minWidth))  UnityEngine_UIElements_IStyle_minWidth;

 UnityEngine::UIElements::StyleFloat __declspec(property(put=UnityEngine_UIElements_IStyle_set_opacity))  UnityEngine_UIElements_IStyle_opacity;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_paddingBottom))  UnityEngine_UIElements_IStyle_paddingBottom;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_paddingLeft))  UnityEngine_UIElements_IStyle_paddingLeft;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_paddingRight))  UnityEngine_UIElements_IStyle_paddingRight;

 UnityEngine::UIElements::StyleLength __declspec(property(get=UnityEngine_UIElements_IStyle_get_paddingTop, put=UnityEngine_UIElements_IStyle_set_paddingTop))  UnityEngine_UIElements_IStyle_paddingTop;

 UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::Position> __declspec(property(put=UnityEngine_UIElements_IStyle_set_position))  UnityEngine_UIElements_IStyle_position;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_right))  UnityEngine_UIElements_IStyle_right;

 UnityEngine::UIElements::StyleLength __declspec(property(put=UnityEngine_UIElements_IStyle_set_top))  UnityEngine_UIElements_IStyle_top;

 UnityEngine::UIElements::StyleColor __declspec(property(put=UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor))  UnityEngine_UIElements_IStyle_unityBackgroundImageTintColor;

 UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::Visibility> __declspec(property(put=UnityEngine_UIElements_IStyle_set_visibility))  UnityEngine_UIElements_IStyle_visibility;

 UnityEngine::UIElements::StyleLength __declspec(property(get=UnityEngine_UIElements_IStyle_get_width, put=UnityEngine_UIElements_IStyle_set_width))  UnityEngine_UIElements_IStyle_width;


// Methods

/// @brief Method get_ve addr 0x2cfabac size 0x8 virtual false final false
 UnityEngine::UIElements::VisualElement get_ve() ;

/// @brief Method set_ve addr 0x2cfabb4 size 0x8 virtual false final false
 void set_ve(UnityEngine::UIElements::VisualElement value) ;

// Ctor Parameters [CppParam { name: "ve", ty: "UnityEngine::UIElements::VisualElement", modifiers: "", def_value: None }]
explicit InlineStyleAccess(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method .ctor addr 0x2cfabbc size 0x24 virtual false final false
 void _ctor(UnityEngine::UIElements::VisualElement ve) ;

/// @brief Method Finalize addr 0x2cfabe0 size 0x148 virtual true final false
 void Finalize() ;

/// @brief Method SetInlineRule addr 0x2cfad28 size 0x94 virtual false final false
 void SetInlineRule(UnityEngine::UIElements::StyleSheet sheet, UnityEngine::UIElements::StyleRule rule) ;

/// @brief Method IsValueSet addr 0x2cfb7d0 size 0x310 virtual false final false
 bool IsValueSet(UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method ApplyInlineStyles addr 0x2cfadbc size 0xa14 virtual false final false
 void ApplyInlineStyles(ByRef<UnityEngine::UIElements::ComputedStyle> computedStyle) ;

/// @brief Method UnityEngine.UIElements.IStyle.get_cursor addr 0x2cfbbb8 size 0x54 virtual true final true
 UnityEngine::UIElements::StyleCursor UnityEngine_UIElements_IStyle_get_cursor() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_textShadow addr 0x2cfbc2c size 0x58 virtual true final true
 UnityEngine::UIElements::StyleTextShadow UnityEngine_UIElements_IStyle_get_textShadow() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_transformOrigin addr 0x2cfbcc0 size 0x48 virtual true final true
 UnityEngine::UIElements::StyleTransformOrigin UnityEngine_UIElements_IStyle_get_transformOrigin() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_translate addr 0x2cfbd3c size 0x50 virtual true final true
 UnityEngine::UIElements::StyleTranslate UnityEngine_UIElements_IStyle_get_translate() ;

/// @brief Method UnityEngine.UIElements.IStyle.set_translate addr 0x2cfbdbc size 0x54 virtual true final true
 void UnityEngine_UIElements_IStyle_set_translate(UnityEngine::UIElements::StyleTranslate value) ;

/// @brief Method UnityEngine.UIElements.IStyle.get_rotate addr 0x2cfbf4c size 0x50 virtual true final true
 UnityEngine::UIElements::StyleRotate UnityEngine_UIElements_IStyle_get_rotate() ;

/// @brief Method UnityEngine.UIElements.IStyle.get_scale addr 0x2cfbfdc size 0x34 virtual true final true
 UnityEngine::UIElements::StyleScale UnityEngine_UIElements_IStyle_get_scale() ;

/// @brief Method SetStyleValue addr 0x2cfc038 size 0x12c virtual false final false
 bool SetStyleValue(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::StyleLength inlineValue) ;

/// @brief Method SetStyleValue addr 0x2cfc534 size 0x110 virtual false final false
 bool SetStyleValue(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::StyleFloat inlineValue) ;

/// @brief Method SetStyleValue addr 0x2cfc644 size 0x13c virtual false final false
 bool SetStyleValue(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::StyleColor inlineValue) ;

/// @brief Method SetStyleValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 bool SetStyleValue(UnityEngine::UIElements::StyleSheets::StylePropertyId id, UnityEngine::UIElements::StyleEnum_1<T> inlineValue) ;

/// @brief Method SetInlineTranslate addr 0x2cfbe10 size 0x13c virtual false final false
 bool SetInlineTranslate(UnityEngine::UIElements::StyleTranslate inlineValue) ;

/// @brief Method ApplyStyleTranslate addr 0x2cfc780 size 0x234 virtual false final false
 void ApplyStyleTranslate(UnityEngine::UIElements::StyleTranslate translate) ;

/// @brief Method ApplyStyleValue addr 0x2cfc254 size 0x2e0 virtual false final false
 void ApplyStyleValue(UnityEngine::UIElements::StyleSheets::StyleValue value) ;

/// @brief Method RemoveInlineStyle addr 0x2cfc164 size 0xf0 virtual false final false
 bool RemoveInlineStyle(UnityEngine::UIElements::StyleSheets::StylePropertyId id) ;

/// @brief Method ApplyFromComputedStyle addr 0x2cfc9b4 size 0x220 virtual false final false
 void ApplyFromComputedStyle(UnityEngine::UIElements::StyleSheets::StylePropertyId id, ByRef<UnityEngine::UIElements::ComputedStyle> newStyle) ;

/// @brief Method TryGetInlineCursor addr 0x2cfbc0c size 0x20 virtual false final false
 bool TryGetInlineCursor(ByRef<UnityEngine::UIElements::StyleCursor> value) ;

/// @brief Method TryGetInlineTextShadow addr 0x2cfbc84 size 0x24 virtual false final false
 bool TryGetInlineTextShadow(ByRef<UnityEngine::UIElements::StyleTextShadow> value) ;

/// @brief Method TryGetInlineTransformOrigin addr 0x2cfbd08 size 0x28 virtual false final false
 bool TryGetInlineTransformOrigin(ByRef<UnityEngine::UIElements::StyleTransformOrigin> value) ;

/// @brief Method TryGetInlineTranslate addr 0x2cfbd8c size 0x30 virtual false final false
 bool TryGetInlineTranslate(ByRef<UnityEngine::UIElements::StyleTranslate> value) ;

/// @brief Method TryGetInlineRotate addr 0x2cfbf9c size 0x30 virtual false final false
 bool TryGetInlineRotate(ByRef<UnityEngine::UIElements::StyleRotate> value) ;

/// @brief Method TryGetInlineScale addr 0x2cfc010 size 0x28 virtual false final false
 bool TryGetInlineScale(ByRef<UnityEngine::UIElements::StyleScale> value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_backgroundColor addr 0x2cfcbd4 size 0x58 virtual true final true
 void UnityEngine_UIElements_IStyle_set_backgroundColor(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomColor addr 0x2cfcc2c size 0x5c virtual true final true
 void UnityEngine_UIElements_IStyle_set_borderBottomColor(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomLeftRadius addr 0x2cfcc88 size 0x48 virtual true final true
 void UnityEngine_UIElements_IStyle_set_borderBottomLeftRadius(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomRightRadius addr 0x2cfccd0 size 0x48 virtual true final true
 void UnityEngine_UIElements_IStyle_set_borderBottomRightRadius(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderBottomWidth addr 0x2cfcd18 size 0x6c virtual true final true
 void UnityEngine_UIElements_IStyle_set_borderBottomWidth(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderLeftColor addr 0x2cfcd84 size 0x5c virtual true final true
 void UnityEngine_UIElements_IStyle_set_borderLeftColor(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderLeftWidth addr 0x2cfcde0 size 0x6c virtual true final true
 void UnityEngine_UIElements_IStyle_set_borderLeftWidth(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderRightColor addr 0x2cfce4c size 0x5c virtual true final true
 void UnityEngine_UIElements_IStyle_set_borderRightColor(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderRightWidth addr 0x2cfcea8 size 0x6c virtual true final true
 void UnityEngine_UIElements_IStyle_set_borderRightWidth(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderTopColor addr 0x2cfcf14 size 0x58 virtual true final true
 void UnityEngine_UIElements_IStyle_set_borderTopColor(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderTopLeftRadius addr 0x2cfcf6c size 0x48 virtual true final true
 void UnityEngine_UIElements_IStyle_set_borderTopLeftRadius(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderTopRightRadius addr 0x2cfcfb4 size 0x48 virtual true final true
 void UnityEngine_UIElements_IStyle_set_borderTopRightRadius(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_borderTopWidth addr 0x2cfcffc size 0x6c virtual true final true
 void UnityEngine_UIElements_IStyle_set_borderTopWidth(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_bottom addr 0x2cfd068 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_bottom(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_color addr 0x2cfd0e4 size 0x58 virtual true final true
 void UnityEngine_UIElements_IStyle_set_color(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method UnityEngine.UIElements.IStyle.get_display addr 0x2cfd13c size 0x78 virtual true final true
 UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::DisplayStyle> UnityEngine_UIElements_IStyle_get_display() ;

/// @brief Method UnityEngine.UIElements.IStyle.set_display addr 0x2cfd1d4 size 0xbc virtual true final true
 void UnityEngine_UIElements_IStyle_set_display(UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::DisplayStyle> value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_flexBasis addr 0x2cfd290 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_flexBasis(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_flexDirection addr 0x2cfd30c size 0xbc virtual true final true
 void UnityEngine_UIElements_IStyle_set_flexDirection(UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::FlexDirection> value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_flexGrow addr 0x2cfd3c8 size 0x6c virtual true final true
 void UnityEngine_UIElements_IStyle_set_flexGrow(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_flexShrink addr 0x2cfd434 size 0x6c virtual true final true
 void UnityEngine_UIElements_IStyle_set_flexShrink(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_fontSize addr 0x2cfd4a0 size 0x44 virtual true final true
 void UnityEngine_UIElements_IStyle_set_fontSize(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.get_height addr 0x2cfd4e4 size 0x1c virtual true final true
 UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_height() ;

/// @brief Method UnityEngine.UIElements.IStyle.set_height addr 0x2cfd500 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_height(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_justifyContent addr 0x2cfd57c size 0xbc virtual true final true
 void UnityEngine_UIElements_IStyle_set_justifyContent(UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::Justify> value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_left addr 0x2cfd638 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_left(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_marginBottom addr 0x2cfd6b4 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_marginBottom(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_marginLeft addr 0x2cfd730 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_marginLeft(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_marginRight addr 0x2cfd7ac size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_marginRight(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_marginTop addr 0x2cfd828 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_marginTop(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_maxWidth addr 0x2cfd8a4 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_maxWidth(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_minWidth addr 0x2cfd920 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_minWidth(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_opacity addr 0x2cfd99c size 0x40 virtual true final true
 void UnityEngine_UIElements_IStyle_set_opacity(UnityEngine::UIElements::StyleFloat value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_paddingBottom addr 0x2cfd9dc size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_paddingBottom(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_paddingLeft addr 0x2cfda58 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_paddingLeft(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_paddingRight addr 0x2cfdad4 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_paddingRight(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.get_paddingTop addr 0x2cfdb50 size 0x1c virtual true final true
 UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_paddingTop() ;

/// @brief Method UnityEngine.UIElements.IStyle.set_paddingTop addr 0x2cfdb6c size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_paddingTop(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_position addr 0x2cfdbe8 size 0xbc virtual true final true
 void UnityEngine_UIElements_IStyle_set_position(UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::Position> value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_right addr 0x2cfdca4 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_right(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_top addr 0x2cfdd20 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_top(UnityEngine::UIElements::StyleLength value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_unityBackgroundImageTintColor addr 0x2cfdd9c size 0x5c virtual true final true
 void UnityEngine_UIElements_IStyle_set_unityBackgroundImageTintColor(UnityEngine::UIElements::StyleColor value) ;

/// @brief Method UnityEngine.UIElements.IStyle.set_visibility addr 0x2cfddf8 size 0x8c virtual true final true
 void UnityEngine_UIElements_IStyle_set_visibility(UnityEngine::UIElements::StyleEnum_1<UnityEngine::UIElements::Visibility> value) ;

/// @brief Method UnityEngine.UIElements.IStyle.get_width addr 0x2cfde84 size 0x1c virtual true final true
 UnityEngine::UIElements::StyleLength UnityEngine_UIElements_IStyle_get_width() ;

/// @brief Method UnityEngine.UIElements.IStyle.set_width addr 0x2cfdea0 size 0x7c virtual true final true
 void UnityEngine_UIElements_IStyle_set_width(UnityEngine::UIElements::StyleLength value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::InlineStyleAccess);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::InlineStyleAccess, "UnityEngine.UIElements", "InlineStyleAccess");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UnityEngine__UIElements__InlineStyleAccess__InlineRule, "UnityEngine.UIElements", "InlineStyleAccess/InlineRule");
