#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPoolMaxSizeBinder_1_def.hpp"
#include <cstdint>
namespace Zenject {
class MemoryPoolBindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class BindInfo;
}
namespace Zenject {
template<typename TContract>
class FactoryArgumentsToChoiceBinder_1;
}
namespace Zenject {
template<typename TContract>
class MemoryPoolMaxSizeBinder_1;
}
namespace Zenject {
class FactoryBindInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class MemoryPoolInitialSizeMaxSizeBinder_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class MemoryPoolInitialSizeMaxSizeBinder_1<TContract>;
}
// Type: Zenject::MemoryPoolInitialSizeMaxSizeBinder`1
// Type: Zenject::MemoryPoolInitialSizeMaxSizeBinder`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10809)), TypeDefinitionIndex(TypeDefinitionIndex(10810)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10809), inst: 1689 })}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10810), inst: 2 })
// CS Name: Zenject.MemoryPoolInitialSizeMaxSizeBinder`1
class CORDL_TYPE MemoryPoolInitialSizeMaxSizeBinder_1<TContract> : public Zenject::MemoryPoolMaxSizeBinder_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MemoryPoolInitialSizeMaxSizeBinder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolInitialSizeMaxSizeBinder_1", modifiers: " const&", def_value: None }]
constexpr MemoryPoolInitialSizeMaxSizeBinder_1(MemoryPoolInitialSizeMaxSizeBinder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolInitialSizeMaxSizeBinder_1", modifiers: "&&", def_value: None }]
constexpr MemoryPoolInitialSizeMaxSizeBinder_1(MemoryPoolInitialSizeMaxSizeBinder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPoolInitialSizeMaxSizeBinder_1(void* ptr) noexcept : Zenject::MemoryPoolMaxSizeBinder_1<TContract>(ptr) {
}


  constexpr MemoryPoolInitialSizeMaxSizeBinder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPoolInitialSizeMaxSizeBinder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPoolInitialSizeMaxSizeBinder_1& operator=(MemoryPoolInitialSizeMaxSizeBinder_1&& o) noexcept = default;
  constexpr MemoryPoolInitialSizeMaxSizeBinder_1& operator=(MemoryPoolInitialSizeMaxSizeBinder_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }, CppParam { name: "poolBindInfo", ty: "Zenject::MemoryPoolBindInfo", modifiers: "", def_value: None }]
explicit MemoryPoolInitialSizeMaxSizeBinder_1(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo) ;

/// @brief Method WithInitialSize addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::MemoryPoolMaxSizeBinder_1<TContract> WithInitialSize(int32_t size) ;

/// @brief Method WithFixedSize addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryArgumentsToChoiceBinder_1<TContract> WithFixedSize(int32_t size) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolInitialSizeMaxSizeBinder_1, "Zenject", "MemoryPoolInitialSizeMaxSizeBinder`1");
