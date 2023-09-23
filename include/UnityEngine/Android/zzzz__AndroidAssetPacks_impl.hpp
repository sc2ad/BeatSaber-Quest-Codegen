#pragma once
#include "UnityEngine/zzzz__AndroidJavaProxy_impl.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPacks_def.hpp"
#include "UnityEngine/zzzz__AndroidJavaObject_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackInfo_def.hpp"
#include "System/zzzz__Action_1_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackUseMobileDataRequestResult_def.hpp"
#include "System/zzzz__Action_2_def.hpp"
#include "UnityEngine/Android/zzzz__AndroidAssetPackState_def.hpp"
#include "System/Collections/Generic/zzzz__List_1_def.hpp"
//  Writing Method size for method: UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback::*)(System::Action_1<UnityEngine::Android::AndroidAssetPackInfo>, ::ArrayW<::StringW>)>(&UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback::_ctor)> {
  constexpr static std::size_t size = 0x84;
  constexpr static std::size_t addrs = 0x2b17184;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Android::AndroidAssetPackInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback.onStatusUpdate
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback::*)(::StringW, int32_t, int64_t, int64_t, int32_t, int32_t)>(&UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback::onStatusUpdate)> {
  constexpr static std::size_t size = 0x114;
  constexpr static std::size_t addrs = 0x2b17208;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback>::get(),
                            "onStatusUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback::__set_m_Callback(System::Action_1<UnityEngine::Android::AndroidAssetPackInfo> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::Android::AndroidAssetPackInfo>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::Android::AndroidAssetPackInfo>>(value));
}
constexpr System::Action_1<UnityEngine::Android::AndroidAssetPackInfo> UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback::__get_m_Callback() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::Android::AndroidAssetPackInfo>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback::__set_m_AssetPacks(::ArrayW<::StringW> value)  {
::cordl_internals::setInstanceField<::ArrayW<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<::StringW>>(value));
}
constexpr ::ArrayW<::StringW> UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback::__get_m_AssetPacks() const {
return ::cordl_internals::getInstanceField<::ArrayW<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "callback", ty: "System::Action_1<UnityEngine::Android::AndroidAssetPackInfo>", modifiers: "", def_value: None }, CppParam { name: "assetPacks", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
 UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback(System::Action_1<UnityEngine::Android::AndroidAssetPackInfo> callback, ::ArrayW<::StringW> assetPacks)  : UnityEngine::AndroidJavaProxy(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback>(callback, assetPacks))) {}
 void UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback::_ctor(System::Action_1<UnityEngine::Android::AndroidAssetPackInfo> callback, ::ArrayW<::StringW> assetPacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Android::AndroidAssetPackInfo>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, assetPacks);
}
 void UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback::onStatusUpdate(::StringW assetPackName, int32_t assetPackStatus, int64_t assetPackSize, int64_t assetPackBytesDownloaded, int32_t assetPackTransferProgress, int32_t assetPackErrorCode)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerDownloadStatusCallback>::get(),
                            "onStatusUpdate",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, assetPackName, assetPackStatus, assetPackSize, assetPackBytesDownloaded, assetPackTransferProgress, assetPackErrorCode);
}
//  Writing Method size for method: UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback::*)(System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult>)>(&UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback::_ctor)> {
  constexpr static std::size_t size = 0x80;
  constexpr static std::size_t addrs = 0x2b1731c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback.onMobileDataConfirmationResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback::*)(bool)>(&UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback::onMobileDataConfirmationResult)> {
  constexpr static std::size_t size = 0x8c;
  constexpr static std::size_t addrs = 0x2b1739c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback>::get(),
                            "onMobileDataConfirmationResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback::__set_m_Callback(System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult> value)  {
::cordl_internals::setInstanceField<System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult>>(value));
}
constexpr System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult> UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback::__get_m_Callback() const {
return ::cordl_internals::getInstanceField<System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "callback", ty: "System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult>", modifiers: "", def_value: None }]
 UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback(System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult> callback)  : UnityEngine::AndroidJavaProxy(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback>(callback))) {}
 void UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback::_ctor(System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult> callback)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_1<UnityEngine::Android::AndroidAssetPackUseMobileDataRequestResult>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback);
}
 void UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback::onMobileDataConfirmationResult(bool allowed)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerMobileDataConfirmationCallback>::get(),
                            "onMobileDataConfirmationResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<bool>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, allowed);
}
//  Writing Method size for method: UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::*)(System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>>, ::ArrayW<::StringW>)>(&UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::_ctor)> {
  constexpr static std::size_t size = 0xf8;
  constexpr static std::size_t addrs = 0x2b17428;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback.onStatusResult
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::*)(int64_t, ::ArrayW<::StringW>, ::ArrayW<int32_t>, ::ArrayW<int32_t>)>(&UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::onStatusResult)> {
  constexpr static std::size_t size = 0x37c;
  constexpr static std::size_t addrs = 0x2b17520;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback>::get(),
                            "onStatusResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
    return ___internal_method;
  }
};
constexpr void UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::__set_m_Callback(System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>> value)  {
::cordl_internals::setInstanceField<System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>>>(value));
}
constexpr System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>> UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::__get_m_Callback() const {
return ::cordl_internals::getInstanceField<System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::__set_m_AssetPackNames(System::Collections::Generic::List_1<::StringW> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<::StringW>>(value));
}
constexpr System::Collections::Generic::List_1<::StringW> UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::__get_m_AssetPackNames() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<::StringW>, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::__set_m_States(System::Collections::Generic::List_1<UnityEngine::Android::AndroidAssetPackState> value)  {
::cordl_internals::setInstanceField<System::Collections::Generic::List_1<UnityEngine::Android::AndroidAssetPackState>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<System::Collections::Generic::List_1<UnityEngine::Android::AndroidAssetPackState>>(value));
}
constexpr System::Collections::Generic::List_1<UnityEngine::Android::AndroidAssetPackState> UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::__get_m_States() const {
return ::cordl_internals::getInstanceField<System::Collections::Generic::List_1<UnityEngine::Android::AndroidAssetPackState>, 0x30>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::__set_m_Size(int64_t value)  {
::cordl_internals::setInstanceField<int64_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int64_t>(value));
}
constexpr int64_t UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::__get_m_Size() const {
return ::cordl_internals::getInstanceField<int64_t, 0x38>(this->::bs_hook::Il2CppWrapperType::instance);
}
// Ctor Parameters [CppParam { name: "callback", ty: "System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>>", modifiers: "", def_value: None }, CppParam { name: "assetPacks", ty: "::ArrayW<::StringW>", modifiers: "", def_value: None }]
 UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback(System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>> callback, ::ArrayW<::StringW> assetPacks)  : UnityEngine::AndroidJavaProxy(THROW_UNLESS(::il2cpp_utils::New<UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback>(callback, assetPacks))) {}
 void UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::_ctor(System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>> callback, ::ArrayW<::StringW> assetPacks)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<System::Action_2<uint64_t,::ArrayW<UnityEngine::Android::AndroidAssetPackState>>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, callback, assetPacks);
}
 void UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback::onStatusResult(int64_t totalBytes, ::ArrayW<::StringW> assetPackNames, ::ArrayW<int32_t> assetPackStatuses, ::ArrayW<int32_t> assetPackErrorCodes)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::UnityEngine__Android__AndroidAssetPacks__AssetPackManagerStatusQueryCallback>::get(),
                            "onStatusResult",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int64_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<::StringW>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::ArrayW<int32_t>>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method, totalBytes, assetPackNames, assetPackStatuses, assetPackErrorCodes);
}
//  Writing Method size for method: UnityEngine::Android::AndroidAssetPacks.GetAssetPackManager
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<UnityEngine::AndroidJavaObject (*)()>(&UnityEngine::Android::AndroidAssetPacks::GetAssetPackManager)> {
  constexpr static std::size_t size = 0x318;
  constexpr static std::size_t addrs = 0x2b16e6c;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::AndroidAssetPacks>::get(),
                            "GetAssetPackManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
 void UnityEngine::Android::AndroidAssetPacks::__set_s_JavaPlayAssetDeliveryWrapper(UnityEngine::AndroidJavaObject value)  {
::cordl_internals::setStaticField<UnityEngine::AndroidJavaObject, "s_JavaPlayAssetDeliveryWrapper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::AndroidAssetPacks>::get>(std::forward<UnityEngine::AndroidJavaObject>(value));
}
 UnityEngine::AndroidJavaObject UnityEngine::Android::AndroidAssetPacks::__get_s_JavaPlayAssetDeliveryWrapper()  {
return ::cordl_internals::getStaticField<UnityEngine::AndroidJavaObject, "s_JavaPlayAssetDeliveryWrapper", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::AndroidAssetPacks>::get>();
}
 void UnityEngine::Android::AndroidAssetPacks::__set_s_ApiMissing(bool value)  {
::cordl_internals::setStaticField<bool, "s_ApiMissing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::AndroidAssetPacks>::get>(std::forward<bool>(value));
}
 bool UnityEngine::Android::AndroidAssetPacks::__get_s_ApiMissing()  {
return ::cordl_internals::getStaticField<bool, "s_ApiMissing", ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::AndroidAssetPacks>::get>();
}
 UnityEngine::AndroidJavaObject UnityEngine::Android::AndroidAssetPacks::GetAssetPackManager()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<UnityEngine::Android::AndroidAssetPacks>::get(),
                            "GetAssetPackManager",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<UnityEngine::AndroidJavaObject, false>(nullptr, ___internal_method);
}
