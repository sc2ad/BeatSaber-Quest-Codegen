#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "UnityEngine/zzzz__Sprite_def.hpp"
#include "UnityEngine/zzzz__Transform_def.hpp"
#include "Zenject/zzzz__MonoMemoryPool_4_def.hpp"
#include <cmath>
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class Animation;
}
namespace UnityEngine {
class SpriteRenderer;
}
namespace UnityEngine {
class Sprite;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSStarTextEffectController;
}
namespace GlobalNamespace {
class GlobalNamespace__BTSStarTextEffectController__Pool;
}
// Type: ::BTSStarTextEffectController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3964))
// CS Name: BTSStarTextEffectController
class CORDL_TYPE BTSStarTextEffectController : public UnityEngine::MonoBehaviour {
public:
// Declarations
using Pool = GlobalNamespace::GlobalNamespace__BTSStarTextEffectController__Pool;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BTSStarTextEffectController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectController", modifiers: " const&", def_value: None }]
constexpr BTSStarTextEffectController(BTSStarTextEffectController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSStarTextEffectController", modifiers: "&&", def_value: None }]
constexpr BTSStarTextEffectController(BTSStarTextEffectController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BTSStarTextEffectController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BTSStarTextEffectController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BTSStarTextEffectController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BTSStarTextEffectController& operator=(BTSStarTextEffectController&& o) noexcept = default;
  constexpr BTSStarTextEffectController& operator=(BTSStarTextEffectController const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;

 UnityEngine::SpriteRenderer __declspec(property(get=__get__spriteRenderer, put=__set__spriteRenderer))  _spriteRenderer;

constexpr void __set__spriteRenderer(UnityEngine::SpriteRenderer value) ;

constexpr UnityEngine::SpriteRenderer __get__spriteRenderer() const;

 UnityEngine::Animation __declspec(property(get=__get__animation, put=__set__animation))  _animation;

constexpr void __set__animation(UnityEngine::Animation value) ;

constexpr UnityEngine::Animation __get__animation() const;

/// @brief Field kAnimationName offset 0
static constexpr ::ConstString  kAnimationName{u"StarTextShort"};

 float_t __declspec(property(get=__get__currentAnimationDuration, put=__set__currentAnimationDuration))  _currentAnimationDuration;

constexpr void __set__currentAnimationDuration(float_t value) ;

constexpr float_t __get__currentAnimationDuration() const;


// Properties

 float_t __declspec(property(get=get_animationDuration))  animationDuration;


// Methods

/// @brief Method get_animationDuration addr 0x20aa8e4 size 0x8 virtual false final false
 float_t get_animationDuration() ;

/// @brief Method Reinitialize addr 0x20aa8ec size 0x108 virtual false final false
 void Reinitialize(UnityEngine::Sprite sprite, UnityEngine::Transform parentTransform, float_t desiredAnimationLength) ;

// Ctor Parameters []
explicit BTSStarTextEffectController() ;

/// @brief Method .ctor addr 0x20aa9f4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Pool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10995)), TypeDefinitionIndex(TypeDefinitionIndex(10217)), TypeDefinitionIndex(TypeDefinitionIndex(10227)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10995), inst: 3394 }), TypeDefinitionIndex(TypeDefinitionIndex(3964))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3963))
// CS Name: BTSStarTextEffectController::Pool
class CORDL_TYPE GlobalNamespace__BTSStarTextEffectController__Pool : public Zenject::MonoMemoryPool_4<UnityEngine::Sprite,UnityEngine::Transform,float_t,GlobalNamespace::BTSStarTextEffectController> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~GlobalNamespace__BTSStarTextEffectController__Pool() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BTSStarTextEffectController__Pool", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__BTSStarTextEffectController__Pool(GlobalNamespace__BTSStarTextEffectController__Pool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__BTSStarTextEffectController__Pool", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__BTSStarTextEffectController__Pool(GlobalNamespace__BTSStarTextEffectController__Pool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__BTSStarTextEffectController__Pool(void* ptr) noexcept : Zenject::MonoMemoryPool_4<UnityEngine::Sprite,UnityEngine::Transform,float_t,GlobalNamespace::BTSStarTextEffectController>(ptr) {
}


  constexpr GlobalNamespace__BTSStarTextEffectController__Pool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__BTSStarTextEffectController__Pool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__BTSStarTextEffectController__Pool& operator=(GlobalNamespace__BTSStarTextEffectController__Pool&& o) noexcept = default;
  constexpr GlobalNamespace__BTSStarTextEffectController__Pool& operator=(GlobalNamespace__BTSStarTextEffectController__Pool const& o) noexcept = default;
                


// Methods

/// @brief Method Reinitialize addr 0x20aa9fc size 0x14 virtual true final false
 void Reinitialize(UnityEngine::Sprite sprite, UnityEngine::Transform transform, float_t desiredAnimationLength, GlobalNamespace::BTSStarTextEffectController starTextEffectController) ;

// Ctor Parameters []
explicit GlobalNamespace__BTSStarTextEffectController__Pool() ;

/// @brief Method .ctor addr 0x20aaa10 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BTSStarTextEffectController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSStarTextEffectController, "", "BTSStarTextEffectController");
NEED_NO_BOX(GlobalNamespace::GlobalNamespace__BTSStarTextEffectController__Pool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::GlobalNamespace__BTSStarTextEffectController__Pool, "", "BTSStarTextEffectController/Pool");
