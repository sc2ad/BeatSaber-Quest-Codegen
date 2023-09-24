#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
namespace UnityEngine::Rendering {
struct ScriptableRenderContext;
}
namespace UnityEngine {
class Camera;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
struct UnityEngine__Camera__RenderRequest;
}
// Forward declare root types
namespace UnityEngine::Rendering {
class RenderPipeline;
}
// Type: UnityEngine.Rendering::RenderPipeline
namespace UnityEngine::Rendering {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10294))
// CS Name: UnityEngine.Rendering.RenderPipeline
class CORDL_TYPE RenderPipeline : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~RenderPipeline() = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderPipeline", modifiers: " const&", def_value: None }]
constexpr RenderPipeline(RenderPipeline const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderPipeline", modifiers: "&&", def_value: None }]
constexpr RenderPipeline(RenderPipeline&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RenderPipeline(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RenderPipeline& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RenderPipeline& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RenderPipeline& operator=(RenderPipeline&& o) noexcept = default;
  constexpr RenderPipeline& operator=(RenderPipeline const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__disposed_k__BackingField, put=__set__disposed_k__BackingField))  _disposed_k__BackingField;

constexpr void __set__disposed_k__BackingField(bool value) ;

constexpr bool __get__disposed_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_disposed, put=set_disposed))  disposed;


// Methods

/// @brief Method Render addr 0x0 size 0xffffffffffffffff virtual true final false
 void Render(UnityEngine::Rendering::ScriptableRenderContext context, ::ArrayW<UnityEngine::Camera> cameras) ;

/// @brief Method ProcessRenderRequests addr 0x2b75ccc size 0x4 virtual true final false
 void ProcessRenderRequests(UnityEngine::Rendering::ScriptableRenderContext context, UnityEngine::Camera camera, System::Collections::Generic::List_1<UnityEngine::UnityEngine__Camera__RenderRequest> renderRequests) ;

/// @brief Method Render addr 0x2b75cd0 size 0x78 virtual true final false
 void Render(UnityEngine::Rendering::ScriptableRenderContext context, System::Collections::Generic::List_1<UnityEngine::Camera> cameras) ;

/// @brief Method InternalRender addr 0x2b7535c size 0x88 virtual false final false
 void InternalRender(UnityEngine::Rendering::ScriptableRenderContext context, System::Collections::Generic::List_1<UnityEngine::Camera> cameras) ;

/// @brief Method InternalRenderWithRequests addr 0x2b753e4 size 0x100 virtual false final false
 void InternalRenderWithRequests(UnityEngine::Rendering::ScriptableRenderContext context, System::Collections::Generic::List_1<UnityEngine::Camera> cameras, System::Collections::Generic::List_1<UnityEngine::UnityEngine__Camera__RenderRequest> renderRequests) ;

/// @brief Method get_disposed addr 0x2b75d48 size 0x8 virtual false final false
 bool get_disposed() ;

/// @brief Method set_disposed addr 0x2b75d50 size 0xc virtual false final false
 void set_disposed(bool value) ;

/// @brief Method Dispose addr 0x2b74dd8 size 0x78 virtual false final false
 void Dispose() ;

/// @brief Method Dispose addr 0x2b75d5c size 0x4 virtual true final false
 void Dispose(bool disposing) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Rendering
NEED_NO_BOX(UnityEngine::Rendering::RenderPipeline);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Rendering::RenderPipeline, "UnityEngine.Rendering", "RenderPipeline");
