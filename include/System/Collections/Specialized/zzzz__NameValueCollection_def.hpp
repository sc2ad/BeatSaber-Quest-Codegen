#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/Collections/Specialized/zzzz__NameObjectCollectionBase_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System::Collections {
class IEqualityComparer;
}
namespace System::Runtime::Serialization {
struct StreamingContext;
}
namespace System::Runtime::Serialization {
class SerializationInfo;
}
namespace System {
class DBNull;
}
namespace System::Collections {
class ArrayList;
}
// Forward declare root types
namespace System::Collections::Specialized {
class NameValueCollection;
}
// Type: System.Collections.Specialized::NameValueCollection
namespace System::Collections::Specialized {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8373))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8364))
// CS Name: System.Collections.Specialized.NameValueCollection
class CORDL_TYPE NameValueCollection : public System::Collections::Specialized::NameObjectCollectionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x60};

virtual ~NameValueCollection() = default;

// Ctor Parameters [CppParam { name: "", ty: "NameValueCollection", modifiers: " const&", def_value: None }]
constexpr NameValueCollection(NameValueCollection const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NameValueCollection", modifiers: "&&", def_value: None }]
constexpr NameValueCollection(NameValueCollection&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NameValueCollection(void* ptr) noexcept : System::Collections::Specialized::NameObjectCollectionBase(ptr) {
}


  constexpr NameValueCollection& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NameValueCollection& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NameValueCollection& operator=(NameValueCollection&& o) noexcept = default;
  constexpr NameValueCollection& operator=(NameValueCollection const& o) noexcept = default;
                


// Fields

 ::ArrayW<::StringW> __declspec(property(get=__get__all, put=__set__all))  _all;

constexpr void __set__all(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__all() const;

 ::ArrayW<::StringW> __declspec(property(get=__get__allKeys, put=__set__allKeys))  _allKeys;

constexpr void __set__allKeys(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get__allKeys() const;


// Properties

 ::StringW __declspec(property(get=get_Item, put=set_Item))  Item;


// Methods

static System::Collections::Specialized::NameValueCollection New_ctor() ;

/// @brief Method .ctor addr 0x27aa17c size 0x54 virtual false final false
 void _ctor() ;

static System::Collections::Specialized::NameValueCollection New_ctor(int32_t capacity) ;

/// @brief Method .ctor addr 0x27aa230 size 0x64 virtual false final false
 void _ctor(int32_t capacity) ;

static System::Collections::Specialized::NameValueCollection New_ctor(int32_t capacity, System::Collections::IEqualityComparer equalityComparer) ;

/// @brief Method .ctor addr 0x27aa344 size 0x74 virtual false final false
 void _ctor(int32_t capacity, System::Collections::IEqualityComparer equalityComparer) ;

static System::Collections::Specialized::NameValueCollection New_ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method .ctor addr 0x27aa3e4 size 0x6c virtual false final false
 void _ctor(System::Runtime::Serialization::SerializationInfo info, System::Runtime::Serialization::StreamingContext context) ;

/// @brief Method InvalidateCachedArrays addr 0x27aa478 size 0x8 virtual false final false
 void InvalidateCachedArrays() ;

/// @brief Method GetAsOneString addr 0x27aa480 size 0x1a0 virtual false final false
static ::StringW GetAsOneString(System::Collections::ArrayList list) ;

/// @brief Method GetAsStringArray addr 0x27aa620 size 0xa0 virtual false final false
static ::ArrayW<::StringW> GetAsStringArray(System::Collections::ArrayList list) ;

/// @brief Method Add addr 0x27aa6c0 size 0x16c virtual true final false
 void Add(::StringW name, ::StringW value) ;

/// @brief Method Get addr 0x27aa9a8 size 0x8c virtual true final false
 ::StringW Get(::StringW name) ;

/// @brief Method GetValues addr 0x27aaa34 size 0x8c virtual true final false
 ::ArrayW<::StringW> GetValues(::StringW name) ;

/// @brief Method Set addr 0x27aaac0 size 0xec virtual true final false
 void Set(::StringW name, ::StringW value) ;

/// @brief Method Remove addr 0x27aac5c size 0x8 virtual true final false
 void Remove(::StringW name) ;

/// @brief Method get_Item addr 0x27aae70 size 0x10 virtual false final false
 ::StringW get_Item(::StringW name) ;

/// @brief Method set_Item addr 0x27aae80 size 0x10 virtual false final false
 void set_Item(::StringW name, ::StringW value) ;

/// @brief Method Get addr 0x27aae90 size 0x84 virtual true final false
 ::StringW Get(int32_t index) ;

/// @brief Method GetValues addr 0x27aafb0 size 0x84 virtual true final false
 ::ArrayW<::StringW> GetValues(int32_t index) ;

/// @brief Method GetKey addr 0x27ab034 size 0x4 virtual true final false
 ::StringW GetKey(int32_t index) ;

static System::Collections::Specialized::NameValueCollection New_ctor(System::DBNull dummy) ;

/// @brief Method .ctor addr 0x27ab0d4 size 0x58 virtual false final false
 void _ctor(System::DBNull dummy) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Collections::Specialized
NEED_NO_BOX(System::Collections::Specialized::NameValueCollection);
DEFINE_IL2CPP_ARG_TYPE(System::Collections::Specialized::NameValueCollection, "System.Collections.Specialized", "NameValueCollection");
