#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace UnityEngine::UIElements {
class IGroupBoxOption;
}
namespace UnityEngine::UIElements {
class IGroupManager;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class DefaultGroupManager;
}
// Type: UnityEngine.UIElements::DefaultGroupManager
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6947))
// CS Name: UnityEngine.UIElements.DefaultGroupManager
class CORDL_TYPE DefaultGroupManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to ::UnityEngine::UIElements::IGroupManager
constexpr operator  ::UnityEngine::UIElements::IGroupManager() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~DefaultGroupManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultGroupManager", modifiers: " const&", def_value: None }]
constexpr DefaultGroupManager(DefaultGroupManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "DefaultGroupManager", modifiers: "&&", def_value: None }]
constexpr DefaultGroupManager(DefaultGroupManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit DefaultGroupManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr DefaultGroupManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr DefaultGroupManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr DefaultGroupManager& operator=(DefaultGroupManager&& o) noexcept = default;
  constexpr DefaultGroupManager& operator=(DefaultGroupManager const& o) noexcept = default;
                


// Fields

 ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption> __declspec(property(get=__get_m_GroupOptions, put=__set_m_GroupOptions))  m_GroupOptions;

constexpr void __set_m_GroupOptions(::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption> value) ;

constexpr ::System::Collections::Generic::List_1<::UnityEngine::UIElements::IGroupBoxOption> __get_m_GroupOptions() const;

 ::UnityEngine::UIElements::IGroupBoxOption __declspec(property(get=__get_m_SelectedOption, put=__set_m_SelectedOption))  m_SelectedOption;

constexpr void __set_m_SelectedOption(::UnityEngine::UIElements::IGroupBoxOption value) ;

constexpr ::UnityEngine::UIElements::IGroupBoxOption __get_m_SelectedOption() const;


// Methods

/// @brief Method OnOptionSelectionChanged addr 0x2c4f844 size 0x1d0 virtual true final true
 void OnOptionSelectionChanged(::UnityEngine::UIElements::IGroupBoxOption selectedOption) ;

/// @brief Method RegisterOption addr 0x2c4fa14 size 0xd4 virtual true final true
 void RegisterOption(::UnityEngine::UIElements::IGroupBoxOption option) ;

/// @brief Method UnregisterOption addr 0x2c4fae8 size 0x58 virtual true final true
 void UnregisterOption(::UnityEngine::UIElements::IGroupBoxOption option) ;

// Ctor Parameters []
explicit DefaultGroupManager() ;

/// @brief Method .ctor addr 0x2c4fb40 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::DefaultGroupManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::DefaultGroupManager, "UnityEngine.UIElements", "DefaultGroupManager");
