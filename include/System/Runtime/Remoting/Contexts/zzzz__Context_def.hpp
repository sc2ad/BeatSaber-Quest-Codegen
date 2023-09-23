#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class LocalDataStoreHolder;
}
namespace System::Runtime::Remoting::Contexts {
class CrossContextDelegate;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class LocalDataStore;
}
namespace System {
class ContextBoundObject;
}
namespace System::Runtime::Remoting::Messaging {
class IMessage;
}
namespace System::Runtime::Remoting::Contexts {
class IContextProperty;
}
namespace System {
class LocalDataStoreMgr;
}
namespace System {
class MarshalByRefObject;
}
namespace System::Runtime::Remoting::Contexts {
class ContextCallbackObject;
}
namespace System::Runtime::Remoting::Contexts {
class DynamicPropertyCollection;
}
namespace System {
class LocalDataStoreSlot;
}
namespace System::Runtime::Remoting::Messaging {
class IMessageSink;
}
namespace System::Runtime::Remoting::Contexts {
class IDynamicProperty;
}
namespace System::Runtime::Remoting::Activation {
class IConstructionCallMessage;
}
// Forward declare root types
namespace System::Runtime::Remoting::Contexts {
class Context;
}
// Type: System.Runtime.Remoting.Contexts::Context
namespace System::Runtime::Remoting::Contexts {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3094))
// CS Name: System.Runtime.Remoting.Contexts.Context
class CORDL_TYPE Context : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~Context() = default;

// Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: " const&", def_value: None }]
constexpr Context(Context const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Context", modifiers: "&&", def_value: None }]
constexpr Context(Context&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Context(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Context& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Context& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Context& operator=(Context&& o) noexcept = default;
  constexpr Context& operator=(Context const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_domain_id, put=__set_domain_id))  domain_id;

constexpr void __set_domain_id(int32_t value) ;

constexpr int32_t __get_domain_id() const;

 int32_t __declspec(property(get=__get_context_id, put=__set_context_id))  context_id;

constexpr void __set_context_id(int32_t value) ;

constexpr int32_t __get_context_id() const;

 ::cordl_internals::uintptr_t __declspec(property(get=__get_static_data, put=__set_static_data))  static_data;

constexpr void __set_static_data(::cordl_internals::uintptr_t value) ;

constexpr ::cordl_internals::uintptr_t __get_static_data() const;

 ::cordl_internals::uintptr_t __declspec(property(get=__get_data, put=__set_data))  data;

constexpr void __set_data(::cordl_internals::uintptr_t value) ;

constexpr ::cordl_internals::uintptr_t __get_data() const;

static ::ArrayW<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_local_slots, put=__set_local_slots))  local_slots;

static void __set_local_slots(::ArrayW<::bs_hook::Il2CppWrapperType> value) ;

static ::ArrayW<::bs_hook::Il2CppWrapperType> __get_local_slots() ;

static System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get_default_server_context_sink, put=__set_default_server_context_sink))  default_server_context_sink;

static void __set_default_server_context_sink(System::Runtime::Remoting::Messaging::IMessageSink value) ;

static System::Runtime::Remoting::Messaging::IMessageSink __get_default_server_context_sink() ;

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get_server_context_sink_chain, put=__set_server_context_sink_chain))  server_context_sink_chain;

