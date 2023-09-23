#pragma once
#include "../../../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstddef>
// Forward declare root types
namespace UnityEngine::XR::OpenXR::Features::MetaQuestSupport {
class MetaQuestFeature;
}
namespace UnityEngine::XR::OpenXR::Features::MetaQuestSupport {
struct UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice;
}
// Type: ::TargetDevice
namespace UnityEngine::XR::OpenXR::Features::MetaQuestSupport {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16100))
// CS Name: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature::TargetDevice
struct CORDL_TYPE UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "visibleName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "manifestName", ty: "::StringW", modifiers: "", def_value: None }, CppParam { name: "enabled", ty: "bool", modifiers: "", def_value: None }, CppParam { name: "active", ty: "bool", modifiers: "", def_value: None }]
constexpr UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice(::StringW visibleName, ::StringW manifestName, bool enabled, bool active) noexcept;


                    constexpr UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice(UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice const&) = default;
                    constexpr UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice(UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice&&) = default;
                    constexpr UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice& operator=(UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice& operator=(UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::StringW __declspec(property(get=__get_visibleName, put=__set_visibleName))  visibleName;

constexpr void __set_visibleName(::StringW value) ;

constexpr ::StringW __get_visibleName() const;

 ::StringW __declspec(property(get=__get_manifestName, put=__set_manifestName))  manifestName;

constexpr void __set_manifestName(::StringW value) ;

constexpr ::StringW __get_manifestName() const;

 bool __declspec(property(get=__get_enabled, put=__set_enabled))  enabled;

constexpr void __set_enabled(bool value) ;

constexpr bool __get_enabled() const;

 bool __declspec(property(get=__get_active, put=__set_active))  active;

constexpr void __set_active(bool value) ;

constexpr bool __get_active() const;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::MetaQuestSupport
// Type: UnityEngine.XR.OpenXR.Features.MetaQuestSupport::MetaQuestFeature
namespace UnityEngine::XR::OpenXR::Features::MetaQuestSupport {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14201))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16101))
// CS Name: UnityEngine.XR.OpenXR.Features.MetaQuestSupport.MetaQuestFeature
class CORDL_TYPE MetaQuestFeature : public UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
using TargetDevice = UnityEngine::XR::OpenXR::Features::MetaQuestSupport::UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MetaQuestFeature() = default;

// Ctor Parameters [CppParam { name: "", ty: "MetaQuestFeature", modifiers: " const&", def_value: None }]
constexpr MetaQuestFeature(MetaQuestFeature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MetaQuestFeature", modifiers: "&&", def_value: None }]
constexpr MetaQuestFeature(MetaQuestFeature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MetaQuestFeature(void* ptr) noexcept : UnityEngine::XR::OpenXR::Features::OpenXRFeature(ptr) {
}


  constexpr MetaQuestFeature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MetaQuestFeature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MetaQuestFeature& operator=(MetaQuestFeature&& o) noexcept = default;
  constexpr MetaQuestFeature& operator=(MetaQuestFeature const& o) noexcept = default;
                


// Fields

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.unity.openxr.feature.metaquest"};


// Methods

// Ctor Parameters []
explicit MetaQuestFeature() ;

/// @brief Method .ctor addr 0x2b04fac size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR::Features::MetaQuestSupport
NEED_NO_BOX(UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::MetaQuestSupport::MetaQuestFeature, "UnityEngine.XR.OpenXR.Features.MetaQuestSupport", "MetaQuestFeature");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::Features::MetaQuestSupport::UnityEngine__XR__OpenXR__Features__MetaQuestSupport__MetaQuestFeature__TargetDevice, "UnityEngine.XR.OpenXR.Features.MetaQuestSupport", "MetaQuestFeature/TargetDevice");
