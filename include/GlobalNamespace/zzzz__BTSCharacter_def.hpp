#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace GlobalNamespace {
class BTSCharacterMaterialSwitcher;
}
namespace UnityEngine {
class Animator;
}
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
class AnimationClip;
}
// Forward declare root types
namespace GlobalNamespace {
class BTSCharacter;
}
// Type: ::BTSCharacter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3947))
// CS Name: BTSCharacter
class CORDL_TYPE BTSCharacter : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~BTSCharacter() = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacter", modifiers: " const&", def_value: None }]
constexpr BTSCharacter(BTSCharacter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BTSCharacter", modifiers: "&&", def_value: None }]
constexpr BTSCharacter(BTSCharacter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BTSCharacter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BTSCharacter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BTSCharacter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BTSCharacter& operator=(BTSCharacter&& o) noexcept = default;
  constexpr BTSCharacter& operator=(BTSCharacter const& o) noexcept = default;
                


// Fields

 ::StringW __declspec(property(get=__get__characterName, put=__set__characterName))  _characterName;

constexpr void __set__characterName(::StringW value) ;

constexpr ::StringW __get__characterName() const;

 UnityEngine::Animator __declspec(property(get=__get__animator, put=__set__animator))  _animator;

constexpr void __set__animator(UnityEngine::Animator value) ;

constexpr UnityEngine::Animator __get__animator() const;

 GlobalNamespace::BTSCharacterMaterialSwitcher __declspec(property(get=__get__btsCharacterMaterialSwitcher, put=__set__btsCharacterMaterialSwitcher))  _btsCharacterMaterialSwitcher;

constexpr void __set__btsCharacterMaterialSwitcher(GlobalNamespace::BTSCharacterMaterialSwitcher value) ;

constexpr GlobalNamespace::BTSCharacterMaterialSwitcher __get__btsCharacterMaterialSwitcher() const;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;

 UnityEngine::Transform __declspec(property(get=__get__headTransform, put=__set__headTransform))  _headTransform;

constexpr void __set__headTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__headTransform() const;


// Properties

 ::StringW __declspec(property(get=get_characterName))  characterName;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=get_materialPropertyBlockController))  materialPropertyBlockController;

 UnityEngine::Animator __declspec(property(get=get_animator))  animator;

 UnityEngine::Transform __declspec(property(get=get_headTransform))  headTransform;


// Methods

/// @brief Method get_characterName addr 0x20a6dbc size 0x8 virtual false final false
 ::StringW get_characterName() ;

/// @brief Method get_materialPropertyBlockController addr 0x20a6dc4 size 0x8 virtual false final false
 GlobalNamespace::MaterialPropertyBlockController get_materialPropertyBlockController() ;

/// @brief Method get_animator addr 0x20a6dcc size 0x8 virtual false final false
 UnityEngine::Animator get_animator() ;

/// @brief Method get_headTransform addr 0x20a6dd4 size 0x8 virtual false final false
 UnityEngine::Transform get_headTransform() ;

/// @brief Method SetAlternativeAnimationAndMaterial addr 0x20a6ddc size 0x1f4 virtual false final false
 void SetAlternativeAnimationAndMaterial(UnityEngine::AnimationClip animation, bool alternativeMaterialOn) ;

// Ctor Parameters []
explicit BTSCharacter() ;

/// @brief Method .ctor addr 0x20a7224 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BTSCharacter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BTSCharacter, "", "BTSCharacter");
