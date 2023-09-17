#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace {
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class CutoutAnimateEffect;
}
// Forward declare root types
namespace GlobalNamespace {
class BaseNoteVisuals;
}
// Type: ::BaseNoteVisuals
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4850))
// CS Name: BaseNoteVisuals
class CORDL_TYPE BaseNoteVisuals : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief Convert operator to ::GlobalNamespace::INoteControllerDidInitEvent
constexpr operator  ::GlobalNamespace::INoteControllerDidInitEvent() const noexcept;

/// @brief Convert operator to ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent
constexpr operator  ::GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~BaseNoteVisuals() = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseNoteVisuals", modifiers: " const&", def_value: None }]
constexpr BaseNoteVisuals(BaseNoteVisuals const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BaseNoteVisuals", modifiers: "&&", def_value: None }]
constexpr BaseNoteVisuals(BaseNoteVisuals&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BaseNoteVisuals(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BaseNoteVisuals& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BaseNoteVisuals& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BaseNoteVisuals& operator=(BaseNoteVisuals&& o) noexcept = default;
  constexpr BaseNoteVisuals& operator=(BaseNoteVisuals const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::NoteControllerBase __declspec(property(get=__get__noteController, put=__set__noteController))  _noteController;

constexpr void __set__noteController(::GlobalNamespace::NoteControllerBase value) ;

constexpr ::GlobalNamespace::NoteControllerBase __get__noteController() const;

 ::GlobalNamespace::CutoutAnimateEffect __declspec(property(get=__get__cutoutAnimateEffect, put=__set__cutoutAnimateEffect))  _cutoutAnimateEffect;

constexpr void __set__cutoutAnimateEffect(::GlobalNamespace::CutoutAnimateEffect value) ;

constexpr ::GlobalNamespace::CutoutAnimateEffect __get__cutoutAnimateEffect() const;


// Methods

/// @brief Method Awake addr 0x2238a54 size 0x144 virtual false final false
 void Awake() ;

/// @brief Method OnDestroy addr 0x2238b98 size 0x190 virtual false final false
 void OnDestroy() ;

/// @brief Method HandleNoteControllerDidInit addr 0x2238d28 size 0x1c virtual true final true
 void HandleNoteControllerDidInit(::GlobalNamespace::NoteControllerBase noteController) ;

/// @brief Method HandleNoteControllerNoteDidStartDissolving addr 0x2238d44 size 0x10 virtual true final true
 void HandleNoteControllerNoteDidStartDissolving(::GlobalNamespace::NoteControllerBase noteController, float_t duration) ;

/// @brief Method AnimateCutout addr 0x2238d54 size 0x2c virtual false final false
 void AnimateCutout(float_t cutoutStart, float_t cutoutEnd, float_t duration) ;

// Ctor Parameters []
explicit BaseNoteVisuals() ;

/// @brief Method .ctor addr 0x2238d80 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::BaseNoteVisuals);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::BaseNoteVisuals, "", "BaseNoteVisuals");
