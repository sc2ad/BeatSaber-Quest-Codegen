#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/Xml/zzzz__XmlResolver_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
#include <cstdint>
namespace System::Net {
class IWebProxy;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net::Cache {
class RequestCachePolicy;
}
namespace System {
class Uri;
}
namespace System {
class Type;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
namespace System::Xml {
class XmlDownloadManager;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct AsyncTaskMethodBuilder_1;
}
namespace System::IO {
class Stream;
}
namespace System::Runtime::CompilerServices {
template<typename TResult>
struct System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter;
}
namespace System::Runtime::CompilerServices {
class IAsyncStateMachine;
}
// Forward declare root types
namespace System::Xml {
class XmlUrlResolver;
}
namespace System::Xml {
struct System__Xml__XmlUrlResolver___GetEntityAsync_d__15;
}
// Type: ::<GetEntityAsync>d__15
namespace System::Xml {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11517))
// CS Name: System.Xml.XmlUrlResolver::<GetEntityAsync>d__15
struct CORDL_TYPE System__Xml__XmlUrlResolver___GetEntityAsync_d__15 : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::Runtime::CompilerServices::IAsyncStateMachine
constexpr operator  System::Runtime::CompilerServices::IAsyncStateMachine() const;

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "__t__builder", ty: "System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::bs_hook::Il2CppWrapperType>", modifiers: "", def_value: None }, CppParam { name: "ofObjectToReturn", ty: "System::Type", modifiers: "", def_value: None }, CppParam { name: "absoluteUri", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "__4__this", ty: "System::Xml::XmlUrlResolver", modifiers: "", def_value: None }, CppParam { name: "__u__1", ty: "System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream>", modifiers: "", def_value: None }]
constexpr System__Xml__XmlUrlResolver___GetEntityAsync_d__15(int32_t __1__state, System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::bs_hook::Il2CppWrapperType> __t__builder, System::Type ofObjectToReturn, System::Uri absoluteUri, System::Xml::XmlUrlResolver __4__this, System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> __u__1) noexcept;


                    constexpr System__Xml__XmlUrlResolver___GetEntityAsync_d__15(System__Xml__XmlUrlResolver___GetEntityAsync_d__15 const&) = default;
                    constexpr System__Xml__XmlUrlResolver___GetEntityAsync_d__15(System__Xml__XmlUrlResolver___GetEntityAsync_d__15&&) = default;
                    constexpr System__Xml__XmlUrlResolver___GetEntityAsync_d__15& operator=(System__Xml__XmlUrlResolver___GetEntityAsync_d__15 const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr System__Xml__XmlUrlResolver___GetEntityAsync_d__15& operator=(System__Xml__XmlUrlResolver___GetEntityAsync_d__15&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x48};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit System__Xml__XmlUrlResolver___GetEntityAsync_d__15(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::bs_hook::Il2CppWrapperType> __declspec(property(get=__get___t__builder, put=__set___t__builder))  __t__builder;

constexpr void __set___t__builder(System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::bs_hook::Il2CppWrapperType> value) ;

constexpr System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::bs_hook::Il2CppWrapperType> __get___t__builder() const;

 System::Type __declspec(property(get=__get_ofObjectToReturn, put=__set_ofObjectToReturn))  ofObjectToReturn;

constexpr void __set_ofObjectToReturn(System::Type value) ;

constexpr System::Type __get_ofObjectToReturn() const;

 System::Uri __declspec(property(get=__get_absoluteUri, put=__set_absoluteUri))  absoluteUri;

constexpr void __set_absoluteUri(System::Uri value) ;

constexpr System::Uri __get_absoluteUri() const;

 System::Xml::XmlUrlResolver __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(System::Xml::XmlUrlResolver value) ;

constexpr System::Xml::XmlUrlResolver __get___4__this() const;

 System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> __declspec(property(get=__get___u__1, put=__set___u__1))  __u__1;

constexpr void __set___u__1(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> value) ;

constexpr System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConfiguredTaskAwaitable_1__ConfiguredTaskAwaiter<System::IO::Stream> __get___u__1() const;


// Methods

/// @brief Method MoveNext addr 0x2716030 size 0x37c virtual true final true
 void MoveNext() ;

/// @brief Method SetStateMachine addr 0x27163ac size 0x58 virtual true final true
 void SetStateMachine(System::Runtime::CompilerServices::IAsyncStateMachine stateMachine) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def System::Xml
// Type: System.Xml::XmlUrlResolver
namespace System::Xml {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11516))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11518))
// CS Name: System.Xml.XmlUrlResolver
class CORDL_TYPE XmlUrlResolver : public System::Xml::XmlResolver {
public:
// Declarations
using _GetEntityAsync_d__15 = System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~XmlUrlResolver() = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlUrlResolver", modifiers: " const&", def_value: None }]
constexpr XmlUrlResolver(XmlUrlResolver const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XmlUrlResolver", modifiers: "&&", def_value: None }]
constexpr XmlUrlResolver(XmlUrlResolver&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XmlUrlResolver(void* ptr) noexcept : System::Xml::XmlResolver(ptr) {
}


  constexpr XmlUrlResolver& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XmlUrlResolver& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XmlUrlResolver& operator=(XmlUrlResolver&& o) noexcept = default;
  constexpr XmlUrlResolver& operator=(XmlUrlResolver const& o) noexcept = default;
                


// Fields

static ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_s_DownloadManager, put=__set_s_DownloadManager))  s_DownloadManager;

static void __set_s_DownloadManager(::bs_hook::Il2CppWrapperType value) ;

static ::bs_hook::Il2CppWrapperType __get_s_DownloadManager() ;

