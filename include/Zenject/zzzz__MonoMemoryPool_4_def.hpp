#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPool_4_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TParam2,typename TParam3,typename TValue>
class MonoMemoryPool_4;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TValue>
class MonoMemoryPool_4<TParam1,TParam2,float_t,TValue>;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
class MonoMemoryPool_4<TParam1,TParam2,TParam3,TValue>;
}
// Type: Zenject::MonoMemoryPool`4
// Type: Zenject::MonoMemoryPool`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TParam3,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10983)), TypeDefinitionIndex(TypeDefinitionIndex(10995)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10983), inst: 3388 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10995), inst: 5937 })
// CS Name: Zenject.MonoMemoryPool`4
class CORDL_TYPE MonoMemoryPool_4<TParam1,TParam2,TParam3,TValue> : public Zenject::MemoryPool_4<TParam1,TParam2,TParam3,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MonoMemoryPool_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_4", modifiers: " const&", def_value: None }]
constexpr MonoMemoryPool_4(MonoMemoryPool_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_4", modifiers: "&&", def_value: None }]
constexpr MonoMemoryPool_4(MonoMemoryPool_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoMemoryPool_4(void* ptr) noexcept : Zenject::MemoryPool_4<TParam1,TParam2,TParam3,TValue>(ptr) {
}


  constexpr MonoMemoryPool_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoMemoryPool_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoMemoryPool_4& operator=(MonoMemoryPool_4&& o) noexcept = default;
  constexpr MonoMemoryPool_4& operator=(MonoMemoryPool_4 const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__originalParent, put=__set__originalParent))  _originalParent;

constexpr void __set__originalParent(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__originalParent() const;


// Methods

// Ctor Parameters []
explicit MonoMemoryPool_4() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method OnCreated addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnCreated(TValue item) ;

/// @brief Method OnDestroyed addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDestroyed(TValue item) ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnSpawned(TValue item) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDespawned(TValue item) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
// Type: Zenject::MonoMemoryPool`4
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10983), inst: 3388 }), TypeDefinitionIndex(TypeDefinitionIndex(10995)), TypeDefinitionIndex(TypeDefinitionIndex(10983))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10995), inst: 7448 })
// CS Name: Zenject.MonoMemoryPool`4
class CORDL_TYPE MonoMemoryPool_4<TParam1,TParam2,float_t,TValue> : public Zenject::MemoryPool_4<TParam1,TParam2,float_t,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MonoMemoryPool_4() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_4", modifiers: " const&", def_value: None }]
constexpr MonoMemoryPool_4(MonoMemoryPool_4 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_4", modifiers: "&&", def_value: None }]
constexpr MonoMemoryPool_4(MonoMemoryPool_4&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoMemoryPool_4(void* ptr) noexcept : Zenject::MemoryPool_4<TParam1,TParam2,float_t,TValue>(ptr) {
}


  constexpr MonoMemoryPool_4& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoMemoryPool_4& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoMemoryPool_4& operator=(MonoMemoryPool_4&& o) noexcept = default;
  constexpr MonoMemoryPool_4& operator=(MonoMemoryPool_4 const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__originalParent, put=__set__originalParent))  _originalParent;

constexpr void __set__originalParent(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__originalParent() const;


// Methods

// Ctor Parameters []
explicit MonoMemoryPool_4() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

/// @brief Method OnCreated addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnCreated(TValue item) ;

/// @brief Method OnDestroyed addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDestroyed(TValue item) ;

/// @brief Method OnSpawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnSpawned(TValue item) ;

/// @brief Method OnDespawned addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnDespawned(TValue item) ;

/// @brief Method __zenCreate addr 0x0 size 0xffffffffffffffff virtual false final false
static ::bs_hook::Il2CppWrapperType __zenCreate(::ArrayW<::bs_hook::Il2CppWrapperType> P_0) ;

/// @brief Method __zenCreateInjectTypeInfo addr 0x0 size 0xffffffffffffffff virtual false final false
static Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoMemoryPool_4, "Zenject", "MonoMemoryPool`4");
