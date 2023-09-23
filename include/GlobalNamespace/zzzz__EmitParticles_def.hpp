#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cstdint>
namespace UnityEngine {
class ParticleSystem;
}
// Forward declare root types
namespace GlobalNamespace {
class EmitParticles;
}
// Type: ::EmitParticles
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4957))
// CS Name: EmitParticles
class CORDL_TYPE EmitParticles : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~EmitParticles() = default;

// Ctor Parameters [CppParam { name: "", ty: "EmitParticles", modifiers: " const&", def_value: None }]
constexpr EmitParticles(EmitParticles const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EmitParticles", modifiers: "&&", def_value: None }]
constexpr EmitParticles(EmitParticles&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EmitParticles(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr EmitParticles& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EmitParticles& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EmitParticles& operator=(EmitParticles&& o) noexcept = default;
  constexpr EmitParticles& operator=(EmitParticles const& o) noexcept = default;
                


// Fields

 UnityEngine::ParticleSystem __declspec(property(get=__get__particleSystem, put=__set__particleSystem))  _particleSystem;

constexpr void __set__particleSystem(UnityEngine::ParticleSystem value) ;

constexpr UnityEngine::ParticleSystem __get__particleSystem() const;


// Methods

/// @brief Method Emit addr 0x224e120 size 0x1c virtual false final false
 void Emit(int32_t count) ;

// Ctor Parameters []
explicit EmitParticles() ;

/// @brief Method .ctor addr 0x224e13c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::EmitParticles);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::EmitParticles, "", "EmitParticles");
