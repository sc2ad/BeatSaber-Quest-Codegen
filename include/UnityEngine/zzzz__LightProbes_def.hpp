#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Object_def.hpp"
namespace {
namespace System {
class Action;
}
// Forward declare root types
namespace UnityEngine {
class LightProbes;
}
// Type: UnityEngine::LightProbes
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10142))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10035))
// CS Name: UnityEngine.LightProbes
class CORDL_TYPE LightProbes : public ::UnityEngine::Object {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LightProbes() = default;

// Ctor Parameters [CppParam { name: "", ty: "LightProbes", modifiers: " const&", def_value: None }]
constexpr LightProbes(LightProbes const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LightProbes", modifiers: "&&", def_value: None }]
constexpr LightProbes(LightProbes&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LightProbes(void* ptr) noexcept : ::UnityEngine::Object(ptr) {
}


  constexpr LightProbes& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LightProbes& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LightProbes& operator=(LightProbes&& o) noexcept = default;
  constexpr LightProbes& operator=(LightProbes const& o) noexcept = default;
                


// Fields

static ::System::Action __declspec(property(get=__get_tetrahedralizationCompleted, put=__set_tetrahedralizationCompleted))  tetrahedralizationCompleted;

static void __set_tetrahedralizationCompleted(::System::Action value) ;

static ::System::Action __get_tetrahedralizationCompleted() ;

static ::System::Action __declspec(property(get=__get_needsRetetrahedralization, put=__set_needsRetetrahedralization))  needsRetetrahedralization;

static void __set_needsRetetrahedralization(::System::Action value) ;

static ::System::Action __get_needsRetetrahedralization() ;


// Methods

/// @brief Method Internal_CallTetrahedralizationCompletedFunction addr 0x2b41010 size 0x64 virtual false final false
static void Internal_CallTetrahedralizationCompletedFunction() ;

/// @brief Method Internal_CallNeedsRetetrahedralizationFunction addr 0x2b41074 size 0x64 virtual false final false
static void Internal_CallNeedsRetetrahedralizationFunction() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::LightProbes);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::LightProbes, "UnityEngine", "LightProbes");
