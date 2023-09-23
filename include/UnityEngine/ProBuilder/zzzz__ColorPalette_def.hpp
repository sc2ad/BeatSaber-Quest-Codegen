#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include <cstdint>
namespace UnityEngine::ProBuilder {
class IHasDefault;
}
namespace UnityEngine {
struct Color;
}
namespace System::Collections::ObjectModel {
template<typename T>
class ReadOnlyCollection_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class ColorPalette;
}
// Type: UnityEngine.ProBuilder::ColorPalette
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12054))
// CS Name: UnityEngine.ProBuilder.ColorPalette
class CORDL_TYPE ColorPalette : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ProBuilder::IHasDefault
constexpr operator  UnityEngine::ProBuilder::IHasDefault() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ColorPalette() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorPalette", modifiers: " const&", def_value: None }]
constexpr ColorPalette(ColorPalette const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorPalette", modifiers: "&&", def_value: None }]
constexpr ColorPalette(ColorPalette&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorPalette(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr ColorPalette& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorPalette& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorPalette& operator=(ColorPalette&& o) noexcept = default;
  constexpr ColorPalette& operator=(ColorPalette const& o) noexcept = default;
                


// Fields

 UnityEngine::Color __declspec(property(get=__get__current_k__BackingField, put=__set__current_k__BackingField))  _current_k__BackingField;

constexpr void __set__current_k__BackingField(UnityEngine::Color value) ;

constexpr UnityEngine::Color __get__current_k__BackingField() const;

 System::Collections::Generic::List_1<UnityEngine::Color> __declspec(property(get=__get_m_Colors, put=__set_m_Colors))  m_Colors;

constexpr void __set_m_Colors(System::Collections::Generic::List_1<UnityEngine::Color> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Color> __get_m_Colors() const;


// Properties

 UnityEngine::Color __declspec(property(get=get_current, put=set_current))  current;

 System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Color> __declspec(property(get=get_colors))  colors;

 UnityEngine::Color __declspec(property(get=get_Item, put=set_Item))  Item;

 int32_t __declspec(property(get=get_Count))  Count;


// Methods

/// @brief Method get_current addr 0x29a8e74 size 0xc virtual false final false
 UnityEngine::Color get_current() ;

/// @brief Method set_current addr 0x29a8e80 size 0xc virtual false final false
 void set_current(UnityEngine::Color value) ;

/// @brief Method get_colors addr 0x29a8e8c size 0x7c virtual false final false
 System::Collections::ObjectModel::ReadOnlyCollection_1<UnityEngine::Color> get_colors() ;

/// @brief Method SetColors addr 0x29a8f08 size 0xa4 virtual false final false
 void SetColors(System::Collections::Generic::IEnumerable_1<UnityEngine::Color> colors) ;

/// @brief Method SetDefaultValues addr 0x29a8fac size 0x7c8 virtual true final true
 void SetDefaultValues() ;

/// @brief Method get_Item addr 0x29a9774 size 0x58 virtual false final false
 UnityEngine::Color get_Item(int32_t i) ;

/// @brief Method set_Item addr 0x29a97cc size 0x88 virtual false final false
 void set_Item(int32_t i, UnityEngine::Color value) ;

/// @brief Method get_Count addr 0x29a9854 size 0x48 virtual false final false
 int32_t get_Count() ;

// Ctor Parameters []
explicit ColorPalette() ;

/// @brief Method .ctor addr 0x29a989c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
NEED_NO_BOX(UnityEngine::ProBuilder::ColorPalette);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ProBuilder::ColorPalette, "UnityEngine.ProBuilder", "ColorPalette");
