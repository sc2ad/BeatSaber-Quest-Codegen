#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace HoudiniEngineUnity {
struct HAPI_NodeInfo;
}
namespace HoudiniEngineUnity {
class Test_HAPI_NodeInfo;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class Test_HAPI_NodeInfo_Extensions;
}
// Type: HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9832))
// CS Name: HoudiniEngineUnity.Test_HAPI_NodeInfo_Extensions
class CORDL_TYPE Test_HAPI_NodeInfo_Extensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~Test_HAPI_NodeInfo_Extensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_NodeInfo_Extensions", modifiers: " const&", def_value: None }]
constexpr Test_HAPI_NodeInfo_Extensions(Test_HAPI_NodeInfo_Extensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "Test_HAPI_NodeInfo_Extensions", modifiers: "&&", def_value: None }]
constexpr Test_HAPI_NodeInfo_Extensions(Test_HAPI_NodeInfo_Extensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit Test_HAPI_NodeInfo_Extensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr Test_HAPI_NodeInfo_Extensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr Test_HAPI_NodeInfo_Extensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr Test_HAPI_NodeInfo_Extensions& operator=(Test_HAPI_NodeInfo_Extensions&& o) noexcept = default;
  constexpr Test_HAPI_NodeInfo_Extensions& operator=(Test_HAPI_NodeInfo_Extensions const& o) noexcept = default;
                


// Methods

/// @brief Method ToTestObject addr 0x207032c size 0x88 virtual false final false
static HoudiniEngineUnity::Test_HAPI_NodeInfo ToTestObject(HoudiniEngineUnity::HAPI_NodeInfo self) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::Test_HAPI_NodeInfo_Extensions, "HoudiniEngineUnity", "Test_HAPI_NodeInfo_Extensions");
