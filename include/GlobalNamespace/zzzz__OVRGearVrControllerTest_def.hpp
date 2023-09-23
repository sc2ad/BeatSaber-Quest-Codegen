#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class OVRGearVrControllerTest;
}
// Type: ::OVRGearVrControllerTest
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8905))
// CS Name: OVRGearVrControllerTest
class CORDL_TYPE OVRGearVrControllerTest : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OVRGearVrControllerTest() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGearVrControllerTest", modifiers: " const&", def_value: None }]
constexpr OVRGearVrControllerTest(OVRGearVrControllerTest const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRGearVrControllerTest", modifiers: "&&", def_value: None }]
constexpr OVRGearVrControllerTest(OVRGearVrControllerTest&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRGearVrControllerTest(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRGearVrControllerTest& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRGearVrControllerTest& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRGearVrControllerTest& operator=(OVRGearVrControllerTest&& o) noexcept = default;
  constexpr OVRGearVrControllerTest& operator=(OVRGearVrControllerTest const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit OVRGearVrControllerTest() ;

/// @brief Method .ctor addr 0x2621234 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRGearVrControllerTest);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRGearVrControllerTest, "", "OVRGearVrControllerTest");
