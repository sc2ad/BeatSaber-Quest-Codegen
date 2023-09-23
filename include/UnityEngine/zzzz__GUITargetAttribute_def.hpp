#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__Attribute_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace System {
class Type;
}
// Forward declare root types
namespace UnityEngine {
class GUITargetAttribute;
}
// Type: UnityEngine::GUITargetAttribute
namespace UnityEngine {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2546))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14779))
// CS Name: UnityEngine.GUITargetAttribute
class CORDL_TYPE GUITargetAttribute : public System::Attribute {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~GUITargetAttribute() = default;

// Ctor Parameters [CppParam { name: "", ty: "GUITargetAttribute", modifiers: " const&", def_value: None }]
constexpr GUITargetAttribute(GUITargetAttribute const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GUITargetAttribute", modifiers: "&&", def_value: None }]
constexpr GUITargetAttribute(GUITargetAttribute&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GUITargetAttribute(void* ptr) noexcept : System::Attribute(ptr) {
}


  constexpr GUITargetAttribute& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GUITargetAttribute& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GUITargetAttribute& operator=(GUITargetAttribute&& o) noexcept = default;
  constexpr GUITargetAttribute& operator=(GUITargetAttribute const& o) noexcept = default;
                


// Fields

 int32_t __declspec(property(get=__get_displayMask, put=__set_displayMask))  displayMask;

constexpr void __set_displayMask(int32_t value) ;

constexpr int32_t __get_displayMask() const;


// Methods

/// @brief Method GetGUITargetAttrValue addr 0x2b9055c size 0x180 virtual false final false
static int32_t GetGUITargetAttrValue(System::Type klass, ::StringW methodName) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(UnityEngine::GUITargetAttribute);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::GUITargetAttribute, "UnityEngine", "GUITargetAttribute");
