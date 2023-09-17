#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include <cstdint>
namespace {
namespace UnityEngine::UIElements {
struct VersionChangeType;
}
namespace UnityEngine::UIElements {
class IVisualTreeUpdater;
}
namespace System {
class IDisposable;
}
namespace UnityEngine::UIElements {
class BaseVisualElementPanel;
}
namespace UnityEngine::UIElements {
struct VisualTreeUpdatePhase;
}
namespace UnityEngine::UIElements {
class VisualElement;
}
// Forward declare root types
namespace UnityEngine::UIElements {
class VisualTreeUpdater;
}
namespace UnityEngine::UIElements {
class ____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray;
}
// Type: ::UpdaterArray
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6835))
// CS Name: UnityEngine.UIElements.VisualTreeUpdater::UpdaterArray
class CORDL_TYPE ____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray(____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray(____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray& operator=(____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray&& o) noexcept = default;
  constexpr ____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray& operator=(____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray const& o) noexcept = default;
                


// Fields

 ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater> __declspec(property(get=__get_m_VisualTreeUpdaters, put=__set_m_VisualTreeUpdaters))  m_VisualTreeUpdaters;

constexpr void __set_m_VisualTreeUpdaters(::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater> value) ;

constexpr ::ArrayW<::UnityEngine::UIElements::IVisualTreeUpdater> __get_m_VisualTreeUpdaters() const;


// Properties

 ::UnityEngine::UIElements::IVisualTreeUpdater __declspec(property(get=get_Item, put=set_Item))  Item;

 ::UnityEngine::UIElements::IVisualTreeUpdater __declspec(property(get=get_Item))  Item;


// Methods

// Ctor Parameters []
explicit ____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray() ;

/// @brief Method .ctor addr 0x2c3965c size 0x5c virtual false final false
 void _ctor() ;

/// @brief Method set_Item addr 0x2c39c78 size 0x64 virtual false final false
 void set_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase phase, ::UnityEngine::UIElements::IVisualTreeUpdater value) ;

/// @brief Method get_Item addr 0x2c39b48 size 0x30 virtual false final false
 ::UnityEngine::UIElements::IVisualTreeUpdater get_Item(::UnityEngine::UIElements::VisualTreeUpdatePhase phase) ;

/// @brief Method get_Item addr 0x2c398c0 size 0x30 virtual false final false
 ::UnityEngine::UIElements::IVisualTreeUpdater get_Item(int32_t index) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
// Type: UnityEngine.UIElements::VisualTreeUpdater
namespace UnityEngine::UIElements {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(6836))
// CS Name: UnityEngine.UIElements.VisualTreeUpdater
class CORDL_TYPE VisualTreeUpdater : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using UpdaterArray = ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray;

/// @brief Convert operator to ::System::IDisposable
constexpr operator  ::System::IDisposable() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~VisualTreeUpdater() = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeUpdater", modifiers: " const&", def_value: None }]
constexpr VisualTreeUpdater(VisualTreeUpdater const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "VisualTreeUpdater", modifiers: "&&", def_value: None }]
constexpr VisualTreeUpdater(VisualTreeUpdater&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit VisualTreeUpdater(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr VisualTreeUpdater& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr VisualTreeUpdater& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr VisualTreeUpdater& operator=(VisualTreeUpdater&& o) noexcept = default;
  constexpr VisualTreeUpdater& operator=(VisualTreeUpdater const& o) noexcept = default;
                


// Fields

 ::UnityEngine::UIElements::BaseVisualElementPanel __declspec(property(get=__get_m_Panel, put=__set_m_Panel))  m_Panel;

constexpr void __set_m_Panel(::UnityEngine::UIElements::BaseVisualElementPanel value) ;

constexpr ::UnityEngine::UIElements::BaseVisualElementPanel __get_m_Panel() const;

 ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray __declspec(property(get=__get_m_UpdaterArray, put=__set_m_UpdaterArray))  m_UpdaterArray;

constexpr void __set_m_UpdaterArray(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray value) ;

constexpr ::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray __get_m_UpdaterArray() const;


// Methods

// Ctor Parameters [CppParam { name: "panel", ty: "::UnityEngine::UIElements::BaseVisualElementPanel", modifiers: "", def_value: None }]
explicit VisualTreeUpdater(::UnityEngine::UIElements::BaseVisualElementPanel panel) ;

/// @brief Method .ctor addr 0x2c395e0 size 0x7c virtual false final false
 void _ctor(::UnityEngine::UIElements::BaseVisualElementPanel panel) ;

/// @brief Method Dispose addr 0x2c397f4 size 0xcc virtual true final true
 void Dispose() ;

/// @brief Method UpdateVisualTreePhase addr 0x2c398f0 size 0x258 virtual false final false
 void UpdateVisualTreePhase(::UnityEngine::UIElements::VisualTreeUpdatePhase phase) ;

/// @brief Method OnVersionChanged addr 0x2c39b78 size 0xe8 virtual false final false
 void OnVersionChanged(::UnityEngine::UIElements::VisualElement ve, ::UnityEngine::UIElements::VersionChangeType versionChangeType) ;

/// @brief Method SetUpdater addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void SetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase) ;

/// @brief Method GetUpdater addr 0x2c39c60 size 0x18 virtual false final false
 ::UnityEngine::UIElements::IVisualTreeUpdater GetUpdater(::UnityEngine::UIElements::VisualTreeUpdatePhase phase) ;

/// @brief Method SetDefaultUpdaters addr 0x2c396b8 size 0x13c virtual false final false
 void SetDefaultUpdaters() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::UIElements
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::UIElements::VisualTreeUpdater);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::VisualTreeUpdater, "UnityEngine.UIElements", "VisualTreeUpdater");
NEED_NO_BOX(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::UIElements::____UnityEngine__UIElements__VisualTreeUpdater__UpdaterArray, "UnityEngine.UIElements", "VisualTreeUpdater/UpdaterArray");
