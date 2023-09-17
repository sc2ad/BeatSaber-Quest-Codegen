#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class ICubeNoteControllerInitializable_1;
}
// Type: ::ICubeNoteControllerInitializable`1
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4861))
// CS Name: ICubeNoteControllerInitializable`1
class CORDL_TYPE ICubeNoteControllerInitializable_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ICubeNoteControllerInitializable_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ICubeNoteControllerInitializable_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method add_cubeNoteControllerDidInitEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_cubeNoteControllerDidInitEvent(::System::Action_1<T> value) ;

/// @brief Method remove_cubeNoteControllerDidInitEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_cubeNoteControllerDidInitEvent(::System::Action_1<T> value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::GlobalNamespace::ICubeNoteControllerInitializable_1, "", "ICubeNoteControllerInitializable`1");
