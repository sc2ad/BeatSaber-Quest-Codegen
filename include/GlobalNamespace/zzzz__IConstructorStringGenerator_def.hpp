#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace GlobalNamespace {
class IConstructorStringGenerator;
}
// Type: ::IConstructorStringGenerator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13782))
// CS Name: IConstructorStringGenerator
class CORDL_TYPE IConstructorStringGenerator : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IConstructorStringGenerator() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IConstructorStringGenerator(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ToConstructorString addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW ToConstructorString() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::IConstructorStringGenerator);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::IConstructorStringGenerator, "", "IConstructorStringGenerator");
