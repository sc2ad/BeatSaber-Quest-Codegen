#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__MonoBehaviour_def.hpp"
// Forward declare root types
namespace GlobalNamespace {
class StaticBatchedMeshContainer;
}
// Type: ::StaticBatchedMeshContainer
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10166))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16096))
// CS Name: StaticBatchedMeshContainer
class CORDL_TYPE StaticBatchedMeshContainer : public UnityEngine::MonoBehaviour {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~StaticBatchedMeshContainer() = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticBatchedMeshContainer", modifiers: " const&", def_value: None }]
constexpr StaticBatchedMeshContainer(StaticBatchedMeshContainer const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "StaticBatchedMeshContainer", modifiers: "&&", def_value: None }]
constexpr StaticBatchedMeshContainer(StaticBatchedMeshContainer&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit StaticBatchedMeshContainer(void* ptr) noexcept : UnityEngine::MonoBehaviour(ptr) {
}


  constexpr StaticBatchedMeshContainer& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr StaticBatchedMeshContainer& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr StaticBatchedMeshContainer& operator=(StaticBatchedMeshContainer&& o) noexcept = default;
  constexpr StaticBatchedMeshContainer& operator=(StaticBatchedMeshContainer const& o) noexcept = default;
                


// Methods

static GlobalNamespace::StaticBatchedMeshContainer New_ctor() ;

/// @brief Method .ctor addr 0x267b3b0 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::StaticBatchedMeshContainer);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::StaticBatchedMeshContainer, "", "StaticBatchedMeshContainer");
