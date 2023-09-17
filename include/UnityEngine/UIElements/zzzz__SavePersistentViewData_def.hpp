#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "System/zzzz__MulticastDelegate_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace {
// Forward declare root types
namespace UnityEngine::UIElements {
class SavePersistentViewData;
}
// Type: UnityEngine.UIElements::SavePersistentViewData
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2610))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6960))
// CS Name: UnityEngine.UIElements.SavePersistentViewData
class CORDL_TYPE SavePersistentViewData : public ::System::MulticastDelegate {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x80};

virtual ~SavePersistentViewData() = default;

// Ctor Parameters [CppParam { name: "", ty: "SavePersistentViewData", modifiers: " const&", def_value: None }]
constexpr SavePersistentViewData(SavePersistentViewData const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "SavePersistentViewData", modifiers: "&&", def_value: None }]
constexpr SavePersistentViewData(SavePersistentViewData&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit SavePersistentViewData(void* ptr) noexcept : ::System::MulticastDelegate(ptr) {
}


  constexpr SavePersistentViewData& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr SavePersistentViewData& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr SavePersistentViewData& operator=(SavePersistentViewData&& o) noexcept = default;
  constexpr SavePersistentViewData& operator=(SavePersistentViewData const& o) noexcept = default;
                


// Methods

// Ctor Parameters [CppParam { name: "object", ty: "::bs_hook::Il2CppWrapperType", modifiers: "", def_value: None }, CppParam { name: "method", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
explicit SavePersistentViewData(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method .ctor addr 0x2c50f7c size 0xbc virtual false final false
 void _ctor(::bs_hook::Il2CppWrapperType object, ::cordl_internals::intptr_t method) ;

/// @brief Method Invoke addr 0x2c51038 size 0x14 virtual true final false
 void Invoke() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::SavePersistentViewData);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::SavePersistentViewData, "UnityEngine.UIElements", "SavePersistentViewData");
