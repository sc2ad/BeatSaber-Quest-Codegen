#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/XR/zzzz__XRMeshSubsystemDescriptor_def.hpp"
#include "UnityEngine/zzzz__IntegratedSubsystem_1_def.hpp"
#include <cstddef>
#include <cstdint>
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::XR {
struct MeshGenerationResult;
}
namespace System {
class IDisposable;
}
// Forward declare root types
namespace UnityEngine::XR {
class XRMeshSubsystem;
}
namespace UnityEngine::XR {
struct UnityEngine__XR__XRMeshSubsystem__MeshTransformList;
}
// Type: ::MeshTransformList
namespace UnityEngine::XR {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15588))
// CS Name: UnityEngine.XR.XRMeshSubsystem::MeshTransformList
struct CORDL_TYPE UnityEngine__XR__XRMeshSubsystem__MeshTransformList : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
/// @brief Convert operator to System::IDisposable
constexpr operator  System::IDisposable() const;

// Ctor Parameters [CppParam { name: "m_Self", ty: "::cordl_internals::intptr_t", modifiers: "", def_value: None }]
constexpr UnityEngine__XR__XRMeshSubsystem__MeshTransformList(::cordl_internals::intptr_t m_Self) noexcept;


                    constexpr UnityEngine__XR__XRMeshSubsystem__MeshTransformList(UnityEngine__XR__XRMeshSubsystem__MeshTransformList const&) = default;
                    constexpr UnityEngine__XR__XRMeshSubsystem__MeshTransformList(UnityEngine__XR__XRMeshSubsystem__MeshTransformList&&) = default;
                    constexpr UnityEngine__XR__XRMeshSubsystem__MeshTransformList& operator=(UnityEngine__XR__XRMeshSubsystem__MeshTransformList const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr UnityEngine__XR__XRMeshSubsystem__MeshTransformList& operator=(UnityEngine__XR__XRMeshSubsystem__MeshTransformList&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x8};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__XR__XRMeshSubsystem__MeshTransformList(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 ::cordl_internals::intptr_t __declspec(property(get=__get_m_Self, put=__set_m_Self))  m_Self;

constexpr void __set_m_Self(::cordl_internals::intptr_t value) ;

constexpr ::cordl_internals::intptr_t __get_m_Self() const;


// Methods

/// @brief Method Dispose addr 0x2d3a940 size 0x3c virtual true final true
 void Dispose() ;

/// @brief Method Dispose addr 0x2d3a97c size 0x3c virtual false final false
static void Dispose(::cordl_internals::intptr_t self) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
// Type: UnityEngine.XR::XRMeshSubsystem
namespace UnityEngine::XR {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(15849)), TypeDefinitionIndex(TypeDefinitionIndex(15582)), GenericInstantiation(GenericInstantiation { tdi: TypeDefinitionIndex(15849), inst: 3780 })}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(15589))
// CS Name: UnityEngine.XR.XRMeshSubsystem
class CORDL_TYPE XRMeshSubsystem : public UnityEngine::IntegratedSubsystem_1<UnityEngine::XR::XRMeshSubsystemDescriptor> {
public:
// Declarations
using MeshTransformList = UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~XRMeshSubsystem() = default;

// Ctor Parameters [CppParam { name: "", ty: "XRMeshSubsystem", modifiers: " const&", def_value: None }]
constexpr XRMeshSubsystem(XRMeshSubsystem const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "XRMeshSubsystem", modifiers: "&&", def_value: None }]
constexpr XRMeshSubsystem(XRMeshSubsystem&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit XRMeshSubsystem(void* ptr) noexcept : UnityEngine::IntegratedSubsystem_1<UnityEngine::XR::XRMeshSubsystemDescriptor>(ptr) {
}


  constexpr XRMeshSubsystem& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr XRMeshSubsystem& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr XRMeshSubsystem& operator=(XRMeshSubsystem&& o) noexcept = default;
  constexpr XRMeshSubsystem& operator=(XRMeshSubsystem const& o) noexcept = default;
                


// Methods

/// @brief Method InvokeMeshReadyDelegate addr 0x2d3a8a0 size 0x58 virtual false final false
 void InvokeMeshReadyDelegate(UnityEngine::XR::MeshGenerationResult result, System::Action_1<UnityEngine::XR::MeshGenerationResult> onMeshGenerationComplete) ;

// Ctor Parameters []
explicit XRMeshSubsystem() ;

/// @brief Method .ctor addr 0x2d3a8f8 size 0x48 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::XR
NEED_NO_BOX(UnityEngine::XR::XRMeshSubsystem);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::XRMeshSubsystem, "UnityEngine.XR", "XRMeshSubsystem");
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::XR::UnityEngine__XR__XRMeshSubsystem__MeshTransformList, "UnityEngine.XR", "XRMeshSubsystem/MeshTransformList");
