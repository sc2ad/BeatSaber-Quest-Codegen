#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace {
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Net::Http::Headers {
struct HttpHeaderKind;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Net::Http::Headers {
class HeaderInfo;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Net::Http::Headers {
template<typename T>
class HttpHeaderValueCollection_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct KeyValuePair_2;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
struct ____System__Collections__Generic__Dictionary_2__Enumerator;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class HttpHeaders;
}
namespace System::Net::Http::Headers {
class ____System__Net__Http__Headers__HttpHeaders__HeaderBucket;
}
namespace System::Net::Http::Headers {
class ____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19;
}
// Type: ::HeaderBucket
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14835))
// CS Name: System.Net.Http.Headers.HttpHeaders::HeaderBucket
class CORDL_TYPE ____System__Net__Http__Headers__HttpHeaders__HeaderBucket : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~____System__Net__Http__Headers__HttpHeaders__HeaderBucket() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Http__Headers__HttpHeaders__HeaderBucket", modifiers: " const&", def_value: None }]
constexpr ____System__Net__Http__Headers__HttpHeaders__HeaderBucket(____System__Net__Http__Headers__HttpHeaders__HeaderBucket const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Http__Headers__HttpHeaders__HeaderBucket", modifiers: "&&", def_value: None }]
constexpr ____System__Net__Http__Headers__HttpHeaders__HeaderBucket(____System__Net__Http__Headers__HttpHeaders__HeaderBucket&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__Http__Headers__HttpHeaders__HeaderBucket(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__Http__Headers__HttpHeaders__HeaderBucket& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__Http__Headers__HttpHeaders__HeaderBucket& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__Http__Headers__HttpHeaders__HeaderBucket& operator=(____System__Net__Http__Headers__HttpHeaders__HeaderBucket&& o) noexcept = default;
  constexpr ____System__Net__Http__Headers__HttpHeaders__HeaderBucket& operator=(____System__Net__Http__Headers__HttpHeaders__HeaderBucket const& o) noexcept = default;
                


// Fields

 ::bs_hook::Il2CppWrapperType __declspec(property(get=__get_Parsed, put=__set_Parsed))  Parsed;

constexpr void __set_Parsed(::bs_hook::Il2CppWrapperType value) ;

constexpr ::bs_hook::Il2CppWrapperType __get_Parsed() const;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_values, put=__set_values))  values;

constexpr void __set_values(::System::Collections::Generic::List_1<::StringW> value) ;

constexpr ::System::Collections::Generic::List_1<::StringW> __get_values() const;

 ::System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> __declspec(property(get=__get_CustomToString, put=__set_CustomToString))  CustomToString;

constexpr void __set_CustomToString(::System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> value) ;

constexpr ::System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> __get_CustomToString() const;


// Properties

 bool __declspec(property(get=get_HasStringValues))  HasStringValues;

 ::System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_Values, put=set_Values))  Values;


// Methods

// Ctor Parameters [CppParam { name: "parsed", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "converter", ty: "::System::Func_2<::bs_hook::Il2CppWrapperType,::StringW>", modifiers: "", def_value: None }]
explicit ____System__Net__Http__Headers__HttpHeaders__HeaderBucket(::bs_hook::Il2CppWrapperType parsed, ::System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> converter) ;

/// @brief Method .ctor addr 0x26a9e3c size 0x30 virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType parsed, ::System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> converter) ;

/// @brief Method get_HasStringValues addr 0x26aa7b0 size 0x54 virtual false final false
 bool get_HasStringValues() ;

/// @brief Method get_Values addr 0x26a9e6c size 0x80 virtual false final false
 ::System::Collections::Generic::List_1<::StringW> get_Values() ;

/// @brief Method set_Values addr 0x26aa804 size 0x8 virtual false final false
 void set_Values(::System::Collections::Generic::List_1<::StringW> value) ;

/// @brief Method ParsedToString addr 0x26aa774 size 0x3c virtual false final false
 ::StringW ParsedToString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: ::<GetEnumerator>d__19
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14836))
// CS Name: System.Net.Http.Headers.HttpHeaders::<GetEnumerator>d__19
class CORDL_TYPE ____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19 : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>>>
constexpr operator  ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>>>() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerator
constexpr operator  ::System::Collections::IEnumerator() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x58};

