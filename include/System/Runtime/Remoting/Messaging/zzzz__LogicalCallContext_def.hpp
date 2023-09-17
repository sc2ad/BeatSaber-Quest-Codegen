#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
namespace {
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System {
class Type;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Remoting::Messaging {
class Header;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Remoting::Messaging {
class CallContextSecurityData;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Runtime::Remoting::Messaging {
class CallContextRemotingData;
}
namespace System {
class ICloneable;
}
// Forward declare root types
namespace System::Runtime::Remoting::Messaging {
class LogicalCallContext;
}
namespace System::Runtime::Remoting::Messaging {
struct ____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader;
}
// Type: ::Reader
namespace System::Runtime::Remoting::Messaging {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3141))
// CS Name: System.Runtime.Remoting.Messaging.LogicalCallContext::Reader
struct CORDL_TYPE ____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_ctx", ty: "::System::Runtime::Remoting::Messaging::LogicalCallContext", modifiers: "", def_value: None }]
constexpr ____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader(::System::Runtime::Remoting::Messaging::LogicalCallContext m_ctx) noexcept;


                    constexpr ____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader(____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader const&) = default;
                    constexpr ____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader(____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader&&) = default;
                    constexpr ____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader& operator=(____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader& operator=(____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::System::Runtime::Remoting::Messaging::LogicalCallContext __declspec(property(get=__get_m_ctx, put=__set_m_ctx))  m_ctx;

constexpr void __set_m_ctx(::System::Runtime::Remoting::Messaging::LogicalCallContext value) ;

constexpr ::System::Runtime::Remoting::Messaging::LogicalCallContext __get_m_ctx() const;


// Properties

 bool __declspec(property(get=get_IsNull))  IsNull;

 bool __declspec(property(get=get_HasInfo))  HasInfo;


// Methods

/// @brief Method .ctor addr 0x233b2a8 size 0x8 virtual false final false
 void _ctor(::System::Runtime::Remoting::Messaging::LogicalCallContext ctx) ;

/// @brief Method get_IsNull addr 0x233b2b0 size 0x10 virtual false final false
 bool get_IsNull() ;

/// @brief Method get_HasInfo addr 0x233b2c0 size 0x10 virtual false final false
 bool get_HasInfo() ;

/// @brief Method Clone addr 0x233b2d0 size 0x68 virtual false final false
 ::System::Runtime::Remoting::Messaging::LogicalCallContext Clone() ;

/// @brief Method GetData addr 0x2339fd4 size 0x10 virtual false final false
 ::bs_hook::Il2CppWrapperType GetData(::StringW name) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
// Type: System.Runtime.Remoting.Messaging::LogicalCallContext
namespace System::Runtime::Remoting::Messaging {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3142))
// CS Name: System.Runtime.Remoting.Messaging.LogicalCallContext
class CORDL_TYPE LogicalCallContext : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using Reader = ::System::Runtime::Remoting::Messaging::____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader;

/// @brief Convert operator to ::System::Runtime::Serialization::ISerializable
constexpr operator  ::System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief Convert operator to ::System::ICloneable
constexpr operator  ::System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~LogicalCallContext() = default;

// Ctor Parameters [CppParam { name: "", ty: "LogicalCallContext", modifiers: " const&", def_value: None }]
constexpr LogicalCallContext(LogicalCallContext const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LogicalCallContext", modifiers: "&&", def_value: None }]
constexpr LogicalCallContext(LogicalCallContext&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LogicalCallContext(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LogicalCallContext& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LogicalCallContext& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LogicalCallContext& operator=(LogicalCallContext&& o) noexcept = default;
  constexpr LogicalCallContext& operator=(LogicalCallContext const& o) noexcept = default;
                


// Fields

static ::System::Type __declspec(property(get=__get_s_callContextType, put=__set_s_callContextType))  s_callContextType;

static void __set_s_callContextType(::System::Type value) ;

static ::System::Type __get_s_callContextType() ;

/// @brief Field s_CorrelationMgrSlotName offset 0
static constexpr ::ConstString  s_CorrelationMgrSlotName{u"System.Diagnostics.Trace.CorrelationManagerSlot"};

 ::System::Collections::Hashtable __declspec(property(get=__get_m_Datastore, put=__set_m_Datastore))  m_Datastore;

constexpr void __set_m_Datastore(::System::Collections::Hashtable value) ;

constexpr ::System::Collections::Hashtable __get_m_Datastore() const;

 ::System::Runtime::Remoting::Messaging::CallContextRemotingData __declspec(property(get=__get_m_RemotingData, put=__set_m_RemotingData))  m_RemotingData;

constexpr void __set_m_RemotingData(::System::Runtime::Remoting::Messaging::CallContextRemotingData value) ;

constexpr ::System::Runtime::Remoting::Messaging::CallContextRemotingData __get_m_RemotingData() const;

 ::System::Runtime::Remoting::Messaging::CallContextSecurityData __declspec(property(get=__get_m_SecurityData, put=__set_m_SecurityData))  m_SecurityData;

constexpr void __set_m_SecurityData(::System::Runtime::Remoting::Messaging::CallContextSecurityData value) ;

constexpr ::System::Runtime::Remoting::Messaging::CallContextSecurityData __get_m_SecurityData() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_m_HostContext, put=__set_m_HostContext))  m_HostContext;

constexpr void __set_m_HostContext(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_m_HostContext() const;

 bool __declspec(property(get=__get_m_IsCorrelationMgr, put=__set_m_IsCorrelationMgr))  m_IsCorrelationMgr;

constexpr void __set_m_IsCorrelationMgr(bool value) ;

constexpr bool __get_m_IsCorrelationMgr() const;

 ::ArrayW<::System::Runtime::Remoting::Messaging::Header> __declspec(property(get=__get__sendHeaders, put=__set__sendHeaders))  _sendHeaders;

constexpr void __set__sendHeaders(::ArrayW<::System::Runtime::Remoting::Messaging::Header> value) ;

constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header> __get__sendHeaders() const;

 ::ArrayW<::System::Runtime::Remoting::Messaging::Header> __declspec(property(get=__get__recvHeaders, put=__set__recvHeaders))  _recvHeaders;

constexpr void __set__recvHeaders(::ArrayW<::System::Runtime::Remoting::Messaging::Header> value) ;

constexpr ::ArrayW<::System::Runtime::Remoting::Messaging::Header> __get__recvHeaders() const;


// Properties

 bool __declspec(property(get=get_HasInfo))  HasInfo;

 bool __declspec(property(get=get_HasUserData))  HasUserData;

 ::System::Collections::Hashtable __declspec(property(get=get_Datastore))  Datastore;


// Methods

// Ctor Parameters []
explicit LogicalCallContext() ;

/// @brief Method .ctor addr 0x233a414 size 0x8 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "info", ty: "::System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "context", ty: "::System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit LogicalCallContext(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x233a41c size 0x2fc virtual false final false
 void _ctor(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method GetObjectData addr 0x233a784 size 0x354 virtual true final true
 void GetObjectData(::System::Runtime::Serialization::SerializationInfo info, ::System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method Clone addr 0x233ab04 size 0x5f8 virtual true final true
 ::bs_hook::Il2CppWrapperType Clone() ;

/// @brief Method Merge addr 0x232bd5c size 0x230 virtual false final false
 void Merge(::System::Runtime::Remoting::Messaging::LogicalCallContext lc) ;

/// @brief Method get_HasInfo addr 0x232bcfc size 0x60 virtual false final false
 bool get_HasInfo() ;

/// @brief Method get_HasUserData addr 0x233aad8 size 0x2c virtual false final false
 bool get_HasUserData() ;

/// @brief Method get_Datastore addr 0x233a718 size 0x6c virtual false final false
 ::System::Collections::Hashtable get_Datastore() ;

/// @brief Method GetData addr 0x233b1ec size 0x2c virtual false final false
 ::bs_hook::Il2CppWrapperType GetData(::StringW name) ;

/// @brief Method SetData addr 0x233a078 size 0x98 virtual false final false
 void SetData(::StringW name, ::bs_hook::Il2CppWrapperType data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Messaging
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Remoting::Messaging::LogicalCallContext);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::LogicalCallContext, "System.Runtime.Remoting.Messaging", "LogicalCallContext");
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Remoting::Messaging::____System__Runtime__Remoting__Messaging__LogicalCallContext__Reader, "System.Runtime.Remoting.Messaging", "LogicalCallContext/Reader");
