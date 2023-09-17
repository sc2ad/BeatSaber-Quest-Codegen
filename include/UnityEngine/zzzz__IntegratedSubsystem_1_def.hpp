#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
template<typename TSubsystemDescriptor>
class IntegratedSubsystem_1;
}
namespace UnityEngine {
template<::cordl_internals::il2cpp_reference_type TSubsystemDescriptor>
class IntegratedSubsystem_1<TSubsystemDescriptor>;
}
// Type: UnityEngine::IntegratedSubsystem`1
// Type: UnityEngine::IntegratedSubsystem`1
namespace UnityEngine {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSubsystemDescriptor>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15849)), TypeDefinitionIndex(TypeDefinitionIndex(15848))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15849), inst: 2 })
// CS Name: UnityEngine.IntegratedSubsystem`1
class CORDL_TYPE IntegratedSubsystem_1<TSubsystemDescriptor> : public ::UnityEngine::IntegratedSubsystem {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IntegratedSubsystem_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem_1", modifiers: " const&", def_value: None }]
constexpr IntegratedSubsystem_1(IntegratedSubsystem_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystem_1", modifiers: "&&", def_value: None }]
constexpr IntegratedSubsystem_1(IntegratedSubsystem_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntegratedSubsystem_1(void* ptr) noexcept : ::UnityEngine::IntegratedSubsystem(ptr) {
}


  constexpr IntegratedSubsystem_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntegratedSubsystem_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntegratedSubsystem_1& operator=(IntegratedSubsystem_1&& o) noexcept = default;
  constexpr IntegratedSubsystem_1& operator=(IntegratedSubsystem_1 const& o) noexcept = default;
                


// Properties

 TSubsystemDescriptor __declspec(property(get=get_subsystemDescriptor))  subsystemDescriptor;

 TSubsystemDescriptor __declspec(property(get=get_SubsystemDescriptor))  SubsystemDescriptor;


// Methods

/// @brief Method get_subsystemDescriptor addr 0x0 size 0xffffffffffffffff virtual false final false
 TSubsystemDescriptor get_subsystemDescriptor() ;

/// @brief Method get_SubsystemDescriptor addr 0x0 size 0xffffffffffffffff virtual false final false
 TSubsystemDescriptor get_SubsystemDescriptor() ;

// Ctor Parameters []
explicit IntegratedSubsystem_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(::UnityEngine::IntegratedSubsystem_1, "UnityEngine", "IntegratedSubsystem`1");
