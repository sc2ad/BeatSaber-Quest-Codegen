#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class MaterialPropertyBlockColorSetter;
}
namespace UnityEngine {
class GameObject;
}
namespace GlobalNamespace {
class MaterialPropertyBlockFloatAnimator;
}
namespace GlobalNamespace {
class BTSCharacter;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacterResultAnimationController;
}
// Type: ::BTSCharacterResultAnimationController
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3954))
// CS Name: BTSCharacterResultAnimationController
class CORDL_TYPE BTSCharacterResultAnimationController : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~BTSCharacterResultAnimationController() = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterResultAnimationController", modifiers: " const&", def_value: None }]
constexpr BTSCharacterResultAnimationController(BTSCharacterResultAnimationController const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacterResultAnimationController", modifiers: "&&", def_value: None }]
constexpr BTSCharacterResultAnimationController(BTSCharacterResultAnimationController&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BTSCharacterResultAnimationController(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BTSCharacterResultAnimationController& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BTSCharacterResultAnimationController& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BTSCharacterResultAnimationController& operator=(BTSCharacterResultAnimationController&& o) noexcept = default;
  constexpr BTSCharacterResultAnimationController& operator=(BTSCharacterResultAnimationController const& o) noexcept = default;
                


// Fields

 GlobalNamespace::MaterialPropertyBlockColorSetter __declspec(property(get=__get__rimLightColorSetter, put=__set__rimLightColorSetter))  _rimLightColorSetter;

constexpr void __set__rimLightColorSetter(GlobalNamespace::MaterialPropertyBlockColorSetter value) ;

constexpr GlobalNamespace::MaterialPropertyBlockColorSetter __get__rimLightColorSetter() const;

 GlobalNamespace::MaterialPropertyBlockFloatAnimator __declspec(property(get=__get__rimLightIntensityAnimator, put=__set__rimLightIntensityAnimator))  _rimLightIntensityAnimator;

constexpr void __set__rimLightIntensityAnimator(GlobalNamespace::MaterialPropertyBlockFloatAnimator value) ;

constexpr GlobalNamespace::MaterialPropertyBlockFloatAnimator __get__rimLightIntensityAnimator() const;

 GlobalNamespace::MaterialPropertyBlockFloatAnimator __declspec(property(get=__get__rimLightEdgeStartAnimator, put=__set__rimLightEdgeStartAnimator))  _rimLightEdgeStartAnimator;

constexpr void __set__rimLightEdgeStartAnimator(GlobalNamespace::MaterialPropertyBlockFloatAnimator value) ;

constexpr GlobalNamespace::MaterialPropertyBlockFloatAnimator __get__rimLightEdgeStartAnimator() const;

 UnityEngine::GameObject __declspec(property(get=__get__collidersGameObject, put=__set__collidersGameObject))  _collidersGameObject;

constexpr void __set__collidersGameObject(UnityEngine::GameObject value) ;

constexpr UnityEngine::GameObject __get__collidersGameObject() const;


// Methods

/// @brief Method SetCharacter addr 0x20a7324 size 0x68 virtual false final false
 void SetCharacter(GlobalNamespace::BTSCharacter btsCharacter) ;

/// @brief Method StopAnimation addr 0x20a738c size 0x20 virtual false final false
 void StopAnimation() ;

// Ctor Parameters []
explicit BTSCharacterResultAnimationController() ;

/// @brief Method .ctor addr 0x20a73ac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BTSCharacterResultAnimationController);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacterResultAnimationController, "", "BTSCharacterResultAnimationController");
