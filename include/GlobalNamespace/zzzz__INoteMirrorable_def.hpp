#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace GlobalNamespace {
class NoteData;
}
namespace GlobalNamespace {
class INoteControllerNoteDidStartDissolvingEvent;
}
namespace UnityEngine {
class Transform;
}
namespace GlobalNamespace {
template<typename T>
class ILazyCopyHashSet_1;
}
// Forward declare root types
namespace GlobalNamespace {
class INoteMirrorable;
}
// Type: ::INoteMirrorable
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4863))
// CS Name: INoteMirrorable
class CORDL_TYPE INoteMirrorable : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INoteMirrorable() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INoteMirrorable(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 UnityEngine::Transform __declspec(property(get=get_noteTransform))  noteTransform;

 GlobalNamespace::NoteData __declspec(property(get=get_noteData))  noteData;

 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> __declspec(property(get=get_noteDidStartDissolvingEvent))  noteDidStartDissolvingEvent;


// Methods

/// @brief Method get_noteTransform addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::Transform get_noteTransform() ;

/// @brief Method get_noteData addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::NoteData get_noteData() ;

/// @brief Method get_noteDidStartDissolvingEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 GlobalNamespace::ILazyCopyHashSet_1<GlobalNamespace::INoteControllerNoteDidStartDissolvingEvent> get_noteDidStartDissolvingEvent() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::INoteMirrorable);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::INoteMirrorable, "", "INoteMirrorable");
