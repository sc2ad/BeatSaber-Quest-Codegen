#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class RandomNoteRotation;
}
// Type: ::RandomNoteRotation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4901))
// CS Name: RandomNoteRotation
class CORDL_TYPE RandomNoteRotation : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::INoteControllerDidInitEvent
constexpr operator  ::GlobalNamespace::INoteControllerDidInitEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~RandomNoteRotation() = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomNoteRotation", modifiers: " const&", def_value: None }]
constexpr RandomNoteRotation(RandomNoteRotation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RandomNoteRotation", modifiers: "&&", def_value: None }]
constexpr RandomNoteRotation(RandomNoteRotation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RandomNoteRotation(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr RandomNoteRotation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RandomNoteRotation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RandomNoteRotation& operator=(RandomNoteRotation&& o) noexcept = default;
  constexpr RandomNoteRotation& operator=(RandomNoteRotation const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::NoteControllerBase __declspec(property(get=__get__noteController, put=__set__noteController))  _noteController;

constexpr void __set__noteController(::GlobalNamespace::NoteControllerBase value) ;

constexpr ::GlobalNamespace::NoteControllerBase __get__noteController() const;

 ::UnityEngine::Transform __declspec(property(get=__get__transform, put=__set__transform))  _transform;

constexpr void __set__transform(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__transform() const;


// Methods

/// @brief Method Awake addr 0x2243688 size 0xb8 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2243740 size 0x100 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNoteControllerDidInit addr 0x2243840 size 0x28 virtual true final true
 void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase noteController) ;

// Ctor Parameters []
explicit RandomNoteRotation() ;

/// @brief Method .ctor addr 0x2243868 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::RandomNoteRotation);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::RandomNoteRotation, "", "RandomNoteRotation");
