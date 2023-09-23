#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
#include <cstdint>
// Forward declare root types
namespace GlobalNamespace {
class BakedLightWithIdBase;
}
// Type: ::BakedLightWithIdBase
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15295))
// CS Name: BakedLightWithIdBase
class CORDL_TYPE BakedLightWithIdBase : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~BakedLightWithIdBase() = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightWithIdBase", modifiers: " const&", def_value: None }]
constexpr BakedLightWithIdBase(BakedLightWithIdBase const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "BakedLightWithIdBase", modifiers: "&&", def_value: None }]
constexpr BakedLightWithIdBase(BakedLightWithIdBase&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit BakedLightWithIdBase(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr BakedLightWithIdBase& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr BakedLightWithIdBase& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr BakedLightWithIdBase& operator=(BakedLightWithIdBase&& o) noexcept = default;
  constexpr BakedLightWithIdBase& operator=(BakedLightWithIdBase const& o) noexcept = default;
                


// Properties

 int32_t __declspec(property(get=get_id))  id;


// Methods

/// @brief Method get_id addr 0x0 size 0xffffffffffffffff virtual true final false
 int32_t get_id() ;

/// @brief Method SetupLightSource addr 0x0 size 0xffffffffffffffff virtual true final false
 void SetupLightSource(float_t intensityMultiplier) ;

// Ctor Parameters []
explicit BakedLightWithIdBase() ;

/// @brief Method .ctor addr 0x2674ec8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::BakedLightWithIdBase);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::BakedLightWithIdBase, "", "BakedLightWithIdBase");
