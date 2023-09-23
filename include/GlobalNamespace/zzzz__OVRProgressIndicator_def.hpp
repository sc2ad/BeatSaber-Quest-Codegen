#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include <cmath>
namespace UnityEngine {
class MeshRenderer;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRProgressIndicator;
}
// Type: ::OVRProgressIndicator
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8945))
// CS Name: OVRProgressIndicator
class CORDL_TYPE OVRProgressIndicator : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OVRProgressIndicator() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRProgressIndicator", modifiers: " const&", def_value: None }]
constexpr OVRProgressIndicator(OVRProgressIndicator const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRProgressIndicator", modifiers: "&&", def_value: None }]
constexpr OVRProgressIndicator(OVRProgressIndicator&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRProgressIndicator(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRProgressIndicator& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRProgressIndicator& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRProgressIndicator& operator=(OVRProgressIndicator&& o) noexcept = default;
  constexpr OVRProgressIndicator& operator=(OVRProgressIndicator const& o) noexcept = default;
                


// Fields

 UnityEngine::MeshRenderer __declspec(property(get=__get_progressImage, put=__set_progressImage))  progressImage;

constexpr void __set_progressImage(UnityEngine::MeshRenderer value) ;

constexpr UnityEngine::MeshRenderer __get_progressImage() const;

 float_t __declspec(property(get=__get_currentProgress, put=__set_currentProgress))  currentProgress;

constexpr void __set_currentProgress(float_t value) ;

constexpr float_t __get_currentProgress() const;


// Methods

/// @brief Method Awake addr 0x262daa0 size 0x20 virtual false final false
 void Awake() ;

/// @brief Method Update addr 0x262dac0 size 0x6c virtual false final false
 void Update() ;

// Ctor Parameters []
explicit OVRProgressIndicator() ;

/// @brief Method .ctor addr 0x262db2c size 0x14 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRProgressIndicator);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRProgressIndicator, "", "OVRProgressIndicator");
