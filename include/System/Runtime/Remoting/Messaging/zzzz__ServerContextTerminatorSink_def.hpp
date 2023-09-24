#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class ServerContextTerminatorSink;
}
// Type: System.Runtime.Remoting.Messaging::ServerContextTerminatorSink
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3183))
// CS Name: System.Runtime.Remoting.Messaging.ServerContextTerminatorSink
class CORDL_TYPE ServerContextTerminatorSink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr operator  System::Runtime::Remoting::Messaging::IMessageSink() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ServerContextTerminatorSink() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerContextTerminatorSink", modifiers: " const&", def_value: None }]
constexpr ServerContextTerminatorSink(ServerContextTerminatorSink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerContextTerminatorSink", modifiers: "&&", def_value: None }]
constexpr ServerContextTerminatorSink(ServerContextTerminatorSink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerContextTerminatorSink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ServerContextTerminatorSink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerContextTerminatorSink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerContextTerminatorSink& operator=(ServerContextTerminatorSink&& o) noexcept = default;
  constexpr ServerContextTerminatorSink& operator=(ServerContextTerminatorSink const& o) noexcept = default;
                


// Methods

/// @brief Method SyncProcessMessage addr 0x234712c size 0x134 virtual true final true
 System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncProcessMessage addr 0x2347260 size 0xe8 virtual true final true
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

static System::Runtime::Remoting::Messaging::ServerContextTerminatorSink New_ctor() ;

/// @brief Method .ctor addr 0x2347348 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::ServerContextTerminatorSink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ServerContextTerminatorSink, "System.Runtime.Remoting.Messaging", "ServerContextTerminatorSink");
