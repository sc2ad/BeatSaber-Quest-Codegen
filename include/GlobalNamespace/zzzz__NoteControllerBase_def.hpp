#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
namespace GlobalNamespace {
class INoteControllerDidInitEvent;
}
namespace GlobalNamespace {
class INoteControllerNoteDidPassJumpThreeQuartersEvent;
}
// Forward declare root types
namespace GlobalNamespace {
class NoteControllerBase;
}
// Type: ::NoteControllerBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4886))
// CS Name: NoteControllerBase
class CORDL_TYPE NoteControllerBase : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NoteControllerBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteControllerBase", modifiers: " const&", def_value: None }]
constexpr NoteControllerBase(NoteControllerBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoteControllerBase", modifiers: "&&", def_value: None }]
constexpr NoteControllerBase(NoteControllerBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoteControllerBase(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr NoteControllerBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoteControllerBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoteControllerBase& operator=(NoteControllerBase&& o) noexcept = default;
  constexpr NoteControllerBase& operator=(NoteControllerBase const& o) noexcept = default;
                


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

// Ctor Parameters []
explicit NoteControllerBase() ;

/// @brief Method .ctor addr 0x223f7a8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::NoteControllerBase);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::NoteControllerBase, "", "NoteControllerBase");
