#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace UnityEngine {
class ParticleSystem;
}
namespace UnityEngine {
struct Vector3;
}
namespace UnityEngine {
struct UnityEngine__ParticleSystem__EmitParams;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteTrailParticleSystem;
}
// Type: ::NoteTrailParticleSystem
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4985))
// CS Name: NoteTrailParticleSystem
class CORDL_TYPE NoteTrailParticleSystem : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xb0};

virtual ~NoteTrailParticleSystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteTrailParticleSystem", modifiers: " const&", def_value: None }]
constexpr NoteTrailParticleSystem(NoteTrailParticleSystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteTrailParticleSystem", modifiers: "&&", def_value: None }]
constexpr NoteTrailParticleSystem(NoteTrailParticleSystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteTrailParticleSystem(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteTrailParticleSystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteTrailParticleSystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteTrailParticleSystem& operator=(NoteTrailParticleSystem&& o) noexcept = default;
  constexpr NoteTrailParticleSystem& operator=(NoteTrailParticleSystem const& o) noexcept = default;
                


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get__particleSystem, put=__set__particleSystem))  _particleSystem;

constexpr void __set__particleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__particleSystem() const;

 UnityEngine::UnityEngine__ParticleSystem__EmitParams __declspec(property(get=__get__emitParams, put=__set__emitParams))  _emitParams;

constexpr void __set__emitParams(UnityEngine::UnityEngine__ParticleSystem__EmitParams value) ;

constexpr UnityEngine::UnityEngine__ParticleSystem__EmitParams __get__emitParams() const;


// Methods

/// @brief Method Awake addr 0x2252d90 size 0x10 virtual false final false
 void Awake() ;

/// @brief Method Emit addr 0x2252da0 size 0x110 virtual false final false
 void Emit(UnityEngine::Vector3 startPos, UnityEngine::Vector3 endPos, int32_t count) ;

// Ctor Parameters []
explicit NoteTrailParticleSystem() ;

/// @brief Method .ctor addr 0x2252eb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteTrailParticleSystem);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteTrailParticleSystem, "", "NoteTrailParticleSystem");
