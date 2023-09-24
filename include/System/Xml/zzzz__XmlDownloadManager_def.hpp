#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::IO {
class Stream;
}
namespace System {
class Uri;
}
namespace System::Xml {
class System__Xml__XmlDownloadManager____c__DisplayClass4_0;
}
namespace System::Xml {
struct System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5;
}
namespace System::Net {
class ICredentials;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class WebResponse;
}
namespace System::Net {
class WebRequest;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
// Forward declare root types
namespace System::Xml {
class System__Xml__XmlDownloadManager____c__DisplayClass4_0;
}
namespace System::Xml {
class XmlDownloadManager;
}
namespace System::Xml {
struct System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5;
}
// Type: ::<>c__DisplayClass4_0
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11491))
// CS Name: System.Xml.XmlDownloadManager::<>c__DisplayClass4_0
class CORDL_TYPE System__Xml__XmlDownloadManager____c__DisplayClass4_0 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~System__Xml__XmlDownloadManager____c__DisplayClass4_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlDownloadManager____c__DisplayClass4_0", modifiers: " const&", def_value: None }]
constexpr System__Xml__XmlDownloadManager____c__DisplayClass4_0(System__Xml__XmlDownloadManager____c__DisplayClass4_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Xml__XmlDownloadManager____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
constexpr System__Xml__XmlDownloadManager____c__DisplayClass4_0(System__Xml__XmlDownloadManager____c__DisplayClass4_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlDownloadManager____c__DisplayClass4_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Xml__XmlDownloadManager____c__DisplayClass4_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Xml__XmlDownloadManager____c__DisplayClass4_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Xml__XmlDownloadManager____c__DisplayClass4_0& operator=(System__Xml__XmlDownloadManager____c__DisplayClass4_0&& o) noexcept = default;
  constexpr System__Xml__XmlDownloadManager____c__DisplayClass4_0& operator=(System__Xml__XmlDownloadManager____c__DisplayClass4_0 const& o) noexcept = default;
                


// Fields

 System::Uri __declspec(property(get=__get_uri, put=__set_uri))  uri;

constexpr void __set_uri(System::Uri value) ;

constexpr System::Uri __get_uri() const;


// Methods

static System::Xml::System__Xml__XmlDownloadManager____c__DisplayClass4_0 New_ctor() ;

/// @brief Method .ctor addr 0x2710da8 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <GetStreamAsync>b__0 addr 0x2710ed0 size 0x90 virtual false final false
 System::IO::Stream _GetStreamAsync_b__0() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: ::<GetNonFileStreamAsync>d__5
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11492))
// CS Name: System.Xml.XmlDownloadManager::<GetNonFileStreamAsync>d__5
struct CORDL_TYPE System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream>", modifiers: "", def_value: None }, CppParam { name: "uri", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "credentials", ty: "System::Net::ICredentials", modifiers: "", def_value: None }, CppParam { name: "proxy", ty: "System::Net::IWebProxy", modifiers: "", def_value: None }, CppParam { name: "cachePolicy", ty: "System::Net::Cache::RequestCachePolicy", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Xml::XmlDownloadManager", modifiers: "", def_value: None }, CppParam { name: "_req_5__2", ty: "System::Net::WebRequest", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebResponse>", modifiers: "", def_value: None }]
constexpr System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream> __t__builder, System::Uri uri, System::Net::ICredentials credentials, System::Net::IWebProxy proxy, System::Net::Cache::RequestCachePolicy cachePolicy, System::Xml::XmlDownloadManager __4__this, System::Net::WebRequest _req_5__2, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebResponse> __u__1) noexcept;


                    constexpr System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5(System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5 const&) = default;
                    constexpr System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5(System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5&&) = default;
                    constexpr System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5& operator=(System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5& operator=(System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x60};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<System::IO::Stream> __get___t__builder() const;

 System::Uri __declspec(property(get=__get_uri, put=__set_uri))  uri;

constexpr void __set_uri(System::Uri value) ;

constexpr System::Uri __get_uri() const;

 System::Net::ICredentials __declspec(property(get=__get_credentials, put=__set_credentials))  credentials;

constexpr void __set_credentials(System::Net::ICredentials value) ;

constexpr System::Net::ICredentials __get_credentials() const;

 System::Net::IWebProxy __declspec(property(get=__get_proxy, put=__set_proxy))  proxy;

constexpr void __set_proxy(System::Net::IWebProxy value) ;

constexpr System::Net::IWebProxy __get_proxy() const;

 System::Net::Cache::RequestCachePolicy __declspec(property(get=__get_cachePolicy, put=__set_cachePolicy))  cachePolicy;

constexpr void __set_cachePolicy(System::Net::Cache::RequestCachePolicy value) ;

constexpr System::Net::Cache::RequestCachePolicy __get_cachePolicy() const;

 System::Xml::XmlDownloadManager __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Xml::XmlDownloadManager value) ;

