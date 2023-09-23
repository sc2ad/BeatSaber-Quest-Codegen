#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UI/zzzz__Graphic_def.hpp"
#include <cmath>
namespace UnityEngine::UI {
class VertexHelper;
}
// Forward declare root types
namespace HMUI {
class EmptyBoxGraphic;
}
// Type: HMUI::EmptyBoxGraphic
namespace HMUI {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(12981))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13618))
// CS Name: HMUI.EmptyBoxGraphic
class CORDL_TYPE EmptyBoxGraphic : public UnityEngine::UI::Graphic {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~EmptyBoxGraphic() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyBoxGraphic", modifiers: " const&", def_value: None }]
constexpr EmptyBoxGraphic(EmptyBoxGraphic const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmptyBoxGraphic", modifiers: "&&", def_value: None }]
constexpr EmptyBoxGraphic(EmptyBoxGraphic&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmptyBoxGraphic(void* ptr) noexcept : UnityEngine::UI::Graphic(ptr) {
}


  constexpr EmptyBoxGraphic& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmptyBoxGraphic& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmptyBoxGraphic& operator=(EmptyBoxGraphic&& o) noexcept = default;
  constexpr EmptyBoxGraphic& operator=(EmptyBoxGraphic const& o) noexcept = default;
                


// Fields

 float_t __declspec(property(get=__get__depth, put=__set__depth))  _depth;

constexpr void __set__depth(float_t value) ;

constexpr float_t __get__depth() const;


// Methods

/// @brief Method OnPopulateMesh addr 0x1fb1ad4 size 0x5b8 virtual true final false
 void OnPopulateMesh(UnityEngine::UI::VertexHelper vh) ;

/// @brief Method OnDrawGizmosSelected addr 0x1fb208c size 0x18c virtual false final false
 void OnDrawGizmosSelected() ;

// Ctor Parameters []
explicit EmptyBoxGraphic() ;

/// @brief Method .ctor addr 0x1fb2218 size 0x60 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HMUI
NEED_NO_BOX(HMUI::EmptyBoxGraphic);
DEFINE_IL2CPP_ARG_TYPE(HMUI::EmptyBoxGraphic, "HMUI", "EmptyBoxGraphic");
