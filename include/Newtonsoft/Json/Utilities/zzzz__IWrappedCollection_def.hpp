#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections {
class IEnumerable;
}
namespace System::Collections {
class ICollection;
}
namespace System::Collections {
class IList;
}
// Forward declare root types
namespace Newtonsoft::Json::Utilities {
class IWrappedCollection;
}
// Type: Newtonsoft.Json.Utilities::IWrappedCollection
namespace Newtonsoft::Json::Utilities {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11819))
// CS Name: Newtonsoft.Json.Utilities.IWrappedCollection
class CORDL_TYPE IWrappedCollection : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::IList
constexpr operator  ::System::Collections::IList() const noexcept;

/// @brief Convert operator to ::System::Collections::ICollection
constexpr operator  ::System::Collections::ICollection() const noexcept;

/// @brief Convert operator to ::System::Collections::IEnumerable
constexpr operator  ::System::Collections::IEnumerable() const noexcept;

~IWrappedCollection() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IWrappedCollection(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_UnderlyingCollection))  UnderlyingCollection;


// Methods

/// @brief Method get_UnderlyingCollection addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_UnderlyingCollection() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Utilities
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Utilities::IWrappedCollection);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Utilities::IWrappedCollection, "Newtonsoft.Json.Utilities", "IWrappedCollection");
