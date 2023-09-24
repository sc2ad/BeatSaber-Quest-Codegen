#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__ScriptableObject_def.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine::Rendering {
struct GraphicsDeviceType;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRLoader;
}
// Type: UnityEngine.XR.Management::XRLoader
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(10151))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15891))
// CS Name: UnityEngine.XR.Management.XRLoader
class CORDL_TYPE XRLoader : public UnityEngine::ScriptableObject {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~XRLoader() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRLoader", modifiers: " const&", def_value: None }]
constexpr XRLoader(XRLoader const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRLoader", modifiers: "&&", def_value: None }]
constexpr XRLoader(XRLoader&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRLoader(void* ptr) noexcept : UnityEngine::ScriptableObject(ptr) {
}


  constexpr XRLoader& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRLoader& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRLoader& operator=(XRLoader&& o) noexcept = default;
  constexpr XRLoader& operator=(XRLoader const& o) noexcept = default;
                


// Methods

/// @brief Method Initialize addr 0x2addb00 size 0x8 virtual true final false
 bool Initialize() ;

/// @brief Method Start addr 0x2addb08 size 0x8 virtual true final false
 bool Start() ;

/// @brief Method Stop addr 0x2addb10 size 0x8 virtual true final false
 bool Stop() ;

/// @brief Method Deinitialize addr 0x2addb18 size 0x8 virtual true final false
 bool Deinitialize() ;

/// @brief Method GetLoadedSubsystem addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T GetLoadedSubsystem() ;

/// @brief Method GetSupportedGraphicsDeviceTypes addr 0x2addb20 size 0x70 virtual true final false
 System::Collections::Generic::List_1<UnityEngine::Rendering::GraphicsDeviceType> GetSupportedGraphicsDeviceTypes(bool buildingPlayer) ;

static UnityEngine::XR::Management::XRLoader New_ctor() ;

/// @brief Method .ctor addr 0x2addb90 size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Management
NEED_NO_BOX(UnityEngine::XR::Management::XRLoader);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::Management::XRLoader, "UnityEngine.XR.Management", "XRLoader");
