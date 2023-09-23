#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System {
class ICloneable;
}
namespace System::Collections::Generic {
template<typename T>
class ICollection_1;
}
namespace System::Net::Http::Headers {
class NameValueHeaderValue;
}
namespace System {
template<typename T>
struct Nullable_1;
}
namespace System {
struct TimeSpan;
}
// Forward declare root types
namespace System::Net::Http::Headers {
class CacheControlHeaderValue;
}
// Type: System.Net.Http.Headers::CacheControlHeaderValue
namespace System::Net::Http::Headers {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14819))
// CS Name: System.Net.Http.Headers.CacheControlHeaderValue
class CORDL_TYPE CacheControlHeaderValue : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to System::ICloneable
constexpr operator  System::ICloneable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x78};

virtual ~CacheControlHeaderValue() = default;

// Ctor Parameters [CppParam { name: "", ty: "CacheControlHeaderValue", modifiers: " const&", def_value: None }]
constexpr CacheControlHeaderValue(CacheControlHeaderValue const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CacheControlHeaderValue", modifiers: "&&", def_value: None }]
constexpr CacheControlHeaderValue(CacheControlHeaderValue&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CacheControlHeaderValue(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CacheControlHeaderValue& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CacheControlHeaderValue& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CacheControlHeaderValue& operator=(CacheControlHeaderValue&& o) noexcept = default;
  constexpr CacheControlHeaderValue& operator=(CacheControlHeaderValue const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue> __declspec(property(get=__get_extensions, put=__set_extensions))  extensions;

constexpr void __set_extensions(System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue> value) ;

constexpr System::Collections::Generic::List_1<System::Net::Http::Headers::NameValueHeaderValue> __get_extensions() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_no_cache_headers, put=__set_no_cache_headers))  no_cache_headers;

constexpr void __set_no_cache_headers(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_no_cache_headers() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_private_headers, put=__set_private_headers))  private_headers;

constexpr void __set_private_headers(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_private_headers() const;

 System::Nullable_1<System::TimeSpan> __declspec(property(get=__get__MaxAge_k__BackingField, put=__set__MaxAge_k__BackingField))  _MaxAge_k__BackingField;

constexpr void __set__MaxAge_k__BackingField(System::Nullable_1<System::TimeSpan> value) ;

constexpr System::Nullable_1<System::TimeSpan> __get__MaxAge_k__BackingField() const;

 bool __declspec(property(get=__get__MaxStale_k__BackingField, put=__set__MaxStale_k__BackingField))  _MaxStale_k__BackingField;

constexpr void __set__MaxStale_k__BackingField(bool value) ;

constexpr bool __get__MaxStale_k__BackingField() const;

 System::Nullable_1<System::TimeSpan> __declspec(property(get=__get__MaxStaleLimit_k__BackingField, put=__set__MaxStaleLimit_k__BackingField))  _MaxStaleLimit_k__BackingField;

constexpr void __set__MaxStaleLimit_k__BackingField(System::Nullable_1<System::TimeSpan> value) ;

constexpr System::Nullable_1<System::TimeSpan> __get__MaxStaleLimit_k__BackingField() const;

 System::Nullable_1<System::TimeSpan> __declspec(property(get=__get__MinFresh_k__BackingField, put=__set__MinFresh_k__BackingField))  _MinFresh_k__BackingField;

constexpr void __set__MinFresh_k__BackingField(System::Nullable_1<System::TimeSpan> value) ;

constexpr System::Nullable_1<System::TimeSpan> __get__MinFresh_k__BackingField() const;

 bool __declspec(property(get=__get__MustRevalidate_k__BackingField, put=__set__MustRevalidate_k__BackingField))  _MustRevalidate_k__BackingField;

constexpr void __set__MustRevalidate_k__BackingField(bool value) ;

constexpr bool __get__MustRevalidate_k__BackingField() const;

 bool __declspec(property(get=__get__NoCache_k__BackingField, put=__set__NoCache_k__BackingField))  _NoCache_k__BackingField;

constexpr void __set__NoCache_k__BackingField(bool value) ;

constexpr bool __get__NoCache_k__BackingField() const;

 bool __declspec(property(get=__get__NoStore_k__BackingField, put=__set__NoStore_k__BackingField))  _NoStore_k__BackingField;

constexpr void __set__NoStore_k__BackingField(bool value) ;

constexpr bool __get__NoStore_k__BackingField() const;

 bool __declspec(property(get=__get__NoTransform_k__BackingField, put=__set__NoTransform_k__BackingField))  _NoTransform_k__BackingField;

constexpr void __set__NoTransform_k__BackingField(bool value) ;

constexpr bool __get__NoTransform_k__BackingField() const;

 bool __declspec(property(get=__get__OnlyIfCached_k__BackingField, put=__set__OnlyIfCached_k__BackingField))  _OnlyIfCached_k__BackingField;

constexpr void __set__OnlyIfCached_k__BackingField(bool value) ;

constexpr bool __get__OnlyIfCached_k__BackingField() const;

 bool __declspec(property(get=__get__Private_k__BackingField, put=__set__Private_k__BackingField))  _Private_k__BackingField;

constexpr void __set__Private_k__BackingField(bool value) ;

constexpr bool __get__Private_k__BackingField() const;

 bool __declspec(property(get=__get__ProxyRevalidate_k__BackingField, put=__set__ProxyRevalidate_k__BackingField))  _ProxyRevalidate_k__BackingField;

constexpr void __set__ProxyRevalidate_k__BackingField(bool value) ;

constexpr bool __get__ProxyRevalidate_k__BackingField() const;

 bool __declspec(property(get=__get__Public_k__BackingField, put=__set__Public_k__BackingField))  _Public_k__BackingField;

constexpr void __set__Public_k__BackingField(bool value) ;

constexpr bool __get__Public_k__BackingField() const;

 System::Nullable_1<System::TimeSpan> __declspec(property(get=__get__SharedMaxAge_k__BackingField, put=__set__SharedMaxAge_k__BackingField))  _SharedMaxAge_k__BackingField;

constexpr void __set__SharedMaxAge_k__BackingField(System::Nullable_1<System::TimeSpan> value) ;

constexpr System::Nullable_1<System::TimeSpan> __get__SharedMaxAge_k__BackingField() const;


// Properties

 System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue> __declspec(property(get=get_Extensions))  Extensions;

 System::Nullable_1<System::TimeSpan> __declspec(property(get=get_MaxAge, put=set_MaxAge))  MaxAge;

 bool __declspec(property(get=get_MaxStale, put=set_MaxStale))  MaxStale;

 System::Nullable_1<System::TimeSpan> __declspec(property(get=get_MaxStaleLimit, put=set_MaxStaleLimit))  MaxStaleLimit;

 System::Nullable_1<System::TimeSpan> __declspec(property(get=get_MinFresh, put=set_MinFresh))  MinFresh;

 bool __declspec(property(get=get_MustRevalidate, put=set_MustRevalidate))  MustRevalidate;

 bool __declspec(property(get=get_NoCache, put=set_NoCache))  NoCache;

 System::Collections::Generic::ICollection_1<::StringW> __declspec(property(get=get_NoCacheHeaders))  NoCacheHeaders;

 bool __declspec(property(get=get_NoStore, put=set_NoStore))  NoStore;

 bool __declspec(property(get=get_NoTransform, put=set_NoTransform))  NoTransform;

 bool __declspec(property(get=get_OnlyIfCached, put=set_OnlyIfCached))  OnlyIfCached;

 bool __declspec(property(get=get_Private, put=set_Private))  Private;

 System::Collections::Generic::ICollection_1<::StringW> __declspec(property(get=get_PrivateHeaders))  PrivateHeaders;

 bool __declspec(property(get=get_ProxyRevalidate, put=set_ProxyRevalidate))  ProxyRevalidate;

 bool __declspec(property(get=get_Public, put=set_Public))  Public;

 System::Nullable_1<System::TimeSpan> __declspec(property(get=get_SharedMaxAge, put=set_SharedMaxAge))  SharedMaxAge;


// Methods

/// @brief Method get_Extensions addr 0x26a37c4 size 0x80 virtual false final false
 System::Collections::Generic::ICollection_1<System::Net::Http::Headers::NameValueHeaderValue> get_Extensions() ;

/// @brief Method get_MaxAge addr 0x26a3844 size 0xc virtual false final false
 System::Nullable_1<System::TimeSpan> get_MaxAge() ;

/// @brief Method set_MaxAge addr 0x26a3850 size 0x8 virtual false final false
 void set_MaxAge(System::Nullable_1<System::TimeSpan> value) ;

/// @brief Method get_MaxStale addr 0x26a3858 size 0x8 virtual false final false
 bool get_MaxStale() ;

/// @brief Method set_MaxStale addr 0x26a3860 size 0xc virtual false final false
 void set_MaxStale(bool value) ;

/// @brief Method get_MaxStaleLimit addr 0x26a386c size 0xc virtual false final false
 System::Nullable_1<System::TimeSpan> get_MaxStaleLimit() ;

/// @brief Method set_MaxStaleLimit addr 0x26a3878 size 0x8 virtual false final false
 void set_MaxStaleLimit(System::Nullable_1<System::TimeSpan> value) ;

/// @brief Method get_MinFresh addr 0x26a3880 size 0xc virtual false final false
 System::Nullable_1<System::TimeSpan> get_MinFresh() ;

/// @brief Method set_MinFresh addr 0x26a388c size 0x8 virtual false final false
 void set_MinFresh(System::Nullable_1<System::TimeSpan> value) ;

/// @brief Method get_MustRevalidate addr 0x26a3894 size 0x8 virtual false final false
 bool get_MustRevalidate() ;

/// @brief Method set_MustRevalidate addr 0x26a389c size 0xc virtual false final false
 void set_MustRevalidate(bool value) ;

/// @brief Method get_NoCache addr 0x26a38a8 size 0x8 virtual false final false
 bool get_NoCache() ;

/// @brief Method set_NoCache addr 0x26a38b0 size 0xc virtual false final false
 void set_NoCache(bool value) ;

/// @brief Method get_NoCacheHeaders addr 0x26a38bc size 0x80 virtual false final false
 System::Collections::Generic::ICollection_1<::StringW> get_NoCacheHeaders() ;

/// @brief Method get_NoStore addr 0x26a393c size 0x8 virtual false final false
 bool get_NoStore() ;

/// @brief Method set_NoStore addr 0x26a3944 size 0xc virtual false final false
 void set_NoStore(bool value) ;

/// @brief Method get_NoTransform addr 0x26a3950 size 0x8 virtual false final false
 bool get_NoTransform() ;

/// @brief Method set_NoTransform addr 0x26a3958 size 0xc virtual false final false
 void set_NoTransform(bool value) ;

/// @brief Method get_OnlyIfCached addr 0x26a3964 size 0x8 virtual false final false
 bool get_OnlyIfCached() ;

/// @brief Method set_OnlyIfCached addr 0x26a396c size 0xc virtual false final false
 void set_OnlyIfCached(bool value) ;

/// @brief Method get_Private addr 0x26a3978 size 0x8 virtual false final false
 bool get_Private() ;

/// @brief Method set_Private addr 0x26a3980 size 0xc virtual false final false
 void set_Private(bool value) ;

/// @brief Method get_PrivateHeaders addr 0x26a398c size 0x80 virtual false final false
 System::Collections::Generic::ICollection_1<::StringW> get_PrivateHeaders() ;

/// @brief Method get_ProxyRevalidate addr 0x26a3a0c size 0x8 virtual false final false
 bool get_ProxyRevalidate() ;

/// @brief Method set_ProxyRevalidate addr 0x26a3a14 size 0xc virtual false final false
 void set_ProxyRevalidate(bool value) ;

/// @brief Method get_Public addr 0x26a3a20 size 0x8 virtual false final false
 bool get_Public() ;

/// @brief Method set_Public addr 0x26a3a28 size 0xc virtual false final false
 void set_Public(bool value) ;

/// @brief Method get_SharedMaxAge addr 0x26a3a34 size 0xc virtual false final false
 System::Nullable_1<System::TimeSpan> get_SharedMaxAge() ;

/// @brief Method set_SharedMaxAge addr 0x26a3a40 size 0x8 virtual false final false
 void set_SharedMaxAge(System::Nullable_1<System::TimeSpan> value) ;

/// @brief Method System.ICloneable.Clone addr 0x26a3a48 size 0x568 virtual true final true
 ::bs_hook::Il2CppWrapperType System_ICloneable_Clone() ;

/// @brief Method Equals addr 0x26a3fb0 size 0x384 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method GetHashCode addr 0x26a4334 size 0x260 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method TryParse addr 0x26a4594 size 0x8f4 virtual false final false
static bool TryParse(::StringW input, ByRef<System::Net::Http::Headers::CacheControlHeaderValue> parsedValue) ;

/// @brief Method ToString addr 0x26a5070 size 0x6e0 virtual true final false
 ::StringW ToString() ;

// Ctor Parameters []
explicit CacheControlHeaderValue() ;

/// @brief Method .ctor addr 0x26a4e88 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Net::Http::Headers
NEED_NO_BOX(System::Net::Http::Headers::CacheControlHeaderValue);
DEFINE_IL2CPP_ARG_TYPE(System::Net::Http::Headers::CacheControlHeaderValue, "System.Net.Http.Headers", "CacheControlHeaderValue");
