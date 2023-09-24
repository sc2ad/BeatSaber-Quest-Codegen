#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
namespace System {
class Attribute;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
class Type;
}
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class IAttributeProvider;
}
// Type: Newtonsoft.Json.Serialization::IAttributeProvider
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11847))
// CS Name: Newtonsoft.Json.Serialization.IAttributeProvider
class CORDL_TYPE IAttributeProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IAttributeProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IAttributeProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method GetAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IList_1<System::Attribute> GetAttributes(bool inherit) ;

/// @brief Method GetAttributes addr 0x0 size 0xffffffffffffffff virtual true final false
 System::Collections::Generic::IList_1<System::Attribute> GetAttributes(System::Type attributeType, bool inherit) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::IAttributeProvider);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::IAttributeProvider, "Newtonsoft.Json.Serialization", "IAttributeProvider");
