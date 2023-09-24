#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__EmissionModule;
}
// Forward declare root types
namespace GlobalNamespace {
class EnableEmmisionOnVisible;
}
// Type: ::EnableEmmisionOnVisible
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13792))
// CS Name: EnableEmmisionOnVisible
class CORDL_TYPE EnableEmmisionOnVisible : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~EnableEmmisionOnVisible() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnableEmmisionOnVisible", modifiers: " const&", def_value: None }]
constexpr EnableEmmisionOnVisible(EnableEmmisionOnVisible const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnableEmmisionOnVisible", modifiers: "&&", def_value: None }]
constexpr EnableEmmisionOnVisible(EnableEmmisionOnVisible&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnableEmmisionOnVisible(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EnableEmmisionOnVisible& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnableEmmisionOnVisible& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnableEmmisionOnVisible& operator=(EnableEmmisionOnVisible&& o) noexcept = default;
  constexpr EnableEmmisionOnVisible& operator=(EnableEmmisionOnVisible const& o) noexcept = default;
                


// Fields

 ::ArrayW<UnityEngine::ParticleSystem> __declspec(property(get=__get__particleSystems, put=__set__particleSystems))  _particleSystems;

constexpr void __set__particleSystems(::ArrayW<UnityEngine::ParticleSystem> value) ;

constexpr ::ArrayW<UnityEngine::ParticleSystem> __get__particleSystems() const;

 ::ArrayW<UnityEngine::UnityEngine__ParticleSystem__EmissionModule> __declspec(property(get=__get__emmisionModules, put=__set__emmisionModules))  _emmisionModules;

constexpr void __set__emmisionModules(::ArrayW<UnityEngine::UnityEngine__ParticleSystem__EmissionModule> value) ;

constexpr ::ArrayW<UnityEngine::UnityEngine__ParticleSystem__EmissionModule> __get__emmisionModules() const;


// Methods

/// @brief Method Awake addr 0x1f76a90 size 0xe8 virtual false final false
 void Awake() ;

/// @brief Method OnBecameVisible addr 0x1f76b78 size 0x74 virtual false final false
 void OnBecameVisible() ;

/// @brief Method OnBecameInvisible addr 0x1f76bec size 0x74 virtual false final false
 void OnBecameInvisible() ;

static GlobalNamespace::EnableEmmisionOnVisible New_ctor() ;

/// @brief Method .ctor addr 0x1f76c60 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EnableEmmisionOnVisible);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EnableEmmisionOnVisible, "", "EnableEmmisionOnVisible");
