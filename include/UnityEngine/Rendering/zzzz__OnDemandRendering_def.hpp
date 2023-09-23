#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cstdint>
// Forward declare root types
namespace UnityEngine::Rendering {
class OnDemandRendering;
}
// Type: UnityEngine.Rendering::OnDemandRendering
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10261))
// CS Name: UnityEngine.Rendering.OnDemandRendering
class CORDL_TYPE OnDemandRendering : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~OnDemandRendering() = default;

// Ctor Parameters [CppParam { name: "", ty: "OnDemandRendering", modifiers: " const&", def_value: None }]
constexpr OnDemandRendering(OnDemandRendering const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "OnDemandRendering", modifiers: "&&", def_value: None }]
constexpr OnDemandRendering(OnDemandRendering&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit OnDemandRendering(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr OnDemandRendering& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr OnDemandRendering& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr OnDemandRendering& operator=(OnDemandRendering&& o) noexcept = default;
  constexpr OnDemandRendering& operator=(OnDemandRendering const& o) noexcept = default;
                


// Fields

static int32_t __declspec(property(get=__get_m_RenderFrameInterval, put=__set_m_RenderFrameInterval))  m_RenderFrameInterval;

static void __set_m_RenderFrameInterval(int32_t value) ;

static int32_t __get_m_RenderFrameInterval() ;


// Properties

static int32_t __declspec(property(get=get_renderFrameInterval))  renderFrameInterval;


// Methods

/// @brief Method get_renderFrameInterval addr 0x2b737b4 size 0x58 virtual false final false
static int32_t get_renderFrameInterval() ;

/// @brief Method GetRenderFrameInterval addr 0x2b7380c size 0x58 virtual false final false
static void GetRenderFrameInterval(ByRef<int32_t> frameInterval) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
NEED_NO_BOX(UnityEngine::Rendering::OnDemandRendering);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::OnDemandRendering, "UnityEngine.Rendering", "OnDemandRendering");
