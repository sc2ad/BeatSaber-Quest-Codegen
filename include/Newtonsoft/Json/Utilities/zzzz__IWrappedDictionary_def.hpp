#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class IDictionary;
}
namespace System::Collections {
class ICollection;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class IWrappedDictionary;
}
// Type: Newtonsoft.Json.Utilities::IWrappedDictionary
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11822))
// CS Name: Newtonsoft.Json.Utilities.IWrappedDictionary
class CORDL_TYPE IWrappedDictionary : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::IDictionary
constexpr operator  System::Collections::IDictionary() const noexcept;

/// @brief Convert operator to System::Collections::ICollection
constexpr operator  System::Collections::ICollection() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~IWrappedDictionary() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IWrappedDictionary(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_UnderlyingDictionary))  UnderlyingDictionary;


// Methods

/// @brief Method get_UnderlyingDictionary addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_UnderlyingDictionary() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
NEED_NO_BOX(Newtonsoft::Json::Utilities::IWrappedDictionary);
DEFINE_IL2CPP_ARG_TYPE(Newtonsoft::Json::Utilities::IWrappedDictionary, "Newtonsoft.Json.Utilities", "IWrappedDictionary");
