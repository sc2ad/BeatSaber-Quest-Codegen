#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace {
namespace Newtonsoft::Json::Serialization {
class JsonContract;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class IContractResolver;
}
// Type: Newtonsoft.Json.Serialization::IContractResolver
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11875))
// CS Name: Newtonsoft.Json.Serialization.IContractResolver
class CORDL_TYPE IContractResolver : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IContractResolver() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IContractResolver(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method ResolveContract addr 0x0 size 0xffffffffffffffff virtual true final false
 ::Newtonsoft::Json::Serialization::JsonContract ResolveContract(::System::Type type) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Serialization::IContractResolver);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Serialization::IContractResolver, "Newtonsoft.Json.Serialization", "IContractResolver");
