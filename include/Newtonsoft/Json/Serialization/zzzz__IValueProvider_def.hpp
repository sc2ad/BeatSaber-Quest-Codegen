#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace Newtonsoft::Json::Serialization {
class IValueProvider;
}
// Type: Newtonsoft.Json.Serialization::IValueProvider
namespace Newtonsoft::Json::Serialization {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11876))
// CS Name: Newtonsoft.Json.Serialization.IValueProvider
class CORDL_TYPE IValueProvider : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IValueProvider() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IValueProvider(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Methods

/// @brief Method SetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetValue(::bs_hook::Il2CppWrapperType target, ::bs_hook::Il2CppWrapperType value) ;

/// @brief Method GetValue addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType GetValue(::bs_hook::Il2CppWrapperType target) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Serialization
NEED_NO_BOX(Newtonsoft::Json::Serialization::IValueProvider);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Serialization::IValueProvider, "Newtonsoft.Json.Serialization", "IValueProvider");
