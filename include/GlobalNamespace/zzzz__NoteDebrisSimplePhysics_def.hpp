#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisPhysics_def.hpp"
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebrisSimplePhysics;
}
// Type: ::NoteDebrisSimplePhysics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4890))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4892))
// CS Name: NoteDebrisSimplePhysics
class CORDL_TYPE NoteDebrisSimplePhysics : public GlobalNamespace::NoteDebrisPhysics {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~NoteDebrisSimplePhysics() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisSimplePhysics", modifiers: " const&", def_value: None }]
constexpr NoteDebrisSimplePhysics(NoteDebrisSimplePhysics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisSimplePhysics", modifiers: "&&", def_value: None }]
constexpr NoteDebrisSimplePhysics(NoteDebrisSimplePhysics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteDebrisSimplePhysics(void* ptr) noexcept : GlobalNamespace::NoteDebrisPhysics(ptr) {
}


  constexpr NoteDebrisSimplePhysics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteDebrisSimplePhysics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteDebrisSimplePhysics& operator=(NoteDebrisSimplePhysics&& o) noexcept = default;
  constexpr NoteDebrisSimplePhysics& operator=(NoteDebrisSimplePhysics const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get__currentForce, put=__set__currentForce))  _currentForce;

constexpr void __set__currentForce(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__currentForce() const;

 UnityEngine::Vector3 __declspec(property(get=__get__currentTorque, put=__set__currentTorque))  _currentTorque;

constexpr void __set__currentTorque(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__currentTorque() const;

 UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__transform() const;

 UnityEngine::Vector3 __declspec(property(get=__get__gravity, put=__set__gravity))  _gravity;

constexpr void __set__gravity(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get__gravity() const;

 bool __declspec(property(get=__get__firstUpdate, put=__set__firstUpdate))  _firstUpdate;

constexpr void __set__firstUpdate(bool value) ;

constexpr bool __get__firstUpdate() const;


// Properties

 UnityEngine::Vector3 __declspec(property(get=get_position))  position;


// Methods

/// @brief Method get_position addr 0x22407f8 size 0x1c virtual true final false
 UnityEngine::Vector3 get_position() ;

/// @brief Method Start addr 0x2240814 size 0x2c virtual false final false
 void Start() ;

/// @brief Method LateUpdate addr 0x2240840 size 0x19c virtual false final false
 void LateUpdate() ;

/// @brief Method Init addr 0x22409dc size 0x2c virtual true final false
 void Init(UnityEngine::Vector3 force, UnityEngine::Vector3 torque) ;

/// @brief Method AddVelocity addr 0x2240a08 size 0x20 virtual true final false
 void AddVelocity(UnityEngine::Vector3 force) ;

static GlobalNamespace::NoteDebrisSimplePhysics New_ctor() ;

/// @brief Method .ctor addr 0x2240a28 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteDebrisSimplePhysics);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteDebrisSimplePhysics, "", "NoteDebrisSimplePhysics");
