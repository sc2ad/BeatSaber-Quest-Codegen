#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace {
namespace GlobalNamespace {
struct ____GlobalNamespace__OVRInput__RawButton;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRModeParms;
}
// Type: ::OVRModeParms
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8934))
// CS Name: OVRModeParms
class CORDL_TYPE OVRModeParms : public ::UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OVRModeParms() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRModeParms", modifiers: " const&", def_value: None }]
constexpr OVRModeParms(OVRModeParms const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRModeParms", modifiers: "&&", def_value: None }]
constexpr OVRModeParms(OVRModeParms&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRModeParms(void* ptr) noexcept : ::UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRModeParms& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRModeParms& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRModeParms& operator=(OVRModeParms&& o) noexcept = default;
  constexpr OVRModeParms& operator=(OVRModeParms const& o) noexcept = default;
                


// Fields

 ::GlobalNamespace::____GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_resetButton, put=__set_resetButton))  resetButton;

constexpr void __set_resetButton(::GlobalNamespace::____GlobalNamespace__OVRInput__RawButton value) ;

constexpr ::GlobalNamespace::____GlobalNamespace__OVRInput__RawButton __get_resetButton() const;


// Methods

/// @brief Method Start addr 0x2628e4c size 0x9c virtual false final false
 void Start() ;

/// @brief Method Update addr 0x2628ee8 size 0xac virtual false final false
 void Update() ;

/// @brief Method TestPowerStateMode addr 0x2628f94 size 0xa4 virtual false final false
 void TestPowerStateMode() ;

// Ctor Parameters []
explicit OVRModeParms() ;

/// @brief Method .ctor addr 0x2629038 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
} // end anonymous namespace
NEED_NO_BOX(::GlobalNamespace::OVRModeParms);
DEFINE_IL2CPP_ARG_TYPE(::GlobalNamespace::OVRModeParms, "", "OVRModeParms");
