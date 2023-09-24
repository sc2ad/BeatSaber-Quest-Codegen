#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class ITickable;
}
namespace System {
class Action;
}
// Forward declare root types
namespace GlobalNamespace {
class PS4Helper;
}
// Type: ::PS4Helper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4636))
// CS Name: PS4Helper
class CORDL_TYPE PS4Helper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::ITickable
constexpr operator  Zenject::ITickable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~PS4Helper() = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4Helper", modifiers: " const&", def_value: None }]
constexpr PS4Helper(PS4Helper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PS4Helper", modifiers: "&&", def_value: None }]
constexpr PS4Helper(PS4Helper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PS4Helper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PS4Helper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PS4Helper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PS4Helper& operator=(PS4Helper&& o) noexcept = default;
  constexpr PS4Helper& operator=(PS4Helper const& o) noexcept = default;
                


// Fields

 System::Action __declspec(property(get=__get_didGoToBackgroundExecutionEvent, put=__set_didGoToBackgroundExecutionEvent))  didGoToBackgroundExecutionEvent;

constexpr void __set_didGoToBackgroundExecutionEvent(System::Action value) ;

constexpr System::Action __get_didGoToBackgroundExecutionEvent() const;

 System::Action __declspec(property(get=__get_didGoToForegroundExecutionEvent, put=__set_didGoToForegroundExecutionEvent))  didGoToForegroundExecutionEvent;

constexpr void __set_didGoToForegroundExecutionEvent(System::Action value) ;

constexpr System::Action __get_didGoToForegroundExecutionEvent() const;

 bool __declspec(property(get=__get__backgroundExecution, put=__set__backgroundExecution))  _backgroundExecution;

constexpr void __set__backgroundExecution(bool value) ;

constexpr bool __get__backgroundExecution() const;


// Methods

/// @brief Method add_didGoToBackgroundExecutionEvent addr 0x221a16c size 0x9c virtual false final false
 void add_didGoToBackgroundExecutionEvent(System::Action value) ;

/// @brief Method remove_didGoToBackgroundExecutionEvent addr 0x221a208 size 0x9c virtual false final false
 void remove_didGoToBackgroundExecutionEvent(System::Action value) ;

/// @brief Method add_didGoToForegroundExecutionEvent addr 0x221a2a4 size 0x9c virtual false final false
 void add_didGoToForegroundExecutionEvent(System::Action value) ;

/// @brief Method remove_didGoToForegroundExecutionEvent addr 0x221a340 size 0x9c virtual false final false
 void remove_didGoToForegroundExecutionEvent(System::Action value) ;

/// @brief Method Tick addr 0x221a3dc size 0x28 virtual true final true
 void Tick() ;

static GlobalNamespace::PS4Helper New_ctor() ;

/// @brief Method .ctor addr 0x221a404 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::PS4Helper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::PS4Helper, "", "PS4Helper");
