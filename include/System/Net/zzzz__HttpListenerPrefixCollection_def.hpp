#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Net {
class HttpListener;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerator_1;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace System::Collections {
class IEnumerator;
}
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
// Forward declare root types
namespace System::Net {
class HttpListenerPrefixCollection;
}
// Type: System.Net::HttpListenerPrefixCollection
namespace System::Net {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8025))
// CS Name: System.Net.HttpListenerPrefixCollection
class CORDL_TYPE HttpListenerPrefixCollection : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::ICollection_1<::StringW>
constexpr operator  System::Collections::Generic::ICollection_1<::StringW>() const noexcept;

/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<::StringW>
constexpr operator  System::Collections::Generic::IEnumerable_1<::StringW>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~HttpListenerPrefixCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerPrefixCollection", modifiers: " const&", def_value: None }]
constexpr HttpListenerPrefixCollection(HttpListenerPrefixCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HttpListenerPrefixCollection", modifiers: "&&", def_value: None }]
constexpr HttpListenerPrefixCollection(HttpListenerPrefixCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HttpListenerPrefixCollection(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HttpListenerPrefixCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HttpListenerPrefixCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HttpListenerPrefixCollection& operator=(HttpListenerPrefixCollection&& o) noexcept = default;
  constexpr HttpListenerPrefixCollection& operator=(HttpListenerPrefixCollection const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_prefixes, put=__set_prefixes))  prefixes;

constexpr void __set_prefixes(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_prefixes() const;

 System::Net::HttpListener __declspec(property(get=__get_listener, put=__set_listener))  listener;

constexpr void __set_listener(System::Net::HttpListener value) ;

constexpr System::Net::HttpListener __get_listener() const;


// Properties

 int32_t __declspec(property(get=get_Count))  Count;

 bool __declspec(property(get=get_IsReadOnly))  IsReadOnly;


// Methods

// Ctor Parameters [CppParam { name: "listener", ty: "System::Net::HttpListener", modifiers: "", def_value: None }]
explicit HttpListenerPrefixCollection(System::Net::HttpListener listener) ;

/// @brief Method .ctor addr 0x2835804 size 0x90 virtual false final false
 void _ctor(System::Net::HttpListener listener) ;

/// @brief Method get_Count addr 0x2836d08 size 0x48 virtual true final true
 int32_t get_Count() ;

/// @brief Method get_IsReadOnly addr 0x28372c0 size 0x8 virtual true final true
 bool get_IsReadOnly() ;

/// @brief Method Add addr 0x28372c8 size 0x130 virtual true final true
 void Add(::StringW uriPrefix) ;

/// @brief Method Clear addr 0x28373f8 size 0xb8 virtual true final true
 void Clear() ;

/// @brief Method Contains addr 0x28374b0 size 0x64 virtual true final true
 bool Contains(::StringW uriPrefix) ;

/// @brief Method CopyTo addr 0x2837514 size 0x74 virtual true final true
 void CopyTo(::ArrayW<::StringW> array, int32_t offset) ;

/// @brief Method GetEnumerator addr 0x2831598 size 0x90 virtual true final true
 System::Collections::Generic::IEnumerator_1<::StringW> GetEnumerator() ;

/// @brief Method System.Collections.IEnumerable.GetEnumerator addr 0x2837588 size 0x90 virtual true final true
 System::Collections::IEnumerator System_Collections_IEnumerable_GetEnumerator() ;

/// @brief Method Remove addr 0x2837618 size 0x108 virtual true final true
 bool Remove(::StringW uriPrefix) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net
NEED_NO_BOX(System::Net::HttpListenerPrefixCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Net::HttpListenerPrefixCollection, "System.Net", "HttpListenerPrefixCollection");
