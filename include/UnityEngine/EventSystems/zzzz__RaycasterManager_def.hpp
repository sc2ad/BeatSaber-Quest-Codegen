#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace {
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::EventSystems {
class BaseRaycaster;
}
// Forward declare root types
namespace UnityEngine::EventSystems {
class RaycasterManager;
}
// Type: UnityEngine.EventSystems::RaycasterManager
namespace UnityEngine::EventSystems {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13147))
// CS Name: UnityEngine.EventSystems.RaycasterManager
class CORDL_TYPE RaycasterManager : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~RaycasterManager() = default;

// Ctor Parameters [CppParam { name: "", ty: "RaycasterManager", modifiers: " const&", def_value: None }]
constexpr RaycasterManager(RaycasterManager const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RaycasterManager", modifiers: "&&", def_value: None }]
constexpr RaycasterManager(RaycasterManager&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RaycasterManager(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RaycasterManager& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RaycasterManager& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RaycasterManager& operator=(RaycasterManager&& o) noexcept = default;
  constexpr RaycasterManager& operator=(RaycasterManager const& o) noexcept = default;
                


// Fields

static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster> __declspec(property(get=__get_s_Raycasters, put=__set_s_Raycasters))  s_Raycasters;

static void __set_s_Raycasters(::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster> value) ;

static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster> __get_s_Raycasters() ;


// Methods

/// @brief Method AddRaycaster addr 0x2c26c04 size 0x114 virtual false final false
static void AddRaycaster(::UnityEngine::EventSystems::BaseRaycaster baseRaycaster) ;

/// @brief Method GetRaycasters addr 0x2c26d18 size 0x58 virtual false final false
static ::System::Collections::Generic::List_1<::UnityEngine::EventSystems::BaseRaycaster> GetRaycasters() ;

/// @brief Method RemoveRaycasters addr 0x2c26d70 size 0xd0 virtual false final false
static void RemoveRaycasters(::UnityEngine::EventSystems::BaseRaycaster baseRaycaster) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::EventSystems
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::EventSystems::RaycasterManager);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::EventSystems::RaycasterManager, "UnityEngine.EventSystems", "RaycasterManager");
