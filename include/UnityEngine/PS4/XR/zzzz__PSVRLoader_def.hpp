#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoaderHelper_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::XR {
class XRDisplaySubsystemDescriptor;
}
namespace UnityEngine::XR {
class XRInputSubsystemDescriptor;
}
namespace UnityEngine::XR {
class XRDisplaySubsystem;
}
namespace UnityEngine::XR {
class XRInputSubsystem;
}
// Forward declare root types
namespace UnityEngine::PS4::XR {
class PSVRLoader;
}
// Type: UnityEngine.PS4.XR::PSVRLoader
namespace UnityEngine::PS4::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15892))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(16082))
// CS Name: UnityEngine.PS4.XR.PSVRLoader
class CORDL_TYPE PSVRLoader : public UnityEngine::XR::Management::XRLoaderHelper {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~PSVRLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "PSVRLoader", modifiers: " const&", def_value: None }]
constexpr PSVRLoader(PSVRLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "PSVRLoader", modifiers: "&&", def_value: None }]
constexpr PSVRLoader(PSVRLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit PSVRLoader(void* ptr) noexcept : UnityEngine::XR::Management::XRLoaderHelper(ptr) {
}


  constexpr PSVRLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr PSVRLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr PSVRLoader& operator=(PSVRLoader&& o) noexcept = default;
  constexpr PSVRLoader& operator=(PSVRLoader const& o) noexcept = default;
                


// Fields

static System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> __declspec(property(get=__get_s_DisplaySubsystemDescriptors, put=__set_s_DisplaySubsystemDescriptors))  s_DisplaySubsystemDescriptors;

static void __set_s_DisplaySubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> value) ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRDisplaySubsystemDescriptor> __get_s_DisplaySubsystemDescriptors() ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor> __declspec(property(get=__get_s_InputSubsystemDescriptors, put=__set_s_InputSubsystemDescriptors))  s_InputSubsystemDescriptors;

static void __set_s_InputSubsystemDescriptors(System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor> value) ;

static System::Collections::Generic::List_1<UnityEngine::XR::XRInputSubsystemDescriptor> __get_s_InputSubsystemDescriptors() ;

static ::StringW __declspec(property(get=__get_s_DisplayName, put=__set_s_DisplayName))  s_DisplayName;

static void __set_s_DisplayName(::StringW value) ;

static ::StringW __get_s_DisplayName() ;

static ::StringW __declspec(property(get=__get_s_InputName, put=__set_s_InputName))  s_InputName;

static void __set_s_InputName(::StringW value) ;

static ::StringW __get_s_InputName() ;


// Properties

 UnityEngine::XR::XRDisplaySubsystem __declspec(property(get=get_displaySubsystem))  displaySubsystem;

 UnityEngine::XR::XRInputSubsystem __declspec(property(get=get_inputSubsystem))  inputSubsystem;


// Methods

/// @brief Method get_displaySubsystem addr 0x2b07254 size 0x70 virtual false final false
 UnityEngine::XR::XRDisplaySubsystem get_displaySubsystem() ;

/// @brief Method get_inputSubsystem addr 0x2b072c4 size 0x70 virtual false final false
 UnityEngine::XR::XRInputSubsystem get_inputSubsystem() ;

/// @brief Method Initialize addr 0x2b07334 size 0xd4 virtual true final false
 bool Initialize() ;

/// @brief Method Start addr 0x2b07408 size 0x78 virtual true final false
 bool Start() ;

/// @brief Method Stop addr 0x2b07480 size 0x78 virtual true final false
 bool Stop() ;

/// @brief Method Deinitialize addr 0x2b074f8 size 0x78 virtual true final false
 bool Deinitialize() ;

/// @brief Method DisableVRAndEnable2DReprojection addr 0x2b07570 size 0x98 virtual false final false
 bool DisableVRAndEnable2DReprojection() ;

/// @brief Method EnableVRAndDisable2DReprojection addr 0x2b07608 size 0xc4 virtual false final false
 bool EnableVRAndDisable2DReprojection() ;

// Ctor Parameters []
explicit PSVRLoader() ;

/// @brief Method .ctor addr 0x2b076cc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::PS4::XR
NEED_NO_BOX(UnityEngine::PS4::XR::PSVRLoader);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::PS4::XR::PSVRLoader, "UnityEngine.PS4.XR", "PSVRLoader");
