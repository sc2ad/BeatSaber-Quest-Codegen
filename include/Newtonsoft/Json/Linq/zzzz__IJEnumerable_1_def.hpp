#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
namespace System::Collections {
class IEnumerable;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
template<typename T>
class IJEnumerable_1;
}
// Type: Newtonsoft.Json.Linq::IJEnumerable`1
namespace Newtonsoft::Json::Linq {
// cpp template
template<typename T>
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11917))
// CS Name: Newtonsoft.Json.Linq.IJEnumerable`1
class CORDL_TYPE IJEnumerable_1 : public ::cordl_internals::InterfaceW {
public:
// Declarations
/// @brief Convert operator to System::Collections::Generic::IEnumerable_1<T>
constexpr operator  System::Collections::Generic::IEnumerable_1<T>() const noexcept;

/// @brief Convert operator to System::Collections::IEnumerable
constexpr operator  System::Collections::IEnumerable() const noexcept;

~IJEnumerable_1() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IJEnumerable_1(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 Newtonsoft::Json::Linq::IJEnumerable_1<Newtonsoft::Json::Linq::JToken> __declspec(property(get=get_Item))  Item;


// Methods

/// @brief Method get_Item addr 0x0 size 0xffffffffffffffff virtual true final false
 Newtonsoft::Json::Linq::IJEnumerable_1<Newtonsoft::Json::Linq::JToken> get_Item(::bs_hook::Il2CppWrapperType key) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
DEFINE_IL2CPP_ARG_TYPE_GENERIC_CLASS(Newtonsoft::Json::Linq::IJEnumerable_1, "Newtonsoft.Json.Linq", "IJEnumerable`1");
