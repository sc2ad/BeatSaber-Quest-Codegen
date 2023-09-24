#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__NoteControllerBase_def.hpp"
#include <cmath>
namespace GlobalNamespace {
class NoteControllerBase;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
template<typename T>
class LazyCopyHashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class MirroredNoteController_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class MirroredNoteController_1<T>;
}
// Type: ::MirroredNoteController`1
// Type: ::MirroredNoteController`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4872)), TypeDefinitionIndex(TypeDefinitionIndex(4886))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(4872), inst: 2 })
// CS Name: MirroredNoteController`1
class CORDL_TYPE MirroredNoteController_1<T> : public GlobalNamespace::NoteControllerBase {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent
constexpr operator  GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent() const noexcept;

/// @brief Convert operator to GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent
constexpr operator  GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MirroredNoteController_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredNoteController_1", modifiers: " const&", def_value: None }]
constexpr MirroredNoteController_1(MirroredNoteController_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MirroredNoteController_1", modifiers: "&&", def_value: None }]
constexpr MirroredNoteController_1(MirroredNoteController_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MirroredNoteController_1(void* ptr) noexcept : GlobalNamespace::NoteControllerBase(ptr) {
}


  constexpr MirroredNoteController_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MirroredNoteController_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MirroredNoteController_1& operator=(MirroredNoteController_1&& o) noexcept = default;
  constexpr MirroredNoteController_1& operator=(MirroredNoteController_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__noteTransform, put=__set__noteTransform))  _noteTransform;

constexpr void __set__noteTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__noteTransform() const;

 T __declspec(property(get=__get_followedNote, put=__set_followedNote))  followedNote;

constexpr void __set_followedNote(T value) ;

constexpr T __get_followedNote() const;

 UnityEngine::Transform __declspec(property(get=__get__followedNoteTransform, put=__set__followedNoteTransform))  _followedNoteTransform;

constexpr void __set__followedNoteTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__followedNoteTransform() const;

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerDidInitEvent> __declspec(property(get=__get__didInitEvent, put=__set__didInitEvent))  _didInitEvent;

constexpr void __set__didInitEvent(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerDidInitEvent> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerDidInitEvent> __get__didInitEvent() const;

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent> __declspec(property(get=__get__noteDidPassJumpThreeQuartersEvent, put=__set__noteDidPassJumpThreeQuartersEvent))  _noteDidPassJumpThreeQuartersEvent;

constexpr void __set__noteDidPassJumpThreeQuartersEvent(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent> __get__noteDidPassJumpThreeQuartersEvent() const;

 GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> __declspec(property(get=__get__noteDidStartDissolvingEvent, put=__set__noteDidStartDissolvingEvent))  _noteDidStartDissolvingEvent;

constexpr void __set__noteDidStartDissolvingEvent(GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> value) ;

constexpr GlobalNamespace::LazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> __get__noteDidStartDissolvingEvent() const;


// Properties

 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerDidInitEvent> __declspec(property(get=get_didInitEvent))  didInitEvent;

 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent> __declspec(property(get=get_noteDidPassJumpThreeQuartersEvent))  noteDidPassJumpThreeQuartersEvent;

 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> __declspec(property(get=get_noteDidStartDissolvingEvent))  noteDidStartDissolvingEvent;

 GlobalNamespace::NoteData __declspec(property(get=get_noteData))  noteData;


// Methods

/// @brief Method get_didInitEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerDidInitEvent> get_didInitEvent() ;

/// @brief Method get_noteDidPassJumpThreeQuartersEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidPassJumpThreeQuartersEvent> get_noteDidPassJumpThreeQuartersEvent() ;

/// @brief Method get_noteDidStartDissolvingEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> get_noteDidStartDissolvingEvent() ;

/// @brief Method get_noteData addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::NoteData get_noteData() ;

/// @brief Method Update addr 0x0 size 0xffffffffffffffff virtual false final false
 void Update() ;

/// @brief Method OnDestroy addr 0x0 size 0xffffffffffffffff virtual false final false
 void OnDestroy() ;

/// @brief Method UpdatePositionAndRotation addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdatePositionAndRotation() ;

/// @brief Method Mirror addr 0x0 size 0xffffffffffffffff virtual true final false
 void Mirror(T noteController) ;

/// @brief Method RemoveListeners addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveListeners() ;

/// @brief Method HandleNoteControllerNoteDidStartDissolving addr 0x0 size 0xffffffffffffffff virtual true final true
 void HandleNoteControllerNoteDidStartDissolving(GlobalNamespace::NoteControllerBase noteController, float_t duration) ;

/// @brief Method HandleNoteControllerNoteDidPassJumpThreeQuarters addr 0x0 size 0xffffffffffffffff virtual true final true
 void HandleNoteControllerNoteDidPassJumpThreeQuarters(GlobalNamespace::NoteControllerBase noteController) ;

/// @brief Method Hide addr 0x0 size 0xffffffffffffffff virtual false final false
 void Hide(bool hide) ;

static GlobalNamespace::MirroredNoteController_1<T> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::MirroredNoteController_1, "", "MirroredNoteController`1");
