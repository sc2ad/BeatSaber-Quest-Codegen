#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::SceneManagement {
struct Scene;
}
namespace System::Collections::Generic {
template<typename T>
class IEnumerable_1;
}
// Forward declare root types
namespace GlobalNamespace {
class UnityScenesHelper;
}
// Type: ::UnityScenesHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13751))
// CS Name: UnityScenesHelper
class CORDL_TYPE UnityScenesHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~UnityScenesHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityScenesHelper", modifiers: " const&", def_value: None }]
constexpr UnityScenesHelper(UnityScenesHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityScenesHelper", modifiers: "&&", def_value: None }]
constexpr UnityScenesHelper(UnityScenesHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityScenesHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr UnityScenesHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityScenesHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityScenesHelper& operator=(UnityScenesHelper&& o) noexcept = default;
  constexpr UnityScenesHelper& operator=(UnityScenesHelper const& o) noexcept = default;
                


// Methods

/// @brief Method SetActiveRootObjectsInScene addr 0x1f731b4 size 0x1c8 virtual false final false
static void SetActiveRootObjectsInScene(UnityEngine::SceneManagement::Scene scene, bool active) ;

/// @brief Method FindComponentsOfTypeInScene addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static System::Collections::Generic::IEnumerable_1<T> FindComponentsOfTypeInScene(UnityEngine::SceneManagement::Scene activeScene, bool includeInactive) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::UnityScenesHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::UnityScenesHelper, "", "UnityScenesHelper");
