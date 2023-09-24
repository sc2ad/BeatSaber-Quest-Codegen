#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__PersistentScriptableObject_def.hpp"
namespace UnityEngine {
struct Color;
}
// Forward declare root types
namespace GlobalNamespace {
class ColorSO;
}
// Type: ::ColorSO
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13816))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16038))
// CS Name: ColorSO
class CORDL_TYPE ColorSO : public GlobalNamespace::PersistentScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ColorSO() = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSO", modifiers: " const&", def_value: None }]
constexpr ColorSO(ColorSO const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ColorSO", modifiers: "&&", def_value: None }]
constexpr ColorSO(ColorSO&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ColorSO(void* ptr) noexcept : GlobalNamespace::PersistentScriptableObject(ptr) {
}


  constexpr ColorSO& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ColorSO& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ColorSO& operator=(ColorSO&& o) noexcept = default;
  constexpr ColorSO& operator=(ColorSO const& o) noexcept = default;
                


// Properties

 UnityEngine::Color __declspec(property(get=get_color))  color;


// Methods

/// @brief Method get_color addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Color get_color() ;

/// @brief Method op_Implicit addr 0x11a35b4 size 0x8c virtual false final false
static UnityEngine::Color op_Implicit_UnityEngine__Color(GlobalNamespace::ColorSO c) ;

static GlobalNamespace::ColorSO New_ctor() ;

/// @brief Method .ctor addr 0x11a3640 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::ColorSO);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::ColorSO, "", "ColorSO");
