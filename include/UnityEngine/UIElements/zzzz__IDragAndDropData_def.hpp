#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
// Forward declare root types
namespace UnityEngine::UIElements {
class IDragAndDropData;
}
// Type: UnityEngine.UIElements::IDragAndDropData
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7053))
// CS Name: UnityEngine.UIElements.IDragAndDropData
class CORDL_TYPE IDragAndDropData : public ::cordl_internals::InterfaceW {
public:
// Declarations
~IDragAndDropData() = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit IDragAndDropData(void* ptr) noexcept : ::cordl_internals::InterfaceW(ptr) {
}


// Properties

 ::bs_hook::Il2CppWrapperType __declspec(property(get=get_userData))  userData;


// Methods

/// @brief Method get_userData addr 0x0 size 0xffffffffffffffff virtual true final false
 ::bs_hook::Il2CppWrapperType get_userData() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::IDragAndDropData);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::IDragAndDropData, "UnityEngine.UIElements", "IDragAndDropData");
