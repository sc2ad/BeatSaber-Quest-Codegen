#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
struct GlobalNamespace__OVRInput__RawButton;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMonoscopic;
}
// Type: ::OVRMonoscopic
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8935))
// CS Name: OVRMonoscopic
class CORDL_TYPE OVRMonoscopic : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~OVRMonoscopic() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMonoscopic", modifiers: " const&", def_value: None }]
constexpr OVRMonoscopic(OVRMonoscopic const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMonoscopic", modifiers: "&&", def_value: None }]
constexpr OVRMonoscopic(OVRMonoscopic&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRMonoscopic(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRMonoscopic& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRMonoscopic& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRMonoscopic& operator=(OVRMonoscopic&& o) noexcept = default;
  constexpr OVRMonoscopic& operator=(OVRMonoscopic const& o) noexcept = default;
                


// Fields

 GlobalNamespace::GlobalNamespace__OVRInput__RawButton __declspec(property(get=__get_toggleButton, put=__set_toggleButton))  toggleButton;

constexpr void __set_toggleButton(GlobalNamespace::GlobalNamespace__OVRInput__RawButton value) ;

constexpr GlobalNamespace::GlobalNamespace__OVRInput__RawButton __get_toggleButton() const;

 bool __declspec(property(get=__get_monoscopic, put=__set_monoscopic))  monoscopic;

constexpr void __set_monoscopic(bool value) ;

constexpr bool __get_monoscopic() const;


// Methods

/// @brief Method Update addr 0x2629048 size 0xf0 virtual false final false
 void Update() ;

// Ctor Parameters []
explicit OVRMonoscopic() ;

/// @brief Method .ctor addr 0x2629138 size 0x10 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRMonoscopic);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMonoscopic, "", "OVRMonoscopic");
