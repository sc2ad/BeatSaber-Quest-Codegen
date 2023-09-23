#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/Management/zzzz__XRLoader_def.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
namespace UnityEngine {
class ISubsystem;
}
namespace System {
class Type;
}
namespace System::Collections::Generic {
template<typename TKey,typename TValue>
class Dictionary_2;
}
// Forward declare root types
namespace UnityEngine::XR::Management {
class XRLoaderHelper;
}
// Type: UnityEngine.XR.Management::XRLoaderHelper
namespace UnityEngine::XR::Management {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15891))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15892))
// CS Name: UnityEngine.XR.Management.XRLoaderHelper
class CORDL_TYPE XRLoaderHelper : public UnityEngine::XR::Management::XRLoader {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XRLoaderHelper() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRLoaderHelper", modifiers: " const&", def_value: None }]
constexpr XRLoaderHelper(XRLoaderHelper const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRLoaderHelper", modifiers: "&&", def_value: None }]
constexpr XRLoaderHelper(XRLoaderHelper&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRLoaderHelper(void* ptr) noexcept : UnityEngine::XR::Management::XRLoader(ptr) {
}


  constexpr XRLoaderHelper& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRLoaderHelper& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRLoaderHelper& operator=(XRLoaderHelper&& o) noexcept = default;
  constexpr XRLoaderHelper& operator=(XRLoaderHelper const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::Dictionary_2<System::Type,UnityEngine::ISubsystem> __declspec(property(get=__get_m_SubsystemInstanceMap, put=__set_m_SubsystemInstanceMap))  m_SubsystemInstanceMap;

constexpr void __set_m_SubsystemInstanceMap(System::Collections::Generic::Dictionary_2<System::Type,UnityEngine::ISubsystem> value) ;

constexpr System::Collections::Generic::Dictionary_2<System::Type,UnityEngine::ISubsystem> __get_m_SubsystemInstanceMap() const;


// Methods

/// @brief Method GetLoadedSubsystem addr 0x0 size 0xffffffffffffffff virtual true final false
template<typename T>
 T GetLoadedSubsystem() ;

/// @brief Method StartSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void StartSubsystem() ;

/// @brief Method StopSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void StopSubsystem() ;

/// @brief Method DestroySubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void DestroySubsystem() ;

/// @brief Method CreateSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDescriptor,typename TSubsystem>
 void CreateSubsystem(System::Collections::Generic::List_1<TDescriptor> descriptors, ::StringW id) ;

/// @brief Method CreateIntegratedSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDescriptor,typename TSubsystem>
 void CreateIntegratedSubsystem(System::Collections::Generic::List_1<TDescriptor> descriptors, ::StringW id) ;

/// @brief Method CreateStandaloneSubsystem addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDescriptor,typename TSubsystem>
 void CreateStandaloneSubsystem(System::Collections::Generic::List_1<TDescriptor> descriptors, ::StringW id) ;

/// @brief Method Deinitialize addr 0x2addb98 size 0x58 virtual true final false
 bool Deinitialize() ;

// Ctor Parameters []
explicit XRLoaderHelper() ;

/// @brief Method .ctor addr 0x2addbf0 size 0x7c virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR::Management
NEED_NO_BOX(UnityEngine::XR::Management::XRLoaderHelper);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::Management::XRLoaderHelper, "UnityEngine.XR.Management", "XRLoaderHelper");
