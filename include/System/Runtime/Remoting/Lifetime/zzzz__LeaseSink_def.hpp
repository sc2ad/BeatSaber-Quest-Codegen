#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageCtrl;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
// Forward declare root types
namespace System::Runtime::Remoting::Lifetime {
class LeaseSink;
}
// Type: System.Runtime.Remoting.Lifetime::LeaseSink
namespace System::Runtime::Remoting::Lifetime {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3091))
// CS Name: System.Runtime.Remoting.Lifetime.LeaseSink
class CORDL_TYPE LeaseSink : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Runtime::Remoting::Messaging::IMessageSink
constexpr operator  System::Runtime::Remoting::Messaging::IMessageSink() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LeaseSink() = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaseSink", modifiers: " const&", def_value: None }]
constexpr LeaseSink(LeaseSink const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LeaseSink", modifiers: "&&", def_value: None }]
constexpr LeaseSink(LeaseSink&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LeaseSink(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LeaseSink& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LeaseSink& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LeaseSink& operator=(LeaseSink&& o) noexcept = default;
  constexpr LeaseSink& operator=(LeaseSink const& o) noexcept = default;
                


// Fields

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get__nextSink, put=__set__nextSink))  _nextSink;

constexpr void __set__nextSink(System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr System::Runtime::Remoting::Messaging::IMessageSink __get__nextSink() const;


// Methods

// Ctor Parameters [CppParam { name: "nextSink", ty: "System::Runtime::Remoting::Messaging::IMessageSink", modifiers: "", def_value: None }]
explicit LeaseSink(System::Runtime::Remoting::Messaging::IMessageSink nextSink) ;

/// @brief Method .ctor addr 0x232fa90 size 0x28 virtual false final false
 void _ctor(System::Runtime::Remoting::Messaging::IMessageSink nextSink) ;

/// @brief Method SyncProcessMessage addr 0x232fab8 size 0xb0 virtual true final true
 System::Runtime::Remoting::Messaging::IMessage SyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg) ;

/// @brief Method AsyncProcessMessage addr 0x232fdf8 size 0xc4 virtual true final true
 System::Runtime::Remoting::Messaging::IMessageCtrl AsyncProcessMessage(System::Runtime::Remoting::Messaging::IMessage msg, System::Runtime::Remoting::Messaging::IMessageSink replySink) ;

/// @brief Method RenewLease addr 0x232fb68 size 0x290 virtual false final false
 void RenewLease(System::Runtime::Remoting::Messaging::IMessage msg) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Lifetime
NEED_NO_BOX(System::Runtime::Remoting::Lifetime::LeaseSink);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Lifetime::LeaseSink, "System.Runtime.Remoting.Lifetime", "LeaseSink");
