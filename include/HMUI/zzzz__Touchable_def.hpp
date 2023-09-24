#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include <cmath>
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace HMUI {
class Touchable;
}
// Type: HMUI::Touchable
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12981))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13619))
// CS Name: HMUI.Touchable
class CORDL_TYPE Touchable : public UnityEngine::UI::Graphic {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~Touchable() = default;

// Ctor Parameters [CppParam { name: "", ty: "Touchable", modifiers: " const&", def_value: None }]
constexpr Touchable(Touchable const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Touchable", modifiers: "&&", def_value: None }]
constexpr Touchable(Touchable&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Touchable(void* ptr) noexcept : UnityEngine::UI::Graphic(ptr) {
}


  constexpr Touchable& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Touchable& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Touchable& operator=(Touchable&& o) noexcept = default;
  constexpr Touchable& operator=(Touchable const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__skew, put=__set__skew))  _skew;

constexpr void __set__skew(float_t value) ;

constexpr float_t __get__skew() const;


// Properties

 float_t __declspec(property(get=get_skew))  skew;


// Methods

/// @brief Method get_skew addr 0x1fb2278 size 0x8 virtual false final false
 float_t get_skew() ;

/// @brief Method OnPopulateMesh addr 0x1fb2280 size 0x18 virtual true final false
 void OnPopulateMesh(UnityEngine::UI::VertexHelper vh) ;

static HMUI::Touchable New_ctor() ;

/// @brief Method .ctor addr 0x1fb1a7c size 0x58 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::Touchable);
DEFINE_IL2CPP_ARG_TYPE(HMUI::Touchable, "HMUI", "Touchable");
