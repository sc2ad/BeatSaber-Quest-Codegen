#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Behaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class Camera;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class ICanvasRaycastFilter;
}
// Forward declare root types
namespace UnityEngine {
class CanvasGroup;
}
// Type: UnityEngine::CanvasGroup
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10129))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15764))
// CS Name: UnityEngine.CanvasGroup
class CORDL_TYPE CanvasGroup : public ::UnityEngine::Behaviour {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::ICanvasRaycastFilter
constexpr operator  ::UnityEngine::ICanvasRaycastFilter() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~CanvasGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasGroup", modifiers: " const&", def_value: None }]
constexpr CanvasGroup(CanvasGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CanvasGroup", modifiers: "&&", def_value: None }]
constexpr CanvasGroup(CanvasGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CanvasGroup(void* ptr) noexcept : ::UnityEngine::Behaviour(ptr) {
}


  constexpr CanvasGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CanvasGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CanvasGroup& operator=(CanvasGroup&& o) noexcept = default;
  constexpr CanvasGroup& operator=(CanvasGroup const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(get=get_alpha, put=set_alpha))  alpha;

 bool __declspec(property(get=get_interactable, put=set_interactable))  interactable;

 bool __declspec(property(get=get_blocksRaycasts, put=set_blocksRaycasts))  blocksRaycasts;

 bool __declspec(property(get=get_ignoreParentGroups, put=set_ignoreParentGroups))  ignoreParentGroups;


// Methods

/// @brief Method get_alpha addr 0x2d33200 size 0x3c virtual false final false
 float_t get_alpha() ;

/// @brief Method set_alpha addr 0x2d3323c size 0x4c virtual false final false
 void set_alpha(float_t value) ;

/// @brief Method get_interactable addr 0x2d33288 size 0x3c virtual false final false
 bool get_interactable() ;

/// @brief Method set_interactable addr 0x2d332c4 size 0x44 virtual false final false
 void set_interactable(bool value) ;

/// @brief Method get_blocksRaycasts addr 0x2d33308 size 0x3c virtual false final false
 bool get_blocksRaycasts() ;

/// @brief Method set_blocksRaycasts addr 0x2d33344 size 0x44 virtual false final false
 void set_blocksRaycasts(bool value) ;

/// @brief Method get_ignoreParentGroups addr 0x2d33388 size 0x3c virtual false final false
 bool get_ignoreParentGroups() ;

/// @brief Method set_ignoreParentGroups addr 0x2d333c4 size 0x44 virtual false final false
 void set_ignoreParentGroups(bool value) ;

/// @brief Method IsRaycastLocationValid addr 0x2d33408 size 0x3c virtual true final true
 bool IsRaycastLocationValid(::UnityEngine::Vector2 sp, ::UnityEngine::Camera eventCamera) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::CanvasGroup);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::CanvasGroup, "UnityEngine", "CanvasGroup");
