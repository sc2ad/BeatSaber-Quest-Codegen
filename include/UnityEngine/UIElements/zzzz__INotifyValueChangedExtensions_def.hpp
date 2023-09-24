#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace UnityEngine::UIElements {
template<typename T>
class ChangeEvent_1;
}
namespace UnityEngine::UIElements {
template<typename T>
class INotifyValueChanged_1;
}
namespace UnityEngine::UIElements {
template<typename TEventType>
class EventCallback_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class INotifyValueChangedExtensions;
}
// Type: UnityEngine.UIElements::INotifyValueChangedExtensions
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(7226))
// CS Name: UnityEngine.UIElements.INotifyValueChangedExtensions
class CORDL_TYPE INotifyValueChangedExtensions : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~INotifyValueChangedExtensions() = default;

// Ctor Parameters [CppParam { name: "", ty: "INotifyValueChangedExtensions", modifiers: " const&", def_value: None }]
constexpr INotifyValueChangedExtensions(INotifyValueChangedExtensions const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "INotifyValueChangedExtensions", modifiers: "&&", def_value: None }]
constexpr INotifyValueChangedExtensions(INotifyValueChangedExtensions&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit INotifyValueChangedExtensions(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr INotifyValueChangedExtensions& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr INotifyValueChangedExtensions& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr INotifyValueChangedExtensions& operator=(INotifyValueChangedExtensions&& o) noexcept = default;
  constexpr INotifyValueChangedExtensions& operator=(INotifyValueChangedExtensions const& o) noexcept = default;
                


// Methods

/// @brief Method RegisterValueChangedCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool RegisterValueChangedCallback(UnityEngine::UIElements::INotifyValueChanged_1<T> control, UnityEngine::UIElements::EventCallback_1<UnityEngine::UIElements::ChangeEvent_1<T>> callback) ;

/// @brief Method UnregisterValueChangedCallback addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
static bool UnregisterValueChangedCallback(UnityEngine::UIElements::INotifyValueChanged_1<T> control, UnityEngine::UIElements::EventCallback_1<UnityEngine::UIElements::ChangeEvent_1<T>> callback) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
NEED_NO_BOX(UnityEngine::UIElements::INotifyValueChangedExtensions);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::UIElements::INotifyValueChangedExtensions, "UnityEngine.UIElements", "INotifyValueChangedExtensions");
