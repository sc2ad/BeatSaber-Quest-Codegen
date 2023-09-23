#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections {
class ArrayList;
}
namespace System::Net {
class AutoWebProxyScriptEngine;
}
namespace System {
class Uri;
}
namespace System::Text::RegularExpressions {
class Regex;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System::Runtime::Serialization {
class ISerializable;
}
namespace System::Collections {
class Hashtable;
}
namespace System::Net {
class ICredentials;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Net {
class IWebProxy;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
// Forward declare root types
namespace System::Net {
class WebProxy;
}
// Type: System.Net::WebProxy
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7990))
// CS Name: System.Net.WebProxy
class CORDL_TYPE WebProxy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Net::IWebProxy
constexpr operator  System::Net::IWebProxy() const noexcept;

/// @brief Convert operator to System::Runtime::Serialization::ISerializable
constexpr operator  System::Runtime::Serialization::ISerializable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~WebProxy() = default;

// Ctor Parameters [CppParam { name: "", ty: "WebProxy", modifiers: " const&", def_value: None }]
constexpr WebProxy(WebProxy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "WebProxy", modifiers: "&&", def_value: None }]
constexpr WebProxy(WebProxy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit WebProxy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr WebProxy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr WebProxy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr WebProxy& operator=(WebProxy&& o) noexcept = default;
  constexpr WebProxy& operator=(WebProxy const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__UseRegistry, put=__set__UseRegistry))  _UseRegistry;

constexpr void __set__UseRegistry(bool value) ;

constexpr bool __get__UseRegistry() const;

 bool __declspec(property(get=__get__BypassOnLocal, put=__set__BypassOnLocal))  _BypassOnLocal;

constexpr void __set__BypassOnLocal(bool value) ;

constexpr bool __get__BypassOnLocal() const;

 bool __declspec(property(get=__get_m_EnableAutoproxy, put=__set_m_EnableAutoproxy))  m_EnableAutoproxy;

constexpr void __set_m_EnableAutoproxy(bool value) ;

constexpr bool __get_m_EnableAutoproxy() const;

 System::Uri __declspec(property(get=__get__ProxyAddress, put=__set__ProxyAddress))  _ProxyAddress;

constexpr void __set__ProxyAddress(System::Uri value) ;

constexpr System::Uri __get__ProxyAddress() const;

 System::Collections::ArrayList __declspec(property(get=__get__BypassList, put=__set__BypassList))  _BypassList;

constexpr void __set__BypassList(System::Collections::ArrayList value) ;

constexpr System::Collections::ArrayList __get__BypassList() const;

 System::Net::ICredentials __declspec(property(get=__get__Credentials, put=__set__Credentials))  _Credentials;

constexpr void __set__Credentials(System::Net::ICredentials value) ;

constexpr System::Net::ICredentials __get__Credentials() const;

 ::ArrayW<System::Text::RegularExpressions::Regex> __declspec(property(get=__get__RegExBypassList, put=__set__RegExBypassList))  _RegExBypassList;

constexpr void __set__RegExBypassList(::ArrayW<System::Text::RegularExpressions::Regex> value) ;

constexpr ::ArrayW<System::Text::RegularExpressions::Regex> __get__RegExBypassList() const;

 System::Collections::Hashtable __declspec(property(get=__get__ProxyHostAddresses, put=__set__ProxyHostAddresses))  _ProxyHostAddresses;

constexpr void __set__ProxyHostAddresses(System::Collections::Hashtable value) ;

constexpr System::Collections::Hashtable __get__ProxyHostAddresses() const;

 System::Net::AutoWebProxyScriptEngine __declspec(property(get=__get_m_ScriptEngine, put=__set_m_ScriptEngine))  m_ScriptEngine;

constexpr void __set_m_ScriptEngine(System::Net::AutoWebProxyScriptEngine value) ;

constexpr System::Net::AutoWebProxyScriptEngine __get_m_ScriptEngine() const;


// Properties

 System::Net::ICredentials __declspec(property(get=get_Credentials))  Credentials;

 bool __declspec(property(get=get_UseDefaultCredentials, put=set_UseDefaultCredentials))  UseDefaultCredentials;

 System::Net::AutoWebProxyScriptEngine __declspec(property(get=get_ScriptEngine))  ScriptEngine;


// Methods

// Ctor Parameters []
explicit WebProxy() ;

