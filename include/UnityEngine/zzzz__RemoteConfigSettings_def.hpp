#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
// Forward declare root types
namespace UnityEngine {
class RemoteConfigSettings;
}
namespace {
// Type: UnityEngine::RemoteConfigSettings
namespace UnityEngine {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15933))
// CS Name: UnityEngine.RemoteConfigSettings
class CORDL_TYPE RemoteConfigSettings : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~RemoteConfigSettings() = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettings", modifiers: " const&", def_value: None }]
constexpr RemoteConfigSettings(RemoteConfigSettings const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "RemoteConfigSettings", modifiers: "&&", def_value: None }]
constexpr RemoteConfigSettings(RemoteConfigSettings&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit RemoteConfigSettings(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr RemoteConfigSettings& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr RemoteConfigSettings& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr RemoteConfigSettings& operator=(RemoteConfigSettings&& o) noexcept = default;
  constexpr RemoteConfigSettings& operator=(RemoteConfigSettings const& o) noexcept = default;
                


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Ptr, put=__set_m_Ptr))  m_Ptr;

constexpr void __set_m_Ptr(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Ptr() const;

 System::Action_1<bool> __declspec(property(get=__get_Updated, put=__set_Updated))  Updated;

constexpr void __set_Updated(System::Action_1<bool> value) ;

constexpr System::Action_1<bool> __get_Updated() const;


// Methods

/// @brief Method RemoteConfigSettingsUpdated addr 0x2d424b4 size 0x34 virtual false final false
static void RemoteConfigSettingsUpdated(UnityEngine::RemoteConfigSettings rcs, bool wasLastUpdatedFromServer) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine
NEED_NO_BOX(::UnityEngine::RemoteConfigSettings);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::RemoteConfigSettings, "UnityEngine", "RemoteConfigSettings");
} // end anonymous namespace
