#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPool_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine {
class Transform;
}
namespace Zenject {
class InjectTypeInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class MonoMemoryPool_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TValue>
class MonoMemoryPool_1<TValue>;
}
// Type: Zenject::MonoMemoryPool`1
// Type: Zenject::MonoMemoryPool`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10980), inst: 2649 }), TypeDefinitionIndex(TypeDefinitionIndex(10992)), TypeDefinitionIndex(TypeDefinitionIndex(10980))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10992), inst: 2 })
// CS Name: Zenject.MonoMemoryPool`1
class CORDL_TYPE MonoMemoryPool_1<TValue> : public Zenject::MemoryPool_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MonoMemoryPool_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_1", modifiers: " const&", def_value: None }]
constexpr MonoMemoryPool_1(MonoMemoryPool_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_1", modifiers: "&&", def_value: None }]
constexpr MonoMemoryPool_1(MonoMemoryPool_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoMemoryPool_1(void* ptr) noexcept : Zenject::MemoryPool_1<TValue>(ptr) {
}


  constexpr MonoMemoryPool_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoMemoryPool_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoMemoryPool_1& operator=(MonoMemoryPool_1&& o) noexcept = default;
  constexpr MonoMemoryPool_1& operator=(MonoMemoryPool_1 const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__originalParent, put=__set__originalParent))  _originalParent;

constexpr void __set__originalParent(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__originalParent() const;


// Methods

static Zenject::MonoMemoryPool_1<TValue> New_ctor() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoMemoryPool_1, "Zenject", "MonoMemoryPool`1");
