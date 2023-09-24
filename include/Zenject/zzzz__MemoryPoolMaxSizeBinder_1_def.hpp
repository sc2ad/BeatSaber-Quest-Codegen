#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__MemoryPoolExpandBinder_1_def.hpp"
#include <cstdint>
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class DiContainer;
}
namespace Zenject {
template<typename TContract>
class MemoryPoolExpandBinder_1;
}
namespace Zenject {
class MemoryPoolBindInfo;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class MemoryPoolMaxSizeBinder_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class MemoryPoolMaxSizeBinder_1<TContract>;
}
// Type: Zenject::MemoryPoolMaxSizeBinder`1
// Type: Zenject::MemoryPoolMaxSizeBinder`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10808)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10808), inst: 4320 }), TypeDefinitionIndex(TypeDefinitionIndex(10809))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10809), inst: 2 })
// CS Name: Zenject.MemoryPoolMaxSizeBinder`1
class CORDL_TYPE MemoryPoolMaxSizeBinder_1<TContract> : public Zenject::MemoryPoolExpandBinder_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MemoryPoolMaxSizeBinder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolMaxSizeBinder_1", modifiers: " const&", def_value: None }]
constexpr MemoryPoolMaxSizeBinder_1(MemoryPoolMaxSizeBinder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolMaxSizeBinder_1", modifiers: "&&", def_value: None }]
constexpr MemoryPoolMaxSizeBinder_1(MemoryPoolMaxSizeBinder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPoolMaxSizeBinder_1(void* ptr) noexcept : Zenject::MemoryPoolExpandBinder_1<TContract>(ptr) {
}


  constexpr MemoryPoolMaxSizeBinder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPoolMaxSizeBinder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPoolMaxSizeBinder_1& operator=(MemoryPoolMaxSizeBinder_1&& o) noexcept = default;
  constexpr MemoryPoolMaxSizeBinder_1& operator=(MemoryPoolMaxSizeBinder_1 const& o) noexcept = default;
                


// Methods

static Zenject::MemoryPoolMaxSizeBinder_1<TContract> New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo) ;

/// @brief Method WithMaxSize addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::MemoryPoolExpandBinder_1<TContract> WithMaxSize(int32_t size) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolMaxSizeBinder_1, "Zenject", "MemoryPoolMaxSizeBinder`1");
