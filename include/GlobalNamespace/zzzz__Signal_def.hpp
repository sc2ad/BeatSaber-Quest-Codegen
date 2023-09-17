#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
namespace {
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class Signal;
}
// Type: ::Signal
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13882))
// CS Name: Signal
class CORDL_TYPE Signal : public ::UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~Signal() = default;

// Ctor Parameters [CppParam { name: "", ty: "Signal", modifiers: " const&", def_value: None }]
constexpr Signal(Signal const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Signal", modifiers: "&&", def_value: None }]
constexpr Signal(Signal&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Signal(void* ptr) noexcept : ::UnityEngine::ScriptableObject(ptr) {
}


  constexpr Signal& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Signal& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Signal& operator=(Signal&& o) noexcept = default;
  constexpr Signal& operator=(Signal const& o) noexcept = default;
                


// Fields

 ::System::Action __declspec(property(get=__get__event, put=__set__event))  _event;

constexpr void __set__event(::System::Action value) ;

constexpr ::System::Action __get__event() const;


// Methods

/// @brief Method add__event addr 0x1f83364 size 0x9c virtual false final false
 void add__event(::System::Action value) ;

/// @brief Method remove__event addr 0x1f83400 size 0x9c virtual false final false
 void remove__event(::System::Action value) ;

/// @brief Method Raise addr 0x1f8349c size 0x1c virtual true final false
 void Raise() ;

/// @brief Method Subscribe addr 0x1f834b8 size 0x28 virtual false final false
 void Subscribe(::System::Action foo) ;

/// @brief Method Unsubscribe addr 0x1f834e0 size 0x4 virtual false final false
 void Unsubscribe(::System::Action foo) ;

// Ctor Parameters []
explicit Signal() ;

/// @brief Method .ctor addr 0x1f834e4 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::Signal);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::Signal, "", "Signal");
