#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace UnityEngine::UIElements {
class ISerializableJsonDictionary;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class GetViewDataDictionary;
}
// Type: UnityEngine.UIElements::GetViewDataDictionary
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6959))
// CS Name: UnityEngine.UIElements.GetViewDataDictionary
class CORDL_TYPE GetViewDataDictionary : public System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~GetViewDataDictionary() = default;

// Ctor Parameters [CppParam { name: "", ty: "GetViewDataDictionary", modifiers: " const&", def_value: None }]
constexpr GetViewDataDictionary(GetViewDataDictionary const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "GetViewDataDictionary", modifiers: "&&", def_value: None }]
constexpr GetViewDataDictionary(GetViewDataDictionary&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit GetViewDataDictionary(void* ptr) noexcept : System::MulticastDelegate(ptr) {
}


  constexpr GetViewDataDictionary& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr GetViewDataDictionary& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr GetViewDataDictionary& operator=(GetViewDataDictionary&& o) noexcept = default;
  constexpr GetViewDataDictionary& operator=(GetViewDataDictionary const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit GetViewDataDictionary(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c50eac size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c50f68 size 0x14 virtual true final false
 UnityEngine::UIElements::ISerializableJsonDictionary Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::GetViewDataDictionary);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::GetViewDataDictionary, "UnityEngine.UIElements", "GetViewDataDictionary");
