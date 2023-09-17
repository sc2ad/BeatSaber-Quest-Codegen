#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector2;
}
// Forward declare root types
namespace GlobalNamespace {
class ShadowFollowController;
}
// Type: ::ShadowFollowController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4106))
// CS Name: ShadowFollowController
class CORDL_TYPE ShadowFollowController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~ShadowFollowController() = default;

// Ctor Parameters [CppParam { name: "", ty: "ShadowFollowController", modifiers: " const&", def_value: None }]
constexpr ShadowFollowController(ShadowFollowController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ShadowFollowController", modifiers: "&&", def_value: None }]
constexpr ShadowFollowController(ShadowFollowController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ShadowFollowController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr ShadowFollowController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ShadowFollowController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ShadowFollowController& operator=(ShadowFollowController&& o) noexcept = default;
  constexpr ShadowFollowController& operator=(ShadowFollowController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get__shadowTransform, put=__set__shadowTransform))  _shadowTransform;

constexpr void __set__shadowTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__shadowTransform() const;

 ::UnityEngine::Transform __declspec(property(get=__get__targetTransform, put=__set__targetTransform))  _targetTransform;

constexpr void __set__targetTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__targetTransform() const;

 ::UnityEngine::SpriteRenderer __declspec(property(get=__get__shadowSpriteRenderer, put=__set__shadowSpriteRenderer))  _shadowSpriteRenderer;

constexpr void __set__shadowSpriteRenderer(::UnityEngine::SpriteRenderer value) ;

constexpr ::UnityEngine::SpriteRenderer __get__shadowSpriteRenderer() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__shadowHeightRange, put=__set__shadowHeightRange))  _shadowHeightRange;

constexpr void __set__shadowHeightRange(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__shadowHeightRange() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__shadowSizeRange, put=__set__shadowSizeRange))  _shadowSizeRange;

constexpr void __set__shadowSizeRange(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__shadowSizeRange() const;

 ::UnityEngine::Vector2 __declspec(property(get=__get__shadowAlphaRange, put=__set__shadowAlphaRange))  _shadowAlphaRange;

constexpr void __set__shadowAlphaRange(::UnityEngine::Vector2 value) ;

constexpr ::UnityEngine::Vector2 __get__shadowAlphaRange() const;


// Methods

/// @brief Method SetTargetTransform addr 0x20c5844 size 0x8 virtual false final false
 void SetTargetTransform(::UnityEngine::Transform target) ;

/// @brief Method Update addr 0x20c584c size 0xe0 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit ShadowFollowController() ;

/// @brief Method .ctor addr 0x20c592c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::ShadowFollowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::ShadowFollowController, "", "ShadowFollowController");
