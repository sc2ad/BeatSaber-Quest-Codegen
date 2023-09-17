#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NoteDebrisPhysics_def.hpp"
namespace {
namespace GlobalNamespace {
class NoteDebrisSimplePhysics;
}
namespace UnityEngine {
class Rigidbody;
}
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteDebrisRigidbodyPhysics;
}
// Type: ::NoteDebrisRigidbodyPhysics
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4890))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4891))
// CS Name: NoteDebrisRigidbodyPhysics
class CORDL_TYPE NoteDebrisRigidbodyPhysics : public ::GlobalNamespace::NoteDebrisPhysics {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~NoteDebrisRigidbodyPhysics() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisRigidbodyPhysics", modifiers: " const&", def_value: None }]
constexpr NoteDebrisRigidbodyPhysics(NoteDebrisRigidbodyPhysics const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteDebrisRigidbodyPhysics", modifiers: "&&", def_value: None }]
constexpr NoteDebrisRigidbodyPhysics(NoteDebrisRigidbodyPhysics&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteDebrisRigidbodyPhysics(void* ptr) noexcept : ::GlobalNamespace::NoteDebrisPhysics(ptr) {
}


  constexpr NoteDebrisRigidbodyPhysics& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteDebrisRigidbodyPhysics& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteDebrisRigidbodyPhysics& operator=(NoteDebrisRigidbodyPhysics&& o) noexcept = default;
  constexpr NoteDebrisRigidbodyPhysics& operator=(NoteDebrisRigidbodyPhysics const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Rigidbody __declspec(property(get=__get__rigidbody, put=__set__rigidbody))  _rigidbody;

constexpr void __set__rigidbody(::UnityEngine::Rigidbody value) ;

constexpr ::UnityEngine::Rigidbody __get__rigidbody() const;

 ::GlobalNamespace::NoteDebrisSimplePhysics __declspec(property(get=__get__simplePhysics, put=__set__simplePhysics))  _simplePhysics;

constexpr void __set__simplePhysics(::GlobalNamespace::NoteDebrisSimplePhysics value) ;

constexpr ::GlobalNamespace::NoteDebrisSimplePhysics __get__simplePhysics() const;

 bool __declspec(property(get=__get__firstUpdate, put=__set__firstUpdate))  _firstUpdate;

constexpr void __set__firstUpdate(bool value) ;

constexpr bool __get__firstUpdate() const;


// Properties

 ::UnityEngine::Vector3 __declspec(property(get=get_position))  position;


// Methods

/// @brief Method get_position addr 0x2240668 size 0x1c virtual true final false
 ::UnityEngine::Vector3 get_position() ;

/// @brief Method FixedUpdate addr 0x2240684 size 0x48 virtual false final false
 void FixedUpdate() ;

/// @brief Method Init addr 0x22406cc size 0xc4 virtual true final false
 void Init(::UnityEngine::Vector3 force, ::UnityEngine::Vector3 torque) ;

/// @brief Method AddVelocity addr 0x2240790 size 0x60 virtual true final false
 void AddVelocity(::UnityEngine::Vector3 force) ;

// Ctor Parameters []
explicit NoteDebrisRigidbodyPhysics() ;

/// @brief Method .ctor addr 0x22407f0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::NoteDebrisRigidbodyPhysics);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::NoteDebrisRigidbodyPhysics, "", "NoteDebrisRigidbodyPhysics");
