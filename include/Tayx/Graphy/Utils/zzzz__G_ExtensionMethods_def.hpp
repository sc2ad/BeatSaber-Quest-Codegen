#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UI {
class Image;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class GameObject;
}
// Forward declare root types
namespace Tayx::Graphy::Utils {
class G_ExtensionMethods;
}
// Type: Tayx.Graphy.Utils::G_ExtensionMethods
namespace Tayx::Graphy::Utils {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15192))
// CS Name: Tayx.Graphy.Utils.G_ExtensionMethods
class CORDL_TYPE G_ExtensionMethods : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~G_ExtensionMethods() = default;

// Ctor Parameters [CppParam { name: "", ty: "G_ExtensionMethods", modifiers: " const&", def_value: None }]
constexpr G_ExtensionMethods(G_ExtensionMethods const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "G_ExtensionMethods", modifiers: "&&", def_value: None }]
constexpr G_ExtensionMethods(G_ExtensionMethods&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit G_ExtensionMethods(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr G_ExtensionMethods& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr G_ExtensionMethods& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr G_ExtensionMethods& operator=(G_ExtensionMethods&& o) noexcept = default;
  constexpr G_ExtensionMethods& operator=(G_ExtensionMethods const& o) noexcept = default;
                


// Methods

/// @brief Method SetAllActive addr 0x2872fc8 size 0x164 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::GameObject> SetAllActive(System::Collections::Generic::List_1<UnityEngine::GameObject> gameObjects, bool active) ;

/// @brief Method SetOneActive addr 0x287312c size 0xb4 virtual false final false
static System::Collections::Generic::List_1<UnityEngine::UI::Image> SetOneActive(System::Collections::Generic::List_1<UnityEngine::UI::Image> images, int32_t active) ;

/// @brief Method SetAllActive addr 0x28731e0 size 0x17c virtual false final false
static System::Collections::Generic::List_1<UnityEngine::UI::Image> SetAllActive(System::Collections::Generic::List_1<UnityEngine::UI::Image> images, bool active) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def Tayx::Graphy::Utils
NEED_NO_BOX(Tayx::Graphy::Utils::G_ExtensionMethods);
DEFINE_IL2CPP_ARG_TYPE(Tayx::Graphy::Utils::G_ExtensionMethods, "Tayx.Graphy.Utils", "G_ExtensionMethods");
