#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace {
namespace UnityEngine::UIElements::StyleSheets {
struct Dimension;
}
namespace UnityEngine {
class Object;
}
namespace UnityEngine::UIElements {
struct StyleValueHandle;
}
namespace UnityEngine::UIElements {
struct StyleValueKeyword;
}
namespace UnityEngine::UIElements {
class StyleComplexSelector;
}
namespace UnityEngine {
struct Color;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::UIElements::StyleSheets {
struct ScalableImage;
}
namespace UnityEngine::UIElements {
class StyleRule;
}
namespace UnityEngine::UIElements {
struct StyleValueType;
}
namespace UnityEngine::UIElements {
struct StyleValueFunction;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class StyleSheet;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__StyleSheet__ImportStruct;
}
// Type: ::ImportStruct
namespace UnityEngine::UIElements {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7377))
// CS Name: UnityEngine.UIElements.StyleSheet::ImportStruct
struct CORDL_TYPE ____UnityEngine__UIElements__StyleSheet__ImportStruct : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "styleSheet", ty: "::UnityEngine::UIElements::StyleSheet", modifiers: "", def_value: None }, CppParam { name: "mediaQueries", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
constexpr ____UnityEngine__UIElements__StyleSheet__ImportStruct(::UnityEngine::UIElements::StyleSheet styleSheet, ::ArrayW<::StringW> mediaQueries) noexcept;


                    constexpr ____UnityEngine__UIElements__StyleSheet__ImportStruct(____UnityEngine__UIElements__StyleSheet__ImportStruct const&) = default;
                    constexpr ____UnityEngine__UIElements__StyleSheet__ImportStruct(____UnityEngine__UIElements__StyleSheet__ImportStruct&&) = default;
                    constexpr ____UnityEngine__UIElements__StyleSheet__ImportStruct& operator=(____UnityEngine__UIElements__StyleSheet__ImportStruct const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____UnityEngine__UIElements__StyleSheet__ImportStruct& operator=(____UnityEngine__UIElements__StyleSheet__ImportStruct&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x10};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__StyleSheet__ImportStruct(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::UnityEngine::UIElements::StyleSheet __declspec(property(get=__get_styleSheet, put=__set_styleSheet))  styleSheet;

constexpr void __set_styleSheet(::UnityEngine::UIElements::StyleSheet value) ;

constexpr ::UnityEngine::UIElements::StyleSheet __get_styleSheet() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_mediaQueries, put=__set_mediaQueries))  mediaQueries;

constexpr void __set_mediaQueries(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_mediaQueries() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::StyleSheet
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7378))
// CS Name: UnityEngine.UIElements.StyleSheet
class CORDL_TYPE StyleSheet : public ::UnityEngine::ScriptableObject {
public:
// Declarations
using ImportStruct = ::UnityEngine::UIElements::____UnityEngine__UIElements__StyleSheet__ImportStruct;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x98};

