#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPoolInitialSizeMaxSizeBinder_1_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class MemoryPoolBindInfo;
}
namespace Zenject {
template<typename TContract>
class MemoryPoolInitialSizeMaxSizeBinder_1;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class MemoryPoolIdInitialSizeMaxSizeBinder_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract>;
}
// Type: Zenject::MemoryPoolIdInitialSizeMaxSizeBinder`1
// Type: Zenject::MemoryPoolIdInitialSizeMaxSizeBinder`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10811)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10810), inst: 4326 }), TypeDefinitionIndex(TypeDefinitionIndex(10810))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10811), inst: 2 })
// CS Name: Zenject.MemoryPoolIdInitialSizeMaxSizeBinder`1
class CORDL_TYPE MemoryPoolIdInitialSizeMaxSizeBinder_1<TContract> : public Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MemoryPoolIdInitialSizeMaxSizeBinder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolIdInitialSizeMaxSizeBinder_1", modifiers: " const&", def_value: None }]
constexpr MemoryPoolIdInitialSizeMaxSizeBinder_1(MemoryPoolIdInitialSizeMaxSizeBinder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolIdInitialSizeMaxSizeBinder_1", modifiers: "&&", def_value: None }]
constexpr MemoryPoolIdInitialSizeMaxSizeBinder_1(MemoryPoolIdInitialSizeMaxSizeBinder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPoolIdInitialSizeMaxSizeBinder_1(void* ptr) noexcept : Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract>(ptr) {
}


  constexpr MemoryPoolIdInitialSizeMaxSizeBinder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPoolIdInitialSizeMaxSizeBinder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPoolIdInitialSizeMaxSizeBinder_1& operator=(MemoryPoolIdInitialSizeMaxSizeBinder_1&& o) noexcept = default;
  constexpr MemoryPoolIdInitialSizeMaxSizeBinder_1& operator=(MemoryPoolIdInitialSizeMaxSizeBinder_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "bindContainer", ty: "Zenject::DiContainer", modifiers: "", def_value: None }, CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }, CppParam { name: "poolBindInfo", ty: "Zenject::MemoryPoolBindInfo", modifiers: "", def_value: None }]
explicit MemoryPoolIdInitialSizeMaxSizeBinder_1(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo) ;

/// @brief Method WithId addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::MemoryPoolInitialSizeMaxSizeBinder_1<TContract> WithId(::bs_hook::Il2CppWrapperType identifier) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolIdInitialSizeMaxSizeBinder_1, "Zenject", "MemoryPoolIdInitialSizeMaxSizeBinder`1");
