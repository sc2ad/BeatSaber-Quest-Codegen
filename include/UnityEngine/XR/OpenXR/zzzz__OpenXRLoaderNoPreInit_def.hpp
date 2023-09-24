#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRLoaderNoPreInit;
}
// Type: UnityEngine.XR.OpenXR::OpenXRLoaderNoPreInit
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14168))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14169))
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoaderNoPreInit
class CORDL_TYPE OpenXRLoaderNoPreInit : public UnityEngine::XR::OpenXR::OpenXRLoaderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~OpenXRLoaderNoPreInit() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderNoPreInit", modifiers: " const&", def_value: None }]
constexpr OpenXRLoaderNoPreInit(OpenXRLoaderNoPreInit const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRLoaderNoPreInit", modifiers: "&&", def_value: None }]
constexpr OpenXRLoaderNoPreInit(OpenXRLoaderNoPreInit&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenXRLoaderNoPreInit(void* ptr) noexcept : UnityEngine::XR::OpenXR::OpenXRLoaderBase(ptr) {
}


  constexpr OpenXRLoaderNoPreInit& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenXRLoaderNoPreInit& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenXRLoaderNoPreInit& operator=(OpenXRLoaderNoPreInit&& o) noexcept = default;
  constexpr OpenXRLoaderNoPreInit& operator=(OpenXRLoaderNoPreInit const& o) noexcept = default;
                


// Methods

static UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit New_ctor() ;

/// @brief Method .ctor addr 0x2aeb2f8 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
NEED_NO_BOX(UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::OpenXRLoaderNoPreInit, "UnityEngine.XR.OpenXR", "OpenXRLoaderNoPreInit");
