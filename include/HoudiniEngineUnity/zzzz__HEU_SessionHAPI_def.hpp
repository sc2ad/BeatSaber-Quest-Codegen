#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "HoudiniEngineUnity/zzzz__HEU_SessionBase_def.hpp"
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_SessionHAPI;
}
// Type: HoudiniEngineUnity::HEU_SessionHAPI
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(9722))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9726))
// CS Name: HoudiniEngineUnity.HEU_SessionHAPI
class CORDL_TYPE HEU_SessionHAPI : public HoudiniEngineUnity::HEU_SessionBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~HEU_SessionHAPI() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionHAPI", modifiers: " const&", def_value: None }]
constexpr HEU_SessionHAPI(HEU_SessionHAPI const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_SessionHAPI", modifiers: "&&", def_value: None }]
constexpr HEU_SessionHAPI(HEU_SessionHAPI&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_SessionHAPI(void* ptr) noexcept : HoudiniEngineUnity::HEU_SessionBase(ptr) {
}


  constexpr HEU_SessionHAPI& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_SessionHAPI& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_SessionHAPI& operator=(HEU_SessionHAPI&& o) noexcept = default;
  constexpr HEU_SessionHAPI& operator=(HEU_SessionHAPI const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit HEU_SessionHAPI() ;

/// @brief Method .ctor addr 0x20311f0 size 0x20 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
NEED_NO_BOX(HoudiniEngineUnity::HEU_SessionHAPI);
DEFINE_IL2CPP_ARG_TYPE(HoudiniEngineUnity::HEU_SessionHAPI, "HoudiniEngineUnity", "HEU_SessionHAPI");