virtual ~____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19() = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19", modifiers: " const&", def_value: None }]
constexpr ____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19(____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19", modifiers: "&&", def_value: None }]
constexpr ____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19(____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19& operator=(____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19&& o) noexcept = default;
  constexpr ____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19& operator=(____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19 const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get___1__state, put=__set___1__state))  __1__state;

constexpr void __set___1__state(int32_t value) ;

constexpr int32_t __get___1__state() const;

 ::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>> __declspec(property(get=__get___2__current, put=__set___2__current))  __2__current;

constexpr void __set___2__current(::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>> value) ;

constexpr ::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>> __get___2__current() const;

 ::System::Net::Http::Headers::HttpHeaders __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(::System::Net::Http::Headers::HttpHeaders value) ;

constexpr ::System::Net::Http::Headers::HttpHeaders __get___4__this() const;

 ::System::Collections::Generic::____System__Collections__Generic__Dictionary_2__Enumerator<::StringW,::System::Net::Http::Headers::____System__Net__Http__Headers__HttpHeaders__HeaderBucket> __declspec(property(get=__get___7__wrap1, put=__set___7__wrap1))  __7__wrap1;

constexpr void __set___7__wrap1(::System::Collections::Generic::____System__Collections__Generic__Dictionary_2__Enumerator<::StringW,::System::Net::Http::Headers::____System__Net__Http__Headers__HttpHeaders__HeaderBucket> value) ;

constexpr ::System::Collections::Generic::____System__Collections__Generic__Dictionary_2__Enumerator<::StringW,::System::Net::Http::Headers::____System__Net__Http__Headers__HttpHeaders__HeaderBucket> __get___7__wrap1() const;


// Properties

 ::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>> __declspec(property(get=System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,System_Collections_Generic_IEnumerable_System_String____get_Current))  System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,System_Collections_Generic_IEnumerable_System_String____Current;

 ::bs_hook::Il2CppWrapperType __declspec(property(get=System_Collections_IEnumerator_get_Current))  System_Collections_IEnumerator_Current;


// Methods

// Ctor Parameters [CppParam { name: "__1__state", ty: "int32_t", modifiers: "", def_value: None }]
explicit ____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19(int32_t __1__state) ;

/// @brief Method .ctor addr 0x26aa1a4 size 0x28 virtual false final false
 void _ctor(int32_t __1__state) ;

/// @brief Method System.IDisposable.Dispose addr 0x26aa80c size 0x1c virtual true final true
 void System_IDisposable_Dispose() ;

/// @brief Method MoveNext addr 0x26aa828 size 0x2c4 virtual true final true
 bool MoveNext() ;

/// @brief Method <>m__Finally1 addr 0x26aaaec size 0x50 virtual false final false
 void __m__Finally1() ;

/// @brief Method System.Collections.Generic.IEnumerator<System.Collections.Generic.KeyValuePair<System.String,System.Collections.Generic.IEnumerable<System.String>>>.get_Current addr 0x26aab3c size 0xc virtual true final true
 ::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>> System_Collections_Generic_IEnumerator_System_Collections_Generic_KeyValuePair_System_String,System_Collections_Generic_IEnumerable_System_String____get_Current() ;

/// @brief Method System.Collections.IEnumerator.Reset addr 0x26aab48 size 0x40 virtual true final true
 void System_Collections_IEnumerator_Reset() ;

/// @brief Method System.Collections.IEnumerator.get_Current addr 0x26aab88 size 0x5c virtual true final true
 ::bs_hook::Il2CppWrapperType System_Collections_IEnumerator_get_Current() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
// Type: System.Net.Http.Headers::HttpHeaders
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14837))
// CS Name: System.Net.Http.Headers.HttpHeaders
class CORDL_TYPE HttpHeaders : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using _GetEnumerator_d__19 = ::System::Net::Http::Headers::____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19;

using HeaderBucket = ::System::Net::Http::Headers::____System__Net__Http__Headers__HttpHeaders__HeaderBucket;

