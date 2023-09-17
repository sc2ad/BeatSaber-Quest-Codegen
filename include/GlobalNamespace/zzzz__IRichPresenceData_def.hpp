#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IRichPresenceData;
}
// Type: ::IRichPresenceData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4789))
// CS Name: IRichPresenceData
class CORDL_TYPE IRichPresenceData : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IRichPresenceData() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IRichPresenceData(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_apiName))  apiName;

 ::StringW __declspec(property(get=get_localizedDescription))  localizedDescription;


// Methods

/// @brief Method get_apiName addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_apiName() ;

/// @brief Method get_localizedDescription addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_localizedDescription() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IRichPresenceData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IRichPresenceData, "", "IRichPresenceData");
