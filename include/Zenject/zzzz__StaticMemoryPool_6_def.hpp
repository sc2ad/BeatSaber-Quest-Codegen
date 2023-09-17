#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBase_1_def.hpp"
namespace {
namespace System {
template<typename T1,typename T2,typename T3,typename T4,typename T5,typename T6>
class Action_6;
}
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TValue>
class IMemoryPool_6;
}
namespace System {
template<typename T>
class Action_1;
}
namespace Zenject {
template<typename TValue>
class IDespawnableMemoryPool_1;
}
namespace Zenject {
class IMemoryPool;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TParam4,typename TParam5,typename TValue>
class StaticMemoryPool_6;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TValue>
class StaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>;
}
// Type: Zenject::StaticMemoryPool`6
// Type: Zenject::StaticMemoryPool`6
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TParam4,::cordl_internals::il2cpp_reference_type TParam5,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11027), inst: 178 }), TypeDefinitionIndex(TypeDefinitionIndex(11027)), TypeDefinitionIndex(TypeDefinitionIndex(11033))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11033), inst: 5939 })
// CS Name: Zenject.StaticMemoryPool`6
class CORDL_TYPE StaticMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> : public ::Zenject::StaticMemoryPoolBase_1<TValue> {
public:
// Declarations
/// @brief Convert operator to ::Zenject::IMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>
constexpr operator  ::Zenject::IMemoryPool_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>() const noexcept;

/// @brief Convert operator to ::Zenject::IDespawnableMemoryPool_1<TValue>
constexpr operator  ::Zenject::IDespawnableMemoryPool_1<TValue>() const noexcept;

/// @brief Convert operator to ::Zenject::IMemoryPool
constexpr operator  ::Zenject::IMemoryPool() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StaticMemoryPool_6() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_6", modifiers: " const&", def_value: None }]
constexpr StaticMemoryPool_6(StaticMemoryPool_6 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPool_6", modifiers: "&&", def_value: None }]
constexpr StaticMemoryPool_6(StaticMemoryPool_6&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticMemoryPool_6(void* ptr) noexcept : ::Zenject::StaticMemoryPoolBase_1<TValue>(ptr) {
}


  constexpr StaticMemoryPool_6& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticMemoryPool_6& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticMemoryPool_6& operator=(StaticMemoryPool_6&& o) noexcept = default;
  constexpr StaticMemoryPool_6& operator=(StaticMemoryPool_6 const& o) noexcept = default;
                


// Fields

 ::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> __declspec(property(get=__get__onSpawnMethod, put=__set__onSpawnMethod))  _onSpawnMethod;

constexpr void __set__onSpawnMethod(::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> value) ;

constexpr ::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> __get__onSpawnMethod() const;


// Properties

 ::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> __declspec(property(put=set_OnSpawnMethod))  OnSpawnMethod;


// Methods

// Ctor Parameters [CppParam { name: "onSpawnMethod", ty: "::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue>", modifiers: "", def_value: None }, CppParam { name: "onDespawnedMethod", ty: "::System::Action_1<TValue>", modifiers: "", def_value: None }]
explicit StaticMemoryPool_6(::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> onSpawnMethod, ::System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> onSpawnMethod, ::System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method set_OnSpawnMethod addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_OnSpawnMethod(::System::Action_6<TParam1,TParam2,TParam3,TParam4,TParam5,TValue> value) ;

/// @brief Method Spawn addr 0x0 size 0xffffffffffffffff virtual true final true
 TValue Spawn(TParam1 p1, TParam2 p2, TParam3 p3, TParam4 p4, TParam5 p5) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::StaticMemoryPool_6, "Zenject", "StaticMemoryPool`6");
