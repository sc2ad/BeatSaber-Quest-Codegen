#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace System::Threading {
class SendOrPostCallback;
}
// Type: System.Threading::SendOrPostCallback
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2667))
// CS Name: System.Threading.SendOrPostCallback
class CORDL_TYPE SendOrPostCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~SendOrPostCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "SendOrPostCallback", modifiers: " const&", def_value: None }]
constexpr SendOrPostCallback(SendOrPostCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SendOrPostCallback", modifiers: "&&", def_value: None }]
constexpr SendOrPostCallback(SendOrPostCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SendOrPostCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr SendOrPostCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SendOrPostCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SendOrPostCallback& operator=(SendOrPostCallback&& o) noexcept = default;
  constexpr SendOrPostCallback& operator=(SendOrPostCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SendOrPostCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24a2b14 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x24a2c40 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
} // end anonymous namespace
NEED_NO_BOX(::System::Threading::SendOrPostCallback);
DEFINE_IL2CPP_ARG_TYPE(::System::Threading::SendOrPostCallback, "System.Threading", "SendOrPostCallback");