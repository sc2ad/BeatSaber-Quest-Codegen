#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class GlobalNamespace__OVRObjectPool__Storage_1;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type T>
class GlobalNamespace__OVRObjectPool__Storage_1<T>;
}
namespace GlobalNamespace {
class OVRObjectPool;
}
// Type: ::Storage`1
// Type: ::OVRObjectPool
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8942))
// CS Name: OVRObjectPool
class CORDL_TYPE OVRObjectPool : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
template<typename T>
using Storage_1 = GlobalNamespace::GlobalNamespace__OVRObjectPool__Storage_1<T>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OVRObjectPool() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool", modifiers: " const&", def_value: None }]
constexpr OVRObjectPool(OVRObjectPool const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRObjectPool", modifiers: "&&", def_value: None }]
constexpr OVRObjectPool(OVRObjectPool&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRObjectPool(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OVRObjectPool& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRObjectPool& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRObjectPool& operator=(OVRObjectPool&& o) noexcept = default;
  constexpr OVRObjectPool& operator=(OVRObjectPool const& o) noexcept = default;
                


// Methods

/// @brief Method Get addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static T Get() ;

/// @brief Method List addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::List_1<T> List() ;

/// @brief Method Dictionary addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKey,typename TValue>
static System::Collections::Generic::Dictionary_2<TKey,TValue> Dictionary() ;

/// @brief Method HashSet addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::HashSet_1<T> HashSet() ;

/// @brief Method Stack addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::Stack_1<T> Stack() ;

/// @brief Method Queue addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::Queue_1<T> Queue() ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Return(T obj) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Return(System::Collections::Generic::HashSet_1<T> set) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Return(System::Collections::Generic::Stack_1<T> stack) ;

/// @brief Method Return addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void Return(System::Collections::Generic::Queue_1<T> queue) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::Storage`1
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type T>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(8941))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(8941), inst: 2 })
// CS Name: OVRObjectPool::Storage`1
class CORDL_TYPE GlobalNamespace__OVRObjectPool__Storage_1<T> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~GlobalNamespace__OVRObjectPool__Storage_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRObjectPool__Storage_1", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__OVRObjectPool__Storage_1(GlobalNamespace__OVRObjectPool__Storage_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__OVRObjectPool__Storage_1", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__OVRObjectPool__Storage_1(GlobalNamespace__OVRObjectPool__Storage_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__OVRObjectPool__Storage_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__OVRObjectPool__Storage_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__OVRObjectPool__Storage_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__OVRObjectPool__Storage_1& operator=(GlobalNamespace__OVRObjectPool__Storage_1&& o) noexcept = default;
  constexpr GlobalNamespace__OVRObjectPool__Storage_1& operator=(GlobalNamespace__OVRObjectPool__Storage_1 const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::HashSet_1<T> __declspec(property(get=__get_HashSet, put=__set_HashSet))  HashSet;

static void __set_HashSet(System::Collections::Generic::HashSet_1<T> value) ;

static System::Collections::Generic::HashSet_1<T> __get_HashSet() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__OVRObjectPool__Storage_1, "", "OVRObjectPool/Storage`1");
NEED_NO_BOX(GlobalNamespace::OVRObjectPool);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRObjectPool, "", "OVRObjectPool");
