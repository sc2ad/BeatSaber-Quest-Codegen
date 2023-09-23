#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace System::Runtime::Remoting::Messaging {
class Header;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class HeaderHandler;
}
// Type: System.Runtime.Remoting.Messaging::HeaderHandler
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3162))
// CS Name: System.Runtime.Remoting.Messaging.HeaderHandler
class CORDL_TYPE HeaderHandler : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~HeaderHandler() = default;

// Ctor Parameters [CppParam { name: "", ty: "HeaderHandler", modifiers: " const&", def_value: None }]
constexpr HeaderHandler(HeaderHandler const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HeaderHandler", modifiers: "&&", def_value: None }]
constexpr HeaderHandler(HeaderHandler&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HeaderHandler(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr HeaderHandler& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HeaderHandler& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HeaderHandler& operator=(HeaderHandler&& o) noexcept = default;
  constexpr HeaderHandler& operator=(HeaderHandler const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit HeaderHandler(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x234144c size 0x12c virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2341578 size 0x14 virtual true final false
 ::bs_hook::Il2CppWrapperType Invoke(::ArrayW<System::Runtime::Remoting::Messaging::Header> headers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::HeaderHandler);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::HeaderHandler, "System.Runtime.Remoting.Messaging", "HeaderHandler");