/// @brief Method .ctor addr 0x2825510 size 0x14 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "Address", ty: "System::Uri", modifiers: "", def_value: None }, CppParam { name: "BypassOnLocal", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "BypassList", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }, CppParam { name: "Credentials", ty: "System::Net::ICredentials", modifiers: "", def_value: None }]
explicit WebProxy(System::Uri Address, bool BypassOnLocal, ::ArrayW<::StringW> BypassList, System::Net::ICredentials Credentials) ;

/// @brief Method .ctor addr 0x2825524 size 0xb4 virtual false final false
 void _ctor(System::Uri Address, bool BypassOnLocal, ::ArrayW<::StringW> BypassList, System::Net::ICredentials Credentials) ;

/// @brief Method get_Credentials addr 0x2825810 size 0x8 virtual true final true
 System::Net::ICredentials get_Credentials() ;

/// @brief Method get_UseDefaultCredentials addr 0x2825818 size 0x7c virtual false final false
 bool get_UseDefaultCredentials() ;

/// @brief Method set_UseDefaultCredentials addr 0x2825894 size 0x78 virtual false final false
 void set_UseDefaultCredentials(bool value) ;

/// @brief Method GetProxy addr 0x282590c size 0x190 virtual true final true
 System::Uri GetProxy(System::Uri destination) ;

/// @brief Method UpdateRegExList addr 0x28255d8 size 0x238 virtual false final false
 void UpdateRegExList(bool canThrow) ;

/// @brief Method IsMatchInBypassList addr 0x2825cec size 0x198 virtual false final false
 bool IsMatchInBypassList(System::Uri input) ;

/// @brief Method IsLocal addr 0x2825e84 size 0x160 virtual false final false
 bool IsLocal(System::Uri host) ;

/// @brief Method IsLocalInProxyHash addr 0x2825fe4 size 0xf0 virtual false final false
 bool IsLocalInProxyHash(System::Uri host) ;

/// @brief Method IsBypassed addr 0x28260d4 size 0xf4 virtual true final true
 bool IsBypassed(System::Uri host) ;

/// @brief Method IsBypassedManual addr 0x2825c24 size 0xc8 virtual false final false
 bool IsBypassedManual(System::Uri host) ;

// Ctor Parameters [CppParam { name: "serializationInfo", ty: "System::Runtime::Serialization::SerializationInfo", modifiers: "", def_value: None }, CppParam { name: "streamingContext", ty: "System::Runtime::Serialization::StreamingContext", modifiers: "", def_value: None }]
explicit WebProxy(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method .ctor addr 0x28262d0 size 0x360 virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method System.Runtime.Serialization.ISerializable.GetObjectData addr 0x282663c size 0xc virtual true final true
 void System_Runtime_Serialization_ISerializable_GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method GetObjectData addr 0x2826648 size 0x124 virtual true final false
 void GetObjectData(System::Runtime::Serialization::SerializationInfo serializationInfo, System::Runtime::Serialization::StreamingContext streamingContext) ;

/// @brief Method get_ScriptEngine addr 0x282676c size 0x8 virtual false final false
 System::Net::AutoWebProxyScriptEngine get_ScriptEngine() ;

/// @brief Method CreateDefaultProxy addr 0x2826774 size 0x68 virtual false final false
static System::Net::IWebProxy CreateDefaultProxy() ;

// Ctor Parameters [CppParam { name: "enableAutoproxy", ty: "bool", modifiers: "", def_value: None }]
explicit WebProxy(bool enableAutoproxy) ;

/// @brief Method .ctor addr 0x28267dc size 0x30 virtual false final false
 void _ctor(bool enableAutoproxy) ;

/// @brief Method UnsafeUpdateFromRegistry addr 0x2826630 size 0xc virtual false final false
 void UnsafeUpdateFromRegistry() ;

/// @brief Method GetProxyAuto addr 0x2825a9c size 0x188 virtual false final false
 bool GetProxyAuto(System::Uri destination, ByRef<System::Uri> proxyUri) ;

/// @brief Method IsBypassedAuto addr 0x28261c8 size 0x108 virtual false final false
 bool IsBypassedAuto(System::Uri destination, ByRef<bool> isBypassed) ;

/// @brief Method AreAllBypassed addr 0x282680c size 0x308 virtual false final false
static bool AreAllBypassed(System::Collections::Generic::IEnumerable_1<::StringW> proxies, bool checkFirstOnly) ;

/// @brief Method ProxyUri addr 0x2826b14 size 0xa4 virtual false final false
static System::Uri ProxyUri(::StringW proxyName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::WebProxy);
DEFINE_IL2CPP_ARG_TYPE(System::Net::WebProxy, "System.Net", "WebProxy");
