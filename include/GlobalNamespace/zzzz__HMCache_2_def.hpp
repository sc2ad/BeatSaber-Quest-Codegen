#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class Queue_1;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace GlobalNamespace {
template<typename K,typename V>
class HMCache_2;
}
namespace GlobalNamespace {
template<::cordl_internals::il2cpp_reference_type K,::cordl_internals::il2cpp_reference_type V>
class HMCache_2<K,V>;
}
// Type: ::HMCache`2
// Type: ::HMCache`2
namespace GlobalNamespace {
// cpp template
template<::cordl_internals::il2cpp_reference_type K,::cordl_internals::il2cpp_reference_type V>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(13807))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(13807), inst: 80 })
// CS Name: HMCache`2
class CORDL_TYPE HMCache_2<K,V> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HMCache_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "HMCache_2", modifiers: " const&", def_value: None }]
constexpr HMCache_2(HMCache_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HMCache_2", modifiers: "&&", def_value: None }]
constexpr HMCache_2(HMCache_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HMCache_2(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HMCache_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HMCache_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HMCache_2& operator=(HMCache_2&& o) noexcept = default;
  constexpr HMCache_2& operator=(HMCache_2 const& o) noexcept = default;
                


// Fields

 System::Action_1<V> __declspec(property(get=__get_itemWillBeRemovedFromCacheEvent, put=__set_itemWillBeRemovedFromCacheEvent))  itemWillBeRemovedFromCacheEvent;

constexpr void __set_itemWillBeRemovedFromCacheEvent(System::Action_1<V> value) ;

constexpr System::Action_1<V> __get_itemWillBeRemovedFromCacheEvent() const;

 System::Collections::Generic::Dictionary_2<K,V> __declspec(property(get=__get__cache, put=__set__cache))  _cache;

constexpr void __set__cache(System::Collections::Generic::Dictionary_2<K,V> value) ;

constexpr System::Collections::Generic::Dictionary_2<K,V> __get__cache() const;

 System::Collections::Generic::Queue_1<K> __declspec(property(get=__get__addedElements, put=__set__addedElements))  _addedElements;

constexpr void __set__addedElements(System::Collections::Generic::Queue_1<K> value) ;

constexpr System::Collections::Generic::Queue_1<K> __get__addedElements() const;

 int32_t __declspec(property(get=__get__maxNumberElements, put=__set__maxNumberElements))  _maxNumberElements;

constexpr void __set__maxNumberElements(int32_t value) ;

constexpr int32_t __get__maxNumberElements() const;


// Methods

/// @brief Method add_itemWillBeRemovedFromCacheEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void add_itemWillBeRemovedFromCacheEvent(System::Action_1<V> value) ;

/// @brief Method remove_itemWillBeRemovedFromCacheEvent addr 0x0 size 0xffffffffffffffff virtual false final false
 void remove_itemWillBeRemovedFromCacheEvent(System::Action_1<V> value) ;

// Ctor Parameters [CppParam { name: "maxNumberElements", ty: "int32_t", modifiers: "", def_value: None }]
explicit HMCache_2(int32_t maxNumberElements) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(int32_t maxNumberElements) ;

/// @brief Method IsInCache addr 0x0 size 0xffffffffffffffff virtual false final false
 bool IsInCache(K key) ;

/// @brief Method UpdateOrderInCache addr 0x0 size 0xffffffffffffffff virtual false final false
 void UpdateOrderInCache(K key) ;

/// @brief Method GetFromCache addr 0x0 size 0xffffffffffffffff virtual false final false
 V GetFromCache(K key) ;

/// @brief Method PutToCache addr 0x0 size 0xffffffffffffffff virtual false final false
 void PutToCache(K key, V value) ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual false final false
 void Clear() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::HMCache_2, "", "HMCache`2");
