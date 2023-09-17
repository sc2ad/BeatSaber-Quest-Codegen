#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class SimpleShadowController;
}
// Type: ::SimpleShadowController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13833))
// CS Name: SimpleShadowController
class CORDL_TYPE SimpleShadowController : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~SimpleShadowController() = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleShadowController", modifiers: " const&", def_value: None }]
constexpr SimpleShadowController(SimpleShadowController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SimpleShadowController", modifiers: "&&", def_value: None }]
constexpr SimpleShadowController(SimpleShadowController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SimpleShadowController(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SimpleShadowController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SimpleShadowController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SimpleShadowController& operator=(SimpleShadowController&& o) noexcept = default;
  constexpr SimpleShadowController& operator=(SimpleShadowController const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get__followTransform, put=__set__followTransform))  _followTransform;

constexpr void __set__followTransform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__followTransform() const;

 ::UnityEngine::SpriteRenderer __declspec(property(get=__get__spriteRenderer, put=__set__spriteRenderer))  _spriteRenderer;

constexpr void __set__spriteRenderer(::UnityEngine::SpriteRenderer value) ;

constexpr ::UnityEngine::SpriteRenderer __get__spriteRenderer() const;

 float_t __declspec(property(get=__get__distanceScale, put=__set__distanceScale))  _distanceScale;

constexpr void __set__distanceScale(float_t value) ;

constexpr float_t __get__distanceScale() const;

 float_t __declspec(property(get=__get__scale, put=__set__scale))  _scale;

constexpr void __set__scale(float_t value) ;

constexpr float_t __get__scale() const;

 float_t __declspec(property(get=__get__alpha, put=__set__alpha))  _alpha;

constexpr void __set__alpha(float_t value) ;

constexpr float_t __get__alpha() const;

 float_t __declspec(property(get=__get__floorYPos, put=__set__floorYPos))  _floorYPos;

constexpr void __set__floorYPos(float_t value) ;

constexpr float_t __get__floorYPos() const;

 bool __declspec(property(get=__get__floorYPosLocal, put=__set__floorYPosLocal))  _floorYPosLocal;

constexpr void __set__floorYPosLocal(bool value) ;

constexpr bool __get__floorYPosLocal() const;

 ::UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__transform() const;


// Methods

/// @brief Method Start addr 0x1f7b5cc size 0x1c virtual false final false
 void Start() ;

/// @brief Method LateUpdate addr 0x1f7b5e8 size 0xf8 virtual false final false
 void LateUpdate() ;

// Ctor Parameters []
explicit SimpleShadowController() ;

/// @brief Method .ctor addr 0x1f7b6e0 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::SimpleShadowController);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::SimpleShadowController, "", "SimpleShadowController");
