#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
namespace Zenject {
class IMemoryPool;
}
namespace Zenject {
template<typename TParam1,typename TValue>
class IMemoryPool_2;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TValue>
class StaticMemoryPool_2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TValue>
class StaticMemoryPool_2<TParam1,TValue>;
}
// Type: Zenject::StaticMemoryPool`2
// Type: Zenject::StaticMemoryPool`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11027)), TypeDefinitionIndex(TypeDefinitionIndex(11029)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11027), inst: 171 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11029), inst: 80 })
// CS Name: Zenject.StaticMemoryPool`2
class CORDL_TYPE StaticMemoryPool_2<TParam1,TValue> : public Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to Zenject::IMemoryPool_2<TParam1,TValue>
constexpr operator  Zenject::IMemoryPool_2<TParam1,TValue>() const noexcept;

/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StaticMemoryPool_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_2", modifiers: " const&", def_value: None }]
constexpr StaticMemoryPool_2(StaticMemoryPool_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_2", modifiers: "&&", def_value: None }]
constexpr StaticMemoryPool_2(StaticMemoryPool_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticMemoryPool_2(void* ptr) noexcept : Zenject::StaticMemoryPoolBase_1<TValue>(ptr) {
}


  constexpr StaticMemoryPool_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticMemoryPool_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticMemoryPool_2& operator=(StaticMemoryPool_2&& o) noexcept = default;
  constexpr StaticMemoryPool_2& operator=(StaticMemoryPool_2 const& o) noexcept = default;
                


// Fields

 System::Action_2<TParam1,TValue> __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod))  _onSpawnMethod;

constexpr void __set__onSpawnMethod(System::Action_2<TParam1,TValue> value) ;

constexpr System::Action_2<TParam1,TValue> __get__onSpawnMethod() const;


// Properties

 System::Action_2<TParam1,TValue> __declspec(property(put=set_OnSpawnMethod))  OnSpawnMethod;


// Methods

static Zenject::StaticMemoryPool_2<TParam1,TValue> New_ctor(System::Action_2<TParam1,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Action_2<TParam1,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_OnSpawnMethod(System::Action_2<TParam1,TValue> value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Spawn(TParam1 param) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPool_2, "Zenject", "StaticMemoryPool`2");
