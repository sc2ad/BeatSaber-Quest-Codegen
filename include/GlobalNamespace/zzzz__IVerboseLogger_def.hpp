#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IVerboseLogger;
}
// Type: ::IVerboseLogger
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13740))
// CS Name: IVerboseLogger
class CORDL_TYPE IVerboseLogger : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IVerboseLogger() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IVerboseLogger(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::StringW __declspec(property(get=get_loggerPrefix))  loggerPrefix;


// Methods

/// @brief Method get_loggerPrefix addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW get_loggerPrefix() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IVerboseLogger);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IVerboseLogger, "", "IVerboseLogger");
