#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace Zenject {
template<typename TValue>
class IFactory_1;
}
namespace Zenject {
class DiContainer;
}
namespace System {
class IDisposable;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Zenject {
class MemoryPoolSettings;
}
namespace Zenject {
class InjectTypeInfo;
}
namespace Zenject {
class IMemoryPool;
}
namespace System {
class Type;
}
namespace Zenject {
class IValidatable;
}
namespace System::Collections::Generic {
template<typename T>
class Stack_1;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class MemoryPoolBase_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class MemoryPoolBase_1<TContract>;
}
// Type: Zenject::MemoryPoolBase`1
// Type: Zenject::MemoryPoolBase`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10991))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10991), inst: 2 })
// CS Name: Zenject.MemoryPoolBase`1
class CORDL_TYPE MemoryPoolBase_1<TContract> : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to Zenject::IValidatable
constexpr operator  Zenject::IValidatable() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MemoryPoolBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBase_1", modifiers: " const&", def_value: None }]
constexpr MemoryPoolBase_1(MemoryPoolBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBase_1", modifiers: "&&", def_value: None }]
constexpr MemoryPoolBase_1(MemoryPoolBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPoolBase_1(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr MemoryPoolBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPoolBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPoolBase_1& operator=(MemoryPoolBase_1&& o) noexcept = default;
  constexpr MemoryPoolBase_1& operator=(MemoryPoolBase_1 const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Stack_1<TContract> __declspec(property(get=__get__inactiveItems, put=__set__inactiveItems))  _inactiveItems;

constexpr void __set__inactiveItems(System::Collections::Generic::Stack_1<TContract> value) ;

constexpr System::Collections::Generic::Stack_1<TContract> __get__inactiveItems() const;

 Zenject::IFactory_1<TContract> __declspec(property(get=__get__factory, put=__set__factory))  _factory;

constexpr void __set__factory(Zenject::IFactory_1<TContract> value) ;

constexpr Zenject::IFactory_1<TContract> __get__factory() const;

 Zenject::MemoryPoolSettings __declspec(property(get=__get__settings, put=__set__settings))  _settings;

constexpr void __set__settings(Zenject::MemoryPoolSettings value) ;

constexpr Zenject::MemoryPoolSettings __get__settings() const;

 Zenject::DiContainer __declspec(property(get=__get__container, put=__set__container))  _container;

constexpr void __set__container(Zenject::DiContainer value) ;

constexpr Zenject::DiContainer __get__container() const;

 int32_t __declspec(property(get=__get__activeCount, put=__set__activeCount))  _activeCount;

constexpr void __set__activeCount(int32_t value) ;

constexpr int32_t __get__activeCount() const;


// Properties

 Zenject::DiContainer __declspec(property(get=get_Container))  Container;

 System::Collections::Generic::IEnumerable_1<TContract> __declspec(property(get=get_InactiveItems))  InactiveItems;

 int32_t __declspec(property(get=get_NumTotal))  NumTotal;

 int32_t __declspec(property(get=get_NumInactive))  NumInactive;

 int32_t __declspec(property(get=get_NumActive))  NumActive;

 System::Type __declspec(property(get=get_ItemType))  ItemType;


// Methods

/// @brief Method Construct addr 0x0 size 0xffffffffffffffff virtual false final false
 void Construct(Zenject::IFactory_1<TContract> factory, Zenject::DiContainer container, Zenject::MemoryPoolSettings settings) ;

/// @brief Method get_Container addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::DiContainer get_Container() ;

/// @brief Method get_InactiveItems addr 0x0 size 0xffffffffffffffff virtual false final false
 System::Collections::Generic::IEnumerable_1<TContract> get_InactiveItems() ;

/// @brief Method get_NumTotal addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_NumTotal() ;

/// @brief Method get_NumInactive addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_NumInactive() ;

/// @brief Method get_NumActive addr 0x0 size 0xffffffffffffffff virtual true final true
 int32_t get_NumActive() ;

/// @brief Method get_ItemType addr 0x0 size 0xffffffffffffffff virtual true final true
 System::Type get_ItemType() ;

/// @brief Method Dispose addr 0x0 size 0xffffffffffffffff virtual true final true
 void Dispose() ;

/// @brief Method Zenject.IMemoryPool.Despawn addr 0x0 size 0xffffffffffffffff virtual true final true
 void Zenject_IMemoryPool_Despawn(::bs_hook::Il2CppWrapperType item) ;

/// @brief Method Despawn addr 0x0 size 0xffffffffffffffff virtual true final true
 void Despawn(TContract item) ;

/// @brief Method AllocNew addr 0x0 size 0xffffffffffffffff virtual false final false
 TContract AllocNew() ;

/// @brief Method Zenject.IValidatable.Validate addr 0x0 size 0xffffffffffffffff virtual true final true
 void Zenject_IValidatable_Validate() ;

/// @brief Method Clear addr 0x0 size 0xffffffffffffffff virtual true final true
 void Clear() ;

/// @brief Method ShrinkBy addr 0x0 size 0xffffffffffffffff virtual true final true
 void ShrinkBy(int32_t numToRemove) ;

/// @brief Method ExpandBy addr 0x0 size 0xffffffffffffffff virtual true final true
 void ExpandBy(int32_t numToAdd) ;

/// @brief Method GetInternal addr 0x0 size 0xffffffffffffffff virtual false final false
 TContract GetInternal() ;

/// @brief Method Resize addr 0x0 size 0xffffffffffffffff virtual true final true
 void Resize(int32_t desiredPoolSize) ;

/// @brief Method ExpandPool addr 0x0 size 0xffffffffffffffff virtual false final false
 void ExpandPool() ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDespawned(TContract item) ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnSpawned(TContract item) ;

/// @brief Method OnCreated addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnCreated(TContract item) ;

/// @brief Method OnDestroyed addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDestroyed(TContract item) ;

// Ctor Parameters []
explicit MemoryPoolBase_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenInjectMethod0 addr 0x0 size 0xffffffffffffffff virtual false final false
static void __zenInjectMethod0(::bs_hook::Il2CppWrapperType P_0, ::ArrayW<::bs_hook::Il2CppWrapperType> P_1) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolBase_1, "Zenject", "MemoryPoolBase`1");
