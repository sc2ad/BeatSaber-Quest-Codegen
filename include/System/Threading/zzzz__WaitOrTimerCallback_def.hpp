#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Threading {
class WaitOrTimerCallback;
}
// Type: System.Threading::WaitOrTimerCallback
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2728))
// CS Name: System.Threading.WaitOrTimerCallback
class CORDL_TYPE WaitOrTimerCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~WaitOrTimerCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitOrTimerCallback", modifiers: " const&", def_value: None }]
constexpr WaitOrTimerCallback(WaitOrTimerCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitOrTimerCallback", modifiers: "&&", def_value: None }]
constexpr WaitOrTimerCallback(WaitOrTimerCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaitOrTimerCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr WaitOrTimerCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaitOrTimerCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaitOrTimerCallback& operator=(WaitOrTimerCallback&& o) noexcept = default;
  constexpr WaitOrTimerCallback& operator=(WaitOrTimerCallback const& o) noexcept = default;
                


// Methods

static System::Threading::WaitOrTimerCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24acfcc size 0x130 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x24ad0fc size 0x18 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType state, bool timedOut) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::WaitOrTimerCallback);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::WaitOrTimerCallback, "System.Threading", "WaitOrTimerCallback");
