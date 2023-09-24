#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cmath>
#include <cstddef>
#include <cstdint>
namespace System {
class Exception;
}
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace System {
template<typename TResult>
class Func_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct DownloadStatus;
}
namespace System {
class Type;
}
namespace UnityEngine::ResourceManagement {
class ResourceManager;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
class IGenericProviderOperation;
}
namespace UnityEngine::ResourceManagement::ResourceLocations {
class IResourceLocation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
// Type: UnityEngine.ResourceManagement.ResourceProviders::ProvideHandle
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: true
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(2638))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14283))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.ProvideHandle
struct CORDL_TYPE ProvideHandle : public ::bs_hook::ValueTypeWrapper {
public:
// Declarations
// Ctor Parameters [CppParam { name: "m_Version", ty: "int32_t", modifiers: "", def_value: None }, CppParam { name: "m_InternalOp", ty: "UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation", modifiers: "", def_value: None }, CppParam { name: "m_ResourceManager", ty: "UnityEngine::ResourceManagement::ResourceManager", modifiers: "", def_value: None }]
constexpr ProvideHandle(int32_t m_Version, UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation m_InternalOp, UnityEngine::ResourceManagement::ResourceManager m_ResourceManager) noexcept;


                    constexpr ProvideHandle(ProvideHandle const&) = default;
                    constexpr ProvideHandle(ProvideHandle&&) = default;
                    constexpr ProvideHandle& operator=(ProvideHandle const& o) {
                        __instance = o.__instance;
                        return *this;
                    };
                    constexpr ProvideHandle& operator=(ProvideHandle&& o) noexcept {
                        __instance = std::move(o.__instance);
                        return *this;
                    };
                

/// @brief The size of the true value type
static constexpr auto  __CORDL_VALUE_TYPE_SIZE{0x18};

/// @brief Holds the value type data
 std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>  __instance;

// Ctor Parameters [CppParam { name: "instance", ty: "std::array<std::byte, __CORDL_VALUE_TYPE_SIZE>", modifiers: "", def_value: None }]
constexpr explicit ProvideHandle(std::array<std::byte, __CORDL_VALUE_TYPE_SIZE> instance) noexcept : ::bs_hook::ValueTypeWrapper(),__instance(std::move(instance)) {
}

/// @brief conversion method for value type
constexpr void* convert() const noexcept {
return const_cast<void*>(static_cast<const void*>(__instance.data()));
}


// Fields

 int32_t __declspec(property(get=__get_m_Version, put=__set_m_Version))  m_Version;

constexpr void __set_m_Version(int32_t value) ;

constexpr int32_t __get_m_Version() const;

 UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation __declspec(property(get=__get_m_InternalOp, put=__set_m_InternalOp))  m_InternalOp;

constexpr void __set_m_InternalOp(UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation value) ;

constexpr UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation __get_m_InternalOp() const;

 UnityEngine::ResourceManagement::ResourceManager __declspec(property(get=__get_m_ResourceManager, put=__set_m_ResourceManager))  m_ResourceManager;

constexpr void __set_m_ResourceManager(UnityEngine::ResourceManagement::ResourceManager value) ;

constexpr UnityEngine::ResourceManagement::ResourceManager __get_m_ResourceManager() const;


// Properties

 UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation __declspec(property(get=get_InternalOp))  InternalOp;

 UnityEngine::ResourceManagement::ResourceManager __declspec(property(get=get_ResourceManager))  ResourceManager;

 System::Type __declspec(property(get=get_Type))  Type;

 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation __declspec(property(get=get_Location))  Location;

 int32_t __declspec(property(get=get_DependencyCount))  DependencyCount;


// Methods

/// @brief Method .ctor addr 0x2a3f818 size 0xbc virtual false final false
 void _ctor(UnityEngine::ResourceManagement::ResourceManager rm, UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation op) ;

/// @brief Method get_InternalOp addr 0x2a3f8d4 size 0x104 virtual false final false
 UnityEngine::ResourceManagement::AsyncOperations::IGenericProviderOperation get_InternalOp() ;

/// @brief Method get_ResourceManager addr 0x2a3f9d8 size 0x8 virtual false final false
 UnityEngine::ResourceManagement::ResourceManager get_ResourceManager() ;

/// @brief Method get_Type addr 0x2a3ed80 size 0xac virtual false final false
 System::Type get_Type() ;

/// @brief Method get_Location addr 0x2a3c214 size 0xac virtual false final false
 UnityEngine::ResourceManagement::ResourceLocations::IResourceLocation get_Location() ;

/// @brief Method get_DependencyCount addr 0x2a3f9e0 size 0xac virtual false final false
 int32_t get_DependencyCount() ;

/// @brief Method GetDependency addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename TDepObject>
 TDepObject GetDependency(int32_t index) ;

/// @brief Method GetDependencies addr 0x2a3e964 size 0xb4 virtual false final false
 void GetDependencies(System::Collections::Generic::IList_1<::bs_hook::Il2CppWrapperType> list) ;

/// @brief Method SetProgressCallback addr 0x2a3ca60 size 0xb4 virtual false final false
 void SetProgressCallback(System::Func_1<float_t> callback) ;

/// @brief Method SetDownloadProgressCallbacks addr 0x2a3cb14 size 0xb4 virtual false final false
 void SetDownloadProgressCallbacks(System::Func_1<UnityEngine::ResourceManagement::AsyncOperations::DownloadStatus> callback) ;

/// @brief Method SetWaitForCompletionCallback addr 0x2a3cbc8 size 0xb4 virtual false final false
 void SetWaitForCompletionCallback(System::Func_1<bool> callback) ;

/// @brief Method Complete addr 0x0 size 0xffffffffffffffff virtual false final false
template<typename T>
 void Complete(T result, bool status, System::Exception exception) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = true;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle, "UnityEngine.ResourceManagement.ResourceProviders", "ProvideHandle");
