#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__RawButton;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRResetOrientation;
}
// Type: ::OVRResetOrientation
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8949))
// CS Name: OVRResetOrientation
class CORDL_TYPE OVRResetOrientation : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OVRResetOrientation() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRResetOrientation", modifiers: " const&", def_value: None }]
constexpr OVRResetOrientation(OVRResetOrientation const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRResetOrientation", modifiers: "&&", def_value: None }]
constexpr OVRResetOrientation(OVRResetOrientation&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRResetOrientation(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRResetOrientation& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRResetOrientation& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRResetOrientation& operator=(OVRResetOrientation&& o) noexcept = default;
  constexpr OVRResetOrientation& operator=(OVRResetOrientation const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_resetButton, put=__set_resetButton))  resetButton;

constexpr void __set_resetButton(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_resetButton() const;


// Methods

/// @brief Method Update addr 0x262f3e8 size 0xe0 virtual false final false
 void Update() ;

static GlobalNamespace::OVRResetOrientation New_ctor() ;

/// @brief Method .ctor addr 0x262f4c8 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRResetOrientation);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRResetOrientation, "", "OVRResetOrientation");
