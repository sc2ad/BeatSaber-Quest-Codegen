#pragma once
#include "../../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace System {
class Action;
}
namespace UnityEngine::UIElements {
struct Vertex;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams;
}
namespace Unity::Collections {
template<typename T>
struct NativeArray_1;
}
namespace UnityEngine::UIElements {
class IStylePainter;
}
namespace UnityEngine::UIElements::UIR {
class UIRenderDevice;
}
namespace UnityEngine::UIElements {
class ITextHandle;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
namespace Unity::Collections {
template<typename T>
struct NativeSlice_1;
}
namespace UnityEngine {
struct Color32;
}
namespace UnityEngine::UIElements {
class MeshGenerationContext;
}
namespace UnityEngine::UIElements {
struct ____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams;
}
// Forward declare root types
namespace UnityEngine::UIElements::UIR::Implementation {
class UIRTextUpdatePainter;
}
// Type: UnityEngine.UIElements.UIR.Implementation::UIRTextUpdatePainter
namespace UnityEngine::UIElements::UIR::Implementation {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7551))
// CS Name: UnityEngine.UIElements.UIR.Implementation.UIRTextUpdatePainter
class CORDL_TYPE UIRTextUpdatePainter : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IStylePainter
constexpr operator  ::UnityEngine::UIElements::IStylePainter() const noexcept;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x68};

virtual ~UIRTextUpdatePainter() = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRTextUpdatePainter", modifiers: " const&", def_value: None }]
constexpr UIRTextUpdatePainter(UIRTextUpdatePainter const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UIRTextUpdatePainter", modifiers: "&&", def_value: None }]
constexpr UIRTextUpdatePainter(UIRTextUpdatePainter&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UIRTextUpdatePainter(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UIRTextUpdatePainter& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UIRTextUpdatePainter& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UIRTextUpdatePainter& operator=(UIRTextUpdatePainter&& o) noexcept = default;
  constexpr UIRTextUpdatePainter& operator=(UIRTextUpdatePainter const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::VisualElement __declspec(property(get=__get_m_CurrentElement, put=__set_m_CurrentElement))  m_CurrentElement;

constexpr void __set_m_CurrentElement(::UnityEngine::UIElements::VisualElement value) ;

constexpr ::UnityEngine::UIElements::VisualElement __get_m_CurrentElement() const;

 int32_t __declspec(property(get=__get_m_TextEntryIndex, put=__set_m_TextEntryIndex))  m_TextEntryIndex;

constexpr void __set_m_TextEntryIndex(int32_t value) ;

constexpr int32_t __get_m_TextEntryIndex() const;

 ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> __declspec(property(get=__get_m_DudVerts, put=__set_m_DudVerts))  m_DudVerts;

constexpr void __set_m_DudVerts(::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> value) ;

constexpr ::Unity::Collections::NativeArray_1<::UnityEngine::UIElements::Vertex> __get_m_DudVerts() const;

 ::Unity::Collections::NativeArray_1<uint16_t> __declspec(property(get=__get_m_DudIndices, put=__set_m_DudIndices))  m_DudIndices;

constexpr void __set_m_DudIndices(::Unity::Collections::NativeArray_1<uint16_t> value) ;

constexpr ::Unity::Collections::NativeArray_1<uint16_t> __get_m_DudIndices() const;

 ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> __declspec(property(get=__get_m_MeshDataVerts, put=__set_m_MeshDataVerts))  m_MeshDataVerts;

constexpr void __set_m_MeshDataVerts(::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> value) ;

constexpr ::Unity::Collections::NativeSlice_1<::UnityEngine::UIElements::Vertex> __get_m_MeshDataVerts() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_m_XFormClipPages, put=__set_m_XFormClipPages))  m_XFormClipPages;

constexpr void __set_m_XFormClipPages(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_m_XFormClipPages() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_m_IDs, put=__set_m_IDs))  m_IDs;

constexpr void __set_m_IDs(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_m_IDs() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_m_Flags, put=__set_m_Flags))  m_Flags;

constexpr void __set_m_Flags(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_m_Flags() const;

 ::UnityEngine::Color32 __declspec(property(get=__get_m_OpacityColorPages, put=__set_m_OpacityColorPages))  m_OpacityColorPages;

constexpr void __set_m_OpacityColorPages(::UnityEngine::Color32 value) ;

constexpr ::UnityEngine::Color32 __get_m_OpacityColorPages() const;

 ::UnityEngine::UIElements::MeshGenerationContext __declspec(property(get=__get__meshGenerationContext_k__BackingField, put=__set__meshGenerationContext_k__BackingField))  _meshGenerationContext_k__BackingField;

constexpr void __set__meshGenerationContext_k__BackingField(::UnityEngine::UIElements::MeshGenerationContext value) ;

constexpr ::UnityEngine::UIElements::MeshGenerationContext __get__meshGenerationContext_k__BackingField() const;


// Properties

 ::UnityEngine::UIElements::MeshGenerationContext __declspec(property(get=get_meshGenerationContext))  meshGenerationContext;


// Methods

/// @brief Method get_meshGenerationContext addr 0x2c66640 size 0x8 virtual false final false
 ::UnityEngine::UIElements::MeshGenerationContext get_meshGenerationContext() ;

// Ctor Parameters []
explicit UIRTextUpdatePainter() ;

/// @brief Method .ctor addr 0x2c66648 size 0x70 virtual false final false
 void _ctor() ;

/// @brief Method Begin addr 0x2c666b8 size 0x244 virtual false final false
 void Begin(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::UIR::UIRenderDevice device) ;

/// @brief Method End addr 0x2c668fc size 0x8c virtual false final false
 void End() ;

/// @brief Method Dispose addr 0x2c66988 size 0xc4 virtual true final true
 void Dispose() ;

/// @brief Method DrawRectangle addr 0x2c66a4c size 0x4 virtual true final true
 void DrawRectangle(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__RectangleParams rectParams) ;

/// @brief Method DrawImmediate addr 0x2c66a50 size 0x4 virtual true final true
 void DrawImmediate(::System::Action callback, bool cullingEnabled) ;

/// @brief Method DrawText addr 0x2c66a54 size 0x368 virtual true final true
 void DrawText(::UnityEngine::UIElements::____UnityEngine__UIElements__MeshGenerationContextUtils__TextParams textParams, ::UnityEngine::UIElements::ITextHandle handle, float_t pixelsPerPoint) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements::UIR::Implementation
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::UIR::Implementation::UIRTextUpdatePainter, "UnityEngine.UIElements.UIR.Implementation", "UIRTextUpdatePainter");
