#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System {
class IAsyncResult;
}
namespace System {
class AsyncCallback;
}
// Forward declare root types
namespace ENet {
class NoMemoryCallback;
}
// Type: ENet::NoMemoryCallback
namespace ENet {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15263))
// CS Name: ENet.NoMemoryCallback
class CORDL_TYPE NoMemoryCallback : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~NoMemoryCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "NoMemoryCallback", modifiers: " const&", def_value: None }]
constexpr NoMemoryCallback(NoMemoryCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NoMemoryCallback", modifiers: "&&", def_value: None }]
constexpr NoMemoryCallback(NoMemoryCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NoMemoryCallback(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr NoMemoryCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NoMemoryCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NoMemoryCallback& operator=(NoMemoryCallback&& o) noexcept = default;
  constexpr NoMemoryCallback& operator=(NoMemoryCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit NoMemoryCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x207c720 size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x207c7dc size 0x14 virtual true final false
 void Invoke() ;

/// @brief Method BeginInvoke addr 0x207c7f0 size 0x20 virtual true final false
 ::System::IAsyncResult BeginInvoke(::System::AsyncCallback callback, ::bs_hook::Il2CppWrapperType object) ;

/// @brief Method EndInvoke addr 0x207c810 size 0xc virtual true final false
 void EndInvoke(::System::IAsyncResult result) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def ENet
} // end anonymous namespace
NEED_NO_BOX(::ENet::NoMemoryCallback);
DEFINE_IL2CPP_ARG_TYPE(::ENet::NoMemoryCallback, "ENet", "NoMemoryCallback");