virtual ~StyleSheet() = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheet", modifiers: " const&", def_value: None }]
constexpr StyleSheet(StyleSheet const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StyleSheet", modifiers: "&&", def_value: None }]
constexpr StyleSheet(StyleSheet&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StyleSheet(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr StyleSheet& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StyleSheet& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StyleSheet& operator=(StyleSheet&& o) noexcept = default;
  constexpr StyleSheet& operator=(StyleSheet const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_m_ImportedWithErrors, put=__set_m_ImportedWithErrors))  m_ImportedWithErrors;

constexpr void __set_m_ImportedWithErrors(bool value) ;

constexpr bool __get_m_ImportedWithErrors() const;

 bool __declspec(property(get=__get_m_ImportedWithWarnings, put=__set_m_ImportedWithWarnings))  m_ImportedWithWarnings;

constexpr void __set_m_ImportedWithWarnings(bool value) ;

constexpr bool __get_m_ImportedWithWarnings() const;

 ::ArrayW<::UnityEngine::UIElements::StyleRule> __declspec(property(get=__get_m_Rules, put=__set_m_Rules))  m_Rules;

constexpr void __set_m_Rules(::ArrayW<::UnityEngine::UIElements::StyleRule> value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleRule> __get_m_Rules() const;

 ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector> __declspec(property(get=__get_m_ComplexSelectors, put=__set_m_ComplexSelectors))  m_ComplexSelectors;

constexpr void __set_m_ComplexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector> value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector> __get_m_ComplexSelectors() const;

 ::ArrayW<float_t> __declspec(property(get=__get_floats, put=__set_floats))  floats;

constexpr void __set_floats(::ArrayW<float_t> value) ;

constexpr ::ArrayW<float_t> __get_floats() const;

 ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension> __declspec(property(get=__get_dimensions, put=__set_dimensions))  dimensions;

constexpr void __set_dimensions(::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension> value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::Dimension> __get_dimensions() const;

 ::ArrayW<::UnityEngine::Color> __declspec(property(get=__get_colors, put=__set_colors))  colors;

constexpr void __set_colors(::ArrayW<::UnityEngine::Color> value) ;

constexpr ::ArrayW<::UnityEngine::Color> __get_colors() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_strings, put=__set_strings))  strings;

constexpr void __set_strings(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_strings() const;

 ::ArrayW<::UnityEngine::Object> __declspec(property(get=__get_assets, put=__set_assets))  assets;

constexpr void __set_assets(::ArrayW<::UnityEngine::Object> value) ;

constexpr ::ArrayW<::UnityEngine::Object> __get_assets() const;

 ::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleSheet__ImportStruct> __declspec(property(get=__get_imports, put=__set_imports))  imports;

constexpr void __set_imports(::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleSheet__ImportStruct> value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::____UnityEngine__UIElements__StyleSheet__ImportStruct> __get_imports() const;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet> __declspec(property(get=__get_m_FlattenedImportedStyleSheets, put=__set_m_FlattenedImportedStyleSheets))  m_FlattenedImportedStyleSheets;

constexpr void __set_m_FlattenedImportedStyleSheets(::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet> __get_m_FlattenedImportedStyleSheets() const;

 int32_t __declspec(property(get=__get_m_ContentHash, put=__set_m_ContentHash))  m_ContentHash;

constexpr void __set_m_ContentHash(int32_t value) ;

constexpr int32_t __get_m_ContentHash() const;

 ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage> __declspec(property(get=__get_scalableImages, put=__set_scalableImages))  scalableImages;

constexpr void __set_scalableImages(::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage> value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::StyleSheets::ScalableImage> __get_scalableImages() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector> __declspec(property(get=__get_orderedNameSelectors, put=__set_orderedNameSelectors))  orderedNameSelectors;

constexpr void __set_orderedNameSelectors(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector> __get_orderedNameSelectors() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector> __declspec(property(get=__get_orderedTypeSelectors, put=__set_orderedTypeSelectors))  orderedTypeSelectors;

constexpr void __set_orderedTypeSelectors(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector> __get_orderedTypeSelectors() const;

 ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector> __declspec(property(get=__get_orderedClassSelectors, put=__set_orderedClassSelectors))  orderedClassSelectors;

constexpr void __set_orderedClassSelectors(::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::UnityEngine::UIElements::StyleComplexSelector> __get_orderedClassSelectors() const;

 bool __declspec(property(get=__get_m_IsDefaultStyleSheet, put=__set_m_IsDefaultStyleSheet))  m_IsDefaultStyleSheet;

constexpr void __set_m_IsDefaultStyleSheet(bool value) ;

constexpr bool __get_m_IsDefaultStyleSheet() const;

static ::StringW __declspec(property(get=__get_kCustomPropertyMarker, put=__set_kCustomPropertyMarker))  kCustomPropertyMarker;

static void __set_kCustomPropertyMarker(::StringW value) ;

static ::StringW __get_kCustomPropertyMarker() ;


// Properties

 bool __declspec(property(get=get_importedWithErrors, put=set_importedWithErrors))  importedWithErrors;

 bool __declspec(property(get=get_importedWithWarnings, put=set_importedWithWarnings))  importedWithWarnings;

 ::ArrayW<::UnityEngine::UIElements::StyleRule> __declspec(property(get=get_rules, put=set_rules))  rules;

 ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector> __declspec(property(get=get_complexSelectors, put=set_complexSelectors))  complexSelectors;

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet> __declspec(property(get=get_flattenedRecursiveImports))  flattenedRecursiveImports;

 int32_t __declspec(property(get=get_contentHash, put=set_contentHash))  contentHash;

 bool __declspec(property(get=get_isDefaultStyleSheet, put=set_isDefaultStyleSheet))  isDefaultStyleSheet;


// Methods

/// @brief Method get_importedWithErrors addr 0x2cf4070 size 0x8 virtual false final false
 bool get_importedWithErrors() ;

/// @brief Method set_importedWithErrors addr 0x2cf4078 size 0xc virtual false final false
 void set_importedWithErrors(bool value) ;

/// @brief Method get_importedWithWarnings addr 0x2cf4084 size 0x8 virtual false final false
 bool get_importedWithWarnings() ;

/// @brief Method set_importedWithWarnings addr 0x2cf408c size 0xc virtual false final false
 void set_importedWithWarnings(bool value) ;

/// @brief Method get_rules addr 0x2cf4098 size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::UIElements::StyleRule> get_rules() ;

/// @brief Method set_rules addr 0x2cf40a0 size 0x8 virtual false final false
 void set_rules(::ArrayW<::UnityEngine::UIElements::StyleRule> value) ;

/// @brief Method get_complexSelectors addr 0x2cf45e8 size 0x8 virtual false final false
 ::ArrayW<::UnityEngine::UIElements::StyleComplexSelector> get_complexSelectors() ;

/// @brief Method set_complexSelectors addr 0x2cf45f0 size 0x8 virtual false final false
 void set_complexSelectors(::ArrayW<::UnityEngine::UIElements::StyleComplexSelector> value) ;

/// @brief Method get_flattenedRecursiveImports addr 0x2cf45f8 size 0x8 virtual false final false
 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::StyleSheet> get_flattenedRecursiveImports() ;

/// @brief Method get_contentHash addr 0x2cf4600 size 0x8 virtual false final false
 int32_t get_contentHash() ;

/// @brief Method set_contentHash addr 0x2cf4608 size 0x8 virtual false final false
 void set_contentHash(int32_t value) ;

/// @brief Method get_isDefaultStyleSheet addr 0x2cf4610 size 0x8 virtual false final false
 bool get_isDefaultStyleSheet() ;

/// @brief Method set_isDefaultStyleSheet addr 0x2cf3da0 size 0x160 virtual false final false
 void set_isDefaultStyleSheet(bool value) ;

/// @brief Method TryCheckAccess addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool TryCheckAccess(::ArrayW<T> list, ::UnityEngine::UIElements::StyleValueType type, ::UnityEngine::UIElements::StyleValueHandle handle, ByRef<T> value) ;

/// @brief Method CheckAccess addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T CheckAccess(::ArrayW<T> list, ::UnityEngine::UIElements::StyleValueType type, ::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method OnEnable addr 0x2cf3f00 size 0x4 virtual true final false
 void OnEnable() ;

/// @brief Method FlattenImportedStyleSheetsRecursive addr 0x2cf4618 size 0x7c virtual false final false
 void FlattenImportedStyleSheetsRecursive() ;

/// @brief Method FlattenImportedStyleSheetsRecursive addr 0x2cf4694 size 0x148 virtual false final false
 void FlattenImportedStyleSheetsRecursive(::UnityEngine::UIElements::StyleSheet sheet) ;

/// @brief Method SetupReferences addr 0x2cf40a8 size 0x540 virtual false final false
 void SetupReferences() ;

/// @brief Method ReadKeyword addr 0x2cf48a0 size 0x8 virtual false final false
 ::UnityEngine::UIElements::StyleValueKeyword ReadKeyword(::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method ReadFloat addr 0x2cf38a4 size 0xd4 virtual false final false
 float_t ReadFloat(::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method TryReadFloat addr 0x2cf48a8 size 0xf4 virtual false final false
 bool TryReadFloat(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<float_t> value) ;

/// @brief Method ReadDimension addr 0x2cf499c size 0xf0 virtual false final false
 ::UnityEngine::UIElements::StyleSheets::Dimension ReadDimension(::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method TryReadDimension addr 0x2cf4a8c size 0x11c virtual false final false
 bool TryReadDimension(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::UnityEngine::UIElements::StyleSheets::Dimension> value) ;

/// @brief Method ReadColor addr 0x2cf4ba8 size 0x84 virtual false final false
 ::UnityEngine::Color ReadColor(::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method TryReadColor addr 0x2cf4c2c size 0x8c virtual false final false
 bool TryReadColor(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::UnityEngine::Color> value) ;

/// @brief Method ReadString addr 0x2cf4cb8 size 0x84 virtual false final false
 ::StringW ReadString(::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method TryReadString addr 0x2cf4d3c size 0x8c virtual false final false
 bool TryReadString(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::StringW> value) ;

/// @brief Method ReadEnum addr 0x2cf4dc8 size 0x84 virtual false final false
 ::StringW ReadEnum(::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method TryReadEnum addr 0x2cf4e4c size 0x8c virtual false final false
 bool TryReadEnum(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::StringW> value) ;

/// @brief Method ReadVariable addr 0x2cf3978 size 0x84 virtual false final false
 ::StringW ReadVariable(::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method TryReadVariable addr 0x2cf4ed8 size 0x8c virtual false final false
 bool TryReadVariable(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::StringW> value) ;

/// @brief Method ReadResourcePath addr 0x2cf4f64 size 0x84 virtual false final false
 ::StringW ReadResourcePath(::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method TryReadResourcePath addr 0x2cf4fe8 size 0x8c virtual false final false
 bool TryReadResourcePath(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::StringW> value) ;

/// @brief Method ReadAssetReference addr 0x2cf5074 size 0x84 virtual false final false
 ::UnityEngine::Object ReadAssetReference(::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method ReadMissingAssetReferenceUrl addr 0x2cf50f8 size 0x84 virtual false final false
 ::StringW ReadMissingAssetReferenceUrl(::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method TryReadAssetReference addr 0x2cf517c size 0x8c virtual false final false
 bool TryReadAssetReference(::UnityEngine::UIElements::StyleValueHandle handle, ByRef<::UnityEngine::Object> value) ;

/// @brief Method ReadFunction addr 0x2cf5208 size 0x8 virtual false final false
 ::UnityEngine::UIElements::StyleValueFunction ReadFunction(::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method ReadFunctionName addr 0x2cf5210 size 0x154 virtual false final false
 ::StringW ReadFunctionName(::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method ReadScalableImage addr 0x2cf5364 size 0x84 virtual false final false
 ::UnityEngine::UIElements::StyleSheets::ScalableImage ReadScalableImage(::UnityEngine::UIElements::StyleValueHandle handle) ;

/// @brief Method CustomStartsWith addr 0x2cf47dc size 0xc4 virtual false final false
static bool CustomStartsWith(::StringW originalString, ::StringW pattern) ;

// Ctor Parameters []
explicit StyleSheet() ;

/// @brief Method .ctor addr 0x2cf3f5c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::StyleSheet);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::StyleSheet, "UnityEngine.UIElements", "StyleSheet");
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__StyleSheet__ImportStruct, "UnityEngine.UIElements", "StyleSheet/ImportStruct");
