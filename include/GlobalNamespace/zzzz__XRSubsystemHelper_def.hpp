#pragma once
#include "../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR {
class XRDisplaySubsystem;
}
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
// Forward declare root types
namespace GlobalNamespace {
class XRSubsystemHelper;
}
// Type: ::XRSubsystemHelper
namespace GlobalNamespace {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(13941))
// CS Name: XRSubsystemHelper
class CORDL_TYPE XRSubsystemHelper : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~XRSubsystemHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRSubsystemHelper", modifiers: " const&", def_value: None }]
constexpr XRSubsystemHelper(XRSubsystemHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRSubsystemHelper", modifiers: "&&", def_value: None }]
constexpr XRSubsystemHelper(XRSubsystemHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRSubsystemHelper(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr XRSubsystemHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRSubsystemHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRSubsystemHelper& operator=(XRSubsystemHelper&& o) noexcept = default;
  constexpr XRSubsystemHelper& operator=(XRSubsystemHelper const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystem> __declspec(property(get=__get_s_displaySubsystems, put=__set_s_displaySubsystems))  s_displaySubsystems;

static void __set_s_displaySubsystems(System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystem> value) ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystem> __get_s_displaySubsystems() ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> __declspec(property(get=__get_s_displaySubsystemDescriptors, put=__set_s_displaySubsystemDescriptors))  s_displaySubsystemDescriptors;

static void __set_s_displaySubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> value) ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> __get_s_displaySubsystemDescriptors() ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystem> __declspec(property(get=__get_s_inputSubsystems, put=__set_s_inputSubsystems))  s_inputSubsystems;

static void __set_s_inputSubsystems(System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystem> value) ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystem> __get_s_inputSubsystems() ;


// Methods

/// @brief Method GetCurrentDisplaySubsystem addr 0x1f8eeb8 size 0x140 virtual false final false
static UnityEngine::XR::XRDisplaySubsystem GetCurrentDisplaySubsystem() ;

/// @brief Method GetCurrentDisplaySubsystemDescriptor addr 0x1f8eff8 size 0x138 virtual false final false
static UnityEngine::XR::XRDisplaySubsystemDescriptor GetCurrentDisplaySubsystemDescriptor() ;

/// @brief Method GetCurrentInputSubsystem addr 0x1f8f130 size 0x138 virtual false final false
static UnityEngine::XR::XRInputSubsystem GetCurrentInputSubsystem() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def GlobalNamespace
NEED_NO_BOX(GlobalNamespace::XRSubsystemHelper);
DEFINE_IL2CPP_ARG_TYPE(GlobalNamespace::XRSubsystemHelper, "", "XRSubsystemHelper");
