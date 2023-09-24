#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MarshalByRefObject_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class ResolveEventHandler;
}
namespace System {
class UnhandledExceptionEventHandler;
}
namespace System::Runtime::ExceptionServices {
class FirstChanceExceptionEventArgs;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodReturnMessage;
}
namespace System::Reflection {
class Assembly;
}
namespace System::Threading {
struct StackCrawlMark;
}
namespace System::Runtime::Remoting::Contexts {
class Context;
}
namespace System {
class EventHandler;
}
namespace System::Reflection {
class MethodInfo;
}
namespace System {
template<typename TEventArgs>
class EventHandler_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Runtime::Remoting::Messaging {
class CADMethodCallMessage;
}
namespace System {
class AssemblyLoadEventHandler;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Security::Policy {
class Evidence;
}
// Forward declare root types
namespace System {
class AppDomain;
}
// Type: System::AppDomain
namespace System {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2604))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(2574))
// CS Name: System.AppDomain
class CORDL_TYPE AppDomain : public System::MarshalByRefObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0xa0};

virtual ~AppDomain() = default;

// Ctor Parameters [CppParam { name: "", ty: "AppDomain", modifiers: " const&", def_value: None }]
constexpr AppDomain(AppDomain const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AppDomain", modifiers: "&&", def_value: None }]
constexpr AppDomain(AppDomain&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AppDomain(void* ptr) noexcept : System::MarshalByRefObject(ptr) {
}


  constexpr AppDomain& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AppDomain& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AppDomain& operator=(AppDomain&& o) noexcept = default;
  constexpr AppDomain& operator=(AppDomain const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get__mono_app_domain, put=__set__mono_app_domain))  _mono_app_domain;

constexpr void __set__mono_app_domain(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get__mono_app_domain() const;

static ::StringW __declspec(property(get=__get__process_guid, put=__set__process_guid))  _process_guid;

static void __set__process_guid(::StringW value) ;

static ::StringW __get__process_guid() ;

static System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_type_resolve_in_progress, put=__set_type_resolve_in_progress))  type_resolve_in_progress;

static void __set_type_resolve_in_progress(System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __get_type_resolve_in_progress() ;

static System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_assembly_resolve_in_progress, put=__set_assembly_resolve_in_progress))  assembly_resolve_in_progress;

static void __set_assembly_resolve_in_progress(System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __get_assembly_resolve_in_progress() ;

static System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_assembly_resolve_in_progress_refonly, put=__set_assembly_resolve_in_progress_refonly))  assembly_resolve_in_progress_refonly;

static void __set_assembly_resolve_in_progress_refonly(System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> value) ;

static System::Collections::Generic::Dictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __get_assembly_resolve_in_progress_refonly() ;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__evidence, put=__set__evidence))  _evidence;

constexpr void __set__evidence(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__evidence() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__granted, put=__set__granted))  _granted;

constexpr void __set__granted(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__granted() const;

 int32_t __declspec(property(get=__get__principalPolicy, put=__set__principalPolicy))  _principalPolicy;

constexpr void __set__principalPolicy(int32_t value) ;

constexpr int32_t __get__principalPolicy() const;

 System::AssemblyLoadEventHandler __declspec(property(get=__get_AssemblyLoad, put=__set_AssemblyLoad))  AssemblyLoad;

constexpr void __set_AssemblyLoad(System::AssemblyLoadEventHandler value) ;

constexpr System::AssemblyLoadEventHandler __get_AssemblyLoad() const;

 System::ResolveEventHandler __declspec(property(get=__get_AssemblyResolve, put=__set_AssemblyResolve))  AssemblyResolve;

constexpr void __set_AssemblyResolve(System::ResolveEventHandler value) ;

constexpr System::ResolveEventHandler __get_AssemblyResolve() const;

 System::EventHandler __declspec(property(get=__get_DomainUnload, put=__set_DomainUnload))  DomainUnload;

constexpr void __set_DomainUnload(System::EventHandler value) ;

constexpr System::EventHandler __get_DomainUnload() const;

 System::EventHandler __declspec(property(get=__get_ProcessExit, put=__set_ProcessExit))  ProcessExit;

constexpr void __set_ProcessExit(System::EventHandler value) ;

constexpr System::EventHandler __get_ProcessExit() const;

 System::ResolveEventHandler __declspec(property(get=__get_ResourceResolve, put=__set_ResourceResolve))  ResourceResolve;

constexpr void __set_ResourceResolve(System::ResolveEventHandler value) ;

constexpr System::ResolveEventHandler __get_ResourceResolve() const;

 System::ResolveEventHandler __declspec(property(get=__get_TypeResolve, put=__set_TypeResolve))  TypeResolve;

constexpr void __set_TypeResolve(System::ResolveEventHandler value) ;

constexpr System::ResolveEventHandler __get_TypeResolve() const;

 System::UnhandledExceptionEventHandler __declspec(property(get=__get_UnhandledException, put=__set_UnhandledException))  UnhandledException;

constexpr void __set_UnhandledException(System::UnhandledExceptionEventHandler value) ;

constexpr System::UnhandledExceptionEventHandler __get_UnhandledException() const;

 System::EventHandler_1<System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs> __declspec(property(get=__get_FirstChanceException, put=__set_FirstChanceException))  FirstChanceException;

constexpr void __set_FirstChanceException(System::EventHandler_1<System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs> value) ;

constexpr System::EventHandler_1<System::Runtime::ExceptionServices::FirstChanceExceptionEventArgs> __get_FirstChanceException() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__domain_manager, put=__set__domain_manager))  _domain_manager;

