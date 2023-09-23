#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__SliderMeshConstructor_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace GlobalNamespace {
class VertexPath;
}
// Forward declare root types
namespace GlobalNamespace {
class SliderMeshConstructorCrossedStrips;
}
// Type: ::SliderMeshConstructorCrossedStrips
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(4936))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(4937))
// CS Name: SliderMeshConstructorCrossedStrips
class CORDL_TYPE SliderMeshConstructorCrossedStrips : public GlobalNamespace::SliderMeshConstructor {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x50};

virtual ~SliderMeshConstructorCrossedStrips() = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderMeshConstructorCrossedStrips", modifiers: " const&", def_value: None }]
constexpr SliderMeshConstructorCrossedStrips(SliderMeshConstructorCrossedStrips const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SliderMeshConstructorCrossedStrips", modifiers: "&&", def_value: None }]
constexpr SliderMeshConstructorCrossedStrips(SliderMeshConstructorCrossedStrips&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SliderMeshConstructorCrossedStrips(void* ptr) noexcept : GlobalNamespace::SliderMeshConstructor(ptr) {
}


  constexpr SliderMeshConstructorCrossedStrips& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SliderMeshConstructorCrossedStrips& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SliderMeshConstructorCrossedStrips& operator=(SliderMeshConstructorCrossedStrips&& o) noexcept = default;
  constexpr SliderMeshConstructorCrossedStrips& operator=(SliderMeshConstructorCrossedStrips const& o) noexcept = default;
                


// Fields

 ::ArrayW<int32_t> __declspec(property(get=__get__triangleMap, put=__set__triangleMap))  _triangleMap;

constexpr void __set__triangleMap(::ArrayW<int32_t> value) ;

constexpr ::ArrayW<int32_t> __get__triangleMap() const;


// Methods

/// @brief Method CreateSliderMeshInternal addr 0x224baf4 size 0x3bc virtual true final false
 void CreateSliderMeshInternal(GlobalNamespace::VertexPath path) ;

/// @brief Method GetVertexCount addr 0x224beb0 size 0x1c virtual true final false
 int32_t GetVertexCount(GlobalNamespace::VertexPath path) ;

/// @brief Method GetTrianglesCount addr 0x224becc size 0x24 virtual true final false
 int32_t GetTrianglesCount(GlobalNamespace::VertexPath path) ;

// Ctor Parameters []
explicit SliderMeshConstructorCrossedStrips() ;

/// @brief Method .ctor addr 0x224bef0 size 0x84 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SliderMeshConstructorCrossedStrips);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SliderMeshConstructorCrossedStrips, "", "SliderMeshConstructorCrossedStrips");
