#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace UnityEngine {
class ISubsystem;
}
// Type: UnityEngine::ISubsystem
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15851))
// CS Name: UnityEngine.ISubsystem
class CORDL_TYPE ISubsystem : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISubsystem() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISubsystem(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method Start addr 0x0 size 0xffffffffffffffff virtual true final false
 void Start() ;

/// @brief Method Stop addr 0x0 size 0xffffffffffffffff virtual true final false
 void Stop() ;

/// @brief Method Destroy addr 0x0 size 0xffffffffffffffff virtual true final false
 void Destroy() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ISubsystem);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ISubsystem, "UnityEngine", "ISubsystem");