constexpr System::Xml::XmlDownloadManager __get___4__this() const;

 System::Net::WebRequest __declspec(property(get=__get__req_5__2, put=__set__req_5__2))  _req_5__2;

constexpr void __set__req_5__2(System::Net::WebRequest value) ;

constexpr System::Net::WebRequest __get__req_5__2() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebResponse> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebResponse> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::Net::WebResponse> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2710f60 size 0x774 virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x27116d4 size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: System.Xml::XmlDownloadManager
namespace System::Xml {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11493))
// CS Name: System.Xml.XmlDownloadManager
class CORDL_TYPE XmlDownloadManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetNonFileStreamAsync_d__5 = System::Xml::System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5;

using __c__DisplayClass4_0 = System::Xml::System__Xml__XmlDownloadManager____c__DisplayClass4_0;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XmlDownloadManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDownloadManager", modifiers: " const&", def_value: None }]
constexpr XmlDownloadManager(XmlDownloadManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlDownloadManager", modifiers: "&&", def_value: None }]
constexpr XmlDownloadManager(XmlDownloadManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlDownloadManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XmlDownloadManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlDownloadManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlDownloadManager& operator=(XmlDownloadManager&& o) noexcept = default;
  constexpr XmlDownloadManager& operator=(XmlDownloadManager const& o) noexcept = default;
                


// Fields

 System::Collections::Hashtable __declspec(property(get=__get_connections, put=__set_connections))  connections;

constexpr void __set_connections(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get_connections() const;


// Methods

/// @brief Method GetStream addr 0x2710348 size 0x104 virtual false final false
 System::IO::Stream GetStream(System::Uri uri, System::Net::ICredentials credentials, System::Net::IWebProxy proxy, System::Net::Cache::RequestCachePolicy cachePolicy) ;

/// @brief Method GetNonFileStream addr 0x271044c size 0x490 virtual false final false
 System::IO::Stream GetNonFileStream(System::Uri uri, System::Net::ICredentials credentials, System::Net::IWebProxy proxy, System::Net::Cache::RequestCachePolicy cachePolicy) ;

/// @brief Method Remove addr 0x2710ad8 size 0x16c virtual false final false
 void Remove(::StringW host) ;

/// @brief Method GetStreamAsync addr 0x2710c44 size 0x164 virtual false final false
 System::Threading::Tasks::Task_1<System::IO::Stream> GetStreamAsync(System::Uri uri, System::Net::ICredentials credentials, System::Net::IWebProxy proxy, System::Net::Cache::RequestCachePolicy cachePolicy) ;

/// @brief Method GetNonFileStreamAsync addr 0x2710db0 size 0x118 virtual false final false
 System::Threading::Tasks::Task_1<System::IO::Stream> GetNonFileStreamAsync(System::Uri uri, System::Net::ICredentials credentials, System::Net::IWebProxy proxy, System::Net::Cache::RequestCachePolicy cachePolicy) ;

static System::Xml::XmlDownloadManager New_ctor() ;

/// @brief Method .ctor addr 0x2710ec8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::System__Xml__XmlDownloadManager____c__DisplayClass4_0);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlDownloadManager____c__DisplayClass4_0, "System.Xml", "XmlDownloadManager/<>c__DisplayClass4_0");
NEED_NO_BOX(System::Xml::XmlDownloadManager);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlDownloadManager, "System.Xml", "XmlDownloadManager");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlDownloadManager___GetNonFileStreamAsync_d__5, "System.Xml", "XmlDownloadManager/<GetNonFileStreamAsync>d__5");
