#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__FactoryArgumentsToChoiceBinder_1_def.hpp"
namespace Zenject {
class DiContainer;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class MemoryPoolBindInfo;
}
namespace Zenject {
template<typename TContract>
class FactoryArgumentsToChoiceBinder_1;
}
namespace Zenject {
class BindInfo;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class MemoryPoolExpandBinder_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class MemoryPoolExpandBinder_1<TContract>;
}
// Type: Zenject::MemoryPoolExpandBinder`1
// Type: Zenject::MemoryPoolExpandBinder`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10808)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10645), inst: 1688 }), TypeDefinitionIndex(TypeDefinitionIndex(10645))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10808), inst: 2 })
// CS Name: Zenject.MemoryPoolExpandBinder`1
class CORDL_TYPE MemoryPoolExpandBinder_1<TContract> : public Zenject::FactoryArgumentsToChoiceBinder_1<TContract> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~MemoryPoolExpandBinder_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolExpandBinder_1", modifiers: " const&", def_value: None }]
constexpr MemoryPoolExpandBinder_1(MemoryPoolExpandBinder_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolExpandBinder_1", modifiers: "&&", def_value: None }]
constexpr MemoryPoolExpandBinder_1(MemoryPoolExpandBinder_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPoolExpandBinder_1(void* ptr) noexcept : Zenject::FactoryArgumentsToChoiceBinder_1<TContract>(ptr) {
}


  constexpr MemoryPoolExpandBinder_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPoolExpandBinder_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPoolExpandBinder_1& operator=(MemoryPoolExpandBinder_1&& o) noexcept = default;
  constexpr MemoryPoolExpandBinder_1& operator=(MemoryPoolExpandBinder_1 const& o) noexcept = default;
                


// Fields

 Zenject::MemoryPoolBindInfo __declspec(property(get=__get__MemoryPoolBindInfo_k__BackingField, put=__set__MemoryPoolBindInfo_k__BackingField))  _MemoryPoolBindInfo_k__BackingField;

constexpr void __set__MemoryPoolBindInfo_k__BackingField(Zenject::MemoryPoolBindInfo value) ;

constexpr Zenject::MemoryPoolBindInfo __get__MemoryPoolBindInfo_k__BackingField() const;


// Properties

 Zenject::MemoryPoolBindInfo __declspec(property(get=get_MemoryPoolBindInfo, put=set_MemoryPoolBindInfo))  MemoryPoolBindInfo;


// Methods

static Zenject::MemoryPoolExpandBinder_1<TContract> New_ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::DiContainer bindContainer, Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo) ;

/// @brief Method get_MemoryPoolBindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::MemoryPoolBindInfo get_MemoryPoolBindInfo() ;

/// @brief Method set_MemoryPoolBindInfo addr 0x0 size 0xffffffffffffffff virtual false final false
 void set_MemoryPoolBindInfo(Zenject::MemoryPoolBindInfo value) ;

/// @brief Method ExpandByOneAtATime addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryArgumentsToChoiceBinder_1<TContract> ExpandByOneAtATime(bool showExpandWarning) ;

/// @brief Method ExpandByDoubling addr 0x0 size 0xffffffffffffffff virtual false final false
 Zenject::FactoryArgumentsToChoiceBinder_1<TContract> ExpandByDoubling(bool showExpandWarning) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolExpandBinder_1, "Zenject", "MemoryPoolExpandBinder`1");
