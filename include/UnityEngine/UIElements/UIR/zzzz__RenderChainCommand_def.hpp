#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/UIElements/UIR/zzzz__LinkedPoolItem_1_def.hpp"
#include "beatsaber-hook/shared/utils/byref.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine::UIElements::UIR {
class DrawParams;
}
namespace UnityEngine::UIElements::UIR {
class MeshHandle;
}
namespace System {
class Exception;
}
namespace UnityEngine {
class Texture;
}
namespace UnityEngine::UIElements::UIR {
struct State;
}
namespace UnityEngine {
class RenderTexture;
}
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace Unity::Profiling {
struct ProfilerMarker;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine {
struct RectInt;
}
namespace UnityEngine::UIElements::UIR {
struct CommandType;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR {
class RenderChainCommand;
}
// Type: UnityEngine.UIElements.UIR::RenderChainCommand
namespace UnityEngine::UIElements::UIR {
// Is value type: false
// Dependencies: {GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(7499), inst: 366 }), TypeDefinitionIndex(TypeDefinitionIndex(7499))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7544))
// CS Name: UnityEngine.UIElements.UIR.RenderChainCommand
class CORDL_TYPE RenderChainCommand : public UnityEngine::UIElements::UIR::LinkedPoolItem_1<UnityEngine::UIElements::UIR::RenderChainCommand> {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x70};

virtual ~RenderChainCommand() = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderChainCommand", modifiers: " const&", def_value: None }]
constexpr RenderChainCommand(RenderChainCommand const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RenderChainCommand", modifiers: "&&", def_value: None }]
constexpr RenderChainCommand(RenderChainCommand&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RenderChainCommand(void* ptr) noexcept : UnityEngine::UIElements::UIR::LinkedPoolItem_1<UnityEngine::UIElements::UIR::RenderChainCommand>(ptr) {
}


  constexpr RenderChainCommand& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RenderChainCommand& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RenderChainCommand& operator=(RenderChainCommand&& o) noexcept = default;
  constexpr RenderChainCommand& operator=(RenderChainCommand const& o) noexcept = default;
                


// Fields

 UnityEngine::UIElements::VisualElement __declspec(property(get=__get_owner, put=__set_owner))  owner;

constexpr void __set_owner(UnityEngine::UIElements::VisualElement value) ;

constexpr UnityEngine::UIElements::VisualElement __get_owner() const;

 UnityEngine::UIElements::UIR::RenderChainCommand __declspec(property(get=__get_prev, put=__set_prev))  prev;

constexpr void __set_prev(UnityEngine::UIElements::UIR::RenderChainCommand value) ;

constexpr UnityEngine::UIElements::UIR::RenderChainCommand __get_prev() const;

 UnityEngine::UIElements::UIR::RenderChainCommand __declspec(property(get=__get_next, put=__set_next))  next;

constexpr void __set_next(UnityEngine::UIElements::UIR::RenderChainCommand value) ;

constexpr UnityEngine::UIElements::UIR::RenderChainCommand __get_next() const;

 bool __declspec(property(get=__get_closing, put=__set_closing))  closing;

constexpr void __set_closing(bool value) ;

constexpr bool __get_closing() const;

 UnityEngine::UIElements::UIR::CommandType __declspec(property(get=__get_type, put=__set_type))  type;

constexpr void __set_type(UnityEngine::UIElements::UIR::CommandType value) ;

constexpr UnityEngine::UIElements::UIR::CommandType __get_type() const;

 UnityEngine::UIElements::UIR::State __declspec(property(get=__get_state, put=__set_state))  state;

constexpr void __set_state(UnityEngine::UIElements::UIR::State value) ;

constexpr UnityEngine::UIElements::UIR::State __get_state() const;

 UnityEngine::UIElements::UIR::MeshHandle __declspec(property(get=__get_mesh, put=__set_mesh))  mesh;

constexpr void __set_mesh(UnityEngine::UIElements::UIR::MeshHandle value) ;

constexpr UnityEngine::UIElements::UIR::MeshHandle __get_mesh() const;

 int32_t __declspec(property(get=__get_indexOffset, put=__set_indexOffset))  indexOffset;

constexpr void __set_indexOffset(int32_t value) ;

constexpr int32_t __get_indexOffset() const;

 int32_t __declspec(property(get=__get_indexCount, put=__set_indexCount))  indexCount;

constexpr void __set_indexCount(int32_t value) ;

constexpr int32_t __get_indexCount() const;

 System::Action __declspec(property(get=__get_callback, put=__set_callback))  callback;

constexpr void __set_callback(System::Action value) ;

constexpr System::Action __get_callback() const;

static int32_t __declspec(property(get=__get_k_ID_MainTex, put=__set_k_ID_MainTex))  k_ID_MainTex;

static void __set_k_ID_MainTex(int32_t value) ;

static int32_t __get_k_ID_MainTex() ;

static Unity::Profiling::ProfilerMarker __declspec(property(get=__get_s_ImmediateOverheadMarker, put=__set_s_ImmediateOverheadMarker))  s_ImmediateOverheadMarker;

static void __set_s_ImmediateOverheadMarker(Unity::Profiling::ProfilerMarker value) ;

static Unity::Profiling::ProfilerMarker __get_s_ImmediateOverheadMarker() ;


// Methods

/// @brief Method Reset addr 0x2c5c9a0 size 0x24 virtual false final false
 void Reset() ;

/// @brief Method ExecuteNonDrawMesh addr 0x2c5b12c size 0xbbc virtual false final false
 void ExecuteNonDrawMesh(UnityEngine::UIElements::UIR::DrawParams drawParams, float_t pixelsPerPoint, ByRef<System::Exception> immediateException) ;

/// @brief Method Blit addr 0x2c5cf80 size 0x170 virtual false final false
 void Blit(UnityEngine::Texture source, UnityEngine::RenderTexture destination, float_t depth) ;

/// @brief Method CombineScissorRects addr 0x2c5cdc8 size 0x1b8 virtual false final false
static UnityEngine::Rect CombineScissorRects(UnityEngine::Rect r0, UnityEngine::Rect r1) ;

/// @brief Method RectPointsToPixelsAndFlipYAxis addr 0x2c5c9c4 size 0x404 virtual false final false
static UnityEngine::RectInt RectPointsToPixelsAndFlipYAxis(UnityEngine::Rect rect, float_t pixelsPerPoint) ;

static UnityEngine::UIElements::UIR::RenderChainCommand New_ctor() ;

/// @brief Method .ctor addr 0x2c5d0f0 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR
NEED_NO_BOX(UnityEngine::UIElements::UIR::RenderChainCommand);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::UIR::RenderChainCommand, "UnityEngine.UIElements.UIR", "RenderChainCommand");
