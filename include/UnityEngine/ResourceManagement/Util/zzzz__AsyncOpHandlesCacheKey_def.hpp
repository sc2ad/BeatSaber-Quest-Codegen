#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include <cstdint>
namespace System::Collections::Generic {
template<typename T>
class IList_1;
}
namespace UnityEngine::ResourceManagement::AsyncOperations {
struct AsyncOperationHandle;
}
namespace UnityEngine::ResourceManagement::Util {
class IOperationCacheKey;
}
namespace System::Collections::Generic {
template<typename T>
class HashSet_1;
}
namespace System {
template<typename T>
class IEquatable_1;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::Util {
class AsyncOpHandlesCacheKey;
}
// Type: UnityEngine.ResourceManagement.Util::AsyncOpHandlesCacheKey
namespace UnityEngine::ResourceManagement::Util {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14253))
// CS Name: UnityEngine.ResourceManagement.Util.AsyncOpHandlesCacheKey
class CORDL_TYPE AsyncOpHandlesCacheKey : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief Convert operator to UnityEngine::ResourceManagement::Util::IOperationCacheKey
constexpr operator  UnityEngine::ResourceManagement::Util::IOperationCacheKey() const noexcept;

/// @brief Convert operator to System::IEquatable_1<UnityEngine::ResourceManagement::Util::IOperationCacheKey>
constexpr operator  System::IEquatable_1<UnityEngine::ResourceManagement::Util::IOperationCacheKey>() const noexcept;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x18};

virtual ~AsyncOpHandlesCacheKey() = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOpHandlesCacheKey", modifiers: " const&", def_value: None }]
constexpr AsyncOpHandlesCacheKey(AsyncOpHandlesCacheKey const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AsyncOpHandlesCacheKey", modifiers: "&&", def_value: None }]
constexpr AsyncOpHandlesCacheKey(AsyncOpHandlesCacheKey&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AsyncOpHandlesCacheKey(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AsyncOpHandlesCacheKey& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AsyncOpHandlesCacheKey& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AsyncOpHandlesCacheKey& operator=(AsyncOpHandlesCacheKey&& o) noexcept = default;
  constexpr AsyncOpHandlesCacheKey& operator=(AsyncOpHandlesCacheKey const& o) noexcept = default;
                


// Fields

 System::Collections::Generic::HashSet_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> __declspec(property(get=__get_m_Handles, put=__set_m_Handles))  m_Handles;

constexpr void __set_m_Handles(System::Collections::Generic::HashSet_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> value) ;

constexpr System::Collections::Generic::HashSet_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> __get_m_Handles() const;


// Methods

static UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey New_ctor(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> handles) ;

/// @brief Method .ctor addr 0x2a35748 size 0x90 virtual false final false
 void _ctor(System::Collections::Generic::IList_1<UnityEngine::ResourceManagement::AsyncOperations::AsyncOperationHandle> handles) ;

/// @brief Method GetHashCode addr 0x2a3a520 size 0x20 virtual true final false
 int32_t GetHashCode() ;

/// @brief Method Equals addr 0x2a3a540 size 0x64 virtual true final false
 bool Equals(::bs_hook::Il2CppWrapperType obj) ;

/// @brief Method Equals addr 0x2a3a620 size 0x64 virtual true final true
 bool Equals(UnityEngine::ResourceManagement::Util::IOperationCacheKey other) ;

/// @brief Method Equals addr 0x2a3a5a4 size 0x7c virtual false final false
 bool Equals(UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey other) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::Util
NEED_NO_BOX(UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::ResourceManagement::Util::AsyncOpHandlesCacheKey, "UnityEngine.ResourceManagement.Util", "AsyncOpHandlesCacheKey");
