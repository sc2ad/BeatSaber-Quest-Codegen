#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/zzzz__EventWaitHandle_def.hpp"
// Forward declare root types
namespace System::Threading {
class AutoResetEvent;
}
// Type: System.Threading::AutoResetEvent
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2707))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2659))
// CS Name: System.Threading.AutoResetEvent
class CORDL_TYPE AutoResetEvent : public System::Threading::EventWaitHandle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~AutoResetEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "AutoResetEvent", modifiers: " const&", def_value: None }]
constexpr AutoResetEvent(AutoResetEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AutoResetEvent", modifiers: "&&", def_value: None }]
constexpr AutoResetEvent(AutoResetEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AutoResetEvent(void* ptr) noexcept : System::Threading::EventWaitHandle(ptr) {
}


  constexpr AutoResetEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AutoResetEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AutoResetEvent& operator=(AutoResetEvent&& o) noexcept = default;
  constexpr AutoResetEvent& operator=(AutoResetEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "initialState", ty: "bool", modifiers: "", def_value: None }]
explicit AutoResetEvent(bool initialState) ;

/// @brief Method .ctor addr 0x24a2794 size 0x10 virtual false final false
 void _ctor(bool initialState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::AutoResetEvent);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::AutoResetEvent, "System.Threading", "AutoResetEvent");
