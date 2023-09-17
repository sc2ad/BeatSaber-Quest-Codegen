#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
class ISubsystem;
}
// Forward declare root types
namespace UnityEngine {
class ISubsystemDescriptor;
}
// Type: UnityEngine::ISubsystemDescriptor
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15854))
// CS Name: UnityEngine.ISubsystemDescriptor
class CORDL_TYPE ISubsystemDescriptor : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ISubsystemDescriptor() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ISubsystemDescriptor(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_id))  id;


// Methods

/// @brief Method get_id addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_id() ;

/// @brief Method Create addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::ISubsystem Create() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ISubsystemDescriptor);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ISubsystemDescriptor, "UnityEngine", "ISubsystemDescriptor");
