#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class IGamePause;
}
// Type: ::IGamePause
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5150))
// CS Name: IGamePause
class CORDL_TYPE IGamePause : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IGamePause() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IGamePause(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 bool __declspec(property(get=get_isPaused))  isPaused;


// Methods

/// @brief Method get_isPaused addr 0x0 size 0xffffffffffffffff virtual true final false
 bool get_isPaused() ;

/// @brief Method add_didPauseEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_didPauseEvent(System::Action value) ;

/// @brief Method remove_didPauseEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_didPauseEvent(System::Action value) ;

/// @brief Method add_willResumeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_willResumeEvent(System::Action value) ;

/// @brief Method remove_willResumeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_willResumeEvent(System::Action value) ;

/// @brief Method add_didResumeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void add_didResumeEvent(System::Action value) ;

/// @brief Method remove_didResumeEvent addr 0x0 size 0xffffffffffffffff virtual true final false
 void remove_didResumeEvent(System::Action value) ;

/// @brief Method Pause addr 0x0 size 0xffffffffffffffff virtual true final false
 void Pause() ;

/// @brief Method WillResume addr 0x0 size 0xffffffffffffffff virtual true final false
 void WillResume() ;

/// @brief Method Resume addr 0x0 size 0xffffffffffffffff virtual true final false
 void Resume() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::IGamePause);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::IGamePause, "", "IGamePause");
