#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
// Forward declare root types
namespace System::Threading {
class ContextCallback;
}
// Type: System.Threading::ContextCallback
namespace System::Threading {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2708))
// CS Name: System.Threading.ContextCallback
class CORDL_TYPE ContextCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~ContextCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextCallback", modifiers: " const&", def_value: None }]
constexpr ContextCallback(ContextCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ContextCallback", modifiers: "&&", def_value: None }]
constexpr ContextCallback(ContextCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ContextCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr ContextCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ContextCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ContextCallback& operator=(ContextCallback&& o) noexcept = default;
  constexpr ContextCallback& operator=(ContextCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit ContextCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x24a69c4 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x24a9740 size 0x14 virtual true final false
 void Invoke(::bs_hook::Il2CppWrapperType state) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Threading
NEED_NO_BOX(System::Threading::ContextCallback);
DEFINE_IL2CPP_ARG_TYPE(System::Threading::ContextCallback, "System.Threading", "ContextCallback");
