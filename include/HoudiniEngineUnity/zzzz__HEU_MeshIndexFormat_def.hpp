#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
namespace UnityEngine {
class Mesh;
}
namespace UnityEngine::Rendering {
struct IndexFormat;
}
// Forward declare root types
namespace HoudiniEngineUnity {
class HEU_MeshIndexFormat;
}
// Type: HoudiniEngineUnity::HEU_MeshIndexFormat
namespace HoudiniEngineUnity {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(9793))
// CS Name: HoudiniEngineUnity.HEU_MeshIndexFormat
class CORDL_TYPE HEU_MeshIndexFormat : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~HEU_MeshIndexFormat() = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_MeshIndexFormat", modifiers: " const&", def_value: None }]
constexpr HEU_MeshIndexFormat(HEU_MeshIndexFormat const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "HEU_MeshIndexFormat", modifiers: "&&", def_value: None }]
constexpr HEU_MeshIndexFormat(HEU_MeshIndexFormat&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit HEU_MeshIndexFormat(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr HEU_MeshIndexFormat& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr HEU_MeshIndexFormat& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr HEU_MeshIndexFormat& operator=(HEU_MeshIndexFormat&& o) noexcept = default;
  constexpr HEU_MeshIndexFormat& operator=(HEU_MeshIndexFormat const& o) noexcept = default;
                


// Fields

 ::UnityEngine::Rendering::IndexFormat __declspec(property(get=__get__indexFormat, put=__set__indexFormat))  _indexFormat;

constexpr void __set__indexFormat(::UnityEngine::Rendering::IndexFormat value) ;

constexpr ::UnityEngine::Rendering::IndexFormat __get__indexFormat() const;


// Methods

/// @brief Method CalculateIndexFormat addr 0x205e924 size 0x78 virtual false final false
 void CalculateIndexFormat(int32_t numVertices) ;

/// @brief Method SetFormatForMesh addr 0x205e99c size 0x24 virtual false final false
 void SetFormatForMesh(::UnityEngine::Mesh mesh) ;

// Ctor Parameters []
explicit HEU_MeshIndexFormat() ;

/// @brief Method .ctor addr 0x205e9c0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def HoudiniEngineUnity
} // end anonymous namespace
NEED_NO_BOX(::HoudiniEngineUnity::HEU_MeshIndexFormat);
DEFINE_IL2CPP_ARG_TYPE(::HoudiniEngineUnity::HEU_MeshIndexFormat, "HoudiniEngineUnity", "HEU_MeshIndexFormat");
