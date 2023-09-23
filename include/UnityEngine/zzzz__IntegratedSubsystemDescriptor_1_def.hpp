#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystemDescriptor_def.hpp"
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
template<typename TSubsystem>
class IntegratedSubsystemDescriptor_1;
}
namespace UnityEngine {
template<::cordl_internals::il2cpp_reference_type TSubsystem>
class IntegratedSubsystemDescriptor_1<TSubsystem>;
}
// Type: UnityEngine::IntegratedSubsystemDescriptor`1
// Type: UnityEngine::IntegratedSubsystemDescriptor`1
namespace UnityEngine {
// cpp template
template<::cordl_internals::il2cpp_reference_type TSubsystem>
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15844)), TypeDefinitionIndex(TypeDefinitionIndex(15843))}
// Self: GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15844), inst: 2 })
// CS Name: UnityEngine.IntegratedSubsystemDescriptor`1
class CORDL_TYPE IntegratedSubsystemDescriptor_1<TSubsystem> : public UnityEngine::IntegratedSubsystemDescriptor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~IntegratedSubsystemDescriptor_1() = default;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor_1", modifiers: " const&", def_value: None }]
constexpr IntegratedSubsystemDescriptor_1(IntegratedSubsystemDescriptor_1 const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "IntegratedSubsystemDescriptor_1", modifiers: "&&", def_value: None }]
constexpr IntegratedSubsystemDescriptor_1(IntegratedSubsystemDescriptor_1&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IntegratedSubsystemDescriptor_1(void* ptr) noexcept : UnityEngine::IntegratedSubsystemDescriptor(ptr) {
}


  constexpr IntegratedSubsystemDescriptor_1& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr IntegratedSubsystemDescriptor_1& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr IntegratedSubsystemDescriptor_1& operator=(IntegratedSubsystemDescriptor_1&& o) noexcept = default;
  constexpr IntegratedSubsystemDescriptor_1& operator=(IntegratedSubsystemDescriptor_1 const& o) noexcept = default;
                


// Methods

/// @brief Method CreateImpl addr 0x0 size 0xffffffffffffffff virtual true final false
 UnityEngine::ISubsystem CreateImpl() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual false final false
 TSubsystem Create() ;

// Ctor Parameters []
explicit IntegratedSubsystemDescriptor_1() ;

/// @brief Method .ctor addr 0x0 size 0xffffffffffffffff virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(UnityEngine::IntegratedSubsystemDescriptor_1, "UnityEngine", "IntegratedSubsystemDescriptor`1");
