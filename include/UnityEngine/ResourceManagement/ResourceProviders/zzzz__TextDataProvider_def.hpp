#pragma once
#include "../../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/ResourceManagement/ResourceProviders/zzzz__ResourceProviderBase_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cmath>
#include <cstdint>
namespace {
namespace UnityEngine::ResourceManagement::ResourceProviders {
struct ProvideHandle;
}
namespace System {
class Type;
}
namespace UnityEngine {
class AsyncOperation;
}
namespace UnityEngine::ResourceManagement {
class WebRequestQueueOperation;
}
namespace System {
class Exception;
}
namespace UnityEngine::Networking {
class UnityWebRequestAsyncOperation;
}
// Forward declare root types
namespace UnityEngine::ResourceManagement::ResourceProviders {
class TextDataProvider;
}
namespace UnityEngine::ResourceManagement::ResourceProviders {
class ____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp;
}
// Type: ::InternalOp
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14299))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider::InternalOp
class CORDL_TYPE ____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x48};

virtual ~____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp() = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp", modifiers: " const&", def_value: None }]
constexpr ____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp(____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp", modifiers: "&&", def_value: None }]
constexpr ____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp(____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit ____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr ____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr ____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr ____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp& operator=(____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp&& o) noexcept = default;
  constexpr ____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp& operator=(____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp const& o) noexcept = default;
                


// Fields

 ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider __declspec(property(get=__get_m_Provider, put=__set_m_Provider))  m_Provider;

constexpr void __set_m_Provider(::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider __get_m_Provider() const;

 ::UnityEngine::Networking::UnityWebRequestAsyncOperation __declspec(property(get=__get_m_RequestOperation, put=__set_m_RequestOperation))  m_RequestOperation;

constexpr void __set_m_RequestOperation(::UnityEngine::Networking::UnityWebRequestAsyncOperation value) ;

constexpr ::UnityEngine::Networking::UnityWebRequestAsyncOperation __get_m_RequestOperation() const;

 ::UnityEngine::ResourceManagement::WebRequestQueueOperation __declspec(property(get=__get_m_RequestQueueOperation, put=__set_m_RequestQueueOperation))  m_RequestQueueOperation;

constexpr void __set_m_RequestQueueOperation(::UnityEngine::ResourceManagement::WebRequestQueueOperation value) ;

constexpr ::UnityEngine::ResourceManagement::WebRequestQueueOperation __get_m_RequestQueueOperation() const;

 ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle __declspec(property(get=__get_m_PI, put=__set_m_PI))  m_PI;

constexpr void __set_m_PI(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle value) ;

constexpr ::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle __get_m_PI() const;

 bool __declspec(property(get=__get_m_IgnoreFailures, put=__set_m_IgnoreFailures))  m_IgnoreFailures;

constexpr void __set_m_IgnoreFailures(bool value) ;

constexpr bool __get_m_IgnoreFailures() const;

 bool __declspec(property(get=__get_m_Complete, put=__set_m_Complete))  m_Complete;

constexpr void __set_m_Complete(bool value) ;

constexpr bool __get_m_Complete() const;

 int32_t __declspec(property(get=__get_m_Timeout, put=__set_m_Timeout))  m_Timeout;

constexpr void __set_m_Timeout(int32_t value) ;

constexpr int32_t __get_m_Timeout() const;


// Methods

/// @brief Method GetPercentComplete addr 0x2a42a58 size 0x18 virtual false final false
 float_t GetPercentComplete() ;

/// @brief Method Start addr 0x2a42674 size 0x3e4 virtual false final false
 void Start(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle, ::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider rawProvider) ;

/// @brief Method WaitForCompletionHandler addr 0x2a42b68 size 0x74 virtual false final false
 bool WaitForCompletionHandler() ;

/// @brief Method RequestOperation_completed addr 0x2a42bdc size 0x1ac virtual false final false
 void RequestOperation_completed(::UnityEngine::AsyncOperation op) ;

/// @brief Method CompleteOperation addr 0x2a42d88 size 0xac virtual false final false
 void CompleteOperation(::StringW text, ::System::Exception exception) ;

/// @brief Method ConvertText addr 0x2a42a70 size 0xf8 virtual false final false
 ::bs_hook::Il2CppWrapperType ConvertText(::StringW text) ;

/// @brief Method SendWebRequest addr 0x2a42e34 size 0x284 virtual true final false
 void SendWebRequest(::StringW path) ;

// Ctor Parameters []
explicit ____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp() ;

/// @brief Method .ctor addr 0x2a4266c size 0x8 virtual false final false
 void _ctor() ;

/// @brief Method <SendWebRequest>b__13_0 addr 0x2a430b8 size 0x98 virtual false final false
 void _SendWebRequest_b__13_0(::UnityEngine::Networking::UnityWebRequestAsyncOperation asyncOperation) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
// Type: UnityEngine.ResourceManagement.ResourceProviders::TextDataProvider
namespace UnityEngine::ResourceManagement::ResourceProviders {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14294))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14300))
// CS Name: UnityEngine.ResourceManagement.ResourceProviders.TextDataProvider
class CORDL_TYPE TextDataProvider : public ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase {
public:
// Declarations
using InternalOp = ::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x20};

