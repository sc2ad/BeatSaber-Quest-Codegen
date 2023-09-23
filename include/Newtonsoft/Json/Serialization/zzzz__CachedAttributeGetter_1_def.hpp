#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Newtonsoft::Json::Utilities {
template<typename TKey,typename TValue>
class ThreadSafeStore_2;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
template<typename T>
class CachedAttributeGetter_1;
}
namespace Newtonsoft::Json::Serialization {
template<::cordl_internals::il2cpp_reference_type T>
class CachedAttributeGetter_1<T>;
}
// Type: Newtonsoft.Json.Serialization::CachedAttributeGetter`1
// Type: Newtonsoft.Json.Serialization::CachedAttributeGetter`1
namespace Newtonsoft::Json::Serialization {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11904))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11904), inst: 2 })
// CS Name: Newtonsoft.Json.Serialization.CachedAttributeGetter`1
class CORDL_TYPE CachedAttributeGetter_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~CachedAttributeGetter_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedAttributeGetter_1", modifiers: " const&", def_value: None }]
constexpr CachedAttributeGetter_1(CachedAttributeGetter_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "CachedAttributeGetter_1", modifiers: "&&", def_value: None }]
constexpr CachedAttributeGetter_1(CachedAttributeGetter_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit CachedAttributeGetter_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr CachedAttributeGetter_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr CachedAttributeGetter_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr CachedAttributeGetter_1& operator=(CachedAttributeGetter_1&& o) noexcept = default;
  constexpr CachedAttributeGetter_1& operator=(CachedAttributeGetter_1 const& o) noexcept = default;
                


// Fields

static Newtonsoft::Json::Utilities::ThreadSafeStore_2<::bs_hook::Il2CppWrapperType,T> __declspec(property(get=__get_TypeAttributeCache, put=__set_TypeAttributeCache))  TypeAttributeCache;

static void __set_TypeAttributeCache(Newtonsoft::Json::Utilities::ThreadSafeStore_2<::bs_hook::Il2CppWrapperType,T> value) ;

static Newtonsoft::Json::Utilities::ThreadSafeStore_2<::bs_hook::Il2CppWrapperType,T> __get_TypeAttributeCache() ;


// Methods

/// @brief Method GetAttribute addr 0x0 size 0xffffffffffffffff virtual false final false
static T GetAttribute(::bs_hook::Il2CppWrapperType type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Newtonsoft::Json::Serialization::CachedAttributeGetter_1, "Newtonsoft.Json.Serialization", "CachedAttributeGetter`1");
