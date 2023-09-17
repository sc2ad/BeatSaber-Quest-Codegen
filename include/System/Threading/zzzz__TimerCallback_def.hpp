#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading {
class TimerCallback;
}
// Type: System.Threading::TimerCallback
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2750))
// CS Name: System.Threading.TimerCallback
class CORDL_TYPE TimerCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~TimerCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "TimerCallback", modifiers: " const&", def_value: None }]
constexpr TimerCallback(TimerCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TimerCallback", modifiers: "&&", def_value: None }]
constexpr TimerCallback(TimerCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TimerCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr TimerCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TimerCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TimerCallback& operator=(TimerCallback&& o) noexcept = default;
  constexpr TimerCallback& operator=(TimerCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit TimerCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24b34bc size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x24b35e8 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::TimerCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::TimerCallback, "System.Threading", "TimerCallback");
