#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__ProviderBindingFinalizer_def.hpp"
namespace Zenject {
class BindInfo;
}
namespace Zenject {
class FactoryBindInfo;
}
namespace Zenject {
class MemoryPoolBindInfo;
}
namespace Zenject {
class DiContainer;
}
// Forward declare root types
namespace Zenject {
template<typename TContract>
class MemoryPoolBindingFinalizer_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TContract>
class MemoryPoolBindingFinalizer_1<TContract>;
}
// Type: Zenject::MemoryPoolBindingFinalizer`1
// Type: Zenject::MemoryPoolBindingFinalizer`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TContract>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10908)), TypeDefinitionIndex(TypeDefinitionIndex(10807))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(10807), inst: 2 })
// CS Name: Zenject.MemoryPoolBindingFinalizer`1
class CORDL_TYPE MemoryPoolBindingFinalizer_1<TContract> : public Zenject::ProviderBindingFinalizer {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~MemoryPoolBindingFinalizer_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBindingFinalizer_1", modifiers: " const&", def_value: None }]
constexpr MemoryPoolBindingFinalizer_1(MemoryPoolBindingFinalizer_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MemoryPoolBindingFinalizer_1", modifiers: "&&", def_value: None }]
constexpr MemoryPoolBindingFinalizer_1(MemoryPoolBindingFinalizer_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MemoryPoolBindingFinalizer_1(void* ptr) noexcept : Zenject::ProviderBindingFinalizer(ptr) {
}


  constexpr MemoryPoolBindingFinalizer_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MemoryPoolBindingFinalizer_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MemoryPoolBindingFinalizer_1& operator=(MemoryPoolBindingFinalizer_1&& o) noexcept = default;
  constexpr MemoryPoolBindingFinalizer_1& operator=(MemoryPoolBindingFinalizer_1 const& o) noexcept = default;
                


// Fields

 Zenject::MemoryPoolBindInfo __declspec(property(get=__get__poolBindInfo, put=__set__poolBindInfo))  _poolBindInfo;

constexpr void __set__poolBindInfo(Zenject::MemoryPoolBindInfo value) ;

constexpr Zenject::MemoryPoolBindInfo __get__poolBindInfo() const;

 Zenject::FactoryBindInfo __declspec(property(get=__get__factoryBindInfo, put=__set__factoryBindInfo))  _factoryBindInfo;

constexpr void __set__factoryBindInfo(Zenject::FactoryBindInfo value) ;

constexpr Zenject::FactoryBindInfo __get__factoryBindInfo() const;


// Methods

// Ctor Parameters [CppParam { name: "bindInfo", ty: "Zenject::BindInfo", modifiers: "", def_value: None }, CppParam { name: "factoryBindInfo", ty: "Zenject::FactoryBindInfo", modifiers: "", def_value: None }, CppParam { name: "poolBindInfo", ty: "Zenject::MemoryPoolBindInfo", modifiers: "", def_value: None }]
explicit MemoryPoolBindingFinalizer_1(Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(Zenject::BindInfo bindInfo, Zenject::FactoryBindInfo factoryBindInfo, Zenject::MemoryPoolBindInfo poolBindInfo) ;

/// @brief Method OnFinalizeBinding addr 0x0 size 0xffffffffffffffff virtual true final false
 void OnFinalizeBinding(Zenject::DiContainer container) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Zenject::MemoryPoolBindingFinalizer_1, "Zenject", "MemoryPoolBindingFinalizer`1");
