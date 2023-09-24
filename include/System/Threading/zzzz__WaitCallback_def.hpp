#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Threading {
class WaitCallback;
}
// Type: System.Threading::WaitCallback
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2727))
// CS Name: System.Threading.WaitCallback
class CORDL_TYPE WaitCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~WaitCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitCallback", modifiers: " const&", def_value: None }]
constexpr WaitCallback(WaitCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WaitCallback", modifiers: "&&", def_value: None }]
constexpr WaitCallback(WaitCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WaitCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr WaitCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WaitCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WaitCallback& operator=(WaitCallback&& o) noexcept = default;
  constexpr WaitCallback& operator=(WaitCallback const& o) noexcept = default;
                


// Methods

static System::Threading::WaitCallback New_ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24ab308 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x24acfb8 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::WaitCallback);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::WaitCallback, "System.Threading", "WaitCallback");
