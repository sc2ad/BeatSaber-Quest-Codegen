#pragma once
#include "../../cordl_internals/cordl_internals.hpp"
#include "UnityEngine/zzzz__AndroidJavaProxy_def.hpp"
#include "beatsaber-hook/shared/utils/base-wrapper-type.hpp"
#include "beatsaber-hook/shared/utils/typedefs-array.hpp"
#include "beatsaber-hook/shared/utils/typedefs-string.hpp"
#include <cstdint>
namespace UnityEngine {
class AndroidJavaObject;
}
namespace UnityEngine::Android {
class AndroidAssetPackInfo;
}
namespace System {
template<typename T>
class Action_1;
}
namespace UnityEngine::Android {
class AndroidAssetPackUseMobileDataRequestResult;
}
namespace System {
template<typename T1,typename T2>
class Action_2;
}
namespace UnityEngine::Android {
class AndroidAssetPackState;
}
namespace System::Collections::Generic {
template<typename T>
class List_1;
}
// Forward declare root types
namespace UnityEngine::Android {
class AndroidAssetPacks;
}
namespace UnityEngine::Android {
class UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback;
}
namespace UnityEngine::Android {
class UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback;
}
namespace UnityEngine::Android {
class UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback;
}
// Type: ::AssetPackManagerDownloadStatusCallback
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14880))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14893))
// CS Name: UnityEngine.Android.AndroidAssetPacks::AssetPackManagerDownloadStatusCallback
class CORDL_TYPE UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback : public UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x30};

virtual ~UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback(UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback(UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback(void* ptr) noexcept : UnityEngine::AndroidJavaProxy(ptr) {
}


  constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback& operator=(UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback&& o) noexcept = default;
  constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback& operator=(UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback const& o) noexcept = default;
                


// Fields

 System::Action_1<UnityEngine::Android::AndroidAssetPackInfo> __declspec(property(get=__get_m_Callback, put=__set_m_Callback))  m_Callback;

constexpr void __set_m_Callback(System::Action_1<UnityEngine::Android::AndroidAssetPackInfo> value) ;

constexpr System::Action_1<UnityEngine::Android::AndroidAssetPackInfo> __get_m_Callback() const;

 ::ArrayW<::StringW> __declspec(property(get=__get_m_AssetPacks, put=__set_m_AssetPacks))  m_AssetPacks;

constexpr void __set_m_AssetPacks(::ArrayW<::StringW> value) ;

constexpr ::ArrayW<::StringW> __get_m_AssetPacks() const;


// Methods

// Ctor Parameters [CppParam { name: "callback", ty: "System::Action_1<UnityEngine::Android::AndroidAssetPackInfo>", modifiers: "", def_value: None }, CppParam { name: "assetPacks", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
explicit UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback(System::Action_1<UnityEngine::Android::AndroidAssetPackInfo> callback, ::ArrayW<::StringW> assetPacks) ;

/// @brief Method .ctor addr 0x2b17184 size 0x84 virtual false final false
 void _ctor(System::Action_1<UnityEngine::Android::AndroidAssetPackInfo> callback, ::ArrayW<::StringW> assetPacks) ;

/// @brief Method onStatusUpdate addr 0x2b17208 size 0x114 virtual false final false
 void onStatusUpdate(::StringW assetPackName, int32_t assetPackStatus, int64_t assetPackSize, int64_t assetPackBytesDownloaded, int32_t assetPackTransferProgress, int32_t assetPackErrorCode) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Android
// Type: ::AssetPackManagerMobileDataConfirmationCallback
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14880))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14894))
// CS Name: UnityEngine.Android.AndroidAssetPacks::AssetPackManagerMobileDataConfirmationCallback
class CORDL_TYPE UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback : public UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x28};

virtual ~UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback(UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback(UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback(void* ptr) noexcept : UnityEngine::AndroidJavaProxy(ptr) {
}


  constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback& operator=(UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback&& o) noexcept = default;
  constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback& operator=(UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback const& o) noexcept = default;
                


// Fields

 System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult> __declspec(property(get=__get_m_Callback, put=__set_m_Callback))  m_Callback;

constexpr void __set_m_Callback(System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult> value) ;

constexpr System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult> __get_m_Callback() const;


// Methods

// Ctor Parameters [CppParam { name: "callback", ty: "System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult>", modifiers: "", def_value: None }]
explicit UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback(System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult> callback) ;

/// @brief Method .ctor addr 0x2b1731c size 0x80 virtual false final false
 void _ctor(System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult> callback) ;

/// @brief Method onMobileDataConfirmationResult addr 0x2b1739c size 0x8c virtual false final false
 void onMobileDataConfirmationResult(bool allowed) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Android
// Type: ::AssetPackManagerStatusQueryCallback
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {TypeDefinitionIndex(TypeDefinitionIndex(14880))}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14895))
// CS Name: UnityEngine.Android.AndroidAssetPacks::AssetPackManagerStatusQueryCallback
class CORDL_TYPE UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback : public UnityEngine::AndroidJavaProxy {
public:
// Declarations
/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x40};

