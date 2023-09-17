#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Exception_def.hpp"
namespace {
// Forward declare root types
namespace UnityEngine::ProBuilder::KdTree {
class DuplicateNodeError;
}
// Type: UnityEngine.ProBuilder.KdTree::DuplicateNodeError
namespace UnityEngine::ProBuilder::KdTree {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2560))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15799))
// CS Name: UnityEngine.ProBuilder.KdTree.DuplicateNodeError
class CORDL_TYPE DuplicateNodeError : public ::System::Exception {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x90};

virtual ~DuplicateNodeError() = default;

// Ctor Parameters [CppParam { name: "", ty: "DuplicateNodeError", modifiers: " const&", def_value: None }]
constexpr DuplicateNodeError(DuplicateNodeError const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DuplicateNodeError", modifiers: "&&", def_value: None }]
constexpr DuplicateNodeError(DuplicateNodeError&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DuplicateNodeError(void* ptr) noexcept : ::System::Exception(ptr) {
}


  constexpr DuplicateNodeError& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DuplicateNodeError& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DuplicateNodeError& operator=(DuplicateNodeError&& o) noexcept = default;
  constexpr DuplicateNodeError& operator=(DuplicateNodeError const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit DuplicateNodeError() ;

/// @brief Method .ctor addr 0x2999ab8 size 0x70 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ProBuilder::KdTree
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ProBuilder::KdTree::DuplicateNodeError);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ProBuilder::KdTree::DuplicateNodeError, "UnityEngine.ProBuilder.KdTree", "DuplicateNodeError");
