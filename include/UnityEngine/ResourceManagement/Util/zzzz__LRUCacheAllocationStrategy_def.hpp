#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::ResourceManagement::Util {
class IAllocationStrategy;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class LRUCacheAllocationStrategy;
}
// Type: UnityEngine.ResourceManagement.Util::LRUCacheAllocationStrategy
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14260))
// CS Name: UnityEngine.ResourceManagement.Util.LRUCacheAllocationStrategy
class CORDL_TYPE LRUCacheAllocationStrategy : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ResourceManagement::Util::IAllocationStrategy
constexpr operator  UnityEngine::ResourceManagement::Util::IAllocationStrategy() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~LRUCacheAllocationStrategy() = default;

// Ctor Parameters [CppParam { name: "", ty: "LRUCacheAllocationStrategy", modifiers: " const&", def_value: None }]
constexpr LRUCacheAllocationStrategy(LRUCacheAllocationStrategy const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LRUCacheAllocationStrategy", modifiers: "&&", def_value: None }]
constexpr LRUCacheAllocationStrategy(LRUCacheAllocationStrategy&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LRUCacheAllocationStrategy(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr LRUCacheAllocationStrategy& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LRUCacheAllocationStrategy& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LRUCacheAllocationStrategy& operator=(LRUCacheAllocationStrategy&& o) noexcept = default;
  constexpr LRUCacheAllocationStrategy& operator=(LRUCacheAllocationStrategy const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_m_poolMaxSize, put=__set_m_poolMaxSize))  m_poolMaxSize;

constexpr void __set_m_poolMaxSize(int32_t value) ;

constexpr int32_t __get_m_poolMaxSize() const;

 int32_t __declspec(property(get=__get_m_poolInitialCapacity, put=__set_m_poolInitialCapacity))  m_poolInitialCapacity;

constexpr void __set_m_poolInitialCapacity(int32_t value) ;

constexpr int32_t __get_m_poolInitialCapacity() const;

 int32_t __declspec(property(get=__get_m_poolCacheMaxSize, put=__set_m_poolCacheMaxSize))  m_poolCacheMaxSize;

constexpr void __set_m_poolCacheMaxSize(int32_t value) ;

constexpr int32_t __get_m_poolCacheMaxSize() const;

 System::Collections::Generic::List_1<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_m_poolCache, put=__set_m_poolCache))  m_poolCache;

constexpr void __set_m_poolCache(System::Collections::Generic::List_1<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::List_1<System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>> __get_m_poolCache() const;

 System::Collections::Generic::Dictionary_2<int32_t,System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>> __declspec(property(get=__get_m_cache, put=__set_m_cache))  m_cache;

constexpr void __set_m_cache(System::Collections::Generic::Dictionary_2<int32_t,System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>> value) ;

constexpr System::Collections::Generic::Dictionary_2<int32_t,System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType>> __get_m_cache() const;


// Methods

// Ctor Parameters [CppParam { name: "poolMaxSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "poolCapacity", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "poolCacheMaxSize", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "initialPoolCacheCapacity", ty: "int32_t", modifiers: "", def_value: None }]
explicit LRUCacheAllocationStrategy(int32_t poolMaxSize, int32_t poolCapacity, int32_t poolCacheMaxSize, int32_t initialPoolCacheCapacity) ;

/// @brief Method .ctor addr 0x2a32a50 size 0x1d8 virtual false final false
 void _ctor(int32_t poolMaxSize, int32_t poolCapacity, int32_t poolCacheMaxSize, int32_t initialPoolCacheCapacity) ;

/// @brief Method GetPool addr 0x2a3a6b0 size 0xf0 virtual false final false
 System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> GetPool() ;

/// @brief Method ReleasePool addr 0x2a3a7a0 size 0xc0 virtual false final false
 void ReleasePool(System::Collections::Generic::List_1<::bs_hook::Il2CppWrapperType> pool) ;

/// @brief Method New addr 0x2a3a860 size 0x13c virtual true final true
 ::bs_hook::Il2CppWrapperType New(System::Type type, int32_t typeHash) ;

/// @brief Method Release addr 0x2a3a99c size 0x138 virtual true final true
 void Release(int32_t typeHash, ::bs_hook::Il2CppWrapperType obj) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::LRUCacheAllocationStrategy, "UnityEngine.ResourceManagement.Util", "LRUCacheAllocationStrategy");
