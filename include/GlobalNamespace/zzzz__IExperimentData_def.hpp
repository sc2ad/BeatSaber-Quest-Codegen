#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IExperimentData;
}
// Type: ::IExperimentData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4214))
// CS Name: IExperimentData
class CORDL_TYPE IExperimentData : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IExperimentData() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IExperimentData(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_experimentPlatformKey))  experimentPlatformKey;


// Methods

/// @brief Method get_experimentPlatformKey addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_experimentPlatformKey() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IExperimentData);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IExperimentData, "", "IExperimentData");