constexpr void __set_server_context_sink_chain(System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr System::Runtime::Remoting::Messaging::IMessageSink __get_server_context_sink_chain() const;

 System::Runtime::Remoting::Messaging::IMessageSink __declspec(property(get=__get_client_context_sink_chain, put=__set_client_context_sink_chain))  client_context_sink_chain;

constexpr void __set_client_context_sink_chain(System::Runtime::Remoting::Messaging::IMessageSink value) ;

constexpr System::Runtime::Remoting::Messaging::IMessageSink __get_client_context_sink_chain() const;

 System::Collections::Generic::List_1<System::Runtime::Remoting::Contexts::IContextProperty> __declspec(property(get=__get_context_properties, put=__set_context_properties))  context_properties;

constexpr void __set_context_properties(System::Collections::Generic::List_1<System::Runtime::Remoting::Contexts::IContextProperty> value) ;

constexpr System::Collections::Generic::List_1<System::Runtime::Remoting::Contexts::IContextProperty> __get_context_properties() const;

static int32_t __declspec(property(get=__get_global_count, put=__set_global_count))  global_count;

static void __set_global_count(int32_t value) ;

static int32_t __get_global_count() ;

 System::LocalDataStoreHolder __declspec(property(get=__get__localDataStore, put=__set__localDataStore))  _localDataStore;

constexpr void __set__localDataStore(System::LocalDataStoreHolder value) ;

constexpr System::LocalDataStoreHolder __get__localDataStore() const;

static System::LocalDataStoreMgr __declspec(property(get=__get__localDataStoreMgr, put=__set__localDataStoreMgr))  _localDataStoreMgr;

static void __set__localDataStoreMgr(System::LocalDataStoreMgr value) ;

static System::LocalDataStoreMgr __get__localDataStoreMgr() ;

static System::Runtime::Remoting::Contexts::DynamicPropertyCollection __declspec(property(get=__get_global_dynamic_properties, put=__set_global_dynamic_properties))  global_dynamic_properties;

static void __set_global_dynamic_properties(System::Runtime::Remoting::Contexts::DynamicPropertyCollection value) ;

static System::Runtime::Remoting::Contexts::DynamicPropertyCollection __get_global_dynamic_properties() ;

 System::Runtime::Remoting::Contexts::DynamicPropertyCollection __declspec(property(get=__get_context_dynamic_properties, put=__set_context_dynamic_properties))  context_dynamic_properties;

constexpr void __set_context_dynamic_properties(System::Runtime::Remoting::Contexts::DynamicPropertyCollection value) ;

constexpr System::Runtime::Remoting::Contexts::DynamicPropertyCollection __get_context_dynamic_properties() const;

 System::Runtime::Remoting::Contexts::ContextCallbackObject __declspec(property(get=__get_callback_object, put=__set_callback_object))  callback_object;

constexpr void __set_callback_object(System::Runtime::Remoting::Contexts::ContextCallbackObject value) ;

constexpr System::Runtime::Remoting::Contexts::ContextCallbackObject __get_callback_object() const;


// Properties

static System::Runtime::Remoting::Contexts::Context __declspec(property(get=get_DefaultContext))  DefaultContext;

 int32_t __declspec(property(get=get_ContextID))  ContextID;

 ::ArrayW<System::Runtime::Remoting::Contexts::IContextProperty> __declspec(property(get=get_ContextProperties))  ContextProperties;

 bool __declspec(property(get=get_IsDefaultContext))  IsDefaultContext;

 bool __declspec(property(get=get_NeedsContextSink))  NeedsContextSink;

static bool __declspec(property(get=get_HasGlobalDynamicSinks))  HasGlobalDynamicSinks;

 bool __declspec(property(get=get_HasDynamicSinks))  HasDynamicSinks;

 bool __declspec(property(get=get_HasExitSinks))  HasExitSinks;

 System::LocalDataStore __declspec(property(get=get_MyLocalStore))  MyLocalStore;


// Methods

/// @brief Method RegisterContext addr 0x23302a8 size 0x4 virtual false final false
static void RegisterContext(System::Runtime::Remoting::Contexts::Context ctx) ;

/// @brief Method ReleaseContext addr 0x23302ac size 0x4 virtual false final false
static void ReleaseContext(System::Runtime::Remoting::Contexts::Context ctx) ;

// Ctor Parameters []
explicit Context() ;

/// @brief Method .ctor addr 0x23302b0 size 0x84 virtual false final false
 void _ctor() ;

/// @brief Method Finalize addr 0x2330334 size 0xd0 virtual true final false
 void Finalize() ;

/// @brief Method get_DefaultContext addr 0x2327b64 size 0x8 virtual false final false
static System::Runtime::Remoting::Contexts::Context get_DefaultContext() ;

/// @brief Method get_ContextID addr 0x2330404 size 0x8 virtual true final false
 int32_t get_ContextID() ;

/// @brief Method get_ContextProperties addr 0x233040c size 0x74 virtual true final false
 ::ArrayW<System::Runtime::Remoting::Contexts::IContextProperty> get_ContextProperties() ;

/// @brief Method get_IsDefaultContext addr 0x2330480 size 0x10 virtual false final false
 bool get_IsDefaultContext() ;

/// @brief Method get_NeedsContextSink addr 0x2330490 size 0xe0 virtual false final false
 bool get_NeedsContextSink() ;

/// @brief Method RegisterDynamicProperty addr 0x23305a0 size 0x78 virtual false final false
static bool RegisterDynamicProperty(System::Runtime::Remoting::Contexts::IDynamicProperty prop, System::ContextBoundObject obj, System::Runtime::Remoting::Contexts::Context ctx) ;

/// @brief Method UnregisterDynamicProperty addr 0x2330ae8 size 0x78 virtual false final false
static bool UnregisterDynamicProperty(::StringW name, System::ContextBoundObject obj, System::Runtime::Remoting::Contexts::Context ctx) ;

/// @brief Method GetDynamicPropertyCollection addr 0x2330618 size 0x1e4 virtual false final false
static System::Runtime::Remoting::Contexts::DynamicPropertyCollection GetDynamicPropertyCollection(System::ContextBoundObject obj, System::Runtime::Remoting::Contexts::Context ctx) ;

/// @brief Method NotifyGlobalDynamicSinks addr 0x2330d40 size 0x100 virtual false final false
static void NotifyGlobalDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage req_msg, bool client_site, bool async) ;

