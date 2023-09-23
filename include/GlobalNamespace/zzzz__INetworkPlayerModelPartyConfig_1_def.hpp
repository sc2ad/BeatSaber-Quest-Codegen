#pragma once
#include "../cordl_internals/cordl_internals.hpp"
// Forward declare root types
namespace GlobalNamespace {
template<typename T>
class INetworkPlayerModelPartyConfig_1;
}
// Type: ::INetworkPlayerModelPartyConfig`1
namespace GlobalNamespace {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12745))
// CS Name: INetworkPlayerModelPartyConfig`1
class CORDL_TYPE INetworkPlayerModelPartyConfig_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
~INetworkPlayerModelPartyConfig_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INetworkPlayerModelPartyConfig_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(GlobalNamespace::INetworkPlayerModelPartyConfig_1, "", "INetworkPlayerModelPartyConfig`1");
