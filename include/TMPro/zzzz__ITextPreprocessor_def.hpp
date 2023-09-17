#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace TMPro {
class ITextPreprocessor;
}
// Type: TMPro::ITextPreprocessor
namespace TMPro {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12243))
// CS Name: TMPro.ITextPreprocessor
class CORDL_TYPE ITextPreprocessor : public ::cordl_internals::InterfaceW {
public:
// Declarations
~ITextPreprocessor() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ITextPreprocessor(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method PreprocessText addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW PreprocessText(::StringW text) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def TMPro
} // end anonymous namespace
NEED_NO_BOX(::TMPro::ITextPreprocessor);
DEFINE_IL2CPP_ARG_TYPE(::TMPro::ITextPreprocessor, "TMPro", "ITextPreprocessor");
