#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6,typename T7,typename T8>
class Action_8;
}
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace Zenject {
class IMemoryPool;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TValue>
class IMemoryPool_8;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TParam6,typename TParam7,typename TValue>
class StaticMemoryPool_8;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TParam7,::cordl_internals::il2cpp_reference_type TValue>
class StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>;
}
// Type: Zenject::StaticMemoryPool`8
// Type: Zenject::StaticMemoryPool`8
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TParam6,::cordl_internals::il2cpp_reference_type TParam7,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(11035)), TypeDefinitionIndex(TypeDefinitionIndex(11027)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11027), inst: 180 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11035), inst: 5941 })
// CS Name: Zenject.StaticMemoryPool`8
class CORDL_TYPE StaticMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> : public Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to Zenject::IMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>
constexpr operator  Zenject::IMemoryPool_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>() const noexcept;

/// @brief Convert operator to Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to Zenject::IMemoryPool
constexpr operator  Zenject::IMemoryPool() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StaticMemoryPool_8() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_8", modifiers: " const&", def_value: None }]
constexpr StaticMemoryPool_8(StaticMemoryPool_8 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_8", modifiers: "&&", def_value: None }]
constexpr StaticMemoryPool_8(StaticMemoryPool_8&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticMemoryPool_8(void* ptr) noexcept : Zenject::StaticMemoryPoolBase_1<TValue>(ptr) {
}


  constexpr StaticMemoryPool_8& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticMemoryPool_8& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticMemoryPool_8& operator=(StaticMemoryPool_8&& o) noexcept = default;
  constexpr StaticMemoryPool_8& operator=(StaticMemoryPool_8 const& o) noexcept = default;
                


// Fields

 System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod))  _onSpawnMethod;

constexpr void __set__onSpawnMethod(System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> value) ;

constexpr System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> __get__onSpawnMethod() const;


// Properties

 System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> __declspec(property(put=set_OnSpawnMethod))  OnSpawnMethod;


// Methods

// Ctor Parameters [CppParam { name: "onSpawnMethod", ty: "System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue>", modifiers: "", def_value: None }, CppParam { name: "onDespawnedMethod", ty: "System::Action_1<TValue>", modifiers: "", def_value: None }]
explicit StaticMemoryPool_8(System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> onSpawnMethod, System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_OnSpawnMethod(System::Action_8<TParam1,TParam2,TParam3,TParam4,TParam5,TParam6,TParam7,TValue> value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5, TParam6 p6, TParam7 p7) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::StaticMemoryPool_8, "Zenject", "StaticMemoryPool`8");
