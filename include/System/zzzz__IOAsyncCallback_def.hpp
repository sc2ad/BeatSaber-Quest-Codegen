#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
class IOAsyncResult;
}
// Forward declare root types
namespace System {
class IOAsyncCallback;
}
// Type: System::IOAsyncCallback
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7745))
// CS Name: System.IOAsyncCallback
class CORDL_TYPE IOAsyncCallback : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~IOAsyncCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "IOAsyncCallback", modifiers: " const&", def_value: None }]
constexpr IOAsyncCallback(IOAsyncCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IOAsyncCallback", modifiers: "&&", def_value: None }]
constexpr IOAsyncCallback(IOAsyncCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IOAsyncCallback(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr IOAsyncCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IOAsyncCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IOAsyncCallback& operator=(IOAsyncCallback&& o) noexcept = default;
  constexpr IOAsyncCallback& operator=(IOAsyncCallback const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit IOAsyncCallback(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x27bba50 size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x27bbb7c size 0x14 virtual true final false
 void Invoke(System::IOAsyncResult ioares) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::IOAsyncCallback);
DEFINE_IL2CPP_ARG_TYPE(System::IOAsyncCallback, "System", "IOAsyncCallback");