 System::Net::ICredentials __declspec(property(get=__get__credentials, put=__set__credentials))  _credentials;

constexpr void __set__credentials(System::Net::ICredentials value) ;

constexpr System::Net::ICredentials __get__credentials() const;

 System::Net::IWebProxy __declspec(property(get=__get__proxy, put=__set__proxy))  _proxy;

constexpr void __set__proxy(System::Net::IWebProxy value) ;

constexpr System::Net::IWebProxy __get__proxy() const;

 System::Net::Cache::RequestCachePolicy __declspec(property(get=__get__cachePolicy, put=__set__cachePolicy))  _cachePolicy;

constexpr void __set__cachePolicy(System::Net::Cache::RequestCachePolicy value) ;

constexpr System::Net::Cache::RequestCachePolicy __get__cachePolicy() const;


// Properties

static System::Xml::XmlDownloadManager __declspec(property(get=get_DownloadManager))  DownloadManager;


// Methods

/// @brief Method get_DownloadManager addr 0x2715cc8 size 0xd4 virtual false final false
static System::Xml::XmlDownloadManager get_DownloadManager() ;

// Ctor Parameters []
explicit XmlUrlResolver() ;

/// @brief Method .ctor addr 0x2715d9c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method GetEntity addr 0x2715da4 size 0x17c virtual true final false
 ::bs_hook::Il2CppWrapperType GetEntity(System::Uri absoluteUri, ::StringW role, System::Type ofObjectToReturn) ;

/// @brief Method ResolveUri addr 0x2715f20 size 0x4 virtual true final false
 System::Uri ResolveUri(System::Uri baseUri, ::StringW relativeUri) ;

/// @brief Method GetEntityAsync addr 0x2715f24 size 0x10c virtual true final false
 System::Threading::Tasks::Task_1<::bs_hook::Il2CppWrapperType> GetEntityAsync(System::Uri absoluteUri, ::StringW role, System::Type ofObjectToReturn) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Xml
NEED_NO_BOX(System::Xml::XmlUrlResolver);
DEFINE_IL2CPP_ARG_TYPE(System::Xml::XmlUrlResolver, "System.Xml", "XmlUrlResolver");
DEFINE_IL2CPP_ARG_TYPE(System::Xml::System__Xml__XmlUrlResolver___GetEntityAsync_d__15, "System.Xml", "XmlUrlResolver/<GetEntityAsync>d__15");
