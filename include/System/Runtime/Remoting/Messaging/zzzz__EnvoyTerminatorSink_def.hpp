#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class EnvoyTerminatorSink;
}
// Type: System.Runtime.Remoting.Messaging::EnvoyTerminatorSink
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3159))
// CS Name: System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
class CORDL_TYPE EnvoyTerminatorSink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr operator  System::Runtime::Remoting::Messaging::IMessageSink() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~EnvoyTerminatorSink() = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvoyTerminatorSink", modifiers: " const&", def_value: None }]
constexpr EnvoyTerminatorSink(EnvoyTerminatorSink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "EnvoyTerminatorSink", modifiers: "&&", def_value: None }]
constexpr EnvoyTerminatorSink(EnvoyTerminatorSink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit EnvoyTerminatorSink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr EnvoyTerminatorSink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr EnvoyTerminatorSink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr EnvoyTerminatorSink& operator=(EnvoyTerminatorSink&& o) noexcept = default;
  constexpr EnvoyTerminatorSink& operator=(EnvoyTerminatorSink const& o) noexcept = default;
                


// Fields

static System::Runtime::Remoting::Messaging::EnvoyTerminatorSink __declspec(property(get=__get_Instance, put=__set_Instance))  Instance;

static void __set_Instance(System::Runtime::Remoting::Messaging::EnvoyTerminatorSink value) ;

static System::Runtime::Remoting::Messaging::EnvoyTerminatorSink __get_Instance() ;


// Methods

/// @brief Method SyncProcessMessage addr 0x23411ac size 0xb4 virtual true final true
 System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncProcessMessage addr 0x2341260 size 0xc0 virtual true final true
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

static System::Runtime::Remoting::Messaging::EnvoyTerminatorSink New_ctor() ;

/// @brief Method .ctor addr 0x2341320 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
NEED_NO_BOX(System::Runtime::Remoting::Messaging::EnvoyTerminatorSink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Messaging::EnvoyTerminatorSink, "System.Runtime.Remoting.Messaging", "EnvoyTerminatorSink");
