#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace UnityEngine {
struct Vector3;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRWaitCursor;
}
// Type: ::OVRWaitCursor
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8977))
// CS Name: OVRWaitCursor
class CORDL_TYPE OVRWaitCursor : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OVRWaitCursor() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRWaitCursor", modifiers: " const&", def_value: None }]
constexpr OVRWaitCursor(OVRWaitCursor const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRWaitCursor", modifiers: "&&", def_value: None }]
constexpr OVRWaitCursor(OVRWaitCursor&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRWaitCursor(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRWaitCursor& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRWaitCursor& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRWaitCursor& operator=(OVRWaitCursor&& o) noexcept = default;
  constexpr OVRWaitCursor& operator=(OVRWaitCursor const& o) noexcept = default;
                


// Fields

 UnityEngine::Vector3 __declspec(property(get=__get_rotateSpeeds, put=__set_rotateSpeeds))  rotateSpeeds;

constexpr void __set_rotateSpeeds(UnityEngine::Vector3 value) ;

constexpr UnityEngine::Vector3 __get_rotateSpeeds() const;


// Methods

/// @brief Method Update addr 0x26390a4 size 0x5c virtual false final false
 void Update() ;

// Ctor Parameters []
explicit OVRWaitCursor() ;

/// @brief Method .ctor addr 0x2639100 size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRWaitCursor);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRWaitCursor, "", "OVRWaitCursor");
