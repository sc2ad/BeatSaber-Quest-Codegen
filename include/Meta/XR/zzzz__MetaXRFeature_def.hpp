#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/OpenXR/Features/zzzz__OpenXRFeature_def.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace Meta::XR {
class MetaXRFeature;
}
// Type: Meta.XR::MetaXRFeature
namespace Meta::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14201))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9523))
// CS Name: Meta.XR.MetaXRFeature
class CORDL_TYPE MetaXRFeature : public ::UnityEngine::XR::OpenXR::Features::OpenXRFeature {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~MetaXRFeature() = default;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRFeature", modifiers: " const&", def_value: None }]
constexpr MetaXRFeature(MetaXRFeature const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MetaXRFeature", modifiers: "&&", def_value: None }]
constexpr MetaXRFeature(MetaXRFeature&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MetaXRFeature(void* ptr) noexcept : ::UnityEngine::XR::OpenXR::Features::OpenXRFeature(ptr) {
}


  constexpr MetaXRFeature& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MetaXRFeature& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MetaXRFeature& operator=(MetaXRFeature&& o) noexcept = default;
  constexpr MetaXRFeature& operator=(MetaXRFeature const& o) noexcept = default;
                


// Fields

/// @brief Field featureId offset 0
static constexpr ::ConstString  featureId{u"com.meta.openxr.feature.metaxr"};


// Methods

/// @brief Method HookGetInstanceProcAddr addr 0x266eb1c size 0x118 virtual true final false
 ::cordl_internals::intptr_t HookGetInstanceProcAddr(::cordl_internals::intptr_t func) ;

/// @brief Method OnInstanceCreate addr 0x266ec34 size 0xd0 virtual true final false
 bool OnInstanceCreate(uint64_t xrInstance) ;

/// @brief Method OnInstanceDestroy addr 0x266ed04 size 0xcc virtual true final false
 void OnInstanceDestroy(uint64_t xrInstance) ;

/// @brief Method OnSessionCreate addr 0x266edd0 size 0xcc virtual true final false
 void OnSessionCreate(uint64_t xrSession) ;

/// @brief Method OnAppSpaceChange addr 0x266ee9c size 0xcc virtual true final false
 void OnAppSpaceChange(uint64_t xrSpace) ;

/// @brief Method OnSessionStateChange addr 0x266ef68 size 0xec virtual true final false
 void OnSessionStateChange(int32_t oldState, int32_t newState) ;

/// @brief Method OnSessionBegin addr 0x266f054 size 0xcc virtual true final false
 void OnSessionBegin(uint64_t xrSession) ;

/// @brief Method OnSessionEnd addr 0x266f120 size 0xcc virtual true final false
 void OnSessionEnd(uint64_t xrSession) ;

/// @brief Method OnSessionExiting addr 0x266f1ec size 0xcc virtual true final false
 void OnSessionExiting(uint64_t xrSession) ;

/// @brief Method OnSessionDestroy addr 0x266f2b8 size 0xcc virtual true final false
 void OnSessionDestroy(uint64_t xrSession) ;

// Ctor Parameters []
explicit MetaXRFeature() ;

/// @brief Method .ctor addr 0x266f384 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Meta::XR
} // end anonymous namespace
NEED_NO_BOX(::Meta::XR::MetaXRFeature);
DEFINE_IL2CPP_ARG_TYPE(::Meta::XR::MetaXRFeature, "Meta.XR", "MetaXRFeature");
