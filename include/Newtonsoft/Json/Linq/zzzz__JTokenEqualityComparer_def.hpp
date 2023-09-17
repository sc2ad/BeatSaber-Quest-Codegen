#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEqualityComparer_1;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq {
class JTokenEqualityComparer;
}
// Type: Newtonsoft.Json.Linq::JTokenEqualityComparer
namespace Newtonsoft::Json::Linq {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11918))
// CS Name: Newtonsoft.Json.Linq.JTokenEqualityComparer
class CORDL_TYPE JTokenEqualityComparer : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::System::Collections::Generic::IEqualityComparer_1<::Newtonsoft::Json::Linq::JToken>
constexpr operator  ::System::Collections::Generic::IEqualityComparer_1<::Newtonsoft::Json::Linq::JToken>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JTokenEqualityComparer() = default;

// Ctor Parameters [CppParam { name: "", ty: "JTokenEqualityComparer", modifiers: " const&", def_value: None }]
constexpr JTokenEqualityComparer(JTokenEqualityComparer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JTokenEqualityComparer", modifiers: "&&", def_value: None }]
constexpr JTokenEqualityComparer(JTokenEqualityComparer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JTokenEqualityComparer(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JTokenEqualityComparer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JTokenEqualityComparer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JTokenEqualityComparer& operator=(JTokenEqualityComparer&& o) noexcept = default;
  constexpr JTokenEqualityComparer& operator=(JTokenEqualityComparer const& o) noexcept = default;
                


// Methods

/// @brief Method Equals addr 0x25193d8 size 0x94 virtual true final true
 bool Equals(::Newtonsoft::Json::Linq::JToken x, ::Newtonsoft::Json::Linq::JToken y) ;

/// @brief Method GetHashCode addr 0x2519498 size 0x24 virtual true final true
 int32_t GetHashCode(::Newtonsoft::Json::Linq::JToken obj) ;

// Ctor Parameters []
explicit JTokenEqualityComparer() ;

/// @brief Method .ctor addr 0x25194bc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Linq::JTokenEqualityComparer);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JTokenEqualityComparer, "Newtonsoft.Json.Linq", "JTokenEqualityComparer");
