#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPool_2_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace {
namespace Zenject {
class InjectTypeInfo;
}
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace Zenject {
template<typename TParam1,typename TValue>
class MonoMemoryPool_2;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TValue>
class MonoMemoryPool_2<TParam1,TValue>;
}
// Type: Zenject::MonoMemoryPool`2
// Type: Zenject::MonoMemoryPool`2
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10981), inst: 3362 }), TypeDefinitionIndex(TypeDefinitionIndex(10993)), TypeDefinitionIndex(TypeDefinitionIndex(10981))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10993), inst: 80 })
// CS Name: Zenject.MonoMemoryPool`2
class CORDL_TYPE MonoMemoryPool_2<TParam1,TValue> : public ::Zenject::MemoryPool_2<TParam1,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MonoMemoryPool_2() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_2", modifiers: " const&", def_value: None }]
constexpr MonoMemoryPool_2(MonoMemoryPool_2 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_2", modifiers: "&&", def_value: None }]
constexpr MonoMemoryPool_2(MonoMemoryPool_2&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoMemoryPool_2(void* ptr) noexcept : ::Zenject::MemoryPool_2<TParam1,TValue>(ptr) {
}


  constexpr MonoMemoryPool_2& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoMemoryPool_2& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoMemoryPool_2& operator=(MonoMemoryPool_2&& o) noexcept = default;
  constexpr MonoMemoryPool_2& operator=(MonoMemoryPool_2 const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Transform __declspec(property(get=__get__originalParent, put=__set__originalParent))  _originalParent;

constexpr void __set__originalParent(::UnityEngine::Transform value) ;

constexpr ::UnityEngine::Transform __get__originalParent() const;


// Methods

// Ctor Parameters []
explicit MonoMemoryPool_2() ;

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
static ::Zenject::InjectTypeInfo __zenCreateInjectTypeInfo() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::MonoMemoryPool_2, "Zenject", "MonoMemoryPool`2");
