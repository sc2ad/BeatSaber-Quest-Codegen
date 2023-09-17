#pragma once
namespace {
#include "UnityEngine/AddressableAssets/Utility/zzzz__DiagnosticInfo_def.hpp"
#include "UnityEngine/ResourceManagement/Diagnostics/zzzz__DiagnosticEvent_def.hpp"
#include "UnityEngine/ResourceManagement/zzzz__ResourceManager_def.hpp"
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo.CreateEvent
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent (::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::*)(::StringW, ::UnityEngine::ResourceManagement::____UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType, int32_t, int32_t)>(&::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::CreateEvent)> {
  constexpr static std::size_t size = 0x44;
  constexpr static std::size_t addrs = 0x2896e00;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::DiagnosticInfo>::get(),
                            "CreateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::____UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::*)()>(&::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::_ctor)> {
  constexpr static std::size_t size = 0x8;
  constexpr static std::size_t addrs = 0x2896e44;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::DiagnosticInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__set_DisplayName(::StringW value)  {
::cordl_internals::setInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::StringW>(value));
}
constexpr ::StringW ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__get_DisplayName() const {
return ::cordl_internals::getInstanceField<::StringW, 0x10>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__set_ObjectId(int32_t value)  {
::cordl_internals::setInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<int32_t>(value));
}
constexpr int32_t ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__get_ObjectId() const {
return ::cordl_internals::getInstanceField<int32_t, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__set_Dependencies(::ArrayW<int32_t> value)  {
::cordl_internals::setInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::ArrayW<int32_t>>(value));
}
constexpr ::ArrayW<int32_t> ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::__get_Dependencies() const {
return ::cordl_internals::getInstanceField<::ArrayW<int32_t>, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
 ::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::CreateEvent(::StringW category, ::UnityEngine::ResourceManagement::____UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType eventType, int32_t frame, int32_t val)  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::DiagnosticInfo>::get(),
                            "CreateEvent",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::StringW>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<::UnityEngine::ResourceManagement::____UnityEngine__ResourceManagement__ResourceManager__DiagnosticEventType>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get(), ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_type<int32_t>::get()}
                        )));
return ::cordl_internals::RunMethodRethrow<::UnityEngine::ResourceManagement::Diagnostics::DiagnosticEvent, false>(const_cast<void*>(instance), ___internal_method, category, eventType, frame, val);
}
// Ctor Parameters []
 ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::DiagnosticInfo()  : ::bs_hook::Il2CppWrapperType(THROW_UNLESS(::il2cpp_utils::New<DiagnosticInfo>())) {}
 void ::UnityEngine::AddressableAssets::Utility::DiagnosticInfo::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::UnityEngine::AddressableAssets::Utility::DiagnosticInfo>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
