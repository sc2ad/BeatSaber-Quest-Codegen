#pragma once
#include "../cordl_internals/cordl_internals.hpp"
namespace {
namespace UnityEngine {
class Object;
}
// Forward declare root types
namespace Zenject {
class IPrefabProvider;
}
// Type: Zenject::IPrefabProvider
namespace Zenject {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11173))
// CS Name: Zenject.IPrefabProvider
class CORDL_TYPE IPrefabProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IPrefabProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IPrefabProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetPrefab addr 0x0 size 0xffffffffffffffff virtual true final false
 ::UnityEngine::Object GetPrefab() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Zenject
} // end anonymous namespace
NEED_NO_BOX(::Zenject::IPrefabProvider);
DEFINE_IL2CPP_ARG_TYPE(::Zenject::IPrefabProvider, "Zenject", "IPrefabProvider");