/// @brief Convert operator to ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>>>
constexpr operator  ::System::Collections::Generic::IEnumerable_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>>>() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HttpHeaders() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpHeaders", modifiers: " const&", def_value: None }]
constexpr HttpHeaders(HttpHeaders const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpHeaders", modifiers: "&&", def_value: None }]
constexpr HttpHeaders(HttpHeaders&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpHeaders(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpHeaders& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpHeaders& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpHeaders& operator=(HttpHeaders&& o) noexcept = default;
  constexpr HttpHeaders& operator=(HttpHeaders const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::Http::Headers::HeaderInfo> __declspec(property(get=__get_known_headers, put=__set_known_headers))  known_headers;

static void __set_known_headers(::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::Http::Headers::HeaderInfo> value) ;

static ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::Http::Headers::HeaderInfo> __get_known_headers() ;

 ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::Http::Headers::____System__Net__Http__Headers__HttpHeaders__HeaderBucket> __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::Http::Headers::____System__Net__Http__Headers__HttpHeaders__HeaderBucket> value) ;

constexpr ::System::Collections::Generic::Dictionary_2<::StringW,::System::Net::Http::Headers::____System__Net__Http__Headers__HttpHeaders__HeaderBucket> __get_headers() const;

 ::System::Net::Http::Headers::HttpHeaderKind __declspec(property(get=__get_HeaderKind, put=__set_HeaderKind))  HeaderKind;

constexpr void __set_HeaderKind(::System::Net::Http::Headers::HttpHeaderKind value) ;

constexpr ::System::Net::Http::Headers::HttpHeaderKind __get_HeaderKind() const;

 ::System::Nullable_1<bool> __declspec(property(get=__get_connectionclose, put=__set_connectionclose))  connectionclose;

constexpr void __set_connectionclose(::System::Nullable_1<bool> value) ;

constexpr ::System::Nullable_1<bool> __get_connectionclose() const;

 ::System::Nullable_1<bool> __declspec(property(get=__get_transferEncodingChunked, put=__set_transferEncodingChunked))  transferEncodingChunked;

constexpr void __set_transferEncodingChunked(::System::Nullable_1<bool> value) ;

constexpr ::System::Nullable_1<bool> __get_transferEncodingChunked() const;


// Methods

// Ctor Parameters []
explicit HttpHeaders() ;

/// @brief Method .ctor addr 0x26a96c4 size 0xe4 virtual false final false
 void _ctor() ;

// Ctor Parameters [CppParam { name: "headerKind", ty: "::System::Net::Http::Headers::HttpHeaderKind", modifiers: "", def_value: None }]
explicit HttpHeaders(::System::Net::Http::Headers::HttpHeaderKind headerKind) ;

/// @brief Method .ctor addr 0x26a760c size 0x24 virtual false final false
 void _ctor(::System::Net::Http::Headers::HttpHeaderKind headerKind) ;

/// @brief Method AddInternal addr 0x26a97a8 size 0x694 virtual false final false
 bool AddInternal(::StringW name, ::System::Collections::Generic::IEnumerable_1<::StringW> values, ::System::Net::Http::Headers::HeaderInfo headerInfo, bool ignoreInvalid) ;

/// @brief Method TryAddWithoutValidation addr 0x269cb30 size 0xb0 virtual false final false
 bool TryAddWithoutValidation(::StringW name, ::System::Collections::Generic::IEnumerable_1<::StringW> values) ;

/// @brief Method CheckName addr 0x26a9fd0 size 0x16c virtual false final false
 ::System::Net::Http::Headers::HeaderInfo CheckName(::StringW name) ;

/// @brief Method TryCheckName addr 0x26a9eec size 0xe4 virtual false final false
 bool TryCheckName(::StringW name, ByRef<::System::Net::Http::Headers::HeaderInfo> headerInfo) ;

/// @brief Method GetEnumerator addr 0x269c660 size 0x68 virtual true final true
 ::System::Collections::Generic::IEnumerator_1<::System::Collections::Generic::KeyValuePair_2<::StringW,::System::Collections::Generic::IEnumerable_1<::StringW>>> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x26aa1cc size 0x4 virtual true final true
 ::System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Remove addr 0x26aa1d0 size 0x64 virtual false final false
 bool Remove(::StringW name) ;

/// @brief Method GetSingleHeaderString addr 0x269ed40 size 0x45c virtual false final false
static ::StringW GetSingleHeaderString(::StringW key, ::System::Collections::Generic::IEnumerable_1<::StringW> values) ;

/// @brief Method ToString addr 0x26aa234 size 0x374 virtual true final false
 ::StringW ToString() ;

/// @brief Method AddOrRemove addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void AddOrRemove(::StringW name, T value, ::System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> converter) ;

/// @brief Method GetAllHeaderValues addr 0x26aa5a8 size 0x1cc virtual false final false
 ::System::Collections::Generic::List_1<::StringW> GetAllHeaderValues(::System::Net::Http::Headers::____System__Net__Http__Headers__HttpHeaders__HeaderBucket bucket, ::System::Net::Http::Headers::HeaderInfo headerInfo) ;

/// @brief Method GetKnownHeaderKind addr 0x269ec40 size 0x100 virtual false final false
static ::System::Net::Http::Headers::HttpHeaderKind GetKnownHeaderKind(::StringW name) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 T GetValue(::StringW name) ;

/// @brief Method GetValues addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 ::System::Net::Http::Headers::HttpHeaderValueCollection_1<T> GetValues(::StringW name) ;

/// @brief Method SetValue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetValue(::StringW name, T value, ::System::Func_2<::bs_hook::Il2CppWrapperType,::StringW> toStringConverter) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
} // end anonymous namespace
NEED_NO_BOX(::System::Net::Http::Headers::HttpHeaders);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::HttpHeaders, "System.Net.Http.Headers", "HttpHeaders");
NEED_NO_BOX(::System::Net::Http::Headers::____System__Net__Http__Headers__HttpHeaders__HeaderBucket);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::____System__Net__Http__Headers__HttpHeaders__HeaderBucket, "System.Net.Http.Headers", "HttpHeaders/HeaderBucket");
NEED_NO_BOX(::System::Net::Http::Headers::____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19);
DEFINE_IL2CPP_ARG_TYPE(::System::Net::Http::Headers::____System__Net__Http__Headers__HttpHeaders___GetEnumerator_d__19, "System.Net.Http.Headers", "HttpHeaders/<GetEnumerator>d__19");
