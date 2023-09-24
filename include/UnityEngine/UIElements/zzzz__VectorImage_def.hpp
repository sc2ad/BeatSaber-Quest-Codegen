#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
struct VectorImageVertex;
}
namespace UnityEngine::UIElements {
struct GradientSettings;
}
namespace UnityEngine {
struct Vector2;
}
namespace UnityEngine {
class Texture2D;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VectorImage;
}
// Type: UnityEngine.UIElements::VectorImage
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6891))
// CS Name: UnityEngine.UIElements.VectorImage
class CORDL_TYPE VectorImage : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~VectorImage() = default;

// Ctor Parameters [CppParam { name: "", ty: "VectorImage", modifiers: " const&", def_value: None }]
constexpr VectorImage(VectorImage const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VectorImage", modifiers: "&&", def_value: None }]
constexpr VectorImage(VectorImage&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VectorImage(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr VectorImage& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VectorImage& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VectorImage& operator=(VectorImage&& o) noexcept = default;
  constexpr VectorImage& operator=(VectorImage const& o) noexcept = default;
                


// Fields

 UnityEngine::Texture2D __declspec(property(get=__get_atlas, put=__set_atlas))  atlas;

constexpr void __set_atlas(UnityEngine::Texture2D value) ;

constexpr UnityEngine::Texture2D __get_atlas() const;

 ::ArrayW<UnityEngine::UIElements::VectorImageVertex> __declspec(property(get=__get_vertices, put=__set_vertices))  vertices;

constexpr void __set_vertices(::ArrayW<UnityEngine::UIElements::VectorImageVertex> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::VectorImageVertex> __get_vertices() const;

 ::ArrayW<uint16_t> __declspec(property(get=__get_indices, put=__set_indices))  indices;

constexpr void __set_indices(::ArrayW<uint16_t> value) ;

constexpr ::ArrayW<uint16_t> __get_indices() const;

 ::ArrayW<UnityEngine::UIElements::GradientSettings> __declspec(property(get=__get_settings, put=__set_settings))  settings;

constexpr void __set_settings(::ArrayW<UnityEngine::UIElements::GradientSettings> value) ;

constexpr ::ArrayW<UnityEngine::UIElements::GradientSettings> __get_settings() const;

 UnityEngine::Vector2 __declspec(property(get=__get_size, put=__set_size))  size;

constexpr void __set_size(UnityEngine::Vector2 value) ;

constexpr UnityEngine::Vector2 __get_size() const;


// Methods

static UnityEngine::UIElements::VectorImage New_ctor() ;

/// @brief Method .ctor addr 0x2c44248 size 0x64 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::VectorImage);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::VectorImage, "UnityEngine.UIElements", "VectorImage");
