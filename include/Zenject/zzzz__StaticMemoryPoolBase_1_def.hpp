#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "Zenject/zzzz__StaticMemoryPoolBaseBase_1_def.hpp"
namespace {
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace Zenject {
template<typename TValue>
class StaticMemoryPoolBase_1;
}
namespace Zenject {
template<::cordl_internals::il2cpp_reference_type TValue>
class StaticMemoryPoolBase_1<TValue>;
}
// Type: Zenject::StaticMemoryPoolBase`1
// Type: Zenject::StaticMemoryPoolBase`1
namespace Zenject {
// cpp template
template<::cordl_internals::il2cpp_reference_type TValue>
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11026), inst: 151 }), TypeDefinitionIndex(TypeDefinitionIndex(11027)), TypeDefinitionIndex(TypeDefinitionIndex(11026))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(11027), inst: 2 })
// CS Name: Zenject.StaticMemoryPoolBase`1
class CORDL_TYPE StaticMemoryPoolBase_1<TValue> : public ::Zenject::StaticMemoryPoolBaseBase_1<TValue> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~StaticMemoryPoolBase_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPoolBase_1", modifiers: " const&", def_value: None }]
constexpr StaticMemoryPoolBase_1(StaticMemoryPoolBase_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticMemoryPoolBase_1", modifiers: "&&", def_value: None }]
constexpr StaticMemoryPoolBase_1(StaticMemoryPoolBase_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticMemoryPoolBase_1(void* ptr) noexcept : ::Zenject::StaticMemoryPoolBaseBase_1<TValue>(ptr) {
}


  constexpr StaticMemoryPoolBase_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticMemoryPoolBase_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticMemoryPoolBase_1& operator=(StaticMemoryPoolBase_1&& o) noexcept = default;
  constexpr StaticMemoryPoolBase_1& operator=(StaticMemoryPoolBase_1 const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "onDespawnedMethod", ty: "::System::Action_1<TValue>", modifiers: "", def_value: None }]
explicit StaticMemoryPoolBase_1(::System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor(::System::Action_1<TValue> onDespawnedMethod) ;

/// @brief Method Alloc addr 0x0 size 0xffffffffffffffff virtual true final false
 TValue Alloc() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::Zenject::StaticMemoryPoolBase_1, "Zenject", "StaticMemoryPoolBase`1");
