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
class ServerObjectTerminatorSink;
}
// Type: System.Runtime.Remoting.Messaging::ServerObjectTerminatorSink
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3184))
// CS Name: System.Runtime.Remoting.Messaging.ServerObjectTerminatorSink
class CORDL_TYPE ServerObjectTerminatorSink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr operator  System::Runtime::Remoting::Messaging::IMessageSink() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~ServerObjectTerminatorSink() = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerObjectTerminatorSink", modifiers: " const&", def_value: None }]
constexpr ServerObjectTerminatorSink(ServerObjectTerminatorSink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ServerObjectTerminatorSink", modifiers: "&&", def_value: None }]
constexpr ServerObjectTerminatorSink(ServerObjectTerminatorSink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ServerObjectTerminatorSink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ServerObjectTerminatorSink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ServerObjectTerminatorSink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ServerObjectTerminatorSink& operator=(ServerObjectTerminatorSink&& o) noexcept = default;
  constexpr ServerObjectTerminatorSink& operator=(ServerObjectTerminatorSink const& o) noexcept = default;
                


// Fields

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get__nextSink, put=__set__nextSink))  _nextSink;

constexpr void __set__nextSink(System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr System::Runtime::Remoting::Messaging::IMessageSink __get__nextSink() const;


// Methods

// Ctor Parameters [CppParam { name: "nextSink", ty: "System::Runtime::Remoting::Messaging::IMessageSink", modifiers: "", def_value: None }]
explicit ServerObjectTerminatorSink(System::Runtime::Remoting::Messaging::IMessageSink nextSink) ;

/// @brief Method .ctor addr 0x2347350 size 0x28 virtual false final false
 void _ctor(System::Runtime::Remoting::Messaging::IMessageSink nextSink) ;

/// @brief Method SyncProcessMessage addr 0x2347378 size 0x174 virtual true final true
 System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncProcessMessage addr 0x23474ec size 0x1cc virtual true final true
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::ServerObjectTerminatorSink, "System.Runtime.Remoting.Messaging", "ServerObjectTerminatorSink");
