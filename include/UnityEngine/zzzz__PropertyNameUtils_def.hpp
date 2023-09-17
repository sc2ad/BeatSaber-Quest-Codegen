#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace UnityEngine {
struct PropertyName;
}
// Forward declare root types
namespace UnityEngine {
class PropertyNameUtils;
}
// Type: UnityEngine::PropertyNameUtils
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10102))
// CS Name: UnityEngine.PropertyNameUtils
class CORDL_TYPE PropertyNameUtils : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~PropertyNameUtils() = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyNameUtils", modifiers: " const&", def_value: None }]
constexpr PropertyNameUtils(PropertyNameUtils const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PropertyNameUtils", modifiers: "&&", def_value: None }]
constexpr PropertyNameUtils(PropertyNameUtils&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PropertyNameUtils(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr PropertyNameUtils& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PropertyNameUtils& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PropertyNameUtils& operator=(PropertyNameUtils&& o) noexcept = default;
  constexpr PropertyNameUtils& operator=(PropertyNameUtils const& o) noexcept = default;
                


// Methods

/// @brief Method PropertyNameFromString addr 0x2b5149c size 0x4c virtual false final false
static ::UnityEngine::PropertyName PropertyNameFromString(::StringW name) ;

/// @brief Method PropertyNameFromString_Injected addr 0x2b51668 size 0x44 virtual false final false
static void PropertyNameFromString_Injected(::StringW name, ByRef<::UnityEngine::PropertyName> ret) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::PropertyNameUtils);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::PropertyNameUtils, "UnityEngine", "PropertyNameUtils");
