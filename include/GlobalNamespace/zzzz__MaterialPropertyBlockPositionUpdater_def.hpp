#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "GlobalNamespace/zzzz__MaterialPropertyBlockAnimator_def.hpp"
namespace UnityEngine {
class Transform;
}
// Forward declare root types
namespace GlobalNamespace {
class MaterialPropertyBlockPositionUpdater;
}
// Type: ::MaterialPropertyBlockPositionUpdater
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14723))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14729))
// CS Name: MaterialPropertyBlockPositionUpdater
class CORDL_TYPE MaterialPropertyBlockPositionUpdater : public GlobalNamespace::MaterialPropertyBlockAnimator {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x38};

virtual ~MaterialPropertyBlockPositionUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPositionUpdater", modifiers: " const&", def_value: None }]
constexpr MaterialPropertyBlockPositionUpdater(MaterialPropertyBlockPositionUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "MaterialPropertyBlockPositionUpdater", modifiers: "&&", def_value: None }]
constexpr MaterialPropertyBlockPositionUpdater(MaterialPropertyBlockPositionUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit MaterialPropertyBlockPositionUpdater(void* ptr) noexcept : GlobalNamespace::MaterialPropertyBlockAnimator(ptr) {
}


  constexpr MaterialPropertyBlockPositionUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr MaterialPropertyBlockPositionUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr MaterialPropertyBlockPositionUpdater& operator=(MaterialPropertyBlockPositionUpdater&& o) noexcept = default;
  constexpr MaterialPropertyBlockPositionUpdater& operator=(MaterialPropertyBlockPositionUpdater const& o) noexcept = default;
                


// Fields

 UnityEngine::Transform __declspec(property(get=__get__targetTransform, put=__set__targetTransform))  _targetTransform;

constexpr void __set__targetTransform(UnityEngine::Transform value) ;

constexpr UnityEngine::Transform __get__targetTransform() const;


// Methods

/// @brief Method SetProperty addr 0x1fa26e0 size 0xb4 virtual true final false
 void SetProperty() ;

static GlobalNamespace::MaterialPropertyBlockPositionUpdater New_ctor() ;

/// @brief Method .ctor addr 0x1fa2794 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::MaterialPropertyBlockPositionUpdater);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::MaterialPropertyBlockPositionUpdater, "", "MaterialPropertyBlockPositionUpdater");
