#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace Zenject {
class BindInfo;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace Zenject {
class InjectableInfo;
}
namespace Zenject {
class IProvider;
}
namespace Zenject {
class BindStatement;
}
namespace Zenject {
template<typename TValue>
class StaticMemoryPool_1;
}
namespace Zenject {
class InjectContext;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace Zenject {
struct BindingId;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace Zenject::Internal {
class LookupId;
}
// Forward declare root types
namespace Zenject::Internal {
class ZenPools;
}
// Type: Zenject.Internal::ZenPools
namespace Zenject::Internal {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11326))
// CS Name: Zenject.Internal.ZenPools
class CORDL_TYPE ZenPools : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~ZenPools() = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenPools", modifiers: " const&", def_value: None }]
constexpr ZenPools(ZenPools const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "ZenPools", modifiers: "&&", def_value: None }]
constexpr ZenPools(ZenPools&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ZenPools(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ZenPools& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ZenPools& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ZenPools& operator=(ZenPools&& o) noexcept = default;
  constexpr ZenPools& operator=(ZenPools const& o) noexcept = default;
                


// Fields

static ::Zenject::StaticMemoryPool_1<::Zenject::InjectContext> __declspec(property(get=__get__contextPool, put=__set__contextPool))  _contextPool;

static void __set__contextPool(::Zenject::StaticMemoryPool_1<::Zenject::InjectContext> value) ;

static ::Zenject::StaticMemoryPool_1<::Zenject::InjectContext> __get__contextPool() ;

static ::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId> __declspec(property(get=__get__lookupIdPool, put=__set__lookupIdPool))  _lookupIdPool;

static void __set__lookupIdPool(::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId> value) ;

static ::Zenject::StaticMemoryPool_1<::Zenject::Internal::LookupId> __get__lookupIdPool() ;

static ::Zenject::StaticMemoryPool_1<::Zenject::BindInfo> __declspec(property(get=__get__bindInfoPool, put=__set__bindInfoPool))  _bindInfoPool;

static void __set__bindInfoPool(::Zenject::StaticMemoryPool_1<::Zenject::BindInfo> value) ;

static ::Zenject::StaticMemoryPool_1<::Zenject::BindInfo> __get__bindInfoPool() ;

static ::Zenject::StaticMemoryPool_1<::Zenject::BindStatement> __declspec(property(get=__get__bindStatementPool, put=__set__bindStatementPool))  _bindStatementPool;

static void __set__bindStatementPool(::Zenject::StaticMemoryPool_1<::Zenject::BindStatement> value) ;

static ::Zenject::StaticMemoryPool_1<::Zenject::BindStatement> __get__bindStatementPool() ;


// Methods

/// @brief Method SpawnHashSet addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::System::Collections::Generic::HashSet_1<T> SpawnHashSet() ;

/// @brief Method SpawnDictionary addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKey,typename TValue>
static ::System::Collections::Generic::Dictionary_2<TKey,TValue> SpawnDictionary() ;

/// @brief Method SpawnStatement addr 0x2da9d9c size 0x78 virtual false final false
static ::Zenject::BindStatement SpawnStatement() ;

/// @brief Method DespawnStatement addr 0x2da9e14 size 0x90 virtual false final false
static void DespawnStatement(::Zenject::BindStatement statement) ;

/// @brief Method SpawnBindInfo addr 0x2da9ea4 size 0x78 virtual false final false
static ::Zenject::BindInfo SpawnBindInfo() ;

/// @brief Method DespawnBindInfo addr 0x2da9f1c size 0x90 virtual false final false
static void DespawnBindInfo(::Zenject::BindInfo bindInfo) ;

/// @brief Method DespawnDictionary addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TKey,typename TValue>
static void DespawnDictionary(::System::Collections::Generic::Dictionary_2<TKey,TValue> dictionary) ;

/// @brief Method DespawnHashSet addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void DespawnHashSet(::System::Collections::Generic::HashSet_1<T> set) ;

/// @brief Method SpawnLookupId addr 0x2da9fac size 0x9c virtual false final false
static ::Zenject::Internal::LookupId SpawnLookupId(::Zenject::IProvider provider, ::Zenject::BindingId bindingId) ;

/// @brief Method DespawnLookupId addr 0x2daa048 size 0x80 virtual false final false
static void DespawnLookupId(::Zenject::Internal::LookupId lookupId) ;

/// @brief Method SpawnList addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::System::Collections::Generic::List_1<T> SpawnList() ;

/// @brief Method DespawnList addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void DespawnList(::System::Collections::Generic::List_1<T> list) ;

/// @brief Method DespawnArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static void DespawnArray(::ArrayW<T> arr) ;

/// @brief Method SpawnArray addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static ::ArrayW<T> SpawnArray(int32_t length) ;

/// @brief Method SpawnInjectContext addr 0x2daa0c8 size 0xa8 virtual false final false
static ::Zenject::InjectContext SpawnInjectContext(::Zenject::DiContainer container, ::System::Type memberType) ;

/// @brief Method DespawnInjectContext addr 0x2daa170 size 0x90 virtual false final false
static void DespawnInjectContext(::Zenject::InjectContext context) ;

/// @brief Method SpawnInjectContext addr 0x2daa200 size 0xcc virtual false final false
static ::Zenject::InjectContext SpawnInjectContext(::Zenject::DiContainer container, ::Zenject::InjectableInfo injectableInfo, ::Zenject::InjectContext currentContext, ::bs_hook::Il2CppWrapperType targetInstance, ::System::Type targetType, ::bs_hook::Il2CppWrapperType concreteIdentifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject::Internal
} // end anonymous namespace
NEED_NO_BOX(::Zenject::Internal::ZenPools);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::Internal::ZenPools, "Zenject.Internal", "ZenPools");
