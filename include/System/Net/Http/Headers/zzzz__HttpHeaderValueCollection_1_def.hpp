#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Net::Http::Headers {
class HttpHeaders;
}
namespace System::Net::Http::Headers {
class HeaderInfo;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System {
template<typename T>
class Predicate_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace System::Net::Http::Headers {
template<typename T>
class HttpHeaderValueCollection_1;
}
namespace System::Net::Http::Headers {
template<::cordl_internals::il2cpp_reference_type T>
class HttpHeaderValueCollection_1<T>;
}
// Type: System.Net.Http.Headers::HttpHeaderValueCollection`1
// Type: System.Net.Http.Headers::HttpHeaderValueCollection`1
namespace System::Net::Http::Headers {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14834))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(14834), inst: 2 })
// CS Name: System.Net.Http.Headers.HttpHeaderValueCollection`1
class CORDL_TYPE HttpHeaderValueCollection_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::ICollection_1<T>
constexpr operator  System::Collections::Generic::ICollection_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HttpHeaderValueCollection_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpHeaderValueCollection_1", modifiers: " const&", def_value: None }]
constexpr HttpHeaderValueCollection_1(HttpHeaderValueCollection_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpHeaderValueCollection_1", modifiers: "&&", def_value: None }]
constexpr HttpHeaderValueCollection_1(HttpHeaderValueCollection_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpHeaderValueCollection_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpHeaderValueCollection_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpHeaderValueCollection_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpHeaderValueCollection_1& operator=(HttpHeaderValueCollection_1&& o) noexcept = default;
  constexpr HttpHeaderValueCollection_1& operator=(HttpHeaderValueCollection_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<T> __declspec(property(get=__get_list, put=__set_list))  list;

constexpr void __set_list(System::Collections::Generic::List_1<T> value) ;

constexpr System::Collections::Generic::List_1<T> __get_list() const;

 System::Net::Http::Headers::HttpHeaders __declspec(property(get=__get_headers, put=__set_headers))  headers;

constexpr void __set_headers(System::Net::Http::Headers::HttpHeaders value) ;

constexpr System::Net::Http::Headers::HttpHeaders __get_headers() const;

 System::Net::Http::Headers::HeaderInfo __declspec(property(get=__get_headerInfo, put=__set_headerInfo))  headerInfo;

constexpr void __set_headerInfo(System::Net::Http::Headers::HeaderInfo value) ;

constexpr System::Net::Http::Headers::HeaderInfo __get_headerInfo() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_invalidValues, put=__set_invalidValues))  invalidValues;

constexpr void __set_invalidValues(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_invalidValues() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=get_InvalidValues))  InvalidValues;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;


// Methods

// Ctor Parameters [CppParam { name: "headers", ty: "System::Net::Http::Headers::HttpHeaders", modifiers: "", def_value: None }, CppParam { name: "headerInfo", ty: "System::Net::Http::Headers::HeaderInfo", modifiers: "", def_value: None }]
explicit HttpHeaderValueCollection_1(System::Net::Http::Headers::HttpHeaders headers, System::Net::Http::Headers::HeaderInfo headerInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Net::Http::Headers::HttpHeaders headers, System::Net::Http::Headers::HeaderInfo headerInfo) ;

/// @brief Method get_Count addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_Count() ;

/// @brief Method get_InvalidValues addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::List_1<::StringW> get_InvalidValues() ;

/// @brief Method get_IsReadOnly addr 0x0 size 0xffffffffffffffff virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method Add addr 0x0 size 0xffffffffffffffff virtual true final true
 void Add(T item) ;

/// @brief Method AddRange addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddRange(System::Collections::Generic::List_1<T> values) ;

/// @brief Method AddInvalidValue addr 0x0 size 0xffffffffffffffff virtual false final false
 void AddInvalidValue(::StringW invalidValue) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Contains(T item) ;

/// @brief Method CopyTo addr 0x0 size 0xffffffffffffffff virtual true final true
 void CopyTo(::ArrayW<T> array, int32_t arrayIndex) ;

/// @brief Method Remove addr 0x0 size 0xffffffffffffffff virtual true final true
 bool Remove(T item) ;

/// @brief Method ToString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToString() ;

/// @brief Method GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::Generic::IEnumerator_1<T> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Find addr 0x0 size 0xffffffffffffffff virtual false final false
 T Find(System::Predicate_1<T> predicate) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(System::Net::Http::Headers::HttpHeaderValueCollection_1, "System.Net.Http.Headers", "HttpHeaderValueCollection`1");