virtual ~UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback() = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback", modifiers: " const&", def_value: None }]
constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback(UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback", modifiers: "&&", def_value: None }]
constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback(UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback(void* ptr) noexcept : UnityEngine::AndroidJavaProxy(ptr) {
}


  constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback& operator=(UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback&& o) noexcept = default;
  constexpr UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback& operator=(UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback const& o) noexcept = default;
                


// Fields

 System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>> __declspec(property(get=__get_m_Callback, put=__set_m_Callback))  m_Callback;

constexpr void __set_m_Callback(System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>> value) ;

constexpr System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>> __get_m_Callback() const;

 System::Collections::Generic::List_1<::StringW> __declspec(property(get=__get_m_AssetPackNames, put=__set_m_AssetPackNames))  m_AssetPackNames;

constexpr void __set_m_AssetPackNames(System::Collections::Generic::List_1<::StringW> value) ;

constexpr System::Collections::Generic::List_1<::StringW> __get_m_AssetPackNames() const;

 System::Collections::Generic::List_1<UnityEngine::Android::AndroidAssetPackState> __declspec(property(get=__get_m_States, put=__set_m_States))  m_States;

constexpr void __set_m_States(System::Collections::Generic::List_1<UnityEngine::Android::AndroidAssetPackState> value) ;

constexpr System::Collections::Generic::List_1<UnityEngine::Android::AndroidAssetPackState> __get_m_States() const;

 int64_t __declspec(property(get=__get_m_Size, put=__set_m_Size))  m_Size;

constexpr void __set_m_Size(int64_t value) ;

constexpr int64_t __get_m_Size() const;


// Methods

// Ctor Parameters [CppParam { name: "callback", ty: "System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>>", modifiers: "", def_value: None }, CppParam { name: "assetPacks", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
explicit UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback(System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>> callback, ::ArrayW<::StringW> assetPacks) ;

/// @brief Method .ctor addr 0x2b17428 size 0xf8 virtual false final false
 void _ctor(System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>> callback, ::ArrayW<::StringW> assetPacks) ;

/// @brief Method onStatusResult addr 0x2b17520 size 0x37c virtual false final false
 void onStatusResult(int64_t totalBytes, ::ArrayW<::StringW> assetPackNames, ::ArrayW<int32_t> assetPackStatuses, ::ArrayW<int32_t> assetPackErrorCodes) ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Android
// Type: UnityEngine.Android::AndroidAssetPacks
namespace UnityEngine::Android {
// Is value type: false
// Dependencies: {}
// Self: TypeDefinitionIndex(TypeDefinitionIndex(14896))
// CS Name: UnityEngine.Android.AndroidAssetPacks
class CORDL_TYPE AndroidAssetPacks : public ::bs_hook::Il2CppWrapperType {
public:
// Declarations
using AssetPackManagerStatusQueryCallback = UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback;

using AssetPackManagerMobileDataConfirmationCallback = UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback;

using AssetPackManagerDownloadStatusCallback = UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback;

/// @brief The size of the true reference type
static constexpr auto  __CORDL_REFERENCE_TYPE_SIZE{0x10};

virtual ~AndroidAssetPacks() = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPacks", modifiers: " const&", def_value: None }]
constexpr AndroidAssetPacks(AndroidAssetPacks const& ) noexcept = default;

// Ctor Parameters [CppParam { name: "", ty: "AndroidAssetPacks", modifiers: "&&", def_value: None }]
constexpr AndroidAssetPacks(AndroidAssetPacks&& ) noexcept = default;

// Ctor Parameters [CppParam { name: "ptr", ty: "void*", modifiers: "", def_value: None }]
constexpr explicit AndroidAssetPacks(void* ptr) noexcept : ::bs_hook::Il2CppWrapperType(ptr) {
}


  constexpr AndroidAssetPacks& operator=(std::nullptr_t) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = nullptr;
    return *this;
  };

  constexpr AndroidAssetPacks& operator=(void* o) noexcept {
    this->::bs_hook::Il2CppWrapperType::instance = o;
    return *this;
  };

  constexpr AndroidAssetPacks& operator=(AndroidAssetPacks&& o) noexcept = default;
  constexpr AndroidAssetPacks& operator=(AndroidAssetPacks const& o) noexcept = default;
                


// Fields

static UnityEngine::AndroidJavaObject __declspec(property(get=__get_s_JavaPlayAssetDeliveryWrapper, put=__set_s_JavaPlayAssetDeliveryWrapper))  s_JavaPlayAssetDeliveryWrapper;

static void __set_s_JavaPlayAssetDeliveryWrapper(UnityEngine::AndroidJavaObject value) ;

static UnityEngine::AndroidJavaObject __get_s_JavaPlayAssetDeliveryWrapper() ;

static bool __declspec(property(get=__get_s_ApiMissing, put=__set_s_ApiMissing))  s_ApiMissing;

static void __set_s_ApiMissing(bool value) ;

static bool __get_s_ApiMissing() ;


// Methods

/// @brief Method GetAssetPackManager addr 0x2b16e6c size 0x318 virtual false final false
static UnityEngine::AndroidJavaObject GetAssetPackManager() ;

static constexpr bool __CORDL_IS_VALUE_TYPE = false;
};
// Non member Declarations
} // namespace end def UnityEngine::Android
NEED_NO_BOX(UnityEngine::Android::AndroidAssetPacks);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Android::AndroidAssetPacks, "UnityEngine.Android", "AndroidAssetPacks");
NEED_NO_BOX(UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerDownloadStatusCallback");
NEED_NO_BOX(UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerMobileDataConfirmationCallback");
NEED_NO_BOX(UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback);
DEFINE_IL2CPP_ARG_TYPE(UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback, "UnityEngine.Android", "AndroidAssetPacks/AssetPackManagerStatusQueryCallback");
