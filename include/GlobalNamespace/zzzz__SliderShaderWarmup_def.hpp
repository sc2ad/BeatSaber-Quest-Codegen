#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
namespace GlobalNamespace {
class MaterialPropertyBlockController;
}
namespace GlobalNamespace {
class SliderMeshController;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderShaderWarmup;
}
// Type: ::SliderShaderWarmup
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4942))
// CS Name: SliderShaderWarmup
class CORDL_TYPE SliderShaderWarmup : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~SliderShaderWarmup() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderShaderWarmup", modifiers: " const&", def_value: None }]
constexpr SliderShaderWarmup(SliderShaderWarmup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderShaderWarmup", modifiers: "&&", def_value: None }]
constexpr SliderShaderWarmup(SliderShaderWarmup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderShaderWarmup(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr SliderShaderWarmup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderShaderWarmup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderShaderWarmup& operator=(SliderShaderWarmup&& o) noexcept = default;
  constexpr SliderShaderWarmup& operator=(SliderShaderWarmup const& o) noexcept = default;
                


// Fields

 GlobalNamespace::SliderMeshController __declspec(property(get=__get__sliderMeshController, put=__set__sliderMeshController))  _sliderMeshController;

constexpr void __set__sliderMeshController(GlobalNamespace::SliderMeshController value) ;

constexpr GlobalNamespace::SliderMeshController __get__sliderMeshController() const;

 GlobalNamespace::MaterialPropertyBlockController __declspec(property(get=__get__materialPropertyBlockController, put=__set__materialPropertyBlockController))  _materialPropertyBlockController;

constexpr void __set__materialPropertyBlockController(GlobalNamespace::MaterialPropertyBlockController value) ;

constexpr GlobalNamespace::MaterialPropertyBlockController __get__materialPropertyBlockController() const;


// Methods

/// @brief Method Start addr 0x224cd50 size 0x1d4 virtual false final false
 void Start() ;

static GlobalNamespace::SliderShaderWarmup New_ctor() ;

/// @brief Method .ctor addr 0x224cf24 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SliderShaderWarmup);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SliderShaderWarmup, "", "SliderShaderWarmup");
