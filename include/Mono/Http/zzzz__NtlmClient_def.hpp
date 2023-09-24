#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace Mono::Http {
class NtlmSession;
}
namespace System::Net {
class HttpWebRequest;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback;
}
namespace System::Net {
class WebRequest;
}
namespace System::Net {
class Authorization;
}
namespace Mono::Http {
class Mono__Http__NtlmClient____c;
}
namespace System::Runtime::CompilerServices {
template<typename TKey,typename TValue>
class ConditionalWeakTable_2;
}
namespace System::Net {
class ICredentials;
}
namespace System::Net {
class IAuthenticationModule;
}
// Forward declare root types
namespace Mono::Http {
class Mono__Http__NtlmClient____c;
}
namespace Mono::Http {
class NtlmClient;
}
// Type: ::<>c
namespace Mono::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7702))
// CS Name: Mono.Http.NtlmClient::<>c
class CORDL_TYPE Mono__Http__NtlmClient____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Mono__Http__NtlmClient____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Http__NtlmClient____c", modifiers: " const&", def_value: None }]
constexpr Mono__Http__NtlmClient____c(Mono__Http__NtlmClient____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Mono__Http__NtlmClient____c", modifiers: "&&", def_value: None }]
constexpr Mono__Http__NtlmClient____c(Mono__Http__NtlmClient____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Mono__Http__NtlmClient____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Mono__Http__NtlmClient____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Mono__Http__NtlmClient____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Mono__Http__NtlmClient____c& operator=(Mono__Http__NtlmClient____c&& o) noexcept = default;
  constexpr Mono__Http__NtlmClient____c& operator=(Mono__Http__NtlmClient____c const& o) noexcept = default;
                


// Fields

static Mono::Http::Mono__Http__NtlmClient____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(Mono::Http::Mono__Http__NtlmClient____c value) ;

static Mono::Http::Mono__Http__NtlmClient____c __get___9() ;

static System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<System::Net::HttpWebRequest,Mono::Http::NtlmSession> __declspec(property(get=__get___9__1_0, put=__set___9__1_0))  __9__1_0;

static void __set___9__1_0(System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<System::Net::HttpWebRequest,Mono::Http::NtlmSession> value) ;

static System::Runtime::CompilerServices::System__Runtime__CompilerServices__ConditionalWeakTable_2__CreateValueCallback<System::Net::HttpWebRequest,Mono::Http::NtlmSession> __get___9__1_0() ;


// Methods

static Mono::Http::Mono__Http__NtlmClient____c New_ctor() ;

/// @brief Method .ctor addr 0x2694ed4 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <Authenticate>b__1_0 addr 0x2694edc size 0x5c virtual false final false
 Mono::Http::NtlmSession _Authenticate_b__1_0(System::Net::HttpWebRequest x) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Http
// Type: Mono.Http::NtlmClient
namespace Mono::Http {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7703))
// CS Name: Mono.Http.NtlmClient
class CORDL_TYPE NtlmClient : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c = Mono::Http::Mono__Http__NtlmClient____c;

/// @brief Convert operator to System::Net::IAuthenticationModule
constexpr operator  System::Net::IAuthenticationModule() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~NtlmClient() = default;

// Ctor Parameters [CppParam { name: "", ty: "NtlmClient", modifiers: " const&", def_value: None }]
constexpr NtlmClient(NtlmClient const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NtlmClient", modifiers: "&&", def_value: None }]
constexpr NtlmClient(NtlmClient&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NtlmClient(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NtlmClient& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NtlmClient& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NtlmClient& operator=(NtlmClient&& o) noexcept = default;
  constexpr NtlmClient& operator=(NtlmClient const& o) noexcept = default;
                


// Fields

static System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest,Mono::Http::NtlmSession> __declspec(property(get=__get_cache, put=__set_cache))  cache;

static void __set_cache(System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest,Mono::Http::NtlmSession> value) ;

static System::Runtime::CompilerServices::ConditionalWeakTable_2<System::Net::HttpWebRequest,Mono::Http::NtlmSession> __get_cache() ;


// Properties

 ::StringW __declspec(property(get=get_AuthenticationType))  AuthenticationType;


// Methods

/// @brief Method Authenticate addr 0x2694a10 size 0x384 virtual true final true
 System::Net::Authorization Authenticate(::StringW challenge, System::Net::WebRequest webRequest, System::Net::ICredentials credentials) ;

/// @brief Method PreAuthenticate addr 0x2694d94 size 0x8 virtual true final true
 System::Net::Authorization PreAuthenticate(System::Net::WebRequest webRequest, System::Net::ICredentials credentials) ;

/// @brief Method get_AuthenticationType addr 0x2694d9c size 0x40 virtual true final true
 ::StringW get_AuthenticationType() ;

static Mono::Http::NtlmClient New_ctor() ;

/// @brief Method .ctor addr 0x2694ddc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Mono::Http
NEED_NO_BOX(Mono::Http::Mono__Http__NtlmClient____c);
DEFINE_IL2CPP_ARG_TYPE(Mono::Http::Mono__Http__NtlmClient____c, "Mono.Http", "NtlmClient/<>c");
NEED_NO_BOX(Mono::Http::NtlmClient);
DEFINE_IL2CPP_ARG_TYPE(Mono::Http::NtlmClient, "Mono.Http", "NtlmClient");
