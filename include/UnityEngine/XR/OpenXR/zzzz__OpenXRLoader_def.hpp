#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/OpenXR/zzzz__OpenXRLoaderBase_def.hpp"
// Forward declare root types
namespace UnityEngine::XR::OpenXR {
class OpenXRLoader;
}
// Type: UnityEngine.XR.OpenXR::OpenXRLoader
namespace UnityEngine::XR::OpenXR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14168))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14164))
// CS Name: UnityEngine.XR.OpenXR.OpenXRLoader
class CORDL_TYPE OpenXRLoader : public UnityEngine::XR::OpenXR::OpenXRLoaderBase {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~OpenXRLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRLoader", modifiers: " const&", def_value: None }]
constexpr OpenXRLoader(OpenXRLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OpenXRLoader", modifiers: "&&", def_value: None }]
constexpr OpenXRLoader(OpenXRLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OpenXRLoader(void* ptr) noexcept : UnityEngine::XR::OpenXR::OpenXRLoaderBase(ptr) {
}


  constexpr OpenXRLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OpenXRLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OpenXRLoader& operator=(OpenXRLoader&& o) noexcept = default;
  constexpr OpenXRLoader& operator=(OpenXRLoader const& o) noexcept = default;
                


// Methods

static UnityEngine::XR::OpenXR::OpenXRLoader New_ctor() ;

/// @brief Method .ctor addr 0x2ae5774 size 0x54 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::OpenXR
NEED_NO_BOX(UnityEngine::XR::OpenXR::OpenXRLoader);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::OpenXR::OpenXRLoader, "UnityEngine.XR.OpenXR", "OpenXRLoader");
