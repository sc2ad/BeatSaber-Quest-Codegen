#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Threading/zzzz__WaitHandle_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Threading {
struct EventResetMode;
}
// Forward declare root types
namespace System::Threading {
class EventWaitHandle;
}
// Type: System.Threading::EventWaitHandle
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2739))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2707))
// CS Name: System.Threading.EventWaitHandle
class CORDL_TYPE EventWaitHandle : public System::Threading::WaitHandle {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~EventWaitHandle() = default;

// Ctor Parameters [CppParam { name: "", ty: "EventWaitHandle", modifiers: " const&", def_value: None }]
constexpr EventWaitHandle(EventWaitHandle const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EventWaitHandle", modifiers: "&&", def_value: None }]
constexpr EventWaitHandle(EventWaitHandle&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EventWaitHandle(void* ptr) noexcept : System::Threading::WaitHandle(ptr) {
}


  constexpr EventWaitHandle& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EventWaitHandle& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EventWaitHandle& operator=(EventWaitHandle&& o) noexcept = default;
  constexpr EventWaitHandle& operator=(EventWaitHandle const& o) noexcept = default;
                


// Methods

static System::Threading::EventWaitHandle New_ctor(bool initialState, System::Threading::EventResetMode mode) ;

/// @brief Method .ctor addr 0x24a27a4 size 0xc virtual false final false
 void _ctor(bool initialState, System::Threading::EventResetMode mode) ;

static System::Threading::EventWaitHandle New_ctor(bool initialState, System::Threading::EventResetMode mode, ::StringW name) ;

/// @brief Method .ctor addr 0x24a9480 size 0x2c0 virtual false final false
 void _ctor(bool initialState, System::Threading::EventResetMode mode, ::StringW name) ;

/// @brief Method Reset addr 0x24a77c4 size 0x64 virtual false final false
 bool Reset() ;

/// @brief Method Set addr 0x24a40d0 size 0x64 virtual false final false
 bool Set() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::EventWaitHandle);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::EventWaitHandle, "System.Threading", "EventWaitHandle");
