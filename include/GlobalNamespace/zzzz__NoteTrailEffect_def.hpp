#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace GlobalNamespace {
class NoteMovement;
}
namespace GlobalNamespace {
class NoteTrailParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteTrailEffect;
}
// Type: ::NoteTrailEffect
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5057))
// CS Name: NoteTrailEffect
class CORDL_TYPE NoteTrailEffect : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NoteTrailEffect() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteTrailEffect", modifiers: " const&", def_value: None }]
constexpr NoteTrailEffect(NoteTrailEffect const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteTrailEffect", modifiers: "&&", def_value: None }]
constexpr NoteTrailEffect(NoteTrailEffect&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteTrailEffect(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteTrailEffect& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteTrailEffect& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteTrailEffect& operator=(NoteTrailEffect&& o) noexcept = default;
  constexpr NoteTrailEffect& operator=(NoteTrailEffect const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get__particlesPerFrame, put=__set__particlesPerFrame))  _particlesPerFrame;

constexpr void __set__particlesPerFrame(int32_t value) ;

constexpr int32_t __get__particlesPerFrame() const;

 float_t __declspec(property(get=__get__maxSpawnDistance, put=__set__maxSpawnDistance))  _maxSpawnDistance;

constexpr void __set__maxSpawnDistance(float_t value) ;

constexpr float_t __get__maxSpawnDistance() const;

 ::GlobalNamespace::NoteMovement __declspec(property(get=__get__noteMovement, put=__set__noteMovement))  _noteMovement;

constexpr void __set__noteMovement(::GlobalNamespace::NoteMovement value) ;

constexpr ::GlobalNamespace::NoteMovement __get__noteMovement() const;

 ::GlobalNamespace::NoteTrailParticleSystem __declspec(property(get=__get__noteTrailParticleSystem, put=__set__noteTrailParticleSystem))  _noteTrailParticleSystem;

constexpr void __set__noteTrailParticleSystem(::GlobalNamespace::NoteTrailParticleSystem value) ;

constexpr ::GlobalNamespace::NoteTrailParticleSystem __get__noteTrailParticleSystem() const;


// Methods

/// @brief Method Awake addr 0x2264754 size 0x100 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2264854 size 0x12c virtual false final false
 void OnDestroy() ;

/// @brief Method Update addr 0x2264980 size 0x64 virtual false final false
 void Update() ;

/// @brief Method HandleNoteMovementDidInit addr 0x22649e4 size 0xc virtual false final false
 void HandleNoteMovementDidInit() ;

/// @brief Method HandleNoteDidStartJump addr 0x22649f0 size 0xc virtual false final false
 void HandleNoteDidStartJump() ;

// Ctor Parameters []
explicit NoteTrailEffect() ;

/// @brief Method .ctor addr 0x22649fc size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::NoteTrailEffect);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteTrailEffect, "", "NoteTrailEffect");
