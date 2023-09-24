#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class GlobalNamespace__AsyncCache_2____c__DisplayClass4_0;
}
namespace System {
template<typename T,typename TResult>
class Func_2;
}
namespace System::Collections::Concurrent {
template<typename TKey,typename TValue>
class ConcurrentDictionary_2;
}
namespace System {
template<typename T>
class Lazy_1;
}
namespace System::Threading::Tasks {
template<typename TResult>
class Task_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class AsyncCache_2;
}
namespace GlobalNamespace {
template<typename TKey,typename TValue>
class GlobalNamespace__AsyncCache_2____c__DisplayClass4_0;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class AsyncCache_2<TKey,TValue>;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
class GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue>;
}
// Type: ::<>c__DisplayClass4_0
// Type: ::AsyncCache`2
// Type: ::<>c__DisplayClass4_0
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5993))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5993), inst: 80 })
// CS Name: AsyncCache`2::<>c__DisplayClass4_0
class CORDL_TYPE GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~GlobalNamespace__AsyncCache_2____c__DisplayClass4_0() = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AsyncCache_2____c__DisplayClass4_0", modifiers: " const&", def_value: None }]
constexpr GlobalNamespace__AsyncCache_2____c__DisplayClass4_0(GlobalNamespace__AsyncCache_2____c__DisplayClass4_0 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GlobalNamespace__AsyncCache_2____c__DisplayClass4_0", modifiers: "&&", def_value: None }]
constexpr GlobalNamespace__AsyncCache_2____c__DisplayClass4_0(GlobalNamespace__AsyncCache_2____c__DisplayClass4_0&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GlobalNamespace__AsyncCache_2____c__DisplayClass4_0(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr GlobalNamespace__AsyncCache_2____c__DisplayClass4_0& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GlobalNamespace__AsyncCache_2____c__DisplayClass4_0& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GlobalNamespace__AsyncCache_2____c__DisplayClass4_0& operator=(GlobalNamespace__AsyncCache_2____c__DisplayClass4_0&& o) noexcept = default;
  constexpr GlobalNamespace__AsyncCache_2____c__DisplayClass4_0& operator=(GlobalNamespace__AsyncCache_2____c__DisplayClass4_0 const& o) noexcept = default;
                


// Fields

 TKey __declspec(property(get=__get_toAdd, put=__set_toAdd))  toAdd;

constexpr void __set_toAdd(TKey value) ;

constexpr TKey __get_toAdd() const;

 GlobalNamespace::AsyncCache_2<TKey,TValue> __declspec(property(get=__get___4__this, put=__set___4__this))  __4__this;

constexpr void __set___4__this(GlobalNamespace::AsyncCache_2<TKey,TValue> value) ;

constexpr GlobalNamespace::AsyncCache_2<TKey,TValue> __get___4__this() const;


// Methods

static GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey,TValue> New_ctor() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method <get_Item>b__1 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::Tasks::Task_1<TValue> _get_Item_b__1() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
// Type: ::AsyncCache`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type TKey,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(5994))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(5994), inst: 80 })
// CS Name: AsyncCache`2
class CORDL_TYPE AsyncCache_2<TKey,TValue> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using __c__DisplayClass4_0 = GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0<TKey, TValue>;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~AsyncCache_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCache_2", modifiers: " const&", def_value: None }]
constexpr AsyncCache_2(AsyncCache_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncCache_2", modifiers: "&&", def_value: None }]
constexpr AsyncCache_2(AsyncCache_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncCache_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncCache_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncCache_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncCache_2& operator=(AsyncCache_2&& o) noexcept = default;
  constexpr AsyncCache_2& operator=(AsyncCache_2 const& o) noexcept = default;
                


// Fields

 System::Func_2<TKey,System::Threading::Tasks::Task_1<TValue>> __declspec(property(get=__get__valueFactory, put=__set__valueFactory))  _valueFactory;

constexpr void __set__valueFactory(System::Func_2<TKey,System::Threading::Tasks::Task_1<TValue>> value) ;

constexpr System::Func_2<TKey,System::Threading::Tasks::Task_1<TValue>> __get__valueFactory() const;

 System::Collections::Concurrent::ConcurrentDictionary_2<TKey,System::Lazy_1<System::Threading::Tasks::Task_1<TValue>>> __declspec(property(get=__get__map, put=__set__map))  _map;

constexpr void __set__map(System::Collections::Concurrent::ConcurrentDictionary_2<TKey,System::Lazy_1<System::Threading::Tasks::Task_1<TValue>>> value) ;

constexpr System::Collections::Concurrent::ConcurrentDictionary_2<TKey,System::Lazy_1<System::Threading::Tasks::Task_1<TValue>>> __get__map() const;


// Properties

 System::Threading::Tasks::Task_1<TValue> __declspec(property(get=get_Item))  Item;


// Methods

static GlobalNamespace::AsyncCache_2<TKey,TValue> New_ctor(System::Func_2<TKey,System::Threading::Tasks::Task_1<TValue>> valueFactory) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Func_2<TKey,System::Threading::Tasks::Task_1<TValue>> valueFactory) ;

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Threading::Tasks::Task_1<TValue> get_Item(TKey key) ;

/// @brief Method RemoveKey addr 0x0 size 0xffffffffffffffff virtual false final false
 void RemoveKey(TKey key) ;

/// @brief Method <get_Item>b__4_0 addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Lazy_1<System::Threading::Tasks::Task_1<TValue>> _get_Item_b__4_0(TKey toAdd) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::AsyncCache_2, "", "AsyncCache`2");
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::GlobalNamespace__AsyncCache_2____c__DisplayClass4_0, "", "AsyncCache`2/<>c__DisplayClass4_0");
