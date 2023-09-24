#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace GlobalNamespace {
class OVRExternalComposition;
}
// Forward declare root types
namespace GlobalNamespace {
class OVRMRAudioFilter;
}
// Type: ::OVRMRAudioFilter
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(8443))
// CS Name: OVRMRAudioFilter
class CORDL_TYPE OVRMRAudioFilter : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~OVRMRAudioFilter() = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMRAudioFilter", modifiers: " const&", def_value: None }]
constexpr OVRMRAudioFilter(OVRMRAudioFilter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OVRMRAudioFilter", modifiers: "&&", def_value: None }]
constexpr OVRMRAudioFilter(OVRMRAudioFilter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OVRMRAudioFilter(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr OVRMRAudioFilter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OVRMRAudioFilter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OVRMRAudioFilter& operator=(OVRMRAudioFilter&& o) noexcept = default;
  constexpr OVRMRAudioFilter& operator=(OVRMRAudioFilter const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get_running, put=__set_running))  running;

constexpr void __set_running(bool value) ;

constexpr bool __get_running() const;

 GlobalNamespace::OVRExternalComposition __declspec(property(get=__get_composition, put=__set_composition))  composition;

constexpr void __set_composition(GlobalNamespace::OVRExternalComposition value) ;

constexpr GlobalNamespace::OVRExternalComposition __get_composition() const;


// Methods

/// @brief Method Start addr 0x25a8f8c size 0xc virtual false final false
 void Start() ;

/// @brief Method OnAudioFilterRead addr 0x25a8f98 size 0x18 virtual false final false
 void OnAudioFilterRead(::ArrayW<float_t> data, int32_t channels) ;

static GlobalNamespace::OVRMRAudioFilter New_ctor() ;

/// @brief Method .ctor addr 0x25a8fb0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::OVRMRAudioFilter);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::OVRMRAudioFilter, "", "OVRMRAudioFilter");