/// @brief Method get_HasGlobalDynamicSinks addr 0x233149c size 0xa4 virtual false final false
static bool get_HasGlobalDynamicSinks() ;

/// @brief Method NotifyDynamicSinks addr 0x2331540 size 0x84 virtual false final false
 void NotifyDynamicSinks(bool start, System::Runtime::Remoting::Messaging::IMessage req_msg, bool client_site, bool async) ;

/// @brief Method get_HasDynamicSinks addr 0x23315c4 size 0x40 virtual false final false
 bool get_HasDynamicSinks() ;

/// @brief Method get_HasExitSinks addr 0x232da94 size 0xb8 virtual false final false
 bool get_HasExitSinks() ;

/// @brief Method GetProperty addr 0x2331604 size 0x1e8 virtual true final false
 System::Runtime::Remoting::Contexts::IContextProperty GetProperty(::StringW name) ;

/// @brief Method SetProperty addr 0x23317ec size 0x1ac virtual true final false
 void SetProperty(System::Runtime::Remoting::Contexts::IContextProperty prop) ;

/// @brief Method Freeze addr 0x2331998 size 0x1ac virtual true final false
 void Freeze() ;

/// @brief Method ToString addr 0x2331b44 size 0x5c virtual true final false
 ::StringW ToString() ;

/// @brief Method GetServerContextSinkChain addr 0x2331ba0 size 0x1c4 virtual false final false
 System::Runtime::Remoting::Messaging::IMessageSink GetServerContextSinkChain() ;

/// @brief Method GetClientContextSinkChain addr 0x232db4c size 0x208 virtual false final false
 System::Runtime::Remoting::Messaging::IMessageSink GetClientContextSinkChain() ;

/// @brief Method CreateServerObjectSinkChain addr 0x232769c size 0x1b8 virtual false final false
 System::Runtime::Remoting::Messaging::IMessageSink CreateServerObjectSinkChain(System::MarshalByRefObject obj, bool forceInternalExecute) ;

/// @brief Method CreateEnvoySink addr 0x2327004 size 0x204 virtual false final false
 System::Runtime::Remoting::Messaging::IMessageSink CreateEnvoySink(System::MarshalByRefObject serverObject) ;

/// @brief Method SwitchToContext addr 0x2331d8c size 0x8 virtual false final false
static System::Runtime::Remoting::Contexts::Context SwitchToContext(System::Runtime::Remoting::Contexts::Context newContext) ;

/// @brief Method CreateNewContext addr 0x2331d94 size 0x844 virtual false final false
static System::Runtime::Remoting::Contexts::Context CreateNewContext(System::Runtime::Remoting::Activation::IConstructionCallMessage msg) ;

/// @brief Method DoCallBack addr 0x23325d8 size 0x174 virtual false final false
 void DoCallBack(System::Runtime::Remoting::Contexts::CrossContextDelegate deleg) ;

/// @brief Method get_MyLocalStore addr 0x2332758 size 0x174 virtual false final false
 System::LocalDataStore get_MyLocalStore() ;

/// @brief Method AllocateDataSlot addr 0x23328cc size 0x64 virtual false final false
static System::LocalDataStoreSlot AllocateDataSlot() ;

/// @brief Method AllocateNamedDataSlot addr 0x2332930 size 0x6c virtual false final false
static System::LocalDataStoreSlot AllocateNamedDataSlot(::StringW name) ;

/// @brief Method FreeNamedDataSlot addr 0x233299c size 0x6c virtual false final false
static void FreeNamedDataSlot(::StringW name) ;

/// @brief Method GetNamedDataSlot addr 0x2332a08 size 0x6c virtual false final false
static System::LocalDataStoreSlot GetNamedDataSlot(::StringW name) ;

/// @brief Method GetData addr 0x2332a74 size 0x30 virtual false final false
static ::bs_hook::Il2CppWrapperType GetData(System::LocalDataStoreSlot slot) ;

/// @brief Method SetData addr 0x2332aa4 size 0x40 virtual false final false
static void SetData(System::LocalDataStoreSlot slot, ::bs_hook::Il2CppWrapperType data) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Remoting::Contexts
NEED_NO_BOX(System::Runtime::Remoting::Contexts::Context);
DEFINE_IL2CPP_ARG_TYPE(System::Runtime::Remoting::Contexts::Context, "System.Runtime.Remoting.Contexts", "Context");
