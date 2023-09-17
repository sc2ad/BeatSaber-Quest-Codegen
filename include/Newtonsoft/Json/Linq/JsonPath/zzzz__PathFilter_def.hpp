#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
namespace Newtonsoft::Json::Linq {
class JToken;
}
// Forward declare root types
namespace Newtonsoft::Json::Linq::JsonPath {
class PathFilter;
}
// Type: Newtonsoft.Json.Linq.JsonPath::PathFilter
namespace Newtonsoft::Json::Linq::JsonPath {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(11962))
// CS Name: Newtonsoft.Json.Linq.JsonPath.PathFilter
class CORDL_TYPE PathFilter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PathFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "PathFilter", modifiers: " const&", def_value: None }]
constexpr PathFilter(PathFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PathFilter", modifiers: "&&", def_value: None }]
constexpr PathFilter(PathFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PathFilter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PathFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PathFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PathFilter& operator=(PathFilter&& o) noexcept = default;
  constexpr PathFilter& operator=(PathFilter const& o) noexcept = default;
                


// Methods

/// @brief Method ExecuteFilter addr 0x0 size 0xffffffffffffffff virtual true final false
 ::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken> ExecuteFilter(::System::Collections::Generic::IEnumerable_1<::Newtonsoft::Json::Linq::JToken> current, bool errorWhenNoMatch) ;

/// @brief Method GetTokenIndex addr 0x2533c68 size 0x2d8 virtual false final false
static ::Newtonsoft::Json::Linq::JToken GetTokenIndex(::Newtonsoft::Json::Linq::JToken t, bool errorWhenNoMatch, int32_t index) ;

// Ctor Parameters []
explicit PathFilter() ;

/// @brief Method .ctor addr 0x25335ec size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Newtonsoft::Json::Linq::JsonPath
} // end anonymous namespace
NEED_NO_BOX(::Newtonsoft::Json::Linq::JsonPath::PathFilter);
DEFINE_IL2CPP_ARG_TYPE(::Newtonsoft::Json::Linq::JsonPath::PathFilter, "Newtonsoft.Json.Linq.JsonPath", "PathFilter");
