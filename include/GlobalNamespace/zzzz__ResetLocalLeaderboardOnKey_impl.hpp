#pragma once
#include "UnityEngine/zzzz__MonoBehaviour_impl.hpp"
namespace {
#include "GlobalNamespace/zzzz__ResetLocalLeaderboardOnKey_def.hpp"
#include "UnityEngine/zzzz__KeyCode_def.hpp"
#include "GlobalNamespace/zzzz__LocalLeaderboardsModel_def.hpp"
#include "GlobalNamespace/zzzz__ISaveData_def.hpp"
//  Writing Method size for method: ::GlobalNamespace::ResetLocalLeaderboardOnKey.Update
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetLocalLeaderboardOnKey::*)()>(&::GlobalNamespace::ResetLocalLeaderboardOnKey::Update)> {
  constexpr static std::size_t size = 0x40;
  constexpr static std::size_t addrs = 0x2229bc8;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetLocalLeaderboardOnKey>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
//  Writing Method size for method: ::GlobalNamespace::ResetLocalLeaderboardOnKey._ctor
template<>

struct ::il2cpp_utils::il2cpp_type_check::MetadataGetter<static_cast<void (::GlobalNamespace::ResetLocalLeaderboardOnKey::*)()>(&::GlobalNamespace::ResetLocalLeaderboardOnKey::_ctor)> {
  constexpr static std::size_t size = 0x10;
  constexpr static std::size_t addrs = 0x2229c08;

  inline static const ::MethodInfo* methodInfo() {
    static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetLocalLeaderboardOnKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
    return ___internal_method;
  }
};
constexpr void ::GlobalNamespace::ResetLocalLeaderboardOnKey::__set__localLeaderboardsModel(::GlobalNamespace::LocalLeaderboardsModel value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::LocalLeaderboardsModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::LocalLeaderboardsModel>(value));
}
constexpr ::GlobalNamespace::LocalLeaderboardsModel ::GlobalNamespace::ResetLocalLeaderboardOnKey::__get__localLeaderboardsModel() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::LocalLeaderboardsModel, 0x18>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ResetLocalLeaderboardOnKey::__set__keyCode(::UnityEngine::KeyCode value)  {
::cordl_internals::setInstanceField<::UnityEngine::KeyCode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::UnityEngine::KeyCode>(value));
}
constexpr ::UnityEngine::KeyCode ::GlobalNamespace::ResetLocalLeaderboardOnKey::__get__keyCode() const {
return ::cordl_internals::getInstanceField<::UnityEngine::KeyCode, 0x20>(this->::bs_hook::Il2CppWrapperType::instance);
}
constexpr void ::GlobalNamespace::ResetLocalLeaderboardOnKey::__set__saveData(::GlobalNamespace::ISaveData value)  {
::cordl_internals::setInstanceField<::GlobalNamespace::ISaveData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance, std::forward<::GlobalNamespace::ISaveData>(value));
}
constexpr ::GlobalNamespace::ISaveData ::GlobalNamespace::ResetLocalLeaderboardOnKey::__get__saveData() const {
return ::cordl_internals::getInstanceField<::GlobalNamespace::ISaveData, 0x28>(this->::bs_hook::Il2CppWrapperType::instance);
}
 void ::GlobalNamespace::ResetLocalLeaderboardOnKey::Update()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetLocalLeaderboardOnKey>::get(),
                            "Update",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
// Ctor Parameters []
 ::GlobalNamespace::ResetLocalLeaderboardOnKey::ResetLocalLeaderboardOnKey()  : ::UnityEngine::MonoBehaviour(THROW_UNLESS(::il2cpp_utils::New<ResetLocalLeaderboardOnKey>())) {}
 void ::GlobalNamespace::ResetLocalLeaderboardOnKey::_ctor()  {
static auto* ___internal_method = THROW_UNLESS((::il2cpp_utils::FindMethod(
                            ::il2cpp_utils::il2cpp_type_check::il2cpp_no_arg_class<::GlobalNamespace::ResetLocalLeaderboardOnKey>::get(),
                            ".ctor",
                            std::vector<Il2CppClass*>{},
                            ::std::vector<const Il2CppType*>{}
                        )));
return ::cordl_internals::RunMethodRethrow<void, false>(const_cast<void*>(instance), ___internal_method);
}
} // end anonymous namespace
