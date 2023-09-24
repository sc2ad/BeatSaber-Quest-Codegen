#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class CallContext;
}
// Type: System.Runtime.Remoting.Messaging::CallContext
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3139))
// CS Name: System.Runtime.Remoting.Messaging.CallContext
class CORDL_TYPE CallContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CallContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "CallContext", modifiers: " const&", def_value: None }]
constexpr CallContext(CallContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CallContext", modifiers: "&&", def_value: None }]
constexpr CallContext(CallContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CallContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CallContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CallContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CallContext& operator=(CallContext&& o) noexcept = default;
  constexpr CallContext& operator=(CallContext const& o) noexcept = default;
                


// Methods

static System::Runtime::Remoting::Messaging::CallContext New_ctor() ;

/// @brief Method .ctor addr 0x2339f30 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method SetCurrentCallContext addr 0x2339f38 size 0x8 virtual false final false
static ::bs_hook::Il2CppWrapperType SetCurrentCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext ctx) ;

/// @brief Method SetLogicalCallContext addr 0x2339f40 size 0x44 virtual false final false
static System::Runtime::Remoting::Messaging::LogicalCallContext SetLogicalCallContext(System::Runtime::Remoting::Messaging::LogicalCallContext callCtx) ;

/// @brief Method LogicalGetData addr 0x2339f84 size 0x50 virtual false final false
static ::bs_hook::Il2CppWrapperType LogicalGetData(::StringW name) ;

/// @brief Method LogicalSetData addr 0x2339fe4 size 0x68 virtual false final false
static void LogicalSetData(::StringW name, ::bs_hook::Il2CppWrapperType data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::CallContext);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::CallContext, "System.Runtime.Remoting.Messaging", "CallContext");
