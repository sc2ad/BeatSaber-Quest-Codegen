#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace GlobalNamespace {
class ColorSchemeSO;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSchemesListSO;
}
// Type: ::ColorSchemesListSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16036))
// CS Name: ColorSchemesListSO
class CORDL_TYPE ColorSchemesListSO : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~ColorSchemesListSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemesListSO", modifiers: " const&", def_value: None }]
constexpr ColorSchemesListSO(ColorSchemesListSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSchemesListSO", modifiers: "&&", def_value: None }]
constexpr ColorSchemesListSO(ColorSchemesListSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorSchemesListSO(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr ColorSchemesListSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorSchemesListSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorSchemesListSO& operator=(ColorSchemesListSO&& o) noexcept = default;
  constexpr ColorSchemesListSO& operator=(ColorSchemesListSO const& o) noexcept = default;
                


// Fields

 ::ArrayW<::GlobalNamespace::ColorSchemeSO> __declspec(property(get=__get__colorSchemes, put=__set__colorSchemes))  _colorSchemes;

constexpr void __set__colorSchemes(::ArrayW<::GlobalNamespace::ColorSchemeSO> value) ;

constexpr ::ArrayW<::GlobalNamespace::ColorSchemeSO> __get__colorSchemes() const;


// Properties

 ::ArrayW<::GlobalNamespace::ColorSchemeSO> __declspec(property(get=get_colorSchemes))  colorSchemes;


// Methods

/// @brief Method get_colorSchemes addr 0x11a32f0 size 0x8 virtual false final false
 ::ArrayW<::GlobalNamespace::ColorSchemeSO> get_colorSchemes() ;

// Ctor Parameters []
explicit ColorSchemesListSO() ;

/// @brief Method .ctor addr 0x11a32f8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ColorSchemesListSO);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ColorSchemesListSO, "", "ColorSchemesListSO");
