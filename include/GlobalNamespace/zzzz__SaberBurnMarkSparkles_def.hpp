#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
struct Vector3;
}
namespace GlobalNamespace {
class Saber;
}
namespace UnityEngine {
struct Plane;
}
namespace GlobalNamespace {
class ColorManager;
}
namespace GlobalNamespace {
class SaberManager;
}
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
class BoxCollider;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__EmitParams;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__EmissionModule;
}
// Forward declare root types
namespace GlobalNamespace {
class SaberBurnMarkSparkles;
}
// Type: ::SaberBurnMarkSparkles
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4988))
// CS Name: SaberBurnMarkSparkles
class CORDL_TYPE SaberBurnMarkSparkles : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x108};

virtual ~SaberBurnMarkSparkles() = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberBurnMarkSparkles", modifiers: " const&", def_value: None }]
constexpr SaberBurnMarkSparkles(SaberBurnMarkSparkles const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SaberBurnMarkSparkles", modifiers: "&&", def_value: None }]
constexpr SaberBurnMarkSparkles(SaberBurnMarkSparkles&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SaberBurnMarkSparkles(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SaberBurnMarkSparkles& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SaberBurnMarkSparkles& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SaberBurnMarkSparkles& operator=(SaberBurnMarkSparkles&& o) noexcept = default;
  constexpr SaberBurnMarkSparkles& operator=(SaberBurnMarkSparkles const& o) noexcept = default;
                


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get__sparklesPS, put=__set__sparklesPS))  _sparklesPS;

constexpr void __set__sparklesPS(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__sparklesPS() const;

 UnityEngine::ParticleSystem __declspec(property(get=__get__burnMarksPSPrefab, put=__set__burnMarksPSPrefab))  _burnMarksPSPrefab;

constexpr void __set__burnMarksPSPrefab(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__burnMarksPSPrefab() const;

 UnityEngine::BoxCollider __declspec(property(get=__get__boxCollider, put=__set__boxCollider))  _boxCollider;

constexpr void __set__boxCollider(UnityEngine::BoxCollider value) ;

constexpr UnityEngine::BoxCollider __get__boxCollider() const;

 GlobalNamespace::ColorManager __declspec(property(get=__get__colorManager, put=__set__colorManager))  _colorManager;

constexpr void __set__colorManager(GlobalNamespace::ColorManager value) ;

constexpr GlobalNamespace::ColorManager __get__colorManager() const;

 GlobalNamespace::SaberManager __declspec(property(get=__get__saberManager, put=__set__saberManager))  _saberManager;

constexpr void __set__saberManager(GlobalNamespace::SaberManager value) ;

constexpr GlobalNamespace::SaberManager __get__saberManager() const;

 ::ArrayW<GlobalNamespace::Saber> __declspec(property(get=__get__sabers, put=__set__sabers))  _sabers;

constexpr void __set__sabers(::ArrayW<GlobalNamespace::Saber> value) ;

constexpr ::ArrayW<GlobalNamespace::Saber> __get__sabers() const;

 UnityEngine::Plane __declspec(property(get=__get__plane, put=__set__plane))  _plane;

constexpr void __set__plane(UnityEngine::Plane value) ;

constexpr UnityEngine::Plane __get__plane() const;

 ::ArrayW<UnityEngine::Vector3> __declspec(property(get=__get__prevBurnMarkPos, put=__set__prevBurnMarkPos))  _prevBurnMarkPos;

constexpr void __set__prevBurnMarkPos(::ArrayW<UnityEngine::Vector3> value) ;

constexpr ::ArrayW<UnityEngine::Vector3> __get__prevBurnMarkPos() const;

 ::ArrayW<bool> __declspec(property(get=__get__prevBurnMarkPosValid, put=__set__prevBurnMarkPosValid))  _prevBurnMarkPosValid;

constexpr void __set__prevBurnMarkPosValid(::ArrayW<bool> value) ;

constexpr ::ArrayW<bool> __get__prevBurnMarkPosValid() const;

 ::ArrayW<UnityEngine::ParticleSystem> __declspec(property(get=__get__burnMarksPS, put=__set__burnMarksPS))  _burnMarksPS;

constexpr void __set__burnMarksPS(::ArrayW<UnityEngine::ParticleSystem> value) ;

constexpr ::ArrayW<UnityEngine::ParticleSystem> __get__burnMarksPS() const;

 ::ArrayW<UnityEngine::UnityEngine__ParticleSystem__EmissionModule> __declspec(property(get=__get__burnMarksEmissionModules, put=__set__burnMarksEmissionModules))  _burnMarksEmissionModules;

constexpr void __set__burnMarksEmissionModules(::ArrayW<UnityEngine::UnityEngine__ParticleSystem__EmissionModule> value) ;

constexpr ::ArrayW<UnityEngine::UnityEngine__ParticleSystem__EmissionModule> __get__burnMarksEmissionModules() const;

 UnityEngine::UnityEngine__ParticleSystem__EmitParams __declspec(property(get=__get__sparklesEmitParams, put=__set__sparklesEmitParams))  _sparklesEmitParams;

constexpr void __set__sparklesEmitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams __get__sparklesEmitParams() const;


// Methods

/// @brief Method Start addr 0x22546c0 size 0x494 virtual false final false
 void Start() ;

/// @brief Method OnDestroy addr 0x2254b54 size 0xe8 virtual false final false
 void OnDestroy() ;

/// @brief Method OnEnable addr 0x2254c3c size 0xd4 virtual false final false
 void OnEnable() ;

/// @brief Method OnDisable addr 0x2254d10 size 0xd4 virtual false final false
 void OnDisable() ;

/// @brief Method GetBurnMarkPos addr 0x2254de4 size 0x20c virtual false final false
 bool GetBurnMarkPos(UnityEngine::Vector3 bladeBottomPos, UnityEngine::Vector3 bladeTopPos, ByRef<UnityEngine::Vector3> burnMarkPos) ;

/// @brief Method LateUpdate addr 0x2254ff0 size 0x6a0 virtual false final false
 void LateUpdate() ;

static GlobalNamespace::SaberBurnMarkSparkles New_ctor() ;

/// @brief Method .ctor addr 0x2255690 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SaberBurnMarkSparkles);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SaberBurnMarkSparkles, "", "SaberBurnMarkSparkles");
