#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine {
class Camera;
}
namespace UnityEngine::ProBuilder {
struct Edge;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
namespace UnityEngine {
struct Vector3;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace UnityEngine {
struct Rect;
}
namespace UnityEngine::ProBuilder {
struct PickerOptions;
}
namespace UnityEngine::ProBuilder {
class Face;
}
namespace UnityEngine::ProBuilder {
class ProBuilderMesh;
}
// Forward declare root types
namespace UnityEngine::ProBuilder {
class SelectionPicker;
}
// Type: UnityEngine.ProBuilder::SelectionPicker
namespace UnityEngine::ProBuilder {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(12125))
// CS Name: UnityEngine.ProBuilder.SelectionPicker
class CORDL_TYPE SelectionPicker : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SelectionPicker() = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectionPicker", modifiers: " const&", def_value: None }]
constexpr SelectionPicker(SelectionPicker const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SelectionPicker", modifiers: "&&", def_value: None }]
constexpr SelectionPicker(SelectionPicker&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SelectionPicker(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SelectionPicker& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SelectionPicker& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SelectionPicker& operator=(SelectionPicker&& o) noexcept = default;
  constexpr SelectionPicker& operator=(SelectionPicker const& o) noexcept = default;
                


// Methods

/// @brief Method PickVerticesInRect addr 0x29cf0cc size 0x63c virtual false final false
static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<int32_t>> PickVerticesInRect(::UnityEngine::Camera cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selectable, ::UnityEngine::ProBuilder::PickerOptions options, float_t pixelsPerPoint) ;

/// @brief Method PickFacesInRect addr 0x29d00c0 size 0xf44 virtual false final false
static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Face>> PickFacesInRect(::UnityEngine::Camera cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selectable, ::UnityEngine::ProBuilder::PickerOptions options, float_t pixelsPerPoint) ;

/// @brief Method PickEdgesInRect addr 0x29d15e8 size 0x848 virtual false final false
static ::System::Collections::Generic::Dictionary_2<::UnityEngine::ProBuilder::ProBuilderMesh,::System::Collections::Generic::HashSet_1<::UnityEngine::ProBuilder::Edge>> PickEdgesInRect(::UnityEngine::Camera cam, ::UnityEngine::Rect rect, ::System::Collections::Generic::IList_1<::UnityEngine::ProBuilder::ProBuilderMesh> selectable, ::UnityEngine::ProBuilder::PickerOptions options, float_t pixelsPerPoint) ;

/// @brief Method PickFace addr 0x29d25d0 size 0xa0 virtual false final false
static ::UnityEngine::ProBuilder::Face PickFace(::UnityEngine::Camera camera, ::UnityEngine::Vector3 mousePosition, ::UnityEngine::ProBuilder::ProBuilderMesh pickable) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::SelectionPicker);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::SelectionPicker, "UnityEngine.ProBuilder", "SelectionPicker");
