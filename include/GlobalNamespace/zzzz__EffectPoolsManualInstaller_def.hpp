#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class BombCutSoundEffect;
}
namespace GlobalNamespace {
class FlyingSpriteEffect;
}
namespace GlobalNamespace {
class FlyingScoreEffect;
}
namespace GlobalNamespace {
class FlyingTextEffect;
}
namespace GlobalNamespace {
class BeatEffect;
}
namespace GlobalNamespace {
class NoteCutSoundEffect;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace GlobalNamespace {
class EffectPoolsManualInstaller;
}
// Type: ::EffectPoolsManualInstaller
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5477))
// CS Name: EffectPoolsManualInstaller
class CORDL_TYPE EffectPoolsManualInstaller : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~EffectPoolsManualInstaller() = default;

// Ctor Parameters [CppParam { name: "", ty: "EffectPoolsManualInstaller", modifiers: " const&", def_value: None }]
constexpr EffectPoolsManualInstaller(EffectPoolsManualInstaller const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EffectPoolsManualInstaller", modifiers: "&&", def_value: None }]
constexpr EffectPoolsManualInstaller(EffectPoolsManualInstaller&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EffectPoolsManualInstaller(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EffectPoolsManualInstaller& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EffectPoolsManualInstaller& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EffectPoolsManualInstaller& operator=(EffectPoolsManualInstaller&& o) noexcept = default;
  constexpr EffectPoolsManualInstaller& operator=(EffectPoolsManualInstaller const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::FlyingTextEffect __declspec(property(get=__get__flyingTextEffectPrefab, put=__set__flyingTextEffectPrefab))  _flyingTextEffectPrefab;

constexpr void __set__flyingTextEffectPrefab(::GlobalNamespace::FlyingTextEffect value) ;

constexpr ::GlobalNamespace::FlyingTextEffect __get__flyingTextEffectPrefab() const;

 ::GlobalNamespace::FlyingScoreEffect __declspec(property(get=__get__flyingScoreEffectPrefab, put=__set__flyingScoreEffectPrefab))  _flyingScoreEffectPrefab;

constexpr void __set__flyingScoreEffectPrefab(::GlobalNamespace::FlyingScoreEffect value) ;

constexpr ::GlobalNamespace::FlyingScoreEffect __get__flyingScoreEffectPrefab() const;

 ::GlobalNamespace::BeatEffect __declspec(property(get=__get__beatEffectPrefab, put=__set__beatEffectPrefab))  _beatEffectPrefab;

constexpr void __set__beatEffectPrefab(::GlobalNamespace::BeatEffect value) ;

constexpr ::GlobalNamespace::BeatEffect __get__beatEffectPrefab() const;

 ::GlobalNamespace::BeatEffect __declspec(property(get=__get__shortBeatEffectPrefab, put=__set__shortBeatEffectPrefab))  _shortBeatEffectPrefab;

constexpr void __set__shortBeatEffectPrefab(::GlobalNamespace::BeatEffect value) ;

constexpr ::GlobalNamespace::BeatEffect __get__shortBeatEffectPrefab() const;

 ::GlobalNamespace::NoteCutSoundEffect __declspec(property(get=__get__noteCutSoundEffectPrefab, put=__set__noteCutSoundEffectPrefab))  _noteCutSoundEffectPrefab;

constexpr void __set__noteCutSoundEffectPrefab(::GlobalNamespace::NoteCutSoundEffect value) ;

constexpr ::GlobalNamespace::NoteCutSoundEffect __get__noteCutSoundEffectPrefab() const;

 ::GlobalNamespace::BombCutSoundEffect __declspec(property(get=__get__bombCutSoundEffectPrefab, put=__set__bombCutSoundEffectPrefab))  _bombCutSoundEffectPrefab;

constexpr void __set__bombCutSoundEffectPrefab(::GlobalNamespace::BombCutSoundEffect value) ;

constexpr ::GlobalNamespace::BombCutSoundEffect __get__bombCutSoundEffectPrefab() const;

 ::GlobalNamespace::FlyingSpriteEffect __declspec(property(get=__get__flyingSpriteEffectPrefab, put=__set__flyingSpriteEffectPrefab))  _flyingSpriteEffectPrefab;

constexpr void __set__flyingSpriteEffectPrefab(::GlobalNamespace::FlyingSpriteEffect value) ;

constexpr ::GlobalNamespace::FlyingSpriteEffect __get__flyingSpriteEffectPrefab() const;


// Methods

/// @brief Method ManualInstallBindings addr 0x21177e0 size 0x248 virtual false final false
 void ManualInstallBindings(::Zenject::DiContainer container, bool shortBeatEffect) ;

// Ctor Parameters []
explicit EffectPoolsManualInstaller() ;

/// @brief Method .ctor addr 0x2117a28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::EffectPoolsManualInstaller);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::EffectPoolsManualInstaller, "", "EffectPoolsManualInstaller");