virtual ~TextDataProvider() = default;

// Ctor Parameters [CppParam { name: "", ty: "TextDataProvider", modifiers: " const&", def_value: None }]
constexpr TextDataProvider(TextDataProvider const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "TextDataProvider", modifiers: "&&", def_value: None }]
constexpr TextDataProvider(TextDataProvider&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit TextDataProvider(void* ptr) noexcept : ::UnityEngine::ResourceManagement::ResourceProviders::ResourceProviderBase(ptr) {
}


  constexpr TextDataProvider& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr TextDataProvider& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr TextDataProvider& operator=(TextDataProvider&& o) noexcept = default;
  constexpr TextDataProvider& operator=(TextDataProvider const& o) noexcept = default;
                


// Fields

 bool __declspec(property(get=__get__IgnoreFailures_k__BackingField, put=__set__IgnoreFailures_k__BackingField))  _IgnoreFailures_k__BackingField;

constexpr void __set__IgnoreFailures_k__BackingField(bool value) ;

constexpr bool __get__IgnoreFailures_k__BackingField() const;


// Properties

 bool __declspec(property(get=get_IgnoreFailures, put=set_IgnoreFailures))  IgnoreFailures;


// Methods

/// @brief Method get_IgnoreFailures addr 0x2a425c0 size 0x8 virtual false final false
 bool get_IgnoreFailures() ;

/// @brief Method set_IgnoreFailures addr 0x2a425c8 size 0xc virtual false final false
 void set_IgnoreFailures(bool value) ;

/// @brief Method Convert addr 0x2a425d4 size 0x8 virtual true final false
 ::bs_hook::Il2CppWrapperType Convert(::System::Type type, ::StringW text) ;

/// @brief Method Provide addr 0x2a425dc size 0x90 virtual true final false
 void Provide(::UnityEngine::ResourceManagement::ResourceProviders::ProvideHandle provideHandle) ;

// Ctor Parameters []
explicit TextDataProvider() ;

/// @brief Method .ctor addr 0x2a3fdcc size 0x8 virtual false final false
 void _ctor() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::ResourceManagement::ResourceProviders
} // end anonymous namespace
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::TextDataProvider, "UnityEngine.ResourceManagement.ResourceProviders", "TextDataProvider");
NEED_NO_BOX(::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp);
DEFINE_IL2CPP_ARG_TYPE(::UnityEngine::ResourceManagement::ResourceProviders::____UnityEngine__ResourceManagement__ResourceProviders__TextDataProvider__InternalOp, "UnityEngine.ResourceManagement.ResourceProviders", "TextDataProvider/InternalOp");
