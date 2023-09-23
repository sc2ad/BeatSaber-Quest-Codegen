#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPool_3_def.hpp"
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
template<typename TParam1,typename TParam2,typename TValue>
class MonoMemoryPool_3;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TValue>
class MonoMemoryPool_3<TParam1,TParam2,TValue>;
}
// Type: Zenject::MonoMemoryPool`3
// Type: Zenject::MonoMemoryPool`3
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TParam1,::cordl_internals::il2cpp_reference_type TParam2,::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10994)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10982), inst: 3377 }), TypeDefinitionIndex(TypeDefinitionIndex(10982))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10994), inst: 5155 })
// CS Name: Zenject.MonoMemoryPool`3
class CORDL_TYPE MonoMemoryPool_3<TParam1,TParam2,TValue> : public Zenject::MemoryPool_3<TParam1,TParam2,TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MonoMemoryPool_3() = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_3", modifiers: " const&", def_value: None }]
constexpr MonoMemoryPool_3(MonoMemoryPool_3 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MonoMemoryPool_3", modifiers: "&&", def_value: None }]
constexpr MonoMemoryPool_3(MonoMemoryPool_3&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MonoMemoryPool_3(void* ptr) noexcept : Zenject::MemoryPool_3<TParam1,TParam2,TValue>(ptr) {
}


  constexpr MonoMemoryPool_3& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MonoMemoryPool_3& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MonoMemoryPool_3& operator=(MonoMemoryPool_3&& o) noexcept = default;
  constexpr MonoMemoryPool_3& operator=(MonoMemoryPool_3 const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__originalParent, put=__set__originalParent))  _originalParent;

constexpr void __set__originalParent(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__originalParent() const;


// Methods

// Ctor Parameters []
explicit MonoMemoryPool_3() ;

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
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MonoMemoryPool_3, "Zenject", "MonoMemoryPool`3");
