#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace GlobalNamespace {
class SceneSetupData;
}
// Type: ::SceneSetupData
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13869))
// CS Name: SceneSetupData
class CORDL_TYPE SceneSetupData : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~SceneSetupData() = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneSetupData", modifiers: " const&", def_value: None }]
constexpr SceneSetupData(SceneSetupData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SceneSetupData", modifiers: "&&", def_value: None }]
constexpr SceneSetupData(SceneSetupData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SceneSetupData(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr SceneSetupData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SceneSetupData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SceneSetupData& operator=(SceneSetupData&& o) noexcept = default;
  constexpr SceneSetupData& operator=(SceneSetupData const& o) noexcept = default;
                


// Methods

// Ctor Parameters []
explicit SceneSetupData() ;

/// @brief Method .ctor addr 0x1f829fc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::SceneSetupData);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::SceneSetupData, "", "SceneSetupData");
