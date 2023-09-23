#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::XR {
template<typename T>
struct InputFeatureUsage_1;
}
// Forward declare root types
namespace Unity::XR::Oculus {
class OculusUsages;
}
// Type: Unity.XR.Oculus::OculusUsages
namespace Unity::XR::Oculus {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15240))
// CS Name: Unity.XR.Oculus.OculusUsages
class CORDL_TYPE OculusUsages : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OculusUsages() = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusUsages", modifiers: " const&", def_value: None }]
constexpr OculusUsages(OculusUsages const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OculusUsages", modifiers: "&&", def_value: None }]
constexpr OculusUsages(OculusUsages&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OculusUsages(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OculusUsages& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OculusUsages& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OculusUsages& operator=(OculusUsages&& o) noexcept = default;
  constexpr OculusUsages& operator=(OculusUsages const& o) noexcept = default;
                


// Fields

static UnityEngine::XR::InputFeatureUsage_1<bool> __declspec(property(get=__get_thumbrest, put=__set_thumbrest))  thumbrest;

static void __set_thumbrest(UnityEngine::XR::InputFeatureUsage_1<bool> value) ;

static UnityEngine::XR::InputFeatureUsage_1<bool> __get_thumbrest() ;

static UnityEngine::XR::InputFeatureUsage_1<bool> __declspec(property(get=__get_indexTouch, put=__set_indexTouch))  indexTouch;

static void __set_indexTouch(UnityEngine::XR::InputFeatureUsage_1<bool> value) ;

static UnityEngine::XR::InputFeatureUsage_1<bool> __get_indexTouch() ;

static UnityEngine::XR::InputFeatureUsage_1<bool> __declspec(property(get=__get_thumbTouch, put=__set_thumbTouch))  thumbTouch;

static void __set_thumbTouch(UnityEngine::XR::InputFeatureUsage_1<bool> value) ;

static UnityEngine::XR::InputFeatureUsage_1<bool> __get_thumbTouch() ;


// Methods

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Unity::XR::Oculus
NEED_NO_BOX(Unity::XR::Oculus::OculusUsages);
DEFINE_IL2CPP_ARG_TYPE(Unity::XR::Oculus::OculusUsages, "Unity.XR.Oculus", "OculusUsages");
