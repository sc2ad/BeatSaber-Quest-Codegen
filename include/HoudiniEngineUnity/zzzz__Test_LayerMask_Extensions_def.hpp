#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine {
struct LayerMask;
}
namespace HoudiniEngineUnity {
class Test_LayerMask;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_LayerMask_Extensions;
}
// Type: HoudiniEngineUnity::Test_LayerMask_Extensions
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9867))
// CS Name: HoudiniEngineUnity.Test_LayerMask_Extensions
class CORDL_TYPE Test_LayerMask_Extensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Test_LayerMask_Extensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_LayerMask_Extensions", modifiers: " const&", def_value: None }]
constexpr Test_LayerMask_Extensions(Test_LayerMask_Extensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_LayerMask_Extensions", modifiers: "&&", def_value: None }]
constexpr Test_LayerMask_Extensions(Test_LayerMask_Extensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_LayerMask_Extensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_LayerMask_Extensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_LayerMask_Extensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_LayerMask_Extensions& operator=(Test_LayerMask_Extensions&& o) noexcept = default;
  constexpr Test_LayerMask_Extensions& operator=(Test_LayerMask_Extensions const& o) noexcept = default;
                


// Methods

/// @brief Method ToTestObject addr 0x20741ec size 0x64 virtual false final false
static ::HoudiniEngineUnity::Test_LayerMask ToTestObject(::UnityEngine::LayerMask self) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::Test_LayerMask_Extensions);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::Test_LayerMask_Extensions, "HoudiniEngineUnity", "Test_LayerMask_Extensions");
