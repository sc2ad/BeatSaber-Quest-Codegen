#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__Component_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cmath>
#include <cstdint>
namespace UnityEngine {
struct LOD;
}
// Forward declare root types
namespace UnityEngine {
class LODGroup;
}
// Type: UnityEngine::LODGroup
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10179))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(10033))
// CS Name: UnityEngine.LODGroup
class CORDL_TYPE LODGroup : public UnityEngine::Component {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~LODGroup() = default;

// Ctor Parameters [CppParam { name: "", ty: "LODGroup", modifiers: " const&", def_value: None }]
constexpr LODGroup(LODGroup const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "LODGroup", modifiers: "&&", def_value: None }]
constexpr LODGroup(LODGroup&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit LODGroup(void* ptr) noexcept : UnityEngine::Component(ptr) {
}


  constexpr LODGroup& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr LODGroup& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr LODGroup& operator=(LODGroup&& o) noexcept = default;
  constexpr LODGroup& operator=(LODGroup const& o) noexcept = default;
                


// Properties

 float_t __declspec(property(get=get_size))  size;

 int32_t __declspec(property(get=get_lodCount))  lodCount;


// Methods

/// @brief Method get_size addr 0x2b40edc size 0x3c virtual false final false
 float_t get_size() ;

/// @brief Method get_lodCount addr 0x2b40f18 size 0x3c virtual false final false
 int32_t get_lodCount() ;

/// @brief Method RecalculateBounds addr 0x2b40f54 size 0x3c virtual false final false
 void RecalculateBounds() ;

/// @brief Method GetLODs addr 0x2b40f90 size 0x3c virtual false final false
 ::ArrayW<UnityEngine::LOD> GetLODs() ;

/// @brief Method SetLODs addr 0x2b40fcc size 0x44 virtual false final false
 void SetLODs(::ArrayW<UnityEngine::LOD> lods) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::LODGroup);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::LODGroup, "UnityEngine", "LODGroup");
