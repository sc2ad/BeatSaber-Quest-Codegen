#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/zzzz__EventWaitHandle_def.hpp"
// Forward declare root types
namespace System::Threading {
class ManualResetEvent;
}
// Type: System.Threading::ManualResetEvent
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2707))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2664))
// CS Name: System.Threading.ManualResetEvent
class CORDL_TYPE ManualResetEvent : public System::Threading::EventWaitHandle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~ManualResetEvent() = default;

// Ctor Parameters [CppParam { name: "", ty: "ManualResetEvent", modifiers: " const&", def_value: None }]
constexpr ManualResetEvent(ManualResetEvent const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ManualResetEvent", modifiers: "&&", def_value: None }]
constexpr ManualResetEvent(ManualResetEvent&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ManualResetEvent(void* ptr) noexcept : System::Threading::EventWaitHandle(ptr) {
}


  constexpr ManualResetEvent& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ManualResetEvent& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ManualResetEvent& operator=(ManualResetEvent&& o) noexcept = default;
  constexpr ManualResetEvent& operator=(ManualResetEvent const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "initialState", ty: "bool", modifiers: "", def_value: None }]
explicit ManualResetEvent(bool initialState) ;

/// @brief Method .ctor addr 0x24a2970 size 0x10 virtual false final false
 void _ctor(bool initialState) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::ManualResetEvent);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ManualResetEvent, "System.Threading", "ManualResetEvent");
