#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/zzzz__FocusChangeDirection_def.hpp"
namespace UnityEngine::UIElements {
class FocusController;
}
namespace UnityEngine::UIElements {
class Focusable;
}
namespace UnityEngine::UIElements {
template<typename T>
class ObjectPool_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualElementFocusChangeTarget;
}
// Type: UnityEngine.UIElements::VisualElementFocusChangeTarget
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(6967))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6879))
// CS Name: UnityEngine.UIElements.VisualElementFocusChangeTarget
class CORDL_TYPE VisualElementFocusChangeTarget : public UnityEngine::UIElements::FocusChangeDirection {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~VisualElementFocusChangeTarget() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeTarget", modifiers: " const&", def_value: None }]
constexpr VisualElementFocusChangeTarget(VisualElementFocusChangeTarget const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualElementFocusChangeTarget", modifiers: "&&", def_value: None }]
constexpr VisualElementFocusChangeTarget(VisualElementFocusChangeTarget&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualElementFocusChangeTarget(void* ptr) noexcept : UnityEngine::UIElements::FocusChangeDirection(ptr) {
}


  constexpr VisualElementFocusChangeTarget& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualElementFocusChangeTarget& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualElementFocusChangeTarget& operator=(VisualElementFocusChangeTarget&& o) noexcept = default;
  constexpr VisualElementFocusChangeTarget& operator=(VisualElementFocusChangeTarget const& o) noexcept = default;
                


// Fields

static UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::VisualElementFocusChangeTarget> __declspec(property(get=__get_Pool, put=__set_Pool))  Pool;

static void __set_Pool(UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::VisualElementFocusChangeTarget> value) ;

static UnityEngine::UIElements::ObjectPool_1<UnityEngine::UIElements::VisualElementFocusChangeTarget> __get_Pool() ;

 UnityEngine::UIElements::Focusable __declspec(property(get=__get__target_k__BackingField, put=__set__target_k__BackingField))  _target_k__BackingField;

constexpr void __set__target_k__BackingField(UnityEngine::UIElements::Focusable value) ;

constexpr UnityEngine::UIElements::Focusable __get__target_k__BackingField() const;


// Properties

 UnityEngine::UIElements::Focusable __declspec(property(get=get_target, put=set_target))  target;


// Methods

/// @brief Method GetPooled addr 0x2c4274c size 0x88 virtual false final false
static UnityEngine::UIElements::VisualElementFocusChangeTarget GetPooled(UnityEngine::UIElements::Focusable target) ;

/// @brief Method Dispose addr 0x2c427d4 size 0x84 virtual true final false
 void Dispose() ;

/// @brief Method ApplyTo addr 0x2c42858 size 0x24 virtual true final false
 void ApplyTo(UnityEngine::UIElements::FocusController focusController, UnityEngine::UIElements::Focusable f) ;

// Ctor Parameters []
explicit VisualElementFocusChangeTarget() ;

/// @brief Method .ctor addr 0x2c4287c size 0xa0 virtual false final false
 void _ctor() ;

/// @brief Method get_target addr 0x2c4291c size 0x8 virtual false final false
 UnityEngine::UIElements::Focusable get_target() ;

/// @brief Method set_target addr 0x2c42924 size 0x8 virtual false final false
 void set_target(UnityEngine::UIElements::Focusable value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::VisualElementFocusChangeTarget);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VisualElementFocusChangeTarget, "UnityEngine.UIElements", "VisualElementFocusChangeTarget");