constexpr void __set__domain_manager(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__domain_manager() const;

 System::ResolveEventHandler __declspec(property(get=__get_ReflectionOnlyAssemblyResolve, put=__set_ReflectionOnlyAssemblyResolve))  ReflectionOnlyAssemblyResolve;

constexpr void __set_ReflectionOnlyAssemblyResolve(System::ResolveEventHandler value) ;

constexpr System::ResolveEventHandler __get_ReflectionOnlyAssemblyResolve() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__activation, put=__set__activation))  _activation;

constexpr void __set__activation(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__activation() const;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get__applicationIdentity, put=__set__applicationIdentity))  _applicationIdentity;

constexpr void __set__applicationIdentity(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get__applicationIdentity() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_compatibility_switch, put=__set_compatibility_switch))  compatibility_switch;

constexpr void __set_compatibility_switch(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_compatibility_switch() const;


// Properties

static System::AppDomain __declspec(property(get=get_CurrentDomain))  CurrentDomain;


// Methods

/// @brief Method IsAppXModel addr 0x2485904 size 0x8 virtual false final false
static bool IsAppXModel() ;

static System::AppDomain New_ctor() ;

/// @brief Method .ctor addr 0x248590c size 0x4 virtual false final false
 void _ctor() ;

/// @brief Method getFriendlyName addr 0x2485914 size 0x4 virtual false final false
 ::StringW getFriendlyName() ;

/// @brief Method getCurDomain addr 0x2485918 size 0x4 virtual false final false
static System::AppDomain getCurDomain() ;

/// @brief Method get_CurrentDomain addr 0x248591c size 0x4 virtual false final false
static System::AppDomain get_CurrentDomain() ;

/// @brief Method GetAssemblies addr 0x2485920 size 0x8 virtual false final false
 ::ArrayW<System::Reflection::Assembly> GetAssemblies(bool refOnly) ;

/// @brief Method GetAssemblies addr 0x2485928 size 0x8 virtual true final true
 ::ArrayW<System::Reflection::Assembly> GetAssemblies() ;

/// @brief Method GetData addr 0x2485930 size 0x4 virtual true final true
 ::bs_hook::Il2CppWrapperType GetData(::StringW name) ;

/// @brief Method InitializeLifetimeService addr 0x2485934 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType InitializeLifetimeService() ;

/// @brief Method LoadAssembly addr 0x248593c size 0x8 virtual false final false
 System::Reflection::Assembly LoadAssembly(::StringW assemblyRef, System::Security::Policy::Evidence securityEvidence, bool refOnly, ByRef<System::Threading::StackCrawlMark> stackMark) ;

/// @brief Method Load addr 0x2485944 size 0x24 virtual true final true
 System::Reflection::Assembly Load(::StringW assemblyString) ;

/// @brief Method Load addr 0x2485968 size 0x110 virtual false final false
 System::Reflection::Assembly Load(::StringW assemblyString, System::Security::Policy::Evidence assemblySecurity, bool refonly, ByRef<System::Threading::StackCrawlMark> stackMark) ;

/// @brief Method InternalSetDomainByID addr 0x2485a78 size 0x4 virtual false final false
static System::AppDomain InternalSetDomainByID(int32_t domain_id) ;

/// @brief Method InternalSetDomain addr 0x2485a7c size 0x4 virtual false final false
static System::AppDomain InternalSetDomain(System::AppDomain context) ;

/// @brief Method InternalPushDomainRefByID addr 0x2485a80 size 0x4 virtual false final false
static void InternalPushDomainRefByID(int32_t domain_id) ;

/// @brief Method InternalPopDomainRef addr 0x2485a84 size 0x4 virtual false final false
static void InternalPopDomainRef() ;

/// @brief Method InternalSetContext addr 0x2485a88 size 0x4 virtual false final false
static System::Runtime::Remoting::Contexts::Context InternalSetContext(System::Runtime::Remoting::Contexts::Context context) ;

/// @brief Method InternalGetContext addr 0x2485a8c size 0x4 virtual false final false
static System::Runtime::Remoting::Contexts::Context InternalGetContext() ;

/// @brief Method InternalGetDefaultContext addr 0x2485a90 size 0x4 virtual false final false
static System::Runtime::Remoting::Contexts::Context InternalGetDefaultContext() ;

/// @brief Method InternalGetProcessGuid addr 0x2485a94 size 0x4 virtual false final false
static ::StringW InternalGetProcessGuid(::StringW newguid) ;

/// @brief Method InvokeInDomainByID addr 0x2485a98 size 0x190 virtual false final false
static ::bs_hook::Il2CppWrapperType InvokeInDomainByID(int32_t domain_id, System::Reflection::MethodInfo method, ::bs_hook::Il2CppWrapperType obj, ::ArrayW<::bs_hook::Il2CppWrapperType> args) ;

/// @brief Method GetProcessGuid addr 0x2485c28 size 0x88 virtual false final false
static ::StringW GetProcessGuid() ;

/// @brief Method InternalIsFinalizingForUnload addr 0x2485cb0 size 0x4 virtual false final false
static bool InternalIsFinalizingForUnload(int32_t domain_id) ;

/// @brief Method IsFinalizingForUnload addr 0x2485cb4 size 0x14 virtual false final false
 bool IsFinalizingForUnload() ;

/// @brief Method getDomainID addr 0x2485cc8 size 0x8 virtual false final false
 int32_t getDomainID() ;

/// @brief Method ToString addr 0x2485cd0 size 0x4 virtual true final false
 ::StringW ToString() ;

/// @brief Method DoAssemblyLoad addr 0x2485cd4 size 0x98 virtual false final false
 void DoAssemblyLoad(System::Reflection::Assembly assembly) ;

/// @brief Method DoAssemblyResolve addr 0x2485d6c size 0x310 virtual false final false
 System::Reflection::Assembly DoAssemblyResolve(::StringW name, System::Reflection::Assembly requestingAssembly, bool refonly) ;

/// @brief Method DoTypeResolve addr 0x248607c size 0x2d0 virtual false final false
 System::Reflection::Assembly DoTypeResolve(::StringW name) ;

/// @brief Method DoDomainUnload addr 0x248634c size 0x24 virtual false final false
 void DoDomainUnload() ;

/// @brief Method GetMarshalledDomainObjRef addr 0x2486370 size 0xd8 virtual false final false
 ::ArrayW<uint8_t> GetMarshalledDomainObjRef() ;

/// @brief Method ProcessMessageInDomain addr 0x2486448 size 0x130 virtual false final false
 void ProcessMessageInDomain(::ArrayW<uint8_t> arrRequest, System::Runtime::Remoting::Messaging::CADMethodCallMessage cadMsg, ByRef<::ArrayW<uint8_t>> arrResponse, ByRef<System::Runtime::Remoting::Messaging::CADMethodReturnMessage> cadMrm) ;

/// @brief Method add_DomainUnload addr 0x2486578 size 0x98 virtual true final true
 void add_DomainUnload(System::EventHandler value) ;

/// @brief Method remove_DomainUnload addr 0x2486784 size 0x98 virtual true final true
 void remove_DomainUnload(System::EventHandler value) ;

/// @brief Method add_UnhandledException addr 0x248698c size 0x98 virtual true final true
 void add_UnhandledException(System::UnhandledExceptionEventHandler value) ;

/// @brief Method remove_UnhandledException addr 0x2486a24 size 0x98 virtual true final true
 void remove_UnhandledException(System::UnhandledExceptionEventHandler value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System
NEED_NO_BOX(System::AppDomain);
DEFINE_IL2CPP_ARG_TYPE(System::AppDomain, "System", "AppDomain");
