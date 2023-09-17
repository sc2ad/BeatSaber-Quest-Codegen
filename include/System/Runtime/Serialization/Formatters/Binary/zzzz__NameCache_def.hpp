#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
// Forward declare root types
namespace System::Runtime::Serialization::Formatters::Binary {
class NameCache;
}
// Type: System.Runtime.Serialization.Formatters.Binary::NameCache
namespace System::Runtime::Serialization::Formatters::Binary {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3291))
// CS Name: System.Runtime.Serialization.Formatters.Binary.NameCache
class CORDL_TYPE NameCache : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~NameCache() = default;

// Ctor Parameters [CppParam { name: "", ty: "NameCache", modifiers: " const&", def_value: None }]
constexpr NameCache(NameCache const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "NameCache", modifiers: "&&", def_value: None }]
constexpr NameCache(NameCache&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit NameCache(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr NameCache& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr NameCache& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr NameCache& operator=(NameCache&& o) noexcept = default;
  constexpr NameCache& operator=(NameCache const& o) noexcept = default;
                


// Fields

static ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __declspec(property(get=__get_ht, put=__set_ht))  ht;

static void __set_ht(::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::bs_hook::Il2CppWrapperType> value) ;

static ::System::Collections::Concurrent::ConcurrentDictionary_2<::StringW,::bs_hook::Il2CppWrapperType> __get_ht() ;

 ::StringW __declspec(property(get=__get_name, put=__set_name))  name;

constexpr void __set_name(::StringW value) ;

constexpr ::StringW __get_name() const;


// Methods

/// @brief Method GetCachedValue addr 0x2362e4c size 0xa8 virtual false final false
 ::bs_hook::Il2CppWrapperType GetCachedValue(::StringW name) ;

/// @brief Method SetCachedValue addr 0x23632f4 size 0x90 virtual false final false
 void SetCachedValue(::bs_hook::Il2CppWrapperType value) ;

// Ctor Parameters []
explicit NameCache() ;

/// @brief Method .ctor addr 0x235f388 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Runtime::Serialization::Formatters::Binary
} // end anonymous namespace
NEED_NO_BOX(::System::Runtime::Serialization::Formatters::Binary::NameCache);
DEFINE_IL2CPP_ARG_TYPE(::System::Runtime::Serialization::Formatters::Binary::NameCache, "System.Runtime.Serialization.Formatters.Binary", "NameCache");
