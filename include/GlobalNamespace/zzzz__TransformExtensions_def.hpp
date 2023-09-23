#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine {
class Transform;
}
namespace UnityEngine {
struct Quaternion;
}
// Forward declare root types
namespace GlobalNamespace {
class TransformExtensions;
}
// Type: ::TransformExtensions
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13840))
// CS Name: TransformExtensions
class CORDL_TYPE TransformExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~TransformExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: " const&", def_value: None }]
constexpr TransformExtensions(TransformExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TransformExtensions", modifiers: "&&", def_value: None }]
constexpr TransformExtensions(TransformExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TransformExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr TransformExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TransformExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TransformExtensions& operator=(TransformExtensions&& o) noexcept = default;
  constexpr TransformExtensions& operator=(TransformExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method InverseTransformRotation addr 0x1f7c534 size 0xb4 virtual false final false
static UnityEngine::Quaternion InverseTransformRotation(UnityEngine::Transform trans, UnityEngine::Quaternion worldRotation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::TransformExtensions);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::TransformExtensions, "", "TransformExtensions");
