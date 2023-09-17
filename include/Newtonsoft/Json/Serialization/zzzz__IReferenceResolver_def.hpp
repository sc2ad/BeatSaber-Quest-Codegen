#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class IReferenceResolver;
}
// Type: Newtonsoft.Json.Serialization::IReferenceResolver
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11889))
// CS Name: Newtonsoft.Json.Serialization.IReferenceResolver
class CORDL_TYPE IReferenceResolver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IReferenceResolver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IReferenceResolver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ResolveReference addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType ResolveReference(::bs_hook::Il2CppWrapperType context, ::StringW reference) ;

/// @brief Method GetReference addr 0x0 size 0xffffffffffffffff virtual true final false
 ::StringW GetReference(::bs_hook::Il2CppWrapperType context, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method IsReferenced addr 0x0 size 0xffffffffffffffff virtual true final false
 bool IsReferenced(::bs_hook::Il2CppWrapperType context, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method AddReference addr 0x0 size 0xffffffffffffffff virtual true final false
 void AddReference(::bs_hook::Il2CppWrapperType context, ::StringW reference, ::bs_hook::Il2CppWrapperType value) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Serialization::IReferenceResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::IReferenceResolver, "Newtonsoft.Json.Serialization", "IReferenceResolver");
