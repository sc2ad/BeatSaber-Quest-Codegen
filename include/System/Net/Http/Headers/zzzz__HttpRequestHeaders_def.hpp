#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "System/Net/Http/Headers/zzzz__HttpHeaders_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Net::Http::Headers {
template<typename T>
class HttpHeaderValueCollection_1;
}
namespace System::Net::Http::Headers {
class AuthenticationHeaderValue;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Net::Http::Headers {
class TransferCodingHeaderValue;
}
namespace System::Net::Http::Headers {
class System__Net__Http__Headers__HttpRequestHeaders____c;
}
namespace System {
template<typename T>
class Predicate_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class HttpRequestHeaders;
}
namespace System::Net::Http::Headers {
class System__Net__Http__Headers__HttpRequestHeaders____c;
}
// Type: ::<>c
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14838))
// CS Name: System.Net.Http.Headers.HttpRequestHeaders::<>c
class CORDL_TYPE System__Net__Http__Headers__HttpRequestHeaders____c : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~System__Net__Http__Headers__HttpRequestHeaders____c() = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__HttpRequestHeaders____c", modifiers: " const&", def_value: None }]
constexpr System__Net__Http__Headers__HttpRequestHeaders____c(System__Net__Http__Headers__HttpRequestHeaders____c const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "System__Net__Http__Headers__HttpRequestHeaders____c", modifiers: "&&", def_value: None }]
constexpr System__Net__Http__Headers__HttpRequestHeaders____c(System__Net__Http__Headers__HttpRequestHeaders____c&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit System__Net__Http__Headers__HttpRequestHeaders____c(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr System__Net__Http__Headers__HttpRequestHeaders____c& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr System__Net__Http__Headers__HttpRequestHeaders____c& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr System__Net__Http__Headers__HttpRequestHeaders____c& operator=(System__Net__Http__Headers__HttpRequestHeaders____c&& o) noexcept = default;
  constexpr System__Net__Http__Headers__HttpRequestHeaders____c& operator=(System__Net__Http__Headers__HttpRequestHeaders____c const& o) noexcept = default;
                


// Fields

static System::Net::Http::Headers::System__Net__Http__Headers__HttpRequestHeaders____c __declspec(property(get=__get___9, put=__set___9))  __9;

static void __set___9(System::Net::Http::Headers::System__Net__Http__Headers__HttpRequestHeaders____c value) ;

static System::Net::Http::Headers::System__Net__Http__Headers__HttpRequestHeaders____c __get___9() ;

static System::Predicate_1<::StringW> __declspec(property(get=__get___9__19_0, put=__set___9__19_0))  __9__19_0;

static void __set___9__19_0(System::Predicate_1<::StringW> value) ;

static System::Predicate_1<::StringW> __get___9__19_0() ;

static System::Predicate_1<System::Net::Http::Headers::TransferCodingHeaderValue> __declspec(property(get=__get___9__29_0, put=__set___9__29_0))  __9__29_0;

static void __set___9__29_0(System::Predicate_1<System::Net::Http::Headers::TransferCodingHeaderValue> value) ;

static System::Predicate_1<System::Net::Http::Headers::TransferCodingHeaderValue> __get___9__29_0() ;

static System::Predicate_1<System::Net::Http::Headers::TransferCodingHeaderValue> __declspec(property(get=__get___9__71_0, put=__set___9__71_0))  __9__71_0;

static void __set___9__71_0(System::Predicate_1<System::Net::Http::Headers::TransferCodingHeaderValue> value) ;

static System::Predicate_1<System::Net::Http::Headers::TransferCodingHeaderValue> __get___9__71_0() ;


// Methods

static System::Net::Http::Headers::System__Net__Http__Headers__HttpRequestHeaders____c New_ctor() ;

/// @brief Method .ctor addr 0x26aad24 size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <get_ConnectionClose>b__19_0 addr 0x26aad2c size 0x50 virtual false final false
 bool _get_ConnectionClose_b__19_0(::StringW l) ;

/// @brief Method <get_ExpectContinue>b__29_0 addr 0x26aad7c size 0x58 virtual false final false
 bool _get_ExpectContinue_b__29_0(System::Net::Http::Headers::TransferCodingHeaderValue l) ;

/// @brief Method <get_TransferEncodingChunked>b__71_0 addr 0x26aadd4 size 0x58 virtual false final false
 bool _get_TransferEncodingChunked_b__71_0(System::Net::Http::Headers::TransferCodingHeaderValue l) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: System.Net.Http.Headers::HttpRequestHeaders
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14837))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14839))
// CS Name: System.Net.Http.Headers.HttpRequestHeaders
class CORDL_TYPE HttpRequestHeaders : public System::Net::Http::Headers::HttpHeaders {
public:
// Declarations
using __c = System::Net::Http::Headers::System__Net__Http__Headers__HttpRequestHeaders____c;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~HttpRequestHeaders() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpRequestHeaders", modifiers: " const&", def_value: None }]
constexpr HttpRequestHeaders(HttpRequestHeaders const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpRequestHeaders", modifiers: "&&", def_value: None }]
constexpr HttpRequestHeaders(HttpRequestHeaders&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpRequestHeaders(void* ptr) noexcept : System::Net::Http::Headers::HttpHeaders(ptr) {
}


  constexpr HttpRequestHeaders& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpRequestHeaders& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpRequestHeaders& operator=(HttpRequestHeaders&& o) noexcept = default;
  constexpr HttpRequestHeaders& operator=(HttpRequestHeaders const& o) noexcept = default;
                


// Fields

 System::Nullable_1<bool> __declspec(property(get=__get_expectContinue, put=__set_expectContinue))  expectContinue;

constexpr void __set_expectContinue(System::Nullable_1<bool> value) ;

constexpr System::Nullable_1<bool> __get_expectContinue() const;


// Properties

 System::Net::Http::Headers::AuthenticationHeaderValue __declspec(property(put=set_Authorization))  Authorization;

 System::Net::Http::Headers::HttpHeaderValueCollection_1<::StringW> __declspec(property(get=get_Connection))  Connection;

 System::Nullable_1<bool> __declspec(property(get=get_ConnectionClose))  ConnectionClose;

 System::Nullable_1<bool> __declspec(property(get=get_ExpectContinue))  ExpectContinue;

 ::StringW __declspec(property(get=get_Host))  Host;

 System::Net::Http::Headers::HttpHeaderValueCollection_1<System::Net::Http::Headers::TransferCodingHeaderValue> __declspec(property(get=get_TransferEncoding))  TransferEncoding;

 System::Nullable_1<bool> __declspec(property(get=get_TransferEncodingChunked))  TransferEncodingChunked;


// Methods

static System::Net::Http::Headers::HttpRequestHeaders New_ctor() ;

/// @brief Method .ctor addr 0x26a222c size 0x60 virtual false final false
 void _ctor() ;

/// @brief Method set_Authorization addr 0x26aabe4 size 0x74 virtual false final false
 void set_Authorization(System::Net::Http::Headers::AuthenticationHeaderValue value) ;

/// @brief Method get_Connection addr 0x269ba88 size 0x68 virtual false final false
 System::Net::Http::Headers::HttpHeaderValueCollection_1<::StringW> get_Connection() ;

/// @brief Method get_ConnectionClose addr 0x269c378 size 0x184 virtual false final false
 System::Nullable_1<bool> get_ConnectionClose() ;

/// @brief Method get_ExpectContinue addr 0x269c4fc size 0x164 virtual false final false
 System::Nullable_1<bool> get_ExpectContinue() ;

/// @brief Method get_Host addr 0x269c6c8 size 0x68 virtual false final false
 ::StringW get_Host() ;

/// @brief Method get_TransferEncoding addr 0x26aac58 size 0x68 virtual false final false
 System::Net::Http::Headers::HttpHeaderValueCollection_1<System::Net::Http::Headers::TransferCodingHeaderValue> get_TransferEncoding() ;

/// @brief Method get_TransferEncodingChunked addr 0x269e80c size 0x164 virtual false final false
 System::Nullable_1<bool> get_TransferEncodingChunked() ;

/// @brief Method AddHeaders addr 0x269fac8 size 0x298 virtual false final false
 void AddHeaders(System::Net::Http::Headers::HttpRequestHeaders headers) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::HttpRequestHeaders);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::HttpRequestHeaders, "System.Net.Http.Headers", "HttpRequestHeaders");
NEED_NO_BOX(System::Net::Http::Headers::System__Net__Http__Headers__HttpRequestHeaders____c);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::System__Net__Http__Headers__HttpRequestHeaders____c, "System.Net.Http.Headers", "HttpRequestHeaders/<>c");
