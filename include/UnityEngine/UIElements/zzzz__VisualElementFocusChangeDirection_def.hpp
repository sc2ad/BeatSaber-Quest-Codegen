#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class FocusChangeDirection;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementFocusChangeDirection;
}
// Type: UnityEngine.UIElements::VisualElementFocusChangeDirection
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6967))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6878))
// CS Name: UnityEngine.UIElements.VisualElementFocusChangeDirection
class CORDL_TYPE VisualElementFocusChangeDirection : public UnityEngine::UIElements::FocusChangeDirection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~VisualElementFocusChangeDirection() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeDirection", modifiers: " const&", def_value: None }]
constexpr VisualElementFocusChangeDirection(VisualElementFocusChangeDirection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeDirection", modifiers: "&&", def_value: None }]
constexpr VisualElementFocusChangeDirection(VisualElementFocusChangeDirection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualElementFocusChangeDirection(void* ptr) noexcept : UnityEngine::UIElements::FocusChangeDirection(ptr) {
}


  constexpr VisualElementFocusChangeDirection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualElementFocusChangeDirection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualElementFocusChangeDirection& operator=(VisualElementFocusChangeDirection&& o) noexcept = default;
  constexpr VisualElementFocusChangeDirection& operator=(VisualElementFocusChangeDirection const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::VisualElementFocusChangeDirection __declspec(property(get=__get_s_Left, put=__set_s_Left))  s_Left;

static void __set_s_Left(UnityEngine::UIElements::VisualElementFocusChangeDirection value) ;

static UnityEngine::UIElements::VisualElementFocusChangeDirection __get_s_Left() ;

static UnityEngine::UIElements::VisualElementFocusChangeDirection __declspec(property(get=__get_s_Right, put=__set_s_Right))  s_Right;

static void __set_s_Right(UnityEngine::UIElements::VisualElementFocusChangeDirection value) ;

static UnityEngine::UIElements::VisualElementFocusChangeDirection __get_s_Right() ;


// Properties

static UnityEngine::UIElements::FocusChangeDirection __declspec(property(get=get_left))  left;

static UnityEngine::UIElements::FocusChangeDirection __declspec(property(get=get_right))  right;


// Methods

/// @brief Method get_left addr 0x2c424ec size 0x58 virtual false final false
static UnityEngine::UIElements::FocusChangeDirection get_left() ;

/// @brief Method get_right addr 0x2c42544 size 0x58 virtual false final false
static UnityEngine::UIElements::FocusChangeDirection get_right() ;

static UnityEngine::UIElements::VisualElementFocusChangeDirection New_ctor(int32_t value) ;

/// @brief Method .ctor addr 0x2c4259c size 0x68 virtual false final false
 void _ctor(int32_t value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::VisualElementFocusChangeDirection);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VisualElementFocusChangeDirection, "UnityEngine.UIElements", "VisualElementFocusChangeDirection");
