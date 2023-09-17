#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
namespace {
// Forward declare root types
namespace System::Resources {
class IResourceGroveler;
}
// Type: System.Resources::IResourceGroveler
namespace System::Resources {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(3426))
// CS Name: System.Resources.IResourceGroveler
class CORDL_TYPE IResourceGroveler : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IResourceGroveler() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IResourceGroveler(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def System::Resources
} // end anonymous namespace
NEED_NO_BOX(::System::Resources::IResourceGroveler);
DEFINE_IL2CPP_ARG_TYPE(::System::Resources::IResourceGroveler, "System.Resources", "IResourceGroveler");
