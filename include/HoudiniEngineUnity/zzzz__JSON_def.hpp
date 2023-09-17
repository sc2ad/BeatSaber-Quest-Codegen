#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace {
namespace HoudiniEngineUnity {
class JSONNode;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class JSON;
}
// Type: HoudiniEngineUnity::JSON
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9821))
// CS Name: HoudiniEngineUnity.JSON
class CORDL_TYPE JSON : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~JSON() = default;

// Ctor Parameters [CppParam { name: "", ty: "JSON", modifiers: " const&", def_value: None }]
constexpr JSON(JSON const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "JSON", modifiers: "&&", def_value: None }]
constexpr JSON(JSON&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit JSON(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr JSON& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr JSON& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr JSON& operator=(JSON&& o) noexcept = default;
  constexpr JSON& operator=(JSON const& o) noexcept = default;
                


// Methods

/// @brief Method Parse addr 0x2060dec size 0x4 virtual false final false
static ::HoudiniEngineUnity::JSONNode Parse(::StringW aJSON) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::JSON);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::JSON, "HoudiniEngineUnity", "JSON");
