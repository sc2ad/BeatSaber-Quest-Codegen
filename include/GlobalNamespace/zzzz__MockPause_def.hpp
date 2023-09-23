#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
class IGamePause;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class MockPause;
}
// Type: ::MockPause
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(5155))
// CS Name: MockPause
class CORDL_TYPE MockPause : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to GlobalNamespace::IGamePause
constexpr operator  GlobalNamespace::IGamePause() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~MockPause() = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPause", modifiers: " const&", def_value: None }]
constexpr MockPause(MockPause const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MockPause", modifiers: "&&", def_value: None }]
constexpr MockPause(MockPause&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MockPause(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MockPause& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MockPause& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MockPause& operator=(MockPause&& o) noexcept = default;
  constexpr MockPause& operator=(MockPause const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didPauseEvent, put=__set_didPauseEvent))  didPauseEvent;

constexpr void __set_didPauseEvent(System::Action value) ;

constexpr System::Action __get_didPauseEvent() const;

 System::Action __declspec(property(get=__get_willResumeEvent, put=__set_willResumeEvent))  willResumeEvent;

constexpr void __set_willResumeEvent(System::Action value) ;

constexpr System::Action __get_willResumeEvent() const;

 System::Action __declspec(property(get=__get_didResumeEvent, put=__set_didResumeEvent))  didResumeEvent;

constexpr void __set_didResumeEvent(System::Action value) ;

constexpr System::Action __get_didResumeEvent() const;


// Properties

 bool __declspec(property(get=get_isPaused))  isPaused;


// Methods

/// @brief Method get_isPaused addr 0x20ce8fc size 0x8 virtual true final true
 bool get_isPaused() ;

/// @brief Method add_didPauseEvent addr 0x20ce904 size 0x9c virtual true final true
 void add_didPauseEvent(System::Action value) ;

/// @brief Method remove_didPauseEvent addr 0x20ce9a0 size 0x9c virtual true final true
 void remove_didPauseEvent(System::Action value) ;

/// @brief Method add_willResumeEvent addr 0x20cea3c size 0x9c virtual true final true
 void add_willResumeEvent(System::Action value) ;

/// @brief Method remove_willResumeEvent addr 0x20cead8 size 0x9c virtual true final true
 void remove_willResumeEvent(System::Action value) ;

/// @brief Method add_didResumeEvent addr 0x20ceb74 size 0x9c virtual true final true
 void add_didResumeEvent(System::Action value) ;

/// @brief Method remove_didResumeEvent addr 0x20cec10 size 0x9c virtual true final true
 void remove_didResumeEvent(System::Action value) ;

/// @brief Method Pause addr 0x20cecac size 0x40 virtual true final true
 void Pause() ;

/// @brief Method WillResume addr 0x20cecec size 0x40 virtual true final true
 void WillResume() ;

/// @brief Method Resume addr 0x20ced2c size 0x40 virtual true final true
 void Resume() ;

// Ctor Parameters []
explicit MockPause() ;

/// @brief Method .ctor addr 0x20ced6c size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MockPause);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MockPause, "", "MockPause");
