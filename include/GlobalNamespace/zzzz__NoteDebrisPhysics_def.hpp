#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebrisPhysics;
}
// Type: ::NoteDebrisPhysics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4890))
// CS Name: NoteDebrisPhysics
class CORDL_TYPE NoteDebrisPhysics : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NoteDebrisPhysics() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisPhysics", modifiers: " const&", def_value: None }]
constexpr NoteDebrisPhysics(NoteDebrisPhysics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisPhysics", modifiers: "&&", def_value: None }]
constexpr NoteDebrisPhysics(NoteDebrisPhysics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteDebrisPhysics(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteDebrisPhysics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteDebrisPhysics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteDebrisPhysics& operator=(NoteDebrisPhysics&& o) noexcept = default;
  constexpr NoteDebrisPhysics& operator=(NoteDebrisPhysics const& o) noexcept = default;
                


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_position))  position;


// Methods

/// @brief Method get_position addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method Init addr 0x0 size 0xffffffffffffffff virtual true final false
 void Init(UnityEngine::Vector3 force, UnityEngine::Vector3 torque) ;

/// @brief Method AddVelocity addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddVelocity(UnityEngine::Vector3 force) ;

static GlobalNamespace::NoteDebrisPhysics New_ctor() ;

/// @brief Method .ctor addr 0x2240660 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteDebrisPhysics);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebrisPhysics, "", "NoteDebrisPhysics");
