#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class OVRAutoDestroyInMRC;
}
// Type: ::OVRAutoDestroyInMRC
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8878))
// CS Name: OVRAutoDestroyInMRC
class CORDL_TYPE OVRAutoDestroyInMRC : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~OVRAutoDestroyInMRC() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRAutoDestroyInMRC", modifiers: " const&", def_value: None }]
constexpr OVRAutoDestroyInMRC(OVRAutoDestroyInMRC const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRAutoDestroyInMRC", modifiers: "&&", def_value: None }]
constexpr OVRAutoDestroyInMRC(OVRAutoDestroyInMRC&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRAutoDestroyInMRC(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRAutoDestroyInMRC& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRAutoDestroyInMRC& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRAutoDestroyInMRC& operator=(OVRAutoDestroyInMRC&& o) noexcept = default;
  constexpr OVRAutoDestroyInMRC& operator=(OVRAutoDestroyInMRC const& o) noexcept = default;
                


// Methods

/// @brief Method Start addr 0x26193cc size 0x118 virtual false final false
 void Start() ;

/// @brief Method Update addr 0x26194e4 size 0x4 virtual false final false
 void Update() ;

static GlobalNamespace::OVRAutoDestroyInMRC New_ctor() ;

/// @brief Method .ctor addr 0x26194e8 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRAutoDestroyInMRC);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRAutoDestroyInMRC, "", "OVRAutoDestroyInMRC");
